#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "masukkan jumlah a : ";
    cin >> a;

    cout << "Segitiga Pertama \n";
    for (int i = 0; a >= i; i++){  
        for (int k = 0; k <= i;k++){
            cout << "o";
        }  
        cout << endl;
    }
    cout << "\nSegitiga Kedua \n";
    for (int i = 0; a >= i; i++){
        for (int k = a; k >= i; k--){
            cout << "o";
        }  
         cout << endl;
    }
    cout << "\nSegitiga Ke Tiga \n";
    for (int i = 0; a >= i; i++){
        for (int k = 0; k <= i; k++){
            cout << " ";
        }
        for (int j = a; j >=i;j--){
            cout <<"o";
        }  
         cout << endl;
    }
    cout << "\nSegitiga Ke Empat \n";
    for (int i = 0; a >= i; i++){
        for (int k = a; k >= i; k--){
            cout << " ";
        }
        for (int j = 0; j <=i;j++){
            cout <<"o";
        }  
         cout << endl;
    }

    return 0;
}