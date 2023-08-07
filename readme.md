
- [compile this code](#compile-this-code)
- [install protobuf-c](#install-protobuf-c)
- [use protobuf-c](#use-protobuf-c)


# compile this code

if no protobuf-c please detour to [the next section](#install-protobuf-c) first. Read all to the end and come back here, please.

Generate the C code from the message schema
```bash
protoc-c --c_out=. message.proto
```

Compile the sender program
```bash
gcc  -I/usr/include/google/ -o sender sender.c message.pb-c.c -lprotobuf-c
```

Note: `-I/usr/include/google/` is the place UNDER which Protobuf-c headers are installed in `99.9%` of cases. In case you are in the `0.1%` ones please amend accordingly.

Compile the receiver program
```bash
gcc -I/usr/include/google/ -o receiver receiver.c message.pb-c.c -lprotobuf-c
```

# install protobuf-c

If you do not have the protobuf-c library and its header files installed on your Linux Mint system, you will need to install them before you can use the protobuf-c library in your C programs.

You can install the protobuf-c library using the apt-get package manager. This will install the protobuf-c library and the necessary header files and libraries that you can use in your C programs.

To install protobuf-c, open a terminal and enter the following command:

```bash
sudo apt-get install protobuf-c-compiler
```
This will install the protobuf-c library and the protoc-c command-line tool, which is used to generate C code from your Protobuf message schema.

Once protobuf-c is installed, you can use it in your C programs by including the header file `"protobuf-c/protobuf-c.h"` and linking to the `protobuf-c` library. You will also need to compile your C proto file with the `protoc-c` command-line tool, which is part of the protobuf-c library and is used to generate C code from your Protobuf message schema.

# use protobuf-c

On Linux Mint, the protobuf-c library and its header files and libraries are typically installed in the following directories:

`/usr/include/protobuf-c/`: This directory contains the header files for the protobuf-c library, including "protobuf-c/protobuf-c.h" and the header files generated from your Protobuf message schema by the protoc-c command-line tool.

`/usr/lib/`: This directory contains the shared libraries for the protobuf-c library, including "libprotobuf-c.so".

`/usr/bin/`: This directory contains the protoc-c command-line tool, which is used to generate C code from your Protobuf message schema.

To use the protobuf-c library in your C programs, you will need to include the necessary header files and link to the protobuf-c library using the -I and -l flags, respectively, when compiling your programs. For example:

```bash
gcc -I/usr/include/protobuf-c/ -o program program.c -lprotobuf-c
```

Perhaps now you want to jump back to [the first section](#compile-this-code).