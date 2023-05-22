#ifndef FILE_NAME
#define FILE_NAME
/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif