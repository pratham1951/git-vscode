#include <iostream>
#include <string.h>
using namespace std;

// int a=32, *ptr=&a;
// char ch='A',&cho=ch;
// cho+=a;
// *ptr=ch;
// cout<<a<<" "<<ch<<endl;

//..................................................
// int array []={2,3,4,5};
// int *arptr=array;
// int value=*arptr;
// value=*arptr++;
// cout<<value<<"\t";
// value=*arptr;
// cout<<value<<"\t";
// value=*++arptr;
// cout<<value<<"\t";
//............................................................

//     class state
//     {
//         char *sn;
//         int size;

//     public:
//         state()
//         {
//             size = 0;
//             sn = new char[size + 1];
//         }
//         state(char *s)
//         {
//             size = strlen(s);
//             sn = new char[size + 1];
//             strcpy(sn, s);
//         }
//         void display()
//         {
//             cout << sn << endl;
//         }
//         void replace(state &a, state &b)
//         {
//             size = a.size + b.size;
//             delete sn;
//             sn= new char [size+1];
//             strcpy(sn,a.sn);
//             strcat(sn,b.sn);
//         }
//     };
// int main()
// {
//     char *temp="Delhi";
//     state state1(temp),state2("Mumbai"),state3("Nagpur"),S1,S2;
//     S1.replace(state1 ,state2);
//     S2.replace(S1,state3);
//     S1.display();`
//     S2.display();
//     return 0;
// }

//....................................................................................

// void changestring(char text[], int &counter)
// {
//     char *ptr = text;
//     int length = strlen(text);
//     for (; counter < length - 2; counter += 2, ptr++)
//     {
//         *(ptr + counter) = toupper(*(ptr + counter));
//     }
// }

// int main(){

//   int position=0;
//   char message[]="Mouse Fun";
//   changestring(message,position);
//   cout<<message<<"@"<<position;

//     return 0;
// }
//...............................................................................

// int main()
// {
//     int sum(int (*)(int), int);
//     int square(int);
//     int cube(int);

//     cout << sum(square,4) << endl;
//     cout << sum(cube, 4) << endl;

//     return 0;
// }
// int sum(int (*ptr)(int k), int n)
// {
//     int s = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         s += (*ptr)(i);
//     }
//     return s;
// }
// int square(int k)
// {
//     int sq;
//     sq = k * k;
//     return k * k;
// }
// int cube(int k)
// {
//     return k * k * k;
// }
//.....***********************************************************************************
