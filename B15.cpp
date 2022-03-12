#include<iostream>

using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void Sort(int n, int *a){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
        
    }
    
}
int main(){
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        cin >> b[i];
    }
    Sort(n, a);
    Sort(n + 1, b);

    int mystery = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if(a[i] != b[i]){
            mystery = b[i];
            break;
        }
    }
    cout << mystery;
    return 0;
}