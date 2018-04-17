/* tiny factorial in c
 * https://medium.com/@municode/a-very-tiny-factorial-in-c-87396a4214fe#.jt7037hu5
 * to run pass arbitary arguments to the program,
 * ie after:
 * clang -Wall -pedantic -g -o tf tf.c
 * ./tf 0 0
 * echo $?
 * this will give 3 factorial the program is the first argument
 * this is only accurate to 5! due to how exit codes work...
 * see also: https://en.wikipedia.org/wiki/Factorial
 */
int main(int n, char** v){return n>0?n*main(n-1,v):1;}
