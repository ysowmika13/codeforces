#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,c=0;
    cin >> a >> b;
    if(a > b)
    {
        cout << "0" << endl;
    }
    else
    {
       while(1)
       {
           if(a>b)
           {
               cout<<c<<endl;
               break;
           }
           
                a = a * 3;
                b = b * 2;
                c++;
           
       }
      
        
    }
}
