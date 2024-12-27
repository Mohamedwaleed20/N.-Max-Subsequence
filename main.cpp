#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    string a ;
    cin >> a ;
    char b ;
    int c = 0 ;
    for(int i = 0 ; i < a.size() ; i++)
    {
        if(i==0)
        {
            b = a[i];
            c++;
        }
        if(b!=a[i])
        {
            b = a[i];
            c++;
        }
    }
    cout << c ;
    return 0;
}
