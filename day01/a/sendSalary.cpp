//
// Created by Kaguya on 2024/6/12.
//
#include "iostream"
#include "random"
using namespace std;


int get_random_num(int min, int max)
{
// 创建一个随机数生成器
    random_device rd;
    mt19937 gen(rd());
// 定义一个均匀分布的整数范围
    uniform_int_distribution<> dis(min, max);
// 生成一个随机数并输出
    int random_number = dis(gen);
    return random_number;
}
int main(){



    int salary = 10000;
    for (int i = 0; i < 20; i++) {
        cout << "num:" << get_random_num(1, 10) << endl;
        if (salary != 0) {
            if (get_random_num(1, 10) < 5) {
                cout << i << ":meiyejigun" << endl;
                continue;
            }
            salary = salary - 1000;
            cout << i << "give salary 1000,All:" << salary << endl;
        } else {
            cout << "工资发完了" << endl;
            break;
        }
    }
}