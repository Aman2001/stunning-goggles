// Finding the smallest and largest number.
#include<iostream>
using namespace std;
int main()
{ int A[100], ind, size,ind1 ;
cout<<"Enter the number of elements\n";
cin>>size;
cout<<"Enter the elements\n";
for(ind=0;ind<size;ind++)
 cin>>A[ind];


int large = A[0];

for (int ind1=0; ind1<size; ind1++)
{
   if(large<A[ind1])
    large = A[ind1];

}
int small = A[0];
for (int ind2=0; ind2<size; ind2++)
{
   if(small>A[ind2])
    small = A[ind2];

}
cout<<"The smallest element is "<<small<<"\n";
cout<<"The largest element is "<<large<<"\n";
return 0;
}