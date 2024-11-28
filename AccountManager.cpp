#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//declaration
string files,cache;
string commit,log;
string list,listAdd,intro;
int line,lineptr;
char Typeuser;
const int Size = 20;

//fluid array
struct coumpond{
string name,pass,email,info;
};
string name[Size],pass[Size],email[Size],Info[Size];

void command(char Pos){
list = "\n"
"===== COMMAND LIST =====\n"
"\n"
"[1] Cek list akun\n"
"[2] Info akun\n"
"[4] Tambahkan akun\n"
"[5] Hapus akun\n"
"[6] Tambahkan info akun\n"
"[5] Ganti Password akun\n"
"[7] Ganti Email akun\n"
"[8] Ganti nama akun\n"
"[9] Hapus info akun\n"
"[0] Keluar Program\n";
listAdd = "\n"
"[1] Add akun\n"
"[2] Ganti nama akun\n"
"[3] Ganti email akun\n"
"[4] Ganti password akun\n"
"[5] Ganti info akun\n";
intro = "ACCOUNT MANAGER BY KHAIRUL V.1.00(BETA)\n";
switch (Pos){
    case '1':
    cout << list;
    break;
    
    case '2':
    cout << listAdd;
    break;

    case '3':
    cout << intro;
    break;
};
}
void addr(int f){
switch (f){
    case 1 : 

}
}
void add(){
cout << "pilih line" << endl;
cin >> lineptr;
command('2');
cin >> Typeuser;
}
void Save(){
fstream Saver("Savedata.txt",ios::out | ios::app);
cout << log << endl;
cout << "yakin ingin menyimpan?[1] untuk menyimpan" << endl;
if(Typeuser == '1'){
cin >> commit;
Saver << commit;
}else{
    cout << "gagal menyimpan" << endl;
}
Saver.close();
}
void library(){
    fstream Data("SaveData.txt",ios::in | ios::out | ios::app );
    int attemp = 0;
    while(getline(Data,files)){
    }}
int main(){
command('3');
cin.get();
return 0;

}