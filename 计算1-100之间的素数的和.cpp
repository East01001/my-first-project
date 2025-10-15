# include <iostream>

using namespace std;

int main(void)
{
    int num, k, counter, sum;
    sum = 2;

    for (num=3; num<101; num+=2) //num+=2--除了2的素数一定为奇数
    {
        counter = 0;
        for (k=1; k<=num; k+=2) //k+=2--奇数只可能被奇数整除
            if (num%k == 0)
                counter++;
        if (counter == 2) //素数只能被1和本身整除，共2次
            sum += num;
    }

    cout << "1-100之间的素数的和：" << sum << endl;

    return 0;
}
