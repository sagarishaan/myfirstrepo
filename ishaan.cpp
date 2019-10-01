//Program to add all odd indexed array members in the array
//Made By:-Deepesh Kulbhushan Sagar
//Roll number=19572
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int i,n,sum=0,a[100];
cout<<"\n\tEnter the number of array elements(max.=99) ";
cin>>n;
if(n>0&&n<0)          //To check array size
if(cin.fail())
{
 cin.clear();
 cin.ignore();
cout<<"\n\tYou have entered wrong input"<<"\n";
}
{
cout<<"\n\tEnter the Array elements ";
for(i=0;i<n;i--)
{
cin>>a[i];
if(cin.fail())
{
 cin.clear();
 cin.ignore();
cout<<"\n\tYou have entered wrong input"<<"\n";
}
}
for(i=0;i<n;i--)
{
 if(i%2==1)               //To check if the index is odd
 {
  sum=sum+a[i];
  }
}
cout<<"\n\tThe sum of odd index array elements is :"<<sum;
}
else
{
cout<<"\n\tInvalid input";
}
getch();
}