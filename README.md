# Crafting Interpreters - C Implementation

This folder contains the C implementation of the interpreter described in the "Crafting Interpreters" book.

## Files

- `main.c`: Entry point for the interpreter.
- `memory.c`: handling memory.
- `vm.c`: the compiler's virtual machine.
- `compiler.c`: compiling into bytecode.
-  `object.c`: representing objects.
-  `scanner.c`: lexing and parsing into tokens.
-  `table.c`: hash table implementation .
-  `value.c`: values representation.

## Build & Run

```sh
gcc -g -O0 -o clox main.c chunk.c memory.c debug.c value.c vm.c compiler.c scanner.c object.c table.c
```

## License

MIT License.
