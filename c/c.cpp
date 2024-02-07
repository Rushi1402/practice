#include <iostream>
using namespace std;

class c
{
private:
    int val;

public:
    c()
    {
        val = 15;
    }

    void operator++()
    {
        val = val + 5;
    }
    int operator--()

    {
        return val = val + 10;
    }

    void operator*()

    {
        val = val * 10;
    }
    void display()
    {
        cout << val;
    }
};

int main()
{
    c d;
    // ++d;
    int a = --d;
    cout << a;
    // *d;
    // d.display();

    return 0;
}
