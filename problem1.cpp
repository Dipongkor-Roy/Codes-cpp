#include <iostream>
using namespace std;
class Account
{
   private:
   string accountName;
   int accountNumber;
   float accountBalance;
   string accountType;

   public:
   void setBalance(float bal){
       accountBalance= bal;
   }
   int getBalance(){
       return accountBalance;
   }
   
   Account();

   Account(string name,int num,int bal,string type){
       accountName=name;
       accountNumber=num;
       accountBalance=bal;
       accountType=type;
   }
   ~Account(){
       cout<<"\n Distructor called for object";
   }
  
   void ShowAccountDetail(){
       cout<<"\n";
       cout<<"\n Account Name is:"<<accountName;
       cout<<"\n Account Number is:"<<accountNumber;
       cout<<"\n Account Balance is:"<<accountBalance;
       cout<<"\n Account Type is:"<<accountType;
       cout<<"\n ";
   }
   void Deposit(int amount){
       accountBalance+=amount;
       cout<<"\n Deposite successful amount:"<<amount;
   }
   void withdraw(int amount){
       if(accountBalance>amount){
           accountBalance=amount;
           cout<<"\nWithdraw succcessful amount:"<<amount;
       }else{
           cout<<"\n Insufficiant Balance";
       }
   }
   void transfer(int amount,Account &account){
       if(accountBalance>amount){
           accountBalance=amount;
           cout<<"\nAmount debited from sender Account";
           float total=account.accountBalance+amount;
           account.setBalance(total);
       }
       else{
           cout<<"\nInsufficiant Balance";
       }
   }
   
};
int main()
{
  
  Account acc1("Dipu",103475,1000,"saving");
  Account acc2("Rifat",104346,100,"saving");

  acc1.ShowAccountDetail();
  acc2.ShowAccountDetail();
  
  acc1.Deposit(500);
  acc1.ShowAccountDetail();
 
  acc1.withdraw(200);
  acc1.ShowAccountDetail();
  
  acc1.transfer(50,acc2);
  acc1.ShowAccountDetail();

}