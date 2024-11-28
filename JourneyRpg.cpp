#include <iostream>
#include <windows.h>
#include <string>
#include <thread>
#include <chrono>
#include <windows.h>
using namespace std;
void sleep_for(float seconds){
Sleep(static_cast<DWORD>(seconds * 1000));
}
struct damage{
float baseDmg,magicDmg,critChance,critGap;

};
struct life{
float hp,baseDeff,magicDeff,missChance,lifeSteal;
};

struct Status{
    damage damageStatus;
    life lifeStatus;
};
void battle(float hp1,float hp2,float dmg1,float dmg2){
    float fhp1 = hp1,fhp2 = hp2;
    cout << "Player 1" << "                " << "player 2" << endl;
    cout << "Hp =" << hp1 << "                 " << "Hp = " << hp2 << endl;

while(true){
cout << hp1 << "/" << fhp1 << "            " << hp2 << "/" << fhp2 << endl;
sleep_for(0.5);

hp1-=dmg2;
hp2-=dmg1;
if(hp1 < 0 && hp2 < 0){
    cout << "Draw" << endl;
    break;
}else if(hp1 < 0){
 cout << "player 2 win!" << endl;
 break;
}else if(hp2 < 0){
    cout << "player 1 win!" << endl;
    break;
}
}

}
int main(){
  Status player1,player2;
  player1.lifeStatus.hp = 100;
  player1.damageStatus.baseDmg = 3;

  player2.lifeStatus.hp = 100;
  player2.damageStatus.baseDmg = 5;
battle(player1.lifeStatus.hp,player2.lifeStatus.hp,player1.damageStatus.baseDmg,player2.damageStatus.baseDmg);
cin.get();
    return 0;
}