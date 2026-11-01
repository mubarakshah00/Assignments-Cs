#include <iostream>
using namespace std;
int main()
{float a,b,c,d,e;
float avg, percentage,totalmarks;
cout<<"Enter marks of 5 subjects: "<<endl;
cin>>a>>b>>c>>d>>e;
totalmarks=a+b+c+d+e;
avg=totalmarks/5.0;
percentage=(totalmarks/500)*100;
cout<<"total marks: "<<totalmarks<<endl;
cout<<"average: "<<avg<<endl;
cout<<"percenatge: "<<percentage<<endl;
return 0;
}
