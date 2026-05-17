/*
4. เขียนฟังก์ชันสำหรับการโจมตีศัตรูโดยรับ parameter เป็นจำนวนเต็ม 1 ตัวสำหรับค่าพลังของศัตรู และ 
จำนวนทศนิยม 1 ตัวสำหรับค่าพลังโจมตี โดยในฟังก์ชันจะทำให้ค่าพลังชีวิตลดลงตามค่าพลังโจมตี ฟังก์ชันนี้ไม่มีการ return ค่า


#console

Your attack: 12
Enemy HP: 88
--------------
Your attack: 0
Enemy HP: 88
--------------
Your attack: 13
Enemy HP: 75
--------------
Your attack: 50
Enemy HP: 25
--------------
Your attack: 65
Enemy HP: 0
--------------
The enemy has been defeated

*/
#include <iostream>
using namespace std;

void atk(int &hp, int a){
    hp -= a;
}

int main(){
    int hp = 100;
    int a;
    while (true){  
        if(hp>0){
            cout << "Your attack: ";
            cin >> a;
            atk(hp,a);
            cout << "Enemy HP: ";
            cout << hp << "\n";
            cout << "--------------"<<"\n";
        }
        else{
            cout << "The enemy has been defeated";
            break;
        }
    }
    

    return 0;
}