#include<iostream>
using namespace std;
int main()
{   long int num;
int digits=0;
    cout<<"Enter the number\n";
    cin>> num;
    long int real_num=num;
    while (num!=0)
      {
          num /= 10;
          digits++;
      }
cout<<"The number of digits in "<<real_num<<" are "<<digits;
    return 0;
}