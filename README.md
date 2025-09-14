# Crafting Interpreters - C Implementation

This folder contains the C implementation of the interpreter described in the "Crafting Interpreters" book.

## Files

- `main.c`: Entry point for the interpreter.
- `memory.c`: handling memory.
- `vm.c`: the compiler's virtual machine.
- `interpreter.c`: Runtime execution.

## Build & Run

```sh
gcc -g -O0 -o clox main.c chunk.c memory.c debug.c value.c vm.c compiler.c scanner.c object.c table.c
```

## License

MIT License.
