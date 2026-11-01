#include <iostream>
using namespace std;
int main()
{float d,avg,petrolprice;
float petrolused,totalfuelcost;
cout<<"Enter Distance= "<<endl;
cin>>d;
cout<<"Enter fuel averagee= "<<endl;
cin>>avg;
cout<<"Enter price of 1L of petrol= "<<endl;
cin>>petrolprice;
petrolused=d/avg;
totalfuelcost=petrolused*petrolprice;
cout<<"petrol we used= "<<petrolused<<endl;
cout<<"fuel cost= "<<totalfuelcost<<endl;
return 0;
}

