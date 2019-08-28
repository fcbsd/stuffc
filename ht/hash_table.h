/* hash_table.h
 * https://github.com/jamesroutley/write-a-hash-table/tree/master/02-hash-table
 */
#ifndef HASH_TABLE_H_
#define HASH_TABLE_H_

typedef struct {
    char* key;
    char* value;
} ht_item;

typedef struct {
    int base_size; /* size index */
    int size;
    int count;
    ht_item** items;
} ht_hash_table;

/* stuff */
ht_hash_table* ht_new();
ht_hash_table* ht_new_sized(const int size);

/* methods */
void ht_insert(ht_hash_table* ht, const char* key, const char* value);
char* ht_search(ht_hash_table* ht, const char* key);
void ht_delete(ht_hash_table* h, const char* key);
void ht_del_hash_table(ht_hash_table* ht);
void ht_resize_up(ht_hash_table* ht);
void ht_resize_down(ht_hash_table* ht);

#endif // HASH_TABLE_H_
