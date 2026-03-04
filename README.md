# ft_printf

My own implementation of printf, built from scratch. It parses a format string, finds the `%` specifiers, and calls the right function for each type. No buffering, just direct writes using `write()`.

Built as part of the 42 curriculum. The output is a static library `libftprintf.a` in the `lib/` folder that can be linked into any C project.

---

## Project structure

```
printf/
├── src/        all the .c source files
├── include/    ft_printf.h header
├── lib/        libftprintf.a ends up here after make
├── obj/        compiled object files, auto-created
├── main.c      starter file you can modify and run
├── Makefile
└── README.md
```

---

## How to build

```
make          builds lib/libftprintf.a
make run      builds the library then compiles and runs main.c
make clean    removes obj/
make fclean   removes obj/ lib/ and the program binary
make re       fclean then build again
```

---

## Supported format specifiers

| Specifier | What it prints |
|---|---|
| `%c` | a single character |
| `%s` | a string |
| `%d` | a signed decimal integer |
| `%i` | same as %d |
| `%u` | an unsigned decimal integer |
| `%x` | an unsigned integer in lowercase hexadecimal |
| `%X` | an unsigned integer in uppercase hexadecimal |
| `%p` | a pointer address in hexadecimal |
| `%%` | a literal percent sign |

---

## How it works internally

| File | What it does |
|---|---|
| `ft_printf.c` | entry point, loops through the format string and dispatches on `%` |
| `ft_looking_for_type.c` | reads the specifier character and calls the right handler |
| `ft_putchar.c` | writes a single character, tracks total chars written |
| `ft_putstring.c` | writes a string character by character |
| `ft_s.c` | handles `%s`, prints `(null)` if the pointer is null |
| `ft_putnbr.c` | handles signed integers including negatives |
| `ft_putnbr_base.c` | handles any base (used for unsigned, hex, pointer) |
| `ft_p.c` | handles `%p`, prints the `0x` prefix then the address in hex |
| `ft_strlen.c` | counts characters in a string |

---

## How to use it in another project

After running `make`, copy `lib/libftprintf.a` and `include/ft_printf.h` into your project and link like this:

```
cc main.c -I include -L lib -lftprintf -o program
```
