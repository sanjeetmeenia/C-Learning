#include<iostream.h>
#include<conio.h>

inline double add(double a,double b)
{
return(a+b);
}
inline double sub(double a ,double b)
{
return(a-b);
}
inline double mul(double a,double b)
{
return(a*b);
}
inline double div(double a,double b)
{
return(a/b);
}
void main()
{
double x,y;
clrscr();
cout<<"\nEnter 2 values:";
cin>>x>>y;
cout<<"\nAddition:"<<add(x,y);
cout<<"\nSubstraction:"<<sub(x,y);
cout<<"\nMultiplication:"<<mul(x,y);
cout<<"\nDivision:"<<div(x,y);
getch();
}