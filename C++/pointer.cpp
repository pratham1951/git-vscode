#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *b = &a;
    cout << "Address of A" << &a << endl;
    cout << "value of A " << a << endl;
    cout << "Address of a " << b << endl;
    //.................

    int **c = &b;
    cout << "Value of C " << c << endl;
    cout << "Value of *c " << *c << endl;
    cout << "Value of ** C " << **c << endl;

    int marks[] = {23, 45, 56, 89};

    // Pointers and arrays
    int *p = marks;
    //cout << *(p++) << endl;
    // cout << *(++p) << endl;
    cout << "The value of *p is " << *p << endl;
    cout << "The value of *(p+1) is " << *(p+1) << endl;
    cout << "The value of *(p+2) is " << *(p+2) << endl;
    cout << "The value of *(p+3) is " << *(p+3) << endl;
    return 0;
}