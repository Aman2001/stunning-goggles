#include<iostream>
using namespace std;
int main()
{
    int x,i,y;
    char choice;
do {	
	
	cout<<"Enter a positive integer.\n";
	cin>>x;
	 if(x<0)
	   cout<<"Are ya mad? Enter a damn positive number!\n";
	if((x==0)||(x==1))
	   cout<<"Not a prime number\n";
	 else
	{
	   if (x%2==0){
        for(i=2;i<x/2;i++)
		{
			if(x%i==0)
			 {
			 cout<<"Not a prime number\n";
			 break;
			  y = 0;
		     }
		}
       }
       else 
           for(i=2;i<x;i++)
		   {
			if(x%i==0)
			 {
			 cout<<"Not a prime number\n";
			 break;
			  y = 0;
		     }  
            }   
    } 
	if (y==0)
		cout<<"Prime Number\n";
cout<<"Do you want to run this program again?\n";
cin>>choice;
}while ((choice=='Y')||(choice=='y'));
return 0;
}