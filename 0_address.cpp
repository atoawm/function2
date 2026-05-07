/*
0. ลองกดรันโค้ดส่วนนี้เพื่อดู address

#input
1

#output
1 0x61ff0c
*/
#include<iostream>

using namespace std;

int main(){
    int a = 0;
    cin >> a;
    cout << a << " " << &a;
}