#include<iostream>
using namespace std;
int main() {
    int N,check,count=0,max_count=0, max_ind,ind1;
    cin>>N;
    int arr[N];
    for(int ind =0 ; ind<N; ind++)
    {
        cin>>arr[ind];
    }
    for(int ind =0 ; ind<N; ind++)
    {
        check = arr[ind];
    for(int ind1 =0 ; ind1<N; ind1++)
        if(arr[ind1]==check)
        {
            count++;
        }
      if(max_count<count)
      {  max_count=count;
         max_ind=ind1;
      }
    }
    cout<<arr[max_ind];
    
    
    return 0;
}