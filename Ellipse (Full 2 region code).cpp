#include<bits/stdc++.h>
using namespace std;
int main(){
int rx,ry, k, i, j, f;
int x[30],y[30], p[30];
cout<<"Enter the value of rx and ry: ";
cin>>rx>>ry;
cout<<endl;
cout<<endl;

x[0]=0;
y[0]=ry;
p[0]=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);
cout<<endl;
cout<<endl;
cout<<"P0= ("<<ry*ry<<")-("<<rx*rx*ry<<")+(("<<rx*rx<<")/4)="<<p[0]<<endl;
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
      if((2*x[j]*(ry*ry))>(2*y[j]*(rx*rx)))
    {
        break;
    }

      if(p[k]<0)
      {
          p[k+1]=p[k]+(2*(ry*ry)*(x[j-1]+1))+(ry*ry);
          cout<<"P"<<k+1<<"= "<<p[k]<<"+"<<"2*("<<ry*ry<<")*("<<x[j-1]<<"+1)+"<<ry*ry<<"= "<<p[k+1]<<endl;

      }

      else{

         p[k+1]=p[k]+(2*(ry*ry)*(x[j-1]+1))-(2*(rx*rx)*(y[j-1]-1))+(ry*ry);
         cout<<"P"<<k+1<<"= "<<p[k]<<"+"<<"2*("<<ry*ry<<")*("<<x[j-1]<<"+1)"<<"-(2*"<<rx*rx<<"*("<<y[j-1]<<"-1"<<")+"<<ry*ry<<"= "<<p[k+1]<<endl;

      }



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
cout<<endl;
cout<<"----------------------------Region:1 (m<1)----------------------------"<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<"    K      (Xk,Yk)              Pk                (Xk+1,Yk+1)        2Xk+1ry^2         2Yk+1rx^2 "<<endl;
cout<<"--------------------------------------------------------"<<endl;
for(i=0;i<=k;i++)
{
    cout<<"   "<<i<<"    "<<"("<<x[i]<<","<<y[i]<<")"<<"           "<<p[i]<<"             "<<"("<<x[i+1]<<","<<y[i+1]<<")"<<"      "<<2*x[i+1]*(ry*ry)<<"   "<<2*y[i+1]*(rx*rx)<<endl;
    cout<<"-------------------------------------------------------"<<endl;
}
cout<<endl;
cout<<endl;
k=k+1;
f=k;

x[k+1]=x[k];
y[k+1]=y[k];
p[k]=(ry*ry)*((x[k]+0.5)*(x[k]+0.5))+(rx*rx)*((y[k]-1)*(y[k]-1))-((rx*rx)*(ry*ry));
cout<<"P"<<k<<"= "<<ry*ry<<"*(("<<x[k]<<"+1/2)*("<<x[k]<<"+1/2))+("<<rx*rx<<")*(("<<y[k]-1<<")*("<<y[k]<<"-1))-(("<<rx*rx<<")*("<<ry*ry<<"))="<<p[k]<<endl;

if(p[k]<0)
{
    x[k+1]=x[k]+1;
    y[k+1]=y[k]-1;
}
else{
    x[k+1]=x[k];
    y[k+1]=y[k]-1;
}

j=k+1;

while(1)
{
      if((2*y[j]*(rx*rx))==0)
    {
        break;
    }

 if(p[k]<0)
      {
          p[k+1]=p[k]+(2*(ry*ry)*(x[j-1]+1))-(2*(rx*rx)*y[j-1])+3*(rx*rx);
          cout<<"P"<<k+1<<"= "<<p[k]<<"+"<<"2*("<<ry*ry<<")*("<<x[j-1]<<"+1)-(2*("<<rx*rx<<")*"<<y[j-1]<<")+3*("<<rx*rx<<")= "<<p[k+1]<<endl;

      }

      else{

         p[k+1]=p[k]-(2*(rx*rx)*(y[j-1]-1))+(rx*rx);
         cout<<"P"<<k+1<<"= "<<p[k]<<"-(2*"<<rx*rx<<"*("<<y[j-1]<<"-1"<<"))+"<<rx*rx<<"= "<<p[k+1]<<endl;

      }



       j=j+1;
    if(p[k+1]<0)
    {
     x[j]=x[j-1]+1;
     y[j]= y[j-1]-1;
    }
   else
    {
     x[j]=x[j-1];
     y[j]= y[j-1]-1;
    }
    k=k+1;

}
cout<<endl;
cout<<"----------------------------Region:2 (m>1)----------------------------"<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<"K      (Xk,Yk)       Pk       (Xk+1,Yk+1)      2Xk+1ry^2     2Yk+1rx^2 "<<endl;
cout<<"--------------------------------------------------------"<<endl;
for(i=f;i<=k;i++)
{
    cout<<"   "<<i<<"    "<<"("<<x[i]<<","<<y[i]<<")"<<"           "<<p[i]<<"             "<<"("<<x[i+1]<<","<<y[i+1]<<")"<<"      "<<2*x[i+1]*(ry*ry)<<"   "<<2*y[i+1]*(rx*rx)<<endl;
    cout<<"-------------------------------------------------------"<<endl;
}
cout<<endl;
cout<<endl;


return 0;
}
