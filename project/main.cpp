#include <iostream>

using namespace std;

int main()
{
cout << "Enter A and B: ";
int a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n';
cout << "A - B = " << a - b << '\n';
cout <<" A*B = "<<a*b<<'\n';
cout <<" A/B = "<<a/b<<'\n';
if (a>b)
    cout <<a<<'\n';
else
    cout <<b<<'\n';
if (a>b)
    cout<<b<<'\n';
else
    cout<<a<<'\n';
    return 0;
}
