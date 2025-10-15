# include <iostream>

using namespace std;

int main(void)
{
    int key1, key2, out1, out2, out3, in4, in5, in6;
    char in1, in2, in3;
    cin >> key1 >> key2;
    cin.ignore();
    in1 = cin.get(), in2 = cin.get(), in3 = cin.get();

    out1 = (in1 + key1) % 128, out2 = (in2 + key1) % 128, out3 = (in3 + key1) % 128;
    cout << out1 << " " << out2 << " " << out3 << endl;

    in4 = (key2 + 127 - in1) / 128 * 128 + in1 - key2, in5 = (key2 + 127 - in2) / 128 * 128 + in2 - key2, in6 = (key2 + 127 - in3) / 128 * 128 + in3 - key2;
    cout << in4 << " " << in5 << " " << in6 << endl;

    return 0;
}
