#include <iostream>
using namespace std;

bool check_SCP(int n) {
    int i = 0;
    while(i*i <= n){
	if(i*i == n){
		return true;
	    }
	++i;
    }
    return false;
}

int main() {
    int a;
    cout<<"Nhap so nguyen a: ";
    cin>>a;

    int n;
    cout<<"Nhap n: ";
    cin>>n;
    if(check_SCP(n)) {
        cout<<"La so chinh phuong";
    } else {
        cout<<"La so hoan thien";
    }


    return 1;
}