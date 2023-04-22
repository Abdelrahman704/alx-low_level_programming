#ifndef DOG_H
#define DOG_H
/**
 * struct dog - class of dogs
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: build a struct of dogs
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
