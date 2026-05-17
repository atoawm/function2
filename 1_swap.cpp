/*
1. เขียนฟังก์ชันสลับค่าโดยรับ parameter แบบ value เป็นจำนวนเต็ม 2 ตัว 
ให้ทำการสลับค่า parameter ในฟังก์ชัน โดยไม่ต้องทำการ return หลังจากนั้นให้เรียกใช้ฟังก์ชันใน main และแสดงค่าตัวแปรที่ทำการสลับออกมา 

#input
-

#output
a = 0
b = 1
*/
#include <iostream>
using namespace std;

void swap(int a,int b){
    int c=b;
    b = a;
    a = c;
}

int main(){
    int a = 0;
    int b = 1;
    swap(a,b);
    cout << "a = " << a << "\nb = " << b;
return 0;
}