/*
2. เขียนฟังก์ชันสลับค่าโดยรับ parameter แบบ reference เป็นจำนวนเต็ม 2 ตัว 
ให้ทำการสลับค่า parameter ในฟังก์ชัน โดยไม่ต้องทำการ return หลังจากนั้นให้เรียกใช้ฟังก์ชันใน main และแสดงค่าตัวแปรที่ทำการสลับออกมา 

#input
-

#output
a = 1
b = 0
*/
#include <iostream>
using namespace std;

void foid(int &a, int &b){
    int c = b;
    b = a;
    a = c;
}


int main(){
    int a = 0;
    int b = 1;
    foid(a,b);
    cout << "a = " << a << "\nb = " << b;
return 0;
    
}