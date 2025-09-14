# Crafting Interpreters - C Implementation

This folder contains the C implementation of the interpreter described in the "Crafting Interpreters" book.

## Files

- `main.c`: Entry point for the interpreter.
- `memory.c`: handling memory.
- `vm.c`: the compiler's virtual machine.
- `interpreter.c`: Runtime execution.

## Build & Run

```sh
gcc main.c lexer.c parser.c interpreter.c -o interpreter
./interpreter
```

## License

MIT License.
