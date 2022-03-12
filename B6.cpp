#include<bits/stdc++.h>
using namespace std;
int getMax(int n, int a[]){
    int max = -100000;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > max) max = a[i];
    }
    return max;
}
int getMin(int n, int a[]){
    int min = 100000;
    for (int i = 0; i < n; i++)
    {
        if(a[i] < min) min = a[i];
    }
    return min;
}
int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int max = getMax(n, a);
    int min = getMin(m, b);
    int count = 0;
    int Spec[10000];
    for (int i = 0; i < n; i++)
    {
        for (int j = max; j < min; j++)
        {
            if(j % a[i] == 0) count ++;
        }
        
    }
    
    cout << count;
    return 0;
}