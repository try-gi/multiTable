#include <iostream>
using namespace std;

int main()
{
 int i;
 cout<<"Multiplication Table for numbers range 1 upto 10 is shown below. \n\n";
 
 for (i=1; i<=10; i++)
 cout<<"\t"<<i; 
 cout<<endl<<endl;
		
 
 for (i=1; i<=10; i++)
	{
		cout<<i<<"\t";
		
		for (int j=1; j<=10; j++)
		{
			cout<<i*j<<"\t";
		}
		cout<<endl<<endl;
	}
	
	return 0;
	
}