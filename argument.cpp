#include <iostream>
using namespace std;
int sum(int x, int y, int a = 0, int b = 0) // we are assigning default values to a,b as 0
{
    return (x + y + a + b);
}
int main()
{
    cout << sum(10, 15) << endl;
    cout << sum(10, 15, 25) << endl;
    cout << sum(10, 15, 25, 30) << endl;
  // cout << sum(10,15,20,25,30,35) << endl;//if we give many argument it provide error|| cout << sum(10,15,20,25,30,35) << endl;
    return 0;
}
