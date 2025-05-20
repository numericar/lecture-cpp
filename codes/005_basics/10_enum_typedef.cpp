#include <iostream>

using namespace std;

typedef int marks;

enum status
{
    progress,
    accept,
    reject,
    retry
};

int main()
{
    status s = status::progress;
    cout << s << endl;

    marks m1 = 10, m2 = 20, m3 = 30;
    cout << (m1 + m2 + m3) << endl;

    return 0;
}