// sorting in ascending order
#include<iostream>
using namespace std;
int main()
{
	int arr[50],num, temp,i;
	cout<<"Enter the number of numbers you want to enter\n";
	cin>>num;
	cout<<"Enter the numbers to be sorted\n";
	for ( i = 0; i<num; i++)
	 {
	 	cin>>arr[i];
	 	cout<<"\n";
	 }
	 for ( i = 0; i<num; i++)
	 {
	 	for(int j = i+1; j<num; j++)
	 	{
	 	      if(arr[j]<arr[i])
			   {
			   	temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
				   }	
		}
	 }
	 cout<<"The ascending order is - \n";
	 for(i=0;i<num;i++)
	 
	 	cout<<arr[i]<<"\n";
	 
	return 0;
}