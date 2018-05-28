#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void arra(double *a, int b)
{
    cout << "test1" << endl;
   a = new double[b];
   cout << "test2" << endl;
}

void afill(double *a, int b)
{
    cout << "test3" << endl;
    for(int i=0; i<b; i++)
        cin >> a[i];
    cout << "test4" << endl;
}

void out(double *a, int b)
{
    cout << "test5" << endl;
    for(int i=0; i<b; i++)
        cout << a[i] < " ";
    cout << "test6" << endl;
}

void del(double *a)
{
    cout << "test7" << endl;
    delete[] a;
    cout << "test8" << endl;
}

int main()
{
    double *arr;
    srand(time(NULL));
    int l;
    cout << "Length of array: ";
    cin >> l;
    arra(arr, l);
    afill(arr, l);
    out(arr, l);
    del(arr);
    return 0;
}