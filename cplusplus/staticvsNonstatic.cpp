#include <iostream>

using namespace std;


void f() {
    static int x = 4;
    int i = 10;
    if(x == 2)
        return;
    x--;
    cout<<"x:"<<x<<" i:"<<i<<"\n";
    i = i*x;
    f();
    cout<<"x:"<<x<<" i:"<<i<<"\n";
}

int main()
{
    f();
    return 0;
}
/*#include <iostream>

using namespace std;


void f() {
    static int x = 2;
    int i = 10;
    if(x == 0)
        return;
    x--;
    cout<<"x:"<<x<<" i:"<<i<<"\n";
    i--;
    f();
    cout<<"x:"<<x<<" i:"<<i<<"\n";
}

int main()
{
    f();
    return 0;
}*/
