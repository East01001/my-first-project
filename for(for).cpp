# include <iostream>

using namespace std;

int main(void)
{
    int i, j;

    for (i=1; i<10; i++)
    {
        for (j=1; j<10; j++)
            cout << i * j << '\t'; //'\t'±íÊ¾Ëõ½ø
        cout << endl;
    }

    return 0;
}
