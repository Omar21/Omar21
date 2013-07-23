#include <iostream>
#include <string>
using namespace std;
void main ()
{
	int x;
	int y;
	
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
		cout<< x*y<<endl;
	}
	else if (a == '+'){
		cout<<"The calclation is:"<<endl;
		cout<< x+y<<endl;
	}
	else if (a == '-'){
		cout<<"The calclation is:"<<endl;
		cout<<x-y<<endl;
	}
	else if (a == '/'){
		cout<<"The calclation is:"<<endl;
		cout<<x/y<<endl;
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