#include <iostream>
using namespace std;

class Mobile
{
    private:
    string MobileOwnerName;
    int MobileNumber;
    double MobileBalance;
    string MobileOSName;
    bool LockStatus;

    public:
    void setMobileOwnerName(string mobileOwnerName)
    {
        MobileOwnerName=mobileOwnerName;
    }
    string getMobileOwnerName()
    {
        return MobileOwnerName;
    }

    void setMobileNumber(int mobileNumber)
    {
        MobileNumber=mobileNumber;
    }
    int getMobileNumber()
    {
        return MobileNumber;
    }
    void setMobileBalance(double mobileBalance)
    {
        MobileBalance=mobileBalance;
    }
    double getMobileBalance()
    {
        return MobileBalance;
    }

    void setMobileOSName(string mobileOSName)
    {
        MobileOSName=mobileOSName;
    }
    string getMobileOSName()
    {
        return MobileOSName;
    }
    void setLockStatus(bool lockStatus)
    {
        LockStatus=lockStatus;
    }
    bool getLockStatus()
    {
        return LockStatus;
    }
    Mobile()
    {
        MobileOwnerName=" ";
        MobileNumber=0;
        MobileBalance=0;
        MobileOSName="";
        LockStatus=true;
    }
    Mobile(string mobileOwnerName,int mobileNumber,double mobileBalance,string mobileOSName,bool lockStatus)
    {
        MobileOwnerName=mobileOwnerName;
        MobileNumber=mobileNumber;
        MobileBalance=mobileBalance;
        MobileOSName=mobileOSName;
        LockStatus=lockStatus;
    }

    ~Mobile()
    {
        cout<<"Destructor is called."<<endl;
    }

    void ShowInfo()
    {
        cout<<"Mobile Details: "<<endl;
        cout<<"Mobile name owner: "<<MobileOwnerName<<endl;
        cout<<"Mobile number: "<<MobileNumber<<endl;
        cout<<"Mobile Balance: "<<MobileBalance<<endl;
        cout<<"Mobile OS name: "<<MobileOSName<<endl;
        cout<<"Mobile lock status: "<<LockStatus<<endl;
        cout<<" "<<endl;
        cout<<endl;
    }
     void Recharge(int amount)
    {
        if(!LockStatus)
        {
            MobileBalance=MobileBalance+amount;
        }
        else
        {
            cout<<"Phone is locked.Unable to recharge."<<endl;
        }
        cout<<endl;
    }

    void CallSomeone(int duration)
    {
        if(!LockStatus)
        {
            double total=duration/2;
            if(MobileBalance>=total)
            {
                cout<<"Call successful."<<endl;
            }
            else{
                cout<<"Insufficient balance."<<endl;
            }
        }
        else{
            cout<<"Phone is locked.Unable to call."<<endl;
        }
        cout<<endl;
    }
};

int main()
{
    Mobile d=Mobile("Dipu",1233372331,30,"Android",false);
    Mobile p=Mobile("Rifat",1236474881,60,"iOS",true);
    d.ShowInfo();
    d.CallSomeone(6);
    d.Recharge(40);
    d.ShowInfo();
    p.ShowInfo();
    p.CallSomeone(5);

}