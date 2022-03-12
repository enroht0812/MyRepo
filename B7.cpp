#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool isPerfectCouple(double x[], double y[], int len)
{
    for(int i = 0; i < len; i++)
    {
        if(x[i] < y[i]) return false;
    }
    return true;
}
int main()
{
    int x;
    cin >> x;
    double a[x],b[x];
    for(int i = 0; i < x; i++)
    {
        cin >> a[i] >> b[i];
    }
    sort(a,a+x);
    sort(b,b+x);
    // for(int i = 0; i < x; i++)
    // {
    //     if(!isPerfectCouple(a,b,x)) 
    //     {
    //         cout << "No";
    //         return 0;
    //     }
    // }
    // cout << "Yes";
    for(int i = 0;i<x;i++)
    {
        cout << "a[" + to_string(i) + "] = " + to_string(a[i]) << endl;
    }
        for(int i = 0;i<x;i++)
    {
        cout << "b[" + to_string(i) + "] = " + to_string(b[i]) << endl;
    }
    return 0;
}