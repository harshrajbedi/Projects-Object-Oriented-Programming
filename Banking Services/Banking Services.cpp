#include<iostream>
#include<fstream>
using namespace std;      //***THIS ONLY WORKS AFTER CREATING ACCOUNT SO IT IS ONLY FOR NEW CUSTOMERS
                          //***FIRST ACCOUNT IS CREATED THEN OPTION FUNCTION IS CALLED
class Bank                //***MORE FEATURES WILL BE ADDED SOON
{
    char f_name[30], l_name[30], add2[100], type;  //f_name=first name , l_name=last name , add1 & add2 = address line 1 & 2
    int add1;
    float amo,depos;   //depos=deposited amount , amo=withdrawn amount

    public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void disp_account();     //disp=display
};
void options()
{
   cout<<"\n";
   cout<<"This Online Service is only for New Customers not for existing Customers."<<endl;
   cout<<"Welcome To Banking Services."<<endl;
   cout<<"1) Deposit Money"<<endl;
   cout<<"2) Withdraw Money"<<endl;
   cout<<"3) Display Account Details"<<endl;
   cout<<"4) Exit"<<endl;
}

void Bank :: open_account()
{
    cout<<"New Account Opening and Management Service."<<endl;
    cout<<"To Proceed with Opening Account Please enter the following Details"<<endl;
    cout<<"First Name : "<<endl;
    cin>>f_name;
    cout<<"Last Name : "<<endl;
    cin>>l_name;
    cout<<"Address (House Number) : "<<endl;
    cin>>add1;
    cout<<"Adress (Area/Locality) : "<<endl;
    cin.ignore();
    cin.getline(add2,100);
    cout<<"Type of Account Savings(s) or Current(c) : "<<endl;
    cin>>type;
    cout<<"So You have completed the basic data requirements to open new Bank Account"<<endl;
    cout<<"To Activate your Bank Account you need to Deposite Basic Amount of Rs 1000 \nIf you wish to Deposite Later the enter 0 in deposite Amount."<<endl;
    cout<<"Deposite Amount : "<<endl;
    cin>>depos;
    cout<<"Please Wait Your Account is Opening..."<<endl;
    cout<<"Your Account is Opened Successfully! \nThankyou for Choosing Our Services."<<endl;

}

void Bank :: deposite_money()
{
    int a;
    cout<<"Deposite Money Service is Starting..."<<endl;
    cout<<"Enter Money to Deposite : "<<endl;
    cin>>a;
    depos+=a;
    cout<<"Total Balance including this Deposite is : "<<depos<<endl;
}

void Bank :: disp_account()
{
    cout<<"Diplay Account Details Service is Starting..."<<endl;
    cout<<"First Name : "<<f_name<<endl;
    cout<<"Last Name : "<<l_name<<endl;
    cout<<"Address : "<<add1<<endl;
    cout<<" "<<add2<<endl;
    cout<<"Your Account Type : "<<type<<endl;
    cout<<"Total Balance : "<<depos<<endl;
}

void Bank :: withdraw_money()
{
    cout<<"Withdraw Money Service is Starting...";
    cout<<"Amount to Withdraw : "<<endl;
    cin>>amo;
    cout<<"Amount Withdrawn Successfully.";
    depos=depos-amo;
    cout<<"Balance Remaining : "<<depos<<endl; 
}


int main()
{
   int choice;
   Bank obj;
   obj.open_account();
   while (1)
   {
       options();
       cin>>choice;
       switch(choice)
       {
           case 1:
           {
            obj.deposite_money(); 
             break;  
           }

           case 2:
           {
             obj.withdraw_money(); 
             break;  
           }

           case 3:
           {
             obj.disp_account();  
             break;  
           }

           case 4:
           {
              exit(0);
           }

       }
   }
   return 0;    
}