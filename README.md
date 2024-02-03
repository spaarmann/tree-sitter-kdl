# ! Archived

Archived in favour of
[amaangq/tree-sitter-kdl](https://github.com/amaanq/tree-sitter-kdl) which is
also the official `kdl` parser in `nvim-treesitter`.

# tree-sitter-kdl

Work-in-progress [KDL](https://github.com/kdl-org/kdl/) grammar for
[tree-sitter](https://github.com/tree-sitter/tree-sitter).

**References**:
* [KDL Spec](https://github.com/kdl-org/kdl/blob/main/SPEC.md)

## Current progress

Supported elements:
* [x] Nodes and children
* [x] Properties and attributes
* Values:
  * [x] `null`
  * [x] Booleans
  * [x] Numbers
  * [x] Escaped strings
  * [x] Raw Strings
* Comments:
  * [x] Single-line comments
  * [x] Multi-line comments
  * [ ] Slash-dash comments
* [x] Type annotations
* [x] Line continuations

Additionally, the following things are not yet implemented:
* EOF ending the last node; currently a trailing newline is required

And lastly, the grammar currently matches some *invalid* files too. For example, KDL does not allow
whitespace immediately following the `=` in a property, but this grammar will currently accept it.
Keywords like `true` and `null` are accepted as node names even though they should not be.

## Syntax highlighting

A very basic query file for tree-sitter syntax highlighting is also included in
`queries/highlights.scm`.

## Contributing

You can report any cases that either don't parse but should, or parse but shouldn't, as an issue, if
they aren't already mentioned explicitly above.

If you'd like to contribute bug fixes or missing features, I'd love any PRs you send my way :) If
you want, feel free to contact me (issue in this repo, [Twitter DMs](https://twitter.com/s_paarmann/), 
Discord `@spaar#8389`) before spending significant time on anything so we avoid duplicate work.

## Nvim installation

If you want to already try out the current state using
[nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter), you'll need to add it as a
custom parser to your local config and manually insert the syntax highlighting query file. The
steps are something like this:
1. Add this snippet to your `init.lua` / inside a `lua` block in your `init.vim`:
```lua
local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
parser_config.kdl = {
  install_info = {
    url = "https://github.com/spaarmann/tree-sitter-kdl",
    files = { "src/parser.c", "src/scanner.c" },
    branch = "main",
  },
}

local ft_to_parser = require('nvim-treesitter.parsers').filetype_to_parsername
ft_to_parser.kdl = "kdl"
```
2. Start `nvim` and run `:TSInstall kdl`.
3. Install the syntax highlighting queries by downloading the
   [highlights.scm](./queries/highlights.scm) file and placing it into `<nvim-treesitter install
   location>/queries/kdl`.
   (E.g. `mkdir queries/kdl/ && curl "https://raw.githubusercontent.com/spaarmann/tree-sitter-kdl/main/queries/highlights.scm" > queries/kdl/highlights.scm`)
4. Start `nvim` on a KDL file and execute `:set ft=kdl` to make it recognize the filetype.

To make nvim automatically detect the filetype, you can add a file containing
```
au BufRead,BufNewFile *.kdl		set filetype=kdl
```
into `nvim/ftdetect/`, see `:help ftdetect`.
