## STARTED WITH C
### PROJECT NUMBER 24

# 0x1A. C - Hash tables

This directory contains C files implementing basic functionalities of hash tables using separate chaining collision handling.

### Files
- **0-hash_table_create.c**: Contains the implementation of the `hash_table_create` function that creates a hash table.
- **1-djb2.c**: Includes the implementation of the `hash_djb2` function, a hash function used within the hash table operations.
- **2-key_index.c**: Implements the `key_index` function that returns the index at which a key/value pair should be stored in the hash table's array.
- **3-hash_table_set.c**: Provides the `hash_table_set` function to add or update elements in the hash table.
- **4-hash_table_get.c**: Implements the `hash_table_get` function to retrieve the value associated with a key in the hash table.
- **5-hash_table_print.c**: Contains the `hash_table_print` function to print the hash table's key/value pairs.
- **6-hash_table_delete.c**: Implements the `hash_table_delete` function to free the memory allocated for the hash table and its elements.
- **100-sorted_hash_table.c**: Rewrote previous functions to implement sorted hash table.

### Sorted Hash Table Implementation in C:

1. **Structures:**
    - `shash_table_t`: Defines the sorted hash table structure with pointers to the array and sorted linked list (`shead` and `stail`).
    - `shash_node_t`: Represents the nodes within the sorted linked list containing key-value pairs and pointers to adjacent nodes (`sprev` and `snext`).

2. **Functionality:**
    - **`shash_table_create`**: Initializes a sorted hash table.
    - **`shash_table_set`**: Adds or updates an element in the sorted hash table.
    - **`shash_table_get`**: Retrieves the value associated with a given key in the hash table.
    - **`shash_table_print`**: Prints the sorted hash table in ascending order of keys.
    - **`shash_table_print_rev`**: Prints the sorted hash table in reverse order based on keys.
    - **`shash_table_delete`**: Deletes the entire hash table and its elements, freeing allocated memory.

3. **Implementation Focus:**
    - Utilization of ASCII values to maintain the sorted order of keys within the linked list.
    - Correct insertion, retrieval, and printing of elements while ensuring sorting integrity.
    - Proper memory management and deallocation in the deletion function to prevent memory leaks.
