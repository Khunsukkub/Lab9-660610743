#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double loan, rate , youcanpay;

	cout << "Enter initial loan: ";
	cin >> loan;
	cin.ignore(999, '\n');
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cin.ignore(999, '\n');
	cout << "Enter amount you can pay per year: ";
	cin >> youcanpay;
	cin.ignore(999, '\n');

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
	double NewBal = 0;
	double Prev = 0 , inter = 0 , tota = 0, Pay = 0;
	int year = 1;
	
    Prev = loan;
    
	while(true){

		inter = Prev*(rate/100);

		tota = Prev+inter;

		if(tota >= youcanpay){ //Pay
			Pay = youcanpay;
		} else{
			Pay = tota;
		}

		NewBal = tota-Pay;
		
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << Prev;
		cout << setw(13) << left << inter;
		cout << setw(13) << left << tota;
		cout << setw(13) << left << Pay;
		cout << setw(13) << left << NewBal;
		if(NewBal == 0){
		    break;
		    }
		Prev = NewBal;
		year++;
		cout << "\n";
	}
	
	return 0;
}
