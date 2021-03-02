#include<iostream>
using namespace std;
int main()
{
    int x,ans;
    cin>>x;
    for(int i=0; i<100000; i+=100)
    {
        if(i-x>=0)
        {
            ans = i-x;
            break;
        }
    }
    cout<<ans;
    return 0;
}