#include <stdio.h>
#include "Dog.h"
#include "Cat.h"

int main(){
	Animal* animal[2];
	animal[0] = new Cat;
	animal[1] = new Dog;
	for (int i = 0; i < 2; i++) {
		animal[i]->Type();
		animal[i]->Sounds();
		printf("\n");
	}


	return 0;
}