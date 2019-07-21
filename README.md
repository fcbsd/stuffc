# Stuff c 
## A repository for code based around learning c programming.

The aim of this repository is to try and encourage me to do some C programming every day, with the goal of being able to submit patches to Open Source tools and projects.

The books I'm using for learning C are C Primer Plus, Fifth Edition by Stephen Prata, and The C Programming Language, Second Edition, by Brian W. Kernighan and Dennis M. Ritchie (K&R). The C Book, Second Edition, by Mike Banahan, Declan Brady and Mark Doran. Exercises and code examples from K&R are in the *[tcpl](/tcpl/)* directory, and for The C Book in the *[tcb](/tcb/)* directory.

In addition to these two texts I will also be diving into: [Hacking: The Art Of Exploitation by Jon Erickson](https://www.nostarch.com/hacking2.htm) and Building Open Source Network Security Tools by Mike D. Schiffman.

I've also added a kilo directory for following the [Build Your Own Editor tutorial](http://viewsourcecode.org/snaptoken/kilo/index.html).

This repository also has C that I have come across in [tweets](https://twitter.com/fcbsd) some of which I might retweet.

### The How
This code will be run on [OpenBSD](https://www.openbsd.org), compiled with clang:

**clang -Wall -pedantic -o outfile infile.c**

To ease development I have created a Makefile which as the following *CC_FLAGS*:

**-Wall -pedantic -Werror=implicit-function-declaration -Werror=format**

Calling:

**make ARGS="infile" all**

will generate an executable called *infile* and **make ARGS="infile" clean** will remove *infile*.

The code should follow [style(9)](https://man.openbsd.org/style), and as program's develop it is planed to create [manual pages](https://man.openbsd.org/man) using [mdoc(7)](https://man.openbsd.org/mdoc). 

As code is developed it is planned to use the [hints](https://monkey.org/~marius/unix-tools-hints.html) for [writing Unix tools](https://monkey.org/~marius/unix-tools-hints.html) to try to make the tools more useful.

### Testing
Looking into using [theft](https://github.com/silentbicycle/theft) for property-based testing.
Looking into using [fraction](https://timetoplatypus.com/static/faction/index.html) for test-driven software development.

#### Resources
* [Project Based Tutorials in C](https://github.com/rby90/Project-Based-Tutorials-in-C/blob/master/README.md)
* [Learning operating system development using Linux kernel and Raspberry Pi](https://github.com/s-matyukevich/raspberry-pi-os/blob/master/README.md)
