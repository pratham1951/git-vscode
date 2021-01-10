#include <iostream>
using namespace std;

int main()
{
    int i, j, r;
    cout << "Enter number of rows";
    cin >> r;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r; j++)
        {
            if (j <= r - i)
            {
                /* code */
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}