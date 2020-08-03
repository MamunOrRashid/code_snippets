#include <stdio.h>
#include <iostream.h>

void func(int x,float y=3.1415)
{

    cout<<"Value of X and Y are:" <<x<<","<<y<<endl;
}
void main()
{

    func(10);
    func(10,7.22);
}
