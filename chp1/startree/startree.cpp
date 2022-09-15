#include <iostream>
#include "console.h" // 弹窗
#include <cmath>
using namespace std;
int layer;
int programnum;
void startree(int layer); //全局变量layer，声明函数时为什么还要加int
void numtree(int layer);

int main() {
    cout << "Selet your program(1, 2): ";
    cin >> programnum;
    cout << "Enter your own storey: ";
    cin >> layer;
    if (layer == 0){
        layer = 6;
    }
    if (programnum == 1){
        startree(layer);
    }
    if (programnum == 2){
        numtree(layer);
    }
    return 0;
}
void startree(int layer) {
    for (int i = 0; i < layer; i++){
        for (int j = - layer; j < layer; j++){
            if (((abs(j)) < i + 1) && (((abs(j)+i) % 2 == 0))){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void numtree(int layer) {
    for (int j = 1; j < layer; j++){
        cout << " ";
    }
    cout << 1;
    cout << endl;
    for (int i = 2; i < layer; i++){
        for (int j = 1; j < layer+1-i; j++){
            cout << " ";
        }
        cout << i;
        for (int j = 1; j < 2*i-2; j++){
            cout << " ";
        }
        cout << i;
        cout << endl;
    }
    for (int j = 1; j < layer+1; j++){
        cout << layer;
        cout << " ";
    }
}
