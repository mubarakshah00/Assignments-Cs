#include <iostream>
using namespace std;
int main()
{int np,nq,pp,pq,bill;
cout<<"Enter notebokk price: "<<endl;
cin>>np;
cout<<"Enter notebook quantity: "<<endl;
cin>>nq;
cout<<"Enter pen price: "<<endl;
cin>>pp;
cout<<"Pen Quantity: "<<endl;
cin>>pq;
bill=(pp*pq)+(np*nq);
cout<<"Total bill will be: "<<bill<<endl;
return 0;
}
