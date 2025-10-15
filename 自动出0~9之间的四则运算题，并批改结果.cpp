# include <iostream>
# include <cstdlib> //包含生成伪随机数函数
# include <ctime> //包含取时间函数

using namespace std;

int main(void)
{
    int num1, num2, op, result1, result2;
    srand(time(NULL)); //初始化伪随机数种子,srand()--设置种子函数，time()--取时间函数，NULL默认取系统时间

    num1 = rand() % 10;
    num2 = rand() * 10 / (RAND_MAX+1);//RAND_MAX>=32767
    op = rand() % 4; //生成运算符0--+,1---,2--*,3--/


    switch(op)
    {
           case 0:
               result1 = num1 + num2;
               cout << num1 << " + " << num2 << " = ?" << endl;
               cin >> result2;
               if (result2 == result1)
                    cout << "You are right" << endl;
               else
                    cout << "You are wrong" << endl;
               break;
            case 1:
               result1 = num1 - num2;
               cout << num1 << " - " << num2 << " = ?" << endl;
               cin >> result2;
               if (result2 == result1)
                    cout << "You are right" << endl;
               else
                    cout << "You are wrong" << endl;
               break;
            case 2:
               result1 = num1 * num2;
               cout << num1 << " * " << num2 << " = ?" << endl;
               cin >> result2;
               if (result2 == result1)
                    cout << "You are right" << endl;
               else
                    cout << "You are wrong" << endl;
               break;
            case 3:
               result1 = num1 / num2;
               cout << num1 << " / " << num2 << " = ?" << endl;
               cin >> result2;
               if (result2 == result1)
                    cout << "You are right" << endl;
               else
                    cout << "You are wrong" << endl;
               break;

   }

    return 0;
}
