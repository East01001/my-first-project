# include <iostream>

using namespace std;

int main(void)
{
    int a[10], counter, i, j, n;

    for (counter=0; counter<10; counter++)
    {
        cin >> a[counter];
        if (cin.get() == '\n')
            break;
    }

    for (i=1; i<=counter; i++)
    {
        n = 1;

        for (j=0; j<i; j++)
        {
            if (a[j] == a[i])
                n ++;
        }

        if (n > (counter+1)/2)
        {
             cout << a[i];
             break;
        }

        if (i == counter)
            cout << "0";
    }

    return 0;
}
