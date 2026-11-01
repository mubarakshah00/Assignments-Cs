#include <iostream>
using namespace std;
int main()
{int pp,sp,q;
int totalpurchasecost,totalsalesamount;
int profitloss;
cout<<"Enter purchase price unit= "<<endl;
cin>>pp;
cout<<"Enter Sells point= "<<endl;
cin>>sp;
cout<<"Enter the quantity= "<<endl;
cin>>q;
totalpurchasecost=pp*q;
totalsalesamount=sp*q;
profitloss=totalsalesamount-totalpurchasecost;
cout<<"Total Purchase cost is= "<<totalpurchasecost<<endl;
cout<<"Total sales price are= "<<totalsalesamount<<endl;
cout<<"Pofit or lost would be......"<<profitloss<<endl;
}
