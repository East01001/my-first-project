# include <iostream>
# include <cstdlib> //��������α���������
# include <ctime> //����ȡʱ�亯��

using namespace std;

int main(void)
{
    int num1, num2, op, result1, result2;
    srand(time(NULL)); //��ʼ��α���������,srand()--�������Ӻ�����time()--ȡʱ�亯����NULLĬ��ȡϵͳʱ��

    num1 = rand() % 10;
    num2 = rand() * 10 / (RAND_MAX+1);//RAND_MAX>=32767
    op = rand() % 4; //���������0--+,1---,2--*,3--/


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
