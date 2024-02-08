#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class atm
{
    private:
        long int account_No;
        string name;
        int pin;
        double balance;
        string mobile_No;

    public:
        void setData(long int account_No_a, string name_a, int pin_a, double balance_a, string mobile_No_a)
        {
            account_No = account_No_a;
            name = name_a;
            pin = pin_a;
            balance = balance_a;
            mobile_No = mobile_No_a;
        }

        long int getAccountNo()
        {
            return account_No;
        }

        string getName()
        {
            return name;
        }

        int getPin()
        {
            return pin;
        }

        double getBalance()
        {
            return balance;
        }

        string getMobileNo()
        {
            return mobile_No;
        }


        void setMobile(string mob_prev, string mob_new)
        {
            if (mob_prev == mobile_No)
            {
                mobile_No = mob_new;
                cout<<endl<<"Succesfully Updated Mobile No. ";
                _getch();
            }

            else
            {
                cout<<endl<<"Incorrect !!! Old Mobile no";
                _getch();
            }
        }


        void cashWithDraw(int amount_a)
        {
            if(amount_a > 0 && amount_a < balance)
            {
                balance -= amount_a;
                cout<<endl<<"Please Collect Your Cash";
                cout<<endl<<"Available Balance : "<<balance;
                _getch();
            }

            else
            {
                cout<<endl<<"Invalid Input or Insufficient Balance";
                _getch();
            }
        }
};

int main()
{
    int choice = 0, enterPIN;
    long int enterAccountNo;

    system("cls");

    atm user1;
    user1.setData(987654321, "Hardik", 1234, 5000, "9370054900");


    do
    {
        system("cls");

        cout<<endl<<"**** Welcome to ATM ****"<<endl;
        cout<<endl<<"Enter Your Account No ";cin>>enterAccountNo;
        cout<<endl<<"Enter PIN ";cin>>enterPIN;


        if ((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPin()))
        {
            do
            {
                int amount = 0;
                string oldMobileNo, newMobileNo;

                system("cls");

                cout<<endl<<"**** Welcome to ATM ****"<<endl;
                cout<<endl<<"Select Options";
                cout<<endl<<"1. Check Balance";
                cout<<endl<<"2. Cash Withdraw";
                cout<<endl<<"3. Show User Details";
                cout<<endl<<"4. Update Monile No.";
                cout<<endl<<"5. Exit"<<endl;cin>>choice;


                switch (choice)
                {
                    case 1:
                        cout<<endl<<"Your Bank balance is : "<<user1.getBalance();
                        _getch();
                        break;

                    case 2:
                        cout<<endl<<"Enter the amount :";cin>>amount;
                        user1.cashWithDraw(amount);
                        break;

                    case 3:
                        cout<<endl<<"**** User Details are :- ";
                        cout<<endl<<"->Account No : "<<user1.getAccountNo();
                        cout<<endl<<"->Name      :"<<user1.getName();
                        cout<<endl<<"->Balance   :"<<user1.getBalance();
                        cout<<endl<<"->Mobile No. :"<<user1.getMobileNo();
                        _getch();
                        break;

                    case 4:
                        cout<<endl<<"Enter Old Mobile N0. ";cin>>oldMobileNo;
                        cout<<endl<<"Enter New Mobile No. ";cin>>newMobileNo;
                        user1.setMobile(oldMobileNo, newMobileNo);
                        break;

                    case 5:
                        exit(0);

                    default:
                        cout<<endl<<"Enter Valid Data !!!";
                }
            }while (1);
        }

        else
        {
            cout<<endl<<"User Details are Invalid !!! ";
            _getch();
        }while(1);

        return 0;
    };
}


