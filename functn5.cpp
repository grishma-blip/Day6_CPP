#include<iostream>
using namespace std;
int divi(int a, int b)
{
    return(a/b);
}
int main ()
 {
    int sum;
    sum = divi(10, 2);
    cout << "10 / 2 = " << sum << endl;
    return 0;
}