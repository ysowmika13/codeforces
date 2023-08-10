#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin >> str;
  transform(str.begin(),str.end(),str.begin(), ::tolower);
  for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' ||str[i] == 'y'  )
	    {
	        continue;
	    }
        else
	    {
	        
	        cout << '.' <<str[i];
	    }
    }
 
}
