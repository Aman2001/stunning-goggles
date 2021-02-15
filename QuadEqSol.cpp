#include<iostream>
#include<cmath>
using namespace std;
double a,b,c,D; // the quadractic equation must be in the form - ax^2+bx+c=0
void realroots()
{
    double root1 = (-::b+sqrt(::D))/(2*::a);
    double root2 = (-::b-sqrt(::D))/(2*::a);
    cout<<"The required roots of the equation : "
        <<::a<<"x^2"<<"+("<<::b<<"x"<<")+("<<::c<<")"
        <<"\n are : "<<root1 <<" & "<<root2; 
}
void complexroots()
{
   cout<<"The roots of this equation will be complex. We will add the feature to calculate them soon!\n";
}
int main()
{
     
    cout<<"Enter the coefficients of x^2, x and the constant number in the same order.\n";
    cin>>a>>b>>c;
    ::D = ((::b*::b) - (4*::a*::c));
    if (D>=0)
     realroots();
    else
     complexroots(); 
    return 0;
}