#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <thread>
#include <chrono>
#include <windows.h>

using namespace std;

void sleep_for_seconds(float seconds) {
    #ifdef _WIN32
    Sleep(static_cast<DWORD>(seconds * 1000));
    #else
    std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(seconds * 1000)));
    #endif
}

int main() {
    int min;
string input;
while(true){
cout << "M/D" << endl;
cin >>input;
if(input == "M" || input == "m"){
    cout << "Masukkan jumlah menit : ";
    cin >> min;
    int sec = 60 * min;
    for(int i = 0;i < sec;i++){
        cout << i << "/" << sec << "  ";
    sleep_for_seconds(1.0f);
    }
    break;
    }else if(input == "D" || input == "d"){
cout << "masukkan jumlah detik" << endl;
cin >> min;
for(int i = 0;i < min;i++){
cout << i << "/" << min << "  ";
sleep_for_seconds(1.0f);
}}
else if(input == "J" || input == "j"){
cout << "masukkan jumlah jam" << endl;
cin >> min;
int secs = (min * 60) * 60;
for(int i = 0;i < secs;i++){
cout << i << "/" << secs << "  ";
sleep_for_seconds(1.0f);
}
break;
}else{
    cout << "masukkan dengan benar!!!" << endl;
}
    
}
    cout << endl;
    cout << "Mematikan komputer\n";
    for(int j = 0;j < 5;j++){
        sleep_for_seconds(1.0f);
        cout << ".";
    
    }
    #ifdef _WIN32
    system("shutdown /s /t 1");
    #else
    system("poweroff");
    #endif

    return 0;
}