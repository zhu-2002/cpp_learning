#include <iostream>
#include <string>

using namespace std ;

// 一般不要定义全局变量
// #define & const
#define DPI 65 // 65是什么类型不需要关心


// 等价于 int RandNum = 0  ;
int RandNum{0} ;
// 常量const
const double PI{3.14159f} ;


int main(int argc, char *argv[])
{
    cout<<"----- begin -----"<<endl;

    cout << "Random Num : " << RandNum << endl;

    RandNum = 3;

    cout << "Random Num : " << RandNum << endl;

    // PI = 3;
    const int age = 18;
    const float weight = 100;
    float nowWeight{weight + 30};
    cout << "age : " << age << endl;
    cout << "weight : " << nowWeight << endl;


    int dpi_int{DPI};
    string dpi_string{DPI};
    cout << "dpi int : " << dpi_int << endl;
    cout << "dpi string : " << dpi_string << endl;


    cout << "----- end -----" << endl;
    return 0 ;
}