#include <iostream>
using namespace std;

bool Check_SHT(int n)
{
    int S = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            S += i;  // S = S + i

    if (S == n)
        return true; // Là số hoàn thiện
    return false;     // Không là số hoàn thiện
}

int main() {
    int a;
    cout<<"Nhap so nguyen a: ";
    cin>>a;

    int n;
    cout<<"Nhap n: ";
    cin>>n;
    if(Check_SHT(n)) {
        cout<<"La so hoan thien";
    } else {
        cout<<"Khong la so hoan thien";
    }

    return 1;
}