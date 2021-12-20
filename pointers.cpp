# include <iostream>
using namespace std;

int main()
{
    int n =5;
    int *ptr =  &n;

    cout << ptr<< endl;
    cout << *ptr<< endl;

    return 0;
}