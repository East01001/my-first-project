# include <iostream>

using namespace std;

int main(void)
{
    int num, k, counter, sum;
    sum = 2;

    for (num=3; num<101; num+=2) //num+=2--����2������һ��Ϊ����
    {
        counter = 0;
        for (k=1; k<=num; k+=2) //k+=2--����ֻ���ܱ���������
            if (num%k == 0)
                counter++;
        if (counter == 2) //����ֻ�ܱ�1�ͱ�����������2��
            sum += num;
    }

    cout << "1-100֮��������ĺͣ�" << sum << endl;

    return 0;
}
