#include <iostream>
#include <string>
using namespace std;

double add (double x, double y){
	return x+y;
}

double multiply (double x, double y){
	return x*y;
}

double subtract (double x, double y){
	return x-y;
}

double divide (double x, double y){
	return x/y;
}

void main ()
{
	double x;
	double y;
	
	
	char a;
	char m;
	

do {
	cout<< "Type first number"<<endl;
	cin>> x;

	cout<<"Type second number"<<endl;
	cin>> y;

	cout<< "Enter operation + - * /"<<endl;
	cin>> a;
	
	if ( a == '*') {
		cout<<"The calclation is:"<<endl;
		cout<< multiply(x,y) <<endl;
	}
	else if (a == '+'){
		cout<<"The calclation is:"<<endl;
		cout<< add(x,y)<<endl;
	}
	else if (a == '-'){
		cout<<"The calclation is:"<<endl;
		cout<<subtract(x,y)<<endl;
	}
	else if (a == '/'){
		cout<<"The calclation is:"<<endl;
		cout<<divide(x,y)<<endl;
	}
	else {
		cout<< "Error! Operation is not recognized"<<endl;

	}
	cout<<"Do you wanna do another calculation? Y/N "<<endl;
	cin>> m;

	if (m != 'Y' && m != 'y') {
		system ("PAUSE");
	}

}
while(m == 'Y' ||'y');	

	
}