#include<iostream>
using namespace std;
int main()
{
    int s=0,k,n,w;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        s+=(k*i);
        
    }
    if(n<s)
    {
        int o=abs(n-s);
        cout<<o<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    
}
