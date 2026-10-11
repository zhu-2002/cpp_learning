/*===================================================
 * Cpp在线参考手册:https://cppreference.cn/
 *==================================================
 * 04.位运算
 * =================================================
 */
#include <iostream>
using namespace std ;

int main(int argc, char *argv[])
{
    cout<<"==================== begin ===================="<<endl;

    int a{5} ;
    int b{3} ;

    int aAndB{a&b} ;
    cout<<"a & b = "<< aAndB <<endl;

    int aOrB{a|b} ;
    cout<<"a | b = "<< aOrB <<endl;

    int aXorB{a^b} ;
    cout<<"a ^ b = "<< aXorB <<endl;

    int x1{0},x2{1};
    cout << "~x1 :" << ~x1 << endl ;
    cout << "~x2 :" << ~x2 << endl ;

    // 左移三位
    int left{a<<b};
    cout << "left :" << left << endl ;
    // 右移三位
    int right{a>>b};
    cout << "right :" << right << endl ;

    cout<<"===================== end ====================="<<endl;
    return 0 ;
}