# Goblin
Goblin is a toy programming language I am writing as a recreational project.



__Goal__

The goal of this project is to create a programming language with a simple syntax, aimed at people learning to code from scratch.

__Stages__

My initial intention is to develop the project in the following stages:

1. Interactive prompt (REPL)
2. Compiler (c based)
3. Bootstrapped compiler (written in goblin using lvvm backend)

__Compiler__

The first version of the compiler will be written in c, and will be able to either compile .goblin files, but can also be used as a command line interpreter.

Later, my plan is to create a self-hosting compiler which will be compiled by the c version and then used to compile all future goblin programs.