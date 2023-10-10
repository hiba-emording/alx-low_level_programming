#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Stores information about a dog.
 * @name: The name of the dog (string)
 * @age: The age of the dog (float)
 * @owner: The owner's name (string)
 */


typedef struct dog
{
char *name;
float age;
char *owner;
} my_dog;


typedef struct dog dog_t;

void init_dog(my_dog *d, char *name, float age, char *owner);
void print_dog(my_dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
