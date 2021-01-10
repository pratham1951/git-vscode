#include <iostream>
using namespace std;

// int main()
// {
//     int i,j;
//     for ( i=1; i <= 5; i++)
//     {
//      for ( j=1; j <= 4; j++)
//      {
//          cout<<"*";
//      }
//      cout<<endl;
//     }

//     return 0;
// }

int main()
{
    int i, j, r, c;
    cout << "Enter row ";
    cin >> r;
    cout << "ENter coloumn ";
    cin >> c;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (i == 1 || i == r || j == 1 || j == c)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}