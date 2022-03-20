# HASM - Highly Assembly

A higher version of the assembly programming language, with modern
features like OOP. I don't think that this project even make sense,
you can just use a easier language like C that is also directly compiled to assembly code.
But this language is more for people who wan't to learn assembly! With this language is the learning curve for assembly much lower!

## Features
- [x] Compiled to native x86-64 asm
- [x] OOP Support
- [x] Integrated Linker
- [x] Dynamically typeed

## Quick start
To create your first HASM program, create a file called ´´´hello.hasm´´´
then put the following code into the created file:

```assembly
%include "std.hasm"

main:
  msg: string "Hello, World!"
  print msg

```

Now you need to compile your HASM code into normal Assembly:

```console
$ hasm test.hasm
$ ./test
Hello, World!
```
