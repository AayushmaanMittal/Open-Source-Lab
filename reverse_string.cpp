#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;
    cout<<"Input string "<<s<<endl;
    int i=0,j=s.size()-1;
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<"output string "<<s<<endl;
}

