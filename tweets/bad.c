/* https://twitter.com/mjg59/status/969313071775719424 */
/* start life as the code from mjg tweet */
#include <stdio.h>
int main(int, char **);

int main(int argc, char **argv) {
    printf("argc: %d \n", argc);
    printf("argv: %s \n", *argv);
    printf("Computer can be badish\n");
    return 0;
}
