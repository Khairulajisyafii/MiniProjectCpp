#include <iostream>
using namespace std;
void darikanan(int p){
    int y = (p*2)-1;
    int l = 1;
for(int i = 0;i < p;i++){
     cout << "          ";
    for(int h = 0;h < y;h++){
        cout << " ";
    }for(int z = 0;z < l;z++){
        cout << "X";
    }
      l+=2;y-=2;
    cout << endl;
}

}
void darikiri(int a){
    int hj = 1;
for(int i = 1;i < a;i++){
     cout << "          ";
    for(int s = 0;s < hj;s++){
        cout << "X";
    }
    hj+=2;
    cout << endl;
}
}
void SamaKaki(int a){
int hy = a-1;
int hg = 1;
for(int i = 0;i < a;i++){
    cout << "          ";
    for(int s = 0;s < hy;s++){
        cout << " ";
    }for(int f = 0;f < hg;f++){
        cout << "X";
    }
    hy-=1;hg+=2;
    cout << endl;
}

}
int main(){
bool z = true;
while (z){
    int inp = 0;
     int x,end = 0;
    cout << "masukan tinggi" << endl;
    cin >> x;
 cout << "[1] Segitiga sama kaki" << endl
      << "[2] Segitiga dari dari kiri" << endl
      << "[3] Segitiga dari kanan" << endl
      << "[4] keluar" << endl;
      cin >> inp;
    switch(inp){
        case 1:
        SamaKaki(x);
        break;
        case 2:
        darikiri(x);
        break;
        case 3:
        darikanan(x);
        break;
        default:
        cout << "operator salah" << endl;
    }
cout << "9 untuk mengakhiri" << endl;
cin >> end;
if(end == 9){
    break;
}
}
return 0;
}///g++ Untitled-1.cpp -o piramid.exe