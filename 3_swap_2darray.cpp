/*
3. เขียนฟังก์ชันโดยรับ parameter เป็น 2D array ที่เก็บจำนวนเต็ม 1 ตัว 
ให้ทำการรับค่าตำแหน่งแถวกับหลักที่ต้องการสลับค่า แล้วให้ทำการสลับค่า parameter ในฟังก์ชัน โดยไม่ต้องทำการ return 
หลังจากนั้นให้เรียกใช้ฟังก์ชันใน main และแสดงค่าตัวแปรที่ทำการสลับออกมา 

#input
0 0
1 1

#output
4 2
3 1
*/
#include <iostream>
using namespace std;

void swap(int x[][2]){
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b;
    cin >> c >> d;
    int y = x[a][b];
    x[a][b] = x[c][d];
    x[c][d] = y;
}

int main(){
    int x[2][2] = {{1,2},{3,4}};
    swap(x);
    cout << x[0][0] <<" "<< x[0][1]<<"\n"<<x[1][0]<< " "<< x[1][1];
return 0;
}