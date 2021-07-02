# Into the Depths
It's hard to program well. Modern programming languages are convenient and black boxy. But this causes us to distance ourselves more and more from the inner workings of the technology.
This is an attempt at implementing simple algorithms in increasingly lower level of abstraction. For each "algorithm" or rather "challenge", we first implement it in a language in a higher level language such as Python or Javascript, and then in C, and then in NASM assembly (for now x86 since I'm on an Intel CPU).

A few challenges that I've set up for myself are the following.

  * Basics
    * Hello world
    * Variable assignment
    * Addition and subtraction
    * For loops
  * Insertionsort
  * Mergesort
  * 2-Coloring on Graphs

# Assembly
Since I've got no experience coding in assembly, I had to do some reading. Following a list of sources:

  * A general introduction (no tutorial) for assembly languages and assemblers: [Introduction to x86 Assembly Language Programming](https://cs.lmu.edu/~ray/notes/x86assembly/)
    * We knew that there were various assembly languages. However, there are also languages that are OS-specific due to the assembler that converts it into an executable file. For x86 on Microsoft Windows, for example, there is MASM. A more general and free type of assembler is NASM (Netwide Assembler)
  * Tutorial on Assembly: [Wikibook on x86 Assembly](https://en.wikibooks.org/wiki/X86_Assembly)
  * Book on x86 Assembly in NASM (Duntemann, 2011)
  * Extensive guide on programming in x86 on Ubuntu (Jorgensen, 2020)

# Sources
  * Duntemann, J. (2011). Assembly language step-by-step: Programming with Linux. John Wiley & Sons.
  * Jorgensen, E. (2020). x86-64 Assembly Language Programming with Ubuntu. 
