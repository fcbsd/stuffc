# Stuff c 
## A repository for code based around learning c programming.

The aim of this repository is to try and encourage me to do some C programming every day, with the goal of being able to submit patches to Open Source tools and projects.

The books I'm using for learning C are C Primer Plus, Fifth Edition by Stephen Prata, and The C Programming Language, Second Edition, by Brian W. Kernighan and Dennis M. Ritchie.

In addition to these two texts I will also be diving into: [Hacking: The Art Of Exploitation by Jon Erickson](https://www.nostarch.com/hacking2.htm) and Building Open Source Network Security Tools by Mike D. Schiffman.

I've also added a kilo directory for following the [Build Your Own Editor tutorial](http://viewsourcecode.org/snaptoken/kilo/index.html).

This repository also has C that I have come across in [tweets](https://twitter.com/fcbsd) some of which I might retweet.

### The How
This code will be run on [OpenBSD](https://www.openbsd.org), compiled with clang:
**clang -Wall -pedantic -o outfile infile.c**
The code should follow [style(9)](https://man.openbsd.org/style), and as program's develop it is planed to create [manual pages](https://man.openbsd.org/man) using [mdoc(7)](https://man.openbsd.org/mdoc).

### Testing
Looking into using [theft](https://github.com/silentbicycle/theft) for property-based testing.
