#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include<cmath>
using namespace std;

int main(){	
	double loan  ;
	double interest ;
	double interestp ;
	double ppy = 1 ;
	double newblance  ;
	int year = 1 ;
	double total ;
	

	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> interestp ;
	cout << "Enter amount you can pay per year: ";
	cin >> ppy ;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	do{
		
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << loan;
	interest = ( loan *( interestp / 100.0) ) ;
	total = loan + interest ;
	if(total < ppy){
		ppy = total ;
	}
	newblance = total - ppy ;
	cout << setw(13) << left << interest ;
	cout << setw(13) << left << total ;
	cout << setw(13) << left << ppy ;
	cout << setw(13) << left << newblance ;
	cout << "\n";	
	year++ ;
	loan = newblance ;
	
	

	}while(newblance != 0  );
	
	return 0;
}
