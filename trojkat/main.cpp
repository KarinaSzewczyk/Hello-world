#include <iostream>

using namespace std;

int main()
{
    int k;
    cout << "wczytaj liczbe:\n";
    cin >> k;
    for(int m=1 ; m<=k; m++)
    {
            for (int n=1; n<=m; n++)
            {
                cout << "*";
            }
            cout << "\n";
    }
    return 0;
}
