#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string strlibrary(int key){
  string library1[5] = {"WELCOME TO FAKTORIAL COUNTY","dev by khairul","masukkan input","ingin melanjutkan?","(0 untuk mengakhiri)"};
  return library1[key];
}
int main(){
    int input;
    int end;
    cout << strlibrary(0) << " " << strlibrary(1) << endl;
    while(true){
        int input;
        cout << strlibrary(2) << endl;
        cin >> input;
        int x = input;
        int yz = 0;
    for(int i = 0;i < (input-2);i++){
    yz += x * (x=-1);
    }
    cout << yz << endl;
    cout << strlibrary(3) << strlibrary(4) << endl;
    cin >> end;
    if(end == 0){
        break;
    }
    }
cin.get();
    return 0;
}