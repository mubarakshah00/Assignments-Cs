#include<iostream>
using namespace std;
int main()
{ int basic,medical,rent,gross;
cout<<"Enter basic salary: "<<endl;
cin>>basic;
cout<<"Enter medical expense= "<<endl;
cin>>medical;
cout<<"Enter rent: "<<endl;
cin>>rent;
gross=basic+medical+rent;
cout<<"gross salary is= "<<gross<<endl;
return 0;
}
