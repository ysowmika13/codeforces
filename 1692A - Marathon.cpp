#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,t,count;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        count = (b>a) + (c>a) + (d>a);
        cout << count << endl;
    }
}
