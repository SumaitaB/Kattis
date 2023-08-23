#include <bits/stdc++.h>
using namespace std;

double maxArea(double a, double b,
                double c, double d)
{
    // Calculating the semi-perimeter
    // of the given quadilateral
    double semiperimeter = (a + b + c + d) / 2;

    // Applying Brahmagupta's formula to
    // get maximum area of quadrilateral
    return sqrt((semiperimeter - a) *
                (semiperimeter - b) *
                (semiperimeter - c) *
                (semiperimeter - d));
}

// Driver code
int main()
{
    double a = 1, b = 2, c= 1, d = 2;
    printf("%.2f\n",maxArea(a, b, c, d));
    return 0;
}
