# include <iostream>

using namespace std;

int main(void)
{
    int m, m1, m2, m3, n1, n2, n3, n, min;
    cin >> m >> m1 >> m2 >> m3; //m1,m2,m3µ¥Ôö
    n = min = m/m1+(m-m/m1*m1)/m2+(m-m/m1*m1-(m-m/m1*m1)/m2*m2)/m3;

    for (n1=0; n1<=m/m1; n1++)
    {
        for (n2=0; n2<=(m-m1*n1)/m2; n2++)
        {
            for (n3=0; n3<=(m-m1*n1-m2*n2)/m3; n3++)
            {
                if (m1*n1+m2*n2+m3*n3 == m)
                    n = n1+n2+n3;
                if (n < min)
                    min = n;
            }
        }
    }

    if (min < m/m1+(m-m/m1*m1)/m2+(m-m/m1*m1-(m-m/m1*m1)/m2*m2)/m3)
        cout << "True " << min;
    else
        cout << "False";

    return 0;
}
