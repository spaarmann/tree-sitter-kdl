/*
 * We use this external scanner to handle raw string literals correctly. It is heavily based the
 * tree-sitter-rust implementation (at
 * https://github.com/tree-sitter/tree-sitter-rust/blob/master/src/scanner.c) since Rust shares 
 * (almost) the same raw string literal syntax.
 *
 * tree-sitter-rust carries the following license + notice:
 *
 * The MIT License (MIT)
 * Copyright (c) 2017 Maxim Sokolov
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#include <tree_sitter/parser.h>

enum TokenType {
	RAW_STRING
};


void *tree_sitter_kdl_external_scanner_create() { return NULL; }
void tree_sitter_kdl_external_scanner_destroy(void *p) {}
void tree_sitter_kdl_external_scanner_reset(void *p) {}
unsigned tree_sitter_kdl_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_kdl_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) {
	lexer->advance(lexer, false);
}

bool tree_sitter_kdl_external_scanner_scan(void* payload, TSLexer *lexer, const bool *valid_symbols) {
	if (!valid_symbols[RAW_STRING])
		return false;

	while (iswspace(lexer->lookahead))
		lexer->advance(lexer, true);

	if (lexer->lookahead != 'r')
		return false;

	lexer->result_symbol = RAW_STRING;
	advance(lexer);

	unsigned opening_hash_count = 0;
	while (lexer->lookahead == '#') {
		advance(lexer);
		opening_hash_count++;
	}

	if (lexer->lookahead != '"')
		return false;
	advance(lexer);

	for (;;) {
		if (lexer->lookahead == 0)
			return false;
		else if (lexer->lookahead == '"') {
			advance(lexer);
			unsigned hash_count = 0;
			while (lexer->lookahead == '#' && hash_count < opening_hash_count) {
				advance(lexer);
				hash_count++;
			}
			if (hash_count == opening_hash_count) {
				return true;
			}
		} else {
			advance(lexer);
		}
	}

	return false;
}
