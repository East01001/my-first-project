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
            cout << a[i] << " "; //��ͨ���鲻������ɾ��Ԫ�أ��ڴ�ռ�̶�����ֻ�������򸲸�
    }

    return 0;
}
