#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int>arr={1,2,3,4,6};
    float sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
    }
    cout<<sum/arr.size()<<endl;
}
