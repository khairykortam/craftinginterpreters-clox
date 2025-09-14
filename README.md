# Crafting Interpreters - C Implementation

This folder contains the C implementation of the interpreter described in the "Crafting Interpreters" book.

## Files

- `main.c`: Entry point for the interpreter.
- `lexer.c`: Lexical analysis (tokenizer).
- `parser.c`: Syntax analysis (parser).
- `interpreter.c`: Runtime execution.

## Build & Run

```sh
gcc main.c lexer.c parser.c interpreter.c -o interpreter
./interpreter
```

## License

MIT License.
