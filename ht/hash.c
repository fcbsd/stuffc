/* the main program */
#include <stdlib.h>
#include <stdio.h>

#include "prime.h"
#include "hash_table.h"

int main() 
{
    ht_hash_table* ht = ht_new_sized(0);

    ht_insert(ht, "cat", "dog in one");
    ht_insert(ht, "one", "information");

    printf("%s \n", ht_search(ht, "cat"));

    return 0;
}

