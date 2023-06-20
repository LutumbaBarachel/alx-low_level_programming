Dynamic and static libraries are both used in programming to provide reusable code and functions. The main difference between them lies in how they are linked with the program.

Static Libraries:

Static libraries are also known as archives.
They contain compiled object code that is directly linked with the program at the time of compilation.
The object code from the static library becomes a part of the final executable file.
Static libraries are physically copied into the executable, increasing its size.

Dynamic Libraries:

Dynamic libraries are also known as shared libraries or DLLs (Dynamic Link Libraries).
They contain compiled object code that is loaded and linked with the program during runtime.
The dynamic library file remains separate from the executable.
The program depends on the dynamic library and needs it to be present on the system at runtime.
Multiple programs can share the same dynamic library, reducing redundancy and overall disk space usage.
