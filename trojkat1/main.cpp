#include <iostream>

using namespace std;

int main()
{
    int m;
    cout << "Wczytaj liczbe: \n";
    cin >> m;
    for(int i = 0; i < m; i++)
    {

        for(int j = 0; j < m - i -1 ; j++)
           cout << " ";
        for(int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << endl;
    }




    return 0;
}
