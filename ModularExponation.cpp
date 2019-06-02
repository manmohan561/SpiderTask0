#include <iostream>

using namespace std;


int power(int x, unsigned int y, int p)
{
    int result = 1;
    x = x % p;

    while (y > 0)
    {
        if (y%2==1)
            result = (result*x) % p;
        y = y/2;
        x = (x*x) % p;
    }
    return result;
}

int main()
{
   int x,y,p;
   cout<<"Enter x,y,p for (x^y)%p : ";
   cin>>x>>y>>p;
   printf("Power is %u", power(x, y, p));
   return 0;
}
