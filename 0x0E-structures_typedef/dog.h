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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
