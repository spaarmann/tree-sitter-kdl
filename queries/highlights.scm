(node (identifier) @tag)
(prop (identifier) @property)
(number) @number
(boolean) @keyword
(null) @keyword
(string) @string

["{" "}"] @punctuation.bracket
";" @punctuation.delimiter

(single_line_comment) @comment
(multi_line_comment) @comment
