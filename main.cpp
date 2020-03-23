#include <iostream>

using namespace std;

int main()
{
    cout << " Enter A and B: ";
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n' << "A - B = " << a - b << '\n' << " A * B = " << a * b << '\n' << " A : B = "
    << a/b << '\n';

   if (a>b)
   {
      cout << "Наибольшее:" << a << '\n' << "Наименьшее:" << b;
   }
   else
   {
       cout << "Наибольшее:" << b << '\n' << "Наименьшее:" << a;
   }
    return 0;
}
