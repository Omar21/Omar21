#include "Cat.h"

void main ()
{

	Cat katy = Cat();
	cout<< "Cat's name: "<< katy.name<<endl<<endl;
	cout<< "Cat's age: " <<katy.age<<endl<<endl;
	cout<< "Cat's eyeColor: "<<katy.eyeColor<<endl<<endl;

	katy.move ();
	katy.speak ();









	system ("PAUSE");
}