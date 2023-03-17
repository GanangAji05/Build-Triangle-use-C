#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "masukkan jumlah a : ";
    cin >> a;

    cout << "\n Segitiga Pertama \n";
    for (int i = 0; a > i; i++){  
        for (int k = a; k > i;k--){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            cout << "*";
        }
        for (int z = 0 ; z <= i; z++){
            cout << "*";
        } 
      cout << endl;
    } 
    cout << endl;
    cout << "Segitiga Kedua \n";
    for (int i = 0; a > i; i++){  
        for (int k = 0; k <= i;k++){
            cout << " ";
        }
        for (int j = a; j > i; j--){
            cout << "*";
        }
        for (int z = a ; z > i; z--){
            cout << "*";
        } 
      cout << endl;
  
    }  
    cout << endl;
    cout << "Belah Ketupat \n";
    for (int i = 0; a > i; i++){  
        for (int k = a; k > i;k--){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            cout << "*";
        }
        for (int z = 0 ; z <= i; z++){
            cout << "*";
        } 
      cout << endl;
    }
     for (int i = 0; a > i; i++){  
        for (int k = 0; k <= i;k++){
            cout << " ";
        }
        for (int j = a; j > i; j--){
            cout << "*";
        }
        for (int z = a ; z > i; z--){
            cout << "*";
        } 
      cout << endl;
    }      
    return 0;
}    