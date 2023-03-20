C-stuctures,typedef Tasks0 Define a new type stuct dog with the following elements:
name;type = char*
age;type = float
owner,type = chart 
 1 a dog is the only thing on earth that loves you more than yourself write a function that initialize a variable of type struct dog

prototype: void ini_dog(struct dog *d,char*name,float age,cha*onwer)
1.a dog will teach you you unconditional love.if you can have that in your life, things won't
be too bad write a function that prints a struct dog 

prototype: void print _dod(struct dog *d);
format: see example bellow
you are allowed to use the standard library
if an element of d is NULL,print(nil)instead of this element.(if name is NULL,print
Name:(nil)
if d is NULL print nothing.

1. outside of a dog, a book is a man's best friend. inside of a dog it's too dark to read Define a new type dog_ t as a new name for the type struct dog.
2.a door is what a dog is perpetually on the wrong side of write a function that creates a new dog.

prototype: dog_ t *new_ dog(char *name,float ege,char *owner);
you have to store a copy of name and owner
Return NULL if the function fails

1.how many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg write a function that frees dogs.
 prototype:void free _dog(dog _t *d)
