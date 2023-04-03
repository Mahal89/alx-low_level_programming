#ifndef DOG_H
#define DOG_H
/**
 *struct dog - dog info
 *@name: dogs name
 *@age: dogs age
 *@owner: dog owner
 *Description: describe dog
*/

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/* prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
