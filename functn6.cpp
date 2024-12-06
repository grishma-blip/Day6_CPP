#include<iostream>
using namespace std;
int multi(int a, int b)
{ 
    return (a * b);
}
int main()
{
    int sum;
    sum =  multi(10, 2);
    cout << "10 * 2 = " << sum << endl;
    return 0;
}