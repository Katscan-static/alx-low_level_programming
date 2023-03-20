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

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
