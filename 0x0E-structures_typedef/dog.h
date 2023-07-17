#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - has information of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: a struct called dog that contains information about dog's
 * name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
