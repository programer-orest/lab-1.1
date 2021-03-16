#include <iostream>
#include "FloatRange.h";

using namespace std;


FloatRange makeFloatRange(double first, double second)
{
    FloatRange a;
    if (!a.Init(first, second))
        cout << "Wrong arguments to Init(First > Second)" << endl;
    return a;
}

int main()
{
    bool result;

    FloatRange a1;
    a1.Read();
    a1.Display();
    result = a1.rangeCheck(2);
    a1.rangeCheckResult(result);

    FloatRange a2;
    double a, b;
    cout << "\nFirst = "; cin >> a;
    cout << "Second = "; cin >> b;
    a2 = makeFloatRange(a, b);
    a2.Display();
    result = a2.rangeCheck(3);
    a2.rangeCheckResult(result);

    return 0;
}
