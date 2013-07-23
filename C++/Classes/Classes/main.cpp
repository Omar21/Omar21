#include "Cow.h"



void main ()
{

	
	Cow bessie = Cow();
	cout<<"Cow's name is: "+ bessie.name<<endl;

	cout<< "Cow's Age: "<< bessie.age<< " Years old"<<endl;

	cout<< "Cow's Weight: " << bessie.weight<<" KG"<<endl;

	bessie.move();
	bessie.moo();

	cout<< "Cow's New Age: "<< bessie.age<<" Years old"<<endl;
	cout<< "Cow's New Weight: "<< bessie.weight<<" KG"<<endl;

	system ("PAUSE");
}