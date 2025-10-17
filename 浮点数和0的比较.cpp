# include <iostream>
# include <cmath>

using namespace std;

int main(void)
{
    double x, y, t;
    cin >> x >> y;
    t = (x-2)*(x-2)+(y-3)*(y-3)-9;

    if (fabs(t) < 1e-6)
       cout << "on";
    else if (t < -1e-6)
            cout << "in";
    else
        cout << "out";

    return 0;
}
