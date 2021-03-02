#include<iostream>
using namespace std;
int prime[100];
void prime_cal(int x)
{
    int ind=0;
   
    for (int check = 2; check*check<x; check++)
    {
        while (x%check==0)
        {
            x = x/check;
            prime[ind]=check;
            ind++;
        }
    }
    if (x!=1) 
    prime[ind]= x; 
  
}
int main()
{   int num1,num2,prime1[100],prime2[100];
    cout<<"Enter the 2 numbers\n";
    cin>> num1>>num2;
   prime_cal(num1);
   for (int ind = 0; ind<100; ind++)
    prime1[ind]=prime[ind];
   prime_cal(num2);
   for (int ind = 0; ind<100; ind++)
    prime2[ind]=prime[ind];
    
    

     for (int ind = 0; ind<100; ind++)
            cout<<prime[ind]<<"\n";
   
    return 0;
}