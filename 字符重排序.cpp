# include <iostream>

using namespace std;

int main(void)
{
    char a[80], b[80], ch;
    int counter, i, j, len;
    bool exists;
    len = 0;

    for (counter=0; counter<80; counter++)
    {
        a[counter] = cin.get();
        if (a[counter] == '\n')
            break;
    }

    b[len] = a[0];

    for (i=1; i<counter-1; i++)
    {
        exists = false;

        for (j=0; j<i; j++)
        {
            if (a[j] == a[i])
            {
                exists = true;
                break;
            }

        }

        if (!exists)
        {
            len ++;
            b[len] = a[i];
        }
    } //保留元素

    for (i=0; i<=len-1; i++)
    {
        for (j=i+1; j<=len; j++)
        {
            if (b[j] > b[i])
                ch = b[j], b[j] = b[i], b[i] = ch;
        }
    }

    for (i=0; i<len; i++)
        cout << b[i];

    return 0;
}
