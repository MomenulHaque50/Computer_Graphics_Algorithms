#include<bits/stdc++.h>
using namespace std;
int main(){
int x1, y1, x2, y2, k, i, j;
float m,b;
float x[30],y[30];
cout<<"Enter the first point: ";
cin>>x1>>y1;
cout<<"Enter the Second point: ";
cin>>x2>>y2;
cout<<endl;
cout<<endl;
x[0]=x1;
y[0]=y1;
m=(y2-y1)/(x2-x1);
b=y1-m*x1;
k=0;
while(1)
{

    cout<<"X"<<k<<"="<<x[k]<<","<<"Y"<<k<<"="<<round(y[k])<<endl;
    x[k+1]=x[k]+1;
    y[k+1]=m*x[k+1]+b;
        if(x[k]==x2)
    {
        break;
    }

    k++;

}
cout<<endl;
cout<<endl;
return 0;
}
