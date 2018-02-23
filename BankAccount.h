#include <iostream>
using namespace std;
class BankAccount
{
  public:
  BankAccount()
  {
    this->AccountHolder = "Hamza Asif";
    this->AccountNumber = 1121211;
    this->CurrentBalance = 78675.70;
  };
  BankAccount(string AccHolder,int AccNumber,float CurrentBal)
  {
    this->AccountHolder = AccHolder;
    this->AccountNumber = AccNumber;
    this->CurrentBalance = CurrentBal;
  };
  
  void display()
  {
    cout<<this->AccountHolder<<endl<<this->AccountNumber<<endl<<this->CurrentBalance<<endl;
  };
  private:
  string AccountHolder;
  int AccountNumber;
  float CurrentBalance;
};