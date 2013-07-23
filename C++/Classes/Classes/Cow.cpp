#include "Cow.h"

Cow::Cow()
{
	weight = 544.71;
		age = 38;
		numberOfSpots = 15;
		name = "Johnny 3.1";


}

Cow::Cow(string Name, double Weight, int Age, int NumberOfSpots)
{
	
	name = Name;
		age = Age;
		weight = Weight;
		numberOfSpots = NumberOfSpots;
}

void Cow::move()
{
	age++;
	weight-=15;
	cout<< "The cow has moved"<<endl;
}

void Cow::moo()
{
	cout<<"MOOOOOOOOOO"<<endl;
	weight -=5.341188;

}