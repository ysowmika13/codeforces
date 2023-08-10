#include<iostream>
using namespace std;
int main()
{
    int n,p,v,t,s(0);
    cin>>n;
    while(n--)
    {
        cin>>p>>v>>t;
        if(p+v+t>=2)
        {
            s+=1;
        }
    }
    cout<<s<<endl;
}
