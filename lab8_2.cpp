#include<iostream>
using namespace std;

void printO(int a,int b)
{
	int i=0,j=0;
	if(a>0 and b>0)
	{
	while(j<a)
		{
			while(i<b)
			{
				cout << "O";
				i++;
			}
		i=0;
		j++;
		cout << "\n";
		}	
	}
	else
	{
		cout << "Invalid input";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
