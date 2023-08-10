#include<iostream>
using namespace std;
int main()
{
    int i,n;
    string str;
    cin>>n;
    while(n--)
    {
        cin>>str;
        if(str.length()<=10)
        {
            cout<<str;
        }
        else
        {
            int count=0,n=str.length();
            cout<<str[0];
           
            cout<<n-2;
            cout<<str[n-1]<<endl;
        }
        cout<<endl;
    }
}
