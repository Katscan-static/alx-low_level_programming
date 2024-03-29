#ifndef HEADER_M
#define HEADER_M

/**
 * struct dog - stucture for dog data
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: structure saves dog name, age and owner
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
