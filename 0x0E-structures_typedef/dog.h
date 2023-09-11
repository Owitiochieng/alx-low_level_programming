#ifndef DOG_H
#define DOG_H
/**
 * struct dog - This is the conspicuous information of the dog
 * @name: First member input
 * @age: An input of the Second member
 * @owner: Input member three
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - A function of new type for stuct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
