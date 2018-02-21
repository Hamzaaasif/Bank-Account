#include<iostream>
using namespace std;
#include "BankAccount.h"
int main()
{
  BankAccount HamzaAcc;
  HamzaAcc.display();
  cout<<endl;
  BankAccount BillalAcc("Billal kamal" , 12512 , 653783.34);
  BillalAcc.display();
  cout<<endl;
  BankAccount MaazAcc(HamzaAcc);
  MaazAcc.display();
  system("pause");
}