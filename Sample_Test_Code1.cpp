#include<iostream>
using namespace std;
int main()
{   int arr[100],ind,n,k,check=0;
   cin>>n;
   for(ind = 0; ind<n; ind++)
   {
       cin>>arr[ind];
   }
   cin>>k;
   for(ind = 0; ind<n; ind++)
   {
       if(arr[ind]==k)
       {
           check=1;
           break;
       }
    }
    if(check==1)
    cout<<"YES\n";
    else 
    cout<<"NO\n";
 
    return 0;
}
