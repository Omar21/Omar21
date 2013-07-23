#include <iostream>
using namespace std;


int fib(int x)
{
	
	if (x<=2)
	{
return 1;
	}

	else {
		return fib(x-1)+fib(x-2);
		

	}
	

}
void main ()
{
	do{
	int x,n;
	cout<<"Type number: "<<endl;
	cin>>x;
	n = fib(x);

	cout<<n<<endl;
	}
	while(true);
	system ("PAUSE");

	

}