#include <iostream> 

int main ()
{

int a,b,c =0;

std::cin >>a>>b;

if (a > b )
c = 0;
else 
while (a <= b )
{
    a = a *3;
    b = b * 2;
    c++;
}
std::cout << c;
}