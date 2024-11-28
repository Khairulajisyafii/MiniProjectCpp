#include <iostream>
#include <fstream>
using namespace std;

int main(){
fstream files("Savedata.txt", ios::in |ios::out | ios::app);

//files << "Player1 Status";
string line;

getline(files,line);
cout << line << endl;
files.close();
cin.get();
return 0;
}