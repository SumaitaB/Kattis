#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a="";
    long long int x,i,j;
    getline(cin,a);
    x=a.length();
    for(i=0; i<x; i++)
    {
        if(a[i]!=a[i+1])
        {
            cout<<a[i];
        }
    }

    cout<<endl;
    return 0;
}


