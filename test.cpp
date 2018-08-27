#include <iostream>
#include <string>

using namespace std;

void function_one(int &a, string message);
void function_two(int &a, string message);

int main()
{
    int a = 6;

    function_one(a, "The og is :");
    function_two(a, "Now i made thisnigga: ");

    return 0;
}

void function_one(int &a, string message)
{
    cout << message << " " << a << endl;
}

void function_two(int &a, string message)
{
    a = 99;

    cout << message << " " << endl;
}