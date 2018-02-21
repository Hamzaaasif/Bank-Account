#include<iostream>
using namespace std;
#include "BankAccount.h"
int main()
{
  BankAccount HamzaAcc;
  HamzaAcc.display();
  cout<<endl;
  BankAccount HamzaAcc("Maaz kamal" , 123883 , 653783.34);
  HamzaAcc.display();
  BankAccount MaazAcc(HamzaAcc);
  MaazAcc.display();
}