/*
5. เขียนฟังก์ชันอัปเดตค่าแบตเตอร์รี่โดยรับ parameter เป็นจำนวนทศนิยม 1 ตัว 
โดยในฟังก์ชันจะทำการเพิ่มค่าแบตเตอร์รี่ทุกๆ 20% โดยไม่ต้อง return ค่า

#input
-

#output
Your battery: 0%
Your battery: 20%
Your battery: 40%
Your battery: 60%
Your battery: 80%
Your battery: 100%
Battery fully charge
*/
#include <iostream>
using namespace std;

void bat(float &battery){
    battery += 20;
}

int main(){
    float battery = 0;
    cout<<"Your battery: "<<battery<<"%"<<"\n";
    while (true){
        if (battery<100){
            bat(battery);
            cout<<"Your battery: "<<battery<<"%"<<"\n";
        }else{
            cout<<"Battery fully charge";
            break;
        }
    }

return 0;
}