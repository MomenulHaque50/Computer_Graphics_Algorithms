#include<bits/stdc++.h>
using namespace std;
int main(){
int x1, y1, x2, y2, delx, dely, v, m, k, i, j;
int x[30],y[30], p[30];
cout<<"Enter the first point: ";
cin>>x1>>y1;
cout<<"Enter the Second point: ";
cin>>x2>>y2;
cout<<endl;
cout<<endl;
delx= x2-x1;
cout<<"DelX= "<<delx<<endl;
dely=y2-y1;
cout<<"DelY= "<<dely<<endl;
v=2*dely;
cout<<"2DelY= "<<v<<endl;
m=(2*dely)-(2*delx);
cout<<"2DelY - 2DelX= "<<m<<endl;
x[0]=x1;
y[0]=y1;
p[0]=v-delx;
cout<<endl;
cout<<endl;
cout<<"P0= "<<v<<"-"<<delx<<"= "<<p[0]<<endl;
k=0;
while(1)
{
      if(x[k]==x2 && y[k]==y2)
    {
        break;
    }
    if(p[k]>=0)
    {
        p[k+1]=p[k]+m;
        cout<<"P"<<k+1<<"= "<<p[k]<<"+"<<"("<<m<<")"<<"= "<<p[k+1]<<endl;
    }
    if(p[k]<0)
    {
       p[k+1]=p[k]+v;
        cout<<"P"<<k+1<<"= "<<p[k]<<"+"<<"("<<v<<")"<<"= "<<p[k+1]<<endl;

    }
    if(p[k+1]<0)
    {
     x[k+1]=x[k]+1;
     y[k+1]= y[k];
    }
   else
    {
     x[k+1]=x[k]+1;
     y[k+1]= y[k]+1;
    }
    k=k+1;

}
cout<<"--------------------------------------------------------"<<endl;
cout<<"    K           Pk                (Xk+1,Yk+1)  "<<endl;
cout<<"--------------------------------------------------------"<<endl;
for(i=0;i<=k;i++)
{
    cout<<"   "<<i<<"           "<<p[i]<<"                "<<"("<<x[i]<<","<<y[i]<<")"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
}
cout<<endl;
cout<<endl;
return 0;
}
