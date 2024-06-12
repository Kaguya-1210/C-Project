//
// Created by Kaguya on 2024/6/12.
//
#include "iostream"
using namespace std;

int main(){
    int min;
    cout<<"请输入你的身高";
    cin >> min;
    if (min >= 120) {
        cout << "请购买门票" << endl;
    } else{
        cout<<"done"<<endl;
    }
    return 0;
}