# include <iostream>

using namespace std;

int main(void)
{
    int a[100], counter, x , i;

    for (counter=0; counter<100; counter++)
    {
        cin >> a[counter];
        if (a[counter]  == 0)
            break;
    }

    cin >> x;

    for (i=0; i<counter; i++)
    {
        if (a[i] != x)
            cout << a[i] << " "; //普通数组不能真正删除元素（内存空间固定），只能跳过或覆盖
    }

    return 0;
}
