#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <windows.h>
#include <string>
#include <fstream>
using namespace std;

 void sleep_for_seconds(float seconds) {
    Sleep(static_cast<DWORD>(seconds * 1000));
}
string songBaris, songHuruf;
float jeda[18] = {0.2, 0.1, 0.2, 0.02, 0.01, 0.005, 0.001, 0.001, 0.001, 0.001, 0.001,0.05, 0.02,0.01,0.01,0.01,0.04,0.04};
void play(){ 
fstream lirik("lirik.txt", ios::in);
int ke = 0;
while(getline(lirik, songBaris)){

for(char songHuruf : songBaris){
cout << songHuruf;
sleep_for_seconds(0.07);
}
//sleep_for_seconds(2);
sleep_for_seconds(jeda[ke]);
ke++;
cout << endl;
}
lirik.close();
}
int main(){
play();
cin.get();
    return 0;
}