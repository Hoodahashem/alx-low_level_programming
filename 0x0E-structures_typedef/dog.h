#include<stdio.h>
#include<stdlib.h>
#ifndef hello
#define hello
/**
 * struct dog - is struction in c
 * @name: is a member
 * @age: is another member
 * @owner: giss what its another member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
