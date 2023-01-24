#include<iostream>
using namespace std;
int main()
{
    int arr[10], i;
    cout<<"Enter Numbers: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nThe Original Numbers:\n";
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nThe Reverse Numbers: \n";
    for(i=(10-1); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}