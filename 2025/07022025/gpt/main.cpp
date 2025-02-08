#include <bits/stdc++.h>
using namespace std;
long double a,b,c;
int main()
{
    cin>>a>>b>>c;
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
                cout<<"Phuong trinh vo so nghiem";
            }
            else
            {
                cout<<"Phuong trinh vo nghiem";
            }
        }
        else
        {
            cout<<"Phuong trinh co nghiem duy nhat x=";
            cout<<fixed<<setprecision(3)<<-c/b;
        }
        return 0;
    }
    long double delta=b*b-4*a*c;
    if(delta<0)
    {
        cout<<"Phuong trinh vo nghiem";
    }
    else if(delta==0)
    {
        cout<<"Phuong trinh co nghiem kep x1=x2=";
        cout<<fixed<<setprecision(3)<<-b/(2*a);
    }
    else
    {
        cout<<fixed<<setprecision(3)<<"Phuong trinh co hai nghiem phan biet "<<"x1="<<(-b+sqrt(delta))/(2*a)<<", "<<"x2="<<(-b-sqrt(delta))/(2*a);
    }
    return 0;
}   
