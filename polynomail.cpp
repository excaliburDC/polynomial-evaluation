#include<iostream>
#include<math.h>
using namespace std;

int main(){

   float a1,b1,c1,a2,b2,c2,x,c;

   //Read the first polynomial expression
   cout<<"Enter the coefficients of polynomial 1: "<<endl;
   cout<<"a1: ";
   cin>>a1;
   cout<<"b1: ";
   cin>>b1;
   cout<<"c1: ";
   cin>>c1;

   //Read the second polynomial expression
   cout<<endl<<"Enter the coefficients of polynomial 2: "<<endl;
   cout<<"a2: ";
   cin>>a2;
   cout<<"b2: ";
   cin>>b2;
   cout<<"c2: ";
   cin>>c2;

   cout<<endl<<"Enter the value of x to evaluate the polynomials : ";
   cin>>x;

   cout<<endl;
   cout<<"Polynomial 1: ("<<a1<<")x^2 + ("<<b1<<")x + ("<<c1<<")"<<endl;
   cout<<"Polynomial 2: ("<<a2<<")x^2 + ("<<b2<<")x + ("<<c2<<")"<<endl;
   cout<<"Value of x = "<<x<<endl;

   cout<<"Evaluating Polynomial 1 & Polynomial 2..."<<endl;
   //calculate the polynomial expression using the value of x
   float poly1 = (a1 * pow(x,2)) + (b1 * x) + c1;
   float poly2 = (a2 * pow(x,2)) + (b2 * x) + c2;
   cout<<"Polynomial 1 ("<<x<<") = "<<poly1<<endl;
   cout<<"Polynomial 2 ("<<x<<") = "<<poly2<<endl;

   cout<<"Enter constant c: ";
   cin>>c;
   cout<<endl;
   //calculate each coefficient suing constant value c
   float x_symbolic = a1 + (c * a2);
   float y_symbolic = b1 + (c * b2);
   float z_symbolic = c1 + (c * c2);
   cout<<"New Polynomial = ("<<x_symbolic<<")x^2 + ("<<y_symbolic<<")x +("<<z_symbolic<<")"<<endl;
   
   return 0;

}
