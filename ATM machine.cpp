// ATM machine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int BANK_BALANCE = 100;

 int main()
 {
	 bool pinNumber = true;
	 int pin;
	 int password = 123;
	 int count=0;

	 do
	 {
        cout << "ENTER YOUR BANK PIN: " << endl;
	     cin >> pin;
		 system("cls");
	     
		 if (pin == password)
		 {
			 int choose=0;
			 int deposit;
			 int withdraw;
			 bool optionNumber = false;
		
			 //	welcomeScreen();
			  
			 do
			 {
				 cout << "\t" << "WElCOME TO SSB Bank OF NEPAL" << "\n" << endl;
				 cout << "\t" << "   Please choose a number : " << "\n" << endl;

				 cout << "\t" << " 1.DEPOSIT CASH " << endl;
				 cout << "\t" << " 2.WITHDRAW CASH " << endl;
				 cout << "\t" << " 3.VIEW BALANCE CASH" << endl;
				 cout << "\t" << " 4.EXIT " << endl;
				 cin >> choose;
				 switch (choose)
				 {
				 case 1:
					 cout << "\t" << "Please enter the deposit amount: " << endl;
					 cin >> deposit;
					 BANK_BALANCE = BANK_BALANCE + deposit;
					 cout << "\t" << "Your main balance is RS." << BANK_BALANCE << endl;
					 break;
				 case 2:
					 cout << "\t" << "Please enter the amount you want to withdraw: " << endl;
					 cin >> withdraw;
					 BANK_BALANCE = BANK_BALANCE - withdraw;
					 cout << "\t" << "Your main balance is Rs." << BANK_BALANCE << endl;
					 break;

				 case 3:
					 cout << "\t" << "YOUR BANK BALANCE IS RS." << BANK_BALANCE << endl;
					 break;

				 case 4:
					 cout << "\t" << "*************THANK YOU FOR CHOOSING US***************" << endl;
					 cout << "\t\t" << "*************** HAPPY BANKING *****************" << endl;
					 optionNumber = true;
					 pinNumber = false;
					 break;
				 }

			 } while (optionNumber !=true);
			
		 }
		 else
		 {
			 count++;
			 if (count == 3)
			 {
				 pinNumber = false;
			 }
			 else
			 {
				 cout << "Wrong password" << endl;
			 }
		 }
	    
	 } while (pinNumber!=false);
	
 }
