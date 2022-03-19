# HASM - Highly Assembly

A higher version of the assembly programming language, with modern
features like OOP.

## Features
[x] - OOP Support
[x] - Integrated Linker
[x] - Dynamically typeed

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
