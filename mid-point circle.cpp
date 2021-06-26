#include<bits/stdc++.h>
using namespace std;
int main(){
int r, k, i, j;
int x[30],y[30], p[30];
cout<<"Enter the value of r: ";
cin>>r;
cout<<endl;
cout<<endl;

x[0]=0;
y[0]=r;
p[0]=1-r;
cout<<endl;
cout<<endl;
cout<<"P0= "<<"1"<<"-"<<r<<"= "<<p[0]<<endl;
if(p[0]<0)
{
    x[1]=x[0]+1;
    y[1]=y[0];
}
else{
    x[1]=x[0]+1;
    y[1]=y[0]-1;
}

k=0; j=1;
while(1)
{
      if(x[j]>y[j])
    {
        break;
    }
       //cout<<x[k]<<"  "<<y[k]<<"  "<<x[k+1]<<"  "<<y[k+1]<<endl;

     p[k+1]=p[k]+(2*(x[j-1]+1))+((y[j]*y[j])-(y[j-1]*y[j-1]))-(y[j]-y[j-1])+1;

        cout<<"P"<<k+1<<"= "<<p[k]<<"+"<<"2*("<<x[j-1]<<"+"<<"1)+"<<"("<<y[j]*y[j]<<"-"<<y[j-1]*y[j-1]<<")-("<<y[j]<<"-"<<y[j-1]<<")+1"<<"= "<<p[k+1]<<endl;

       j=j+1;
    if(p[k+1]<0)
    {
     x[j]=x[j-1]+1;
     y[j]= y[j-1];
    }
   else
    {
     x[j]=x[j-1]+1;
     y[j]= y[j-1]-1;
    }
    k=k+1;

}
cout<<"--------------------------------------------------------"<<endl;
cout<<"    K      (Xk,Yk)              Pk                (Xk+1,Yk+1)  "<<endl;
cout<<"--------------------------------------------------------"<<endl;
for(i=0;i<=k;i++)
{
    cout<<"   "<<i<<"    "<<"("<<x[i]<<","<<y[i]<<")"<<"           "<<p[i]<<"             "<<"("<<x[i+1]<<","<<y[i+1]<<")"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
}
cout<<endl;
cout<<endl;

return 0;
}
