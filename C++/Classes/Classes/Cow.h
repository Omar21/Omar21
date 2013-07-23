#include <iostream>
#include <string>
using namespace std;

class Cow
{
public:

	double weight;
	int age;
	int numberOfSpots;
	string name;



	Cow();
	Cow(string Name, double Weight, int Age, int NumberOfSpots);

	void move();
	void moo();


};