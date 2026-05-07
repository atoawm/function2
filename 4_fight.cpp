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

int main(){
    int hp = 100;
    int a = 0;
    while (true){
        cout << "Your attack: "
        cin >> a;
        if(hp>0){
            atk(hp,a);
        }
        else{
            cout << "The enemy has been defeated";
            break;
        }
    }
}