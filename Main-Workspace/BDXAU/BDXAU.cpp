#include <iostream>
using namespace std;
int i, x;
int main()
{ i=0; x=0;
while(i<10)
  { if(i%5==0)
        {cout<<x;         
         x=x+1;
        }
    i=i+1;
}                      
cout<<x; 
return 0;
}
