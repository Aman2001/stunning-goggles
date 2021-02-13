#include<iostream>
using namespace std;
int main()
{    long int num, rev_num=0;
    
    cout<<"Enter the number \n";
    cin>>num;
    long int real_num = num;
    while(num!=0)
  {
      rev_num = num%10 + rev_num*10;
      num /=10;
  }
  cout<<"The reverse of "<< real_num<<" is "<< rev_num; 
    return 0;
}