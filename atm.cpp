#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

class atm
{
    private:
    long int account_no;
    string name;
    int pin;
    float balance;
    string mobile_no;
    
    public:
    void setdata(long int account_no_a, string name_a, int pin_a,float balance_a,string mobile_no_a)
    {
        account_no=account_no_a;
     name=name_a;
     pin=pin_a;
     balance=balance_a;
     mobile_no=mobile_no_a;
    }
    
    long int getAccountNo()
    {
        return account_no;
    }

    string getname()
    {
        return name;
    }

    int getpin()
    {
        return pin;
    }
    
    double getbalance()
    {
        return balance;
    }

    string getmobileno()
    {
        return mobile_no;
    }

    void setmobileno(string mob_prev, string mob_new)
    {
        if(mob_prev==mobile_no)
        {
            mobile_no=mob_new;
            cout<<endl<<"Successfully updated the mobile number";
            _getch();
        }
        else{
            cout<<endl<<"Unsuccesfull !Wrong number";
        }
    };

    void cashwithdraw(int amount_a)
    {
        if(amount_a>0 && amount_a<balance)
        {
            balance-=amount_a;
            cout<<endl<<"PLEASE COLLECT YOUR CASH";
            cout<<endl<<"your balance"<<balance;
            _getch();
        }
        else
        {
            cout<<endl<<"INVALID INPUT OR INSUFFICIENT BALANCE";
            _getch();
        }
    };
};
    int main()
    {
        int choice=0,enterpin;
        long int enteraccountno;
        system('cls');
        atm user1;
        user1.setdata(1234567,"Tim",1111,45000,"908654321");
        do
        {
            system('cls');
            cout<<endl<<"WELCOME"<<endl;
            cout<<endl<<"Enter your account number"<<endl;
            cin>>enteraccountno;

            cout<<endl<<"Enter PIN";
            cin>>enterpin;

            if((enteraccountno=user1.getAccountNo)&&(enterpin==user1.getpin))
            {
                do
                {
                  int amount=0;
                  string oldmobileno, newmobileno;
                  system('cls');
                  cout<<endl<<"WELCOME"<<endl;
                  cout<<endl<<"Select option"<<endl;
                  cout<<endl<<"1.Check Balance"<<endl;
                  cout<<endl<<"2.Cash Withdraw"<<endl;
                  cout<<endl<<"3.Show user details"<<endl;
                  cout<<endl<<"4.Change Mobile Number"<<endl;
                  cout<<endl<<"5.Exit"<<endl;
                  cin>>choice;
                  switch(choice)
                  {
                    case 1:
                    cout<<endl<<"Your Bank Balance is"<<user1.getbalance;
                    _getch();
                    break;

                    case 2:
                    cout<<endl<<"Enter the amount";
                    cin>>amount;
                    user1.cashwithdraw(amount);
                    break;

                    case 3:
                    cout<<endl<<"USE DETAILS";
                    cout<<endl<<"Accont Number:"<<user1.getAccountNo;
                    cout<<endl<<"Name:"<<user1.getname;
                    cout<<endl<<"Mobile Number:"<<user1.getmobileno;
                    cout<<endl<<"Balance:"<<user1.getbalance;
                    _getch();
                    break;

                    case 4:
                    cout<<endl<<"Enter old Mobile number";
                    cin>>oldmobileno;
                    cout<<endl<<"Enter new mobile Number";
                    cin>>newmobileno;
                    user1.getmobileno;
                    break;

                    case 5:
                    exit(0);

                    default:
                    cout<<endl<<"Enter Valid details";
                  }

                }while(1);
            }
        } while (1);
        
    }

