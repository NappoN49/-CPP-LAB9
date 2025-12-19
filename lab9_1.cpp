#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double PrevBalance,rate,paid;
	cout << "Enter initial loan: ";cin >> PrevBalance;
	cout << "Enter interest rate per year (%): ";cin >> rate;
	cout << "Enter amount you can pay per year: ";cin >> paid;

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
	
	double NewBalance,Interest,Total,Payment;
	int EndOfYear=0;
	NewBalance=PrevBalance;
	while(NewBalance>0){
	    EndOfYear++;
	    cout << fixed << setprecision(0); 
    	cout << setw(13) << left << EndOfYear;
    	cout << fixed << setprecision(2); 
    	
    	PrevBalance=NewBalance;
    	cout << setw(13) << left << PrevBalance;
    	
    	Interest=(rate*0.01*PrevBalance);
    	cout << setw(13) << left << Interest;
    	
    	Total=(PrevBalance+Interest);
    	cout << setw(13) << left << Total;
    	
    	if(paid<Total){
    	    Payment=paid;
    	    cout << setw(13) << left << Payment;
    	    NewBalance=(Total-paid);
    	}
    	else{
    	    Payment=Total;
    	    cout << setw(13) << left << Payment;
    	    NewBalance=0;
    	}
    	
    	cout << setw(13) << left << NewBalance;
    	cout << "\n";	
	}
	
	return 0;
}