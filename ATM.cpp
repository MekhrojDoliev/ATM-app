#include <iostream>
using namespace std;
void showMenu(){
cout <<"**********MENU**********\n";
cout <<"1. Balance\n";
cout <<"2. Deposit\n";
cout <<"3. Withdraw\n";
cout <<"4. EXIT\n";
cout <<"*********************\n";
}

int main (){
int option;
 double balance=500,deposit,withdraw;
  do{
     
     showMenu();  
 cout <<"Option :";
 cin>>option;
 system("cls");
 switch(option){
case 1: cout <<"Balance is "<<balance <<endl;  break;
case 2: cout <<"Amount of Deposit :";cin>>deposit;
balance+=deposit;break;
case 3: cout <<"Amount of Withdraw :";cin>>withdraw;
if(balance>=withdraw)
balance-=withdraw;
else
cout <<"Not enough money"; break;   
    
     }

}while(option!=4);
return 0;    
    }
