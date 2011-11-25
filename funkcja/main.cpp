#include <iostream>
#include <cmath>

using namespace std;

int factorial (int n)
{
    int result = 1;
    for(int i=2; i <=n; i++)
    {
        result *= i; }
        return result;
    }


int main()
{
    double y, x, fxy;
    cin >> y;
    cout << "f(x,y)\n";


    for(x=0.1 ; x<=10 ; x+=0.1)
    {
        if(sin(x) > cos(x))
        {
        for(int i = 0; i <= 10; i++)
        fxy += pow(x+y,i)/factorial(i) ;
        }
        else
        {
        fxy = pow(x,5) + pow(x,3) * pow(y,2) + pow(y,4);
        }

        cout << "f(" << x <<"," << y << ") = " << pow(x,5) + pow(x,3) * pow(y,2) + pow(y,4) << "\n";
    }
    return 0;
}
