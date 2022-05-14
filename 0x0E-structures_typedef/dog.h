#ifndef DOG_H
#define DOG_H

/**
 * struct dog - object structure named dog.
 * @name: parameter 1
 * @age: parameter 2
 * @owner: parameter 3
 * Description: dogs, age and owner.
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;

#endif
