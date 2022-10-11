#ifndef _DOG_H_FILE
#define _DOG_H_filE

/**
 * struct dog - A new type describing a dog
 *  @name: The name of the dog
 * @age: The age of the dog
 * @owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
