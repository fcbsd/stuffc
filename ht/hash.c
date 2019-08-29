/* the main program */
#include <stdlib.h>
#include <stdio.h>

#include "prime.h"
#include "hash_table.h"

int main() 
{
    ht_hash_table* ht = ht_new_sized(5);

    printf("hashtable created\n");

    ht_insert(ht, "cat", "dog in one");
    ht_insert(ht, "one", "information");
    ht_insert(ht, "two", "truth in 2's");
    ht_insert(ht, "4", "this is a number?");

    printf("Inserted data\n");

    printf("%s \n", ht_search(ht, "cat"));

    return 0;
}

