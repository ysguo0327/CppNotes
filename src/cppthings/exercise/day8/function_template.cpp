#include<iostream>
using namespace std;

// 此处的class指泛指任何数据类型，注意与类（class）含义的区分
template<class T>
T Min(T a, T b) {
    return a < b ? a : b;
}

template<typename T>
T myMin(T a, T b) {
    return a < b ? a : b;
}


int main(int argc, char const *argv[])
{
    double a = 2, b = 3.6;
    float c = 2.1, d = 3.4;
    // 显式调用
    cout << "a, b 最小值：" << Min<int>(a, b) << endl;
    // 隐式调用
    cout << "a, b 最小值：" << Min(a, b) << endl;
    cout << "c, d 最小值：" << Min(c, d) << endl;
    cout << "c, d 最小值：" << std::min(c, d) << endl;
    cout << "c, d 最小值：" << myMin(c, d) << endl; 
    return 0;
}


