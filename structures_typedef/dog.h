#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - new struct
 * @name: Member to store name
 * @age: Member to store age
 * @owner: Member to store owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H */
