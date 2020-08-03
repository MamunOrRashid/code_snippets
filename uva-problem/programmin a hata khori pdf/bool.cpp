#include <stdio.h>
#include <iostream.h>

void main(void)
{
    bool GetResult;
    int x,y,z;
    x=5;y=10;z=15;

    GetResult=x>y;
    cout<<"Result of GetResult is =X>Y;" <<GetResult<<endl;

    GetResult=y>z;
    cout<<"Result of GetResult is =y<z;"<<GetResult<<endl;

    GetResult=x+z-y;
    cout<<"Result of GetResult is =x+z-y;"<<GetResult<<endl;

    GetResult=x+y-z;
    cout<<"Result of GetResult is =x+y-z;"<<GetResult<<endl;

     x=x+z-y;
    cout<<"Result of x is x=x+y-z;"<<x<<endl;

    GetResult=true;
    cout<<"Result of Getresult=true;"<<GetResult<<endl;
    GetResult=false;
    cout<<"Result of Getresult=false;"<<GetResult<<endl;



}
