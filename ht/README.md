# Building a hash table
## https://github.com/jamesroutley/write-a-hash-table

To build the program I used:

*clang -o hash hash.c hash_table.c prime.c -std=c99 -lm*

For some reason the math functions were not found even though '#include <math.>' was in the appropriate files, so the '-lm' was required.

### Resources
[The C Preprocessor](https://en.wikipedia.org/wiki/C_preprocessor) 
