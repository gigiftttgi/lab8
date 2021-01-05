#include<iostream>
#include<iomanip>
using namespace std;

int main(){	
	int year=1;
	double ba,total,in,inrate,pay;
	cout << "Enter initial loan: ";
	cin >> ba;
	cout << "Enter interest rate per year (%): ";
	cin >> inrate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while(ba>0)
	{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	year++;
	cout << setw(13) << left << ba;
	in=(inrate/100)*ba; 
	cout << setw(13) << left << in;
	total=ba+in; 
	cout << setw(13) << left << total;
	if(total<pay)
		pay=total;
	cout << setw(13) << left << pay;
	ba=total-pay;
	if(ba<=0)
		ba=0;
	cout << setw(13) << left << ba;
	cout << "\n";
	}
	return 0;
}
