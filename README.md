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
  * [ ] Raw Strings
* Comments:
  * [x] Single-line comments
  * [ ] Multi-line comments
  * [ ] Slash-dash comments
* [ ] Type annotations
* [x] Line continuations

Additionally, the following things are not yet implemented:
* Full range of unicode identifier characters
* Full whitespace character list
* Full newline character list
* EOF ending the last node; currently a trailing newline is required

## Syntax highlighting

A very basic query file for tree-sitter syntax highlighting is also included in
`queries/highlights.scm`.
