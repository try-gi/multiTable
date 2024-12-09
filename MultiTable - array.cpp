#include <iostream>
using namespace std;

int main()
{
 int A[10][10];
 
 cout<<"Multiplication Table for numbers range 1 upto 10 is shown below. \n\n";
  

 
 for (int i=0; i<=10; i++)
 {
 	//cout<<i<<"\t";
		
		for (int j=1; j<=10; j++)
		{
			A[i][j]=i*j;
			cout<<A[i][j]<<"\t";
		}
		cout<<endl<<endl;
		
 	}
	
	
	return 0;
	
}


   