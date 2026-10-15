/*===================================================
 * Cpp在线参考手册:https://cppreference.cn/
 *===================================================
 * 10.引用
 *==================================================
 */

#include <iostream>
using namespace std ;


int main(int argc, char *argv[])
{
    cout<<"==================== begin ===================="<<endl;
    // 引用不可改变为其他值的引用
    // 不需要解引用就可以读写数据
    // 必须要初始化
    // &相当于 T *const 指针不可变，数据可变

    double value{13.13} ;
    double &refValue{value} ;
    double *pValue{&value} ;

    cout << " value: " << value << endl ;
    cout << " refValue: " << refValue << endl ;
    cout << " pValue: " << *pValue << endl ;

    // 指针修改value
    *pValue = 12 ;
    cout << " value: " << value << endl ;
    cout << " refValue: " << refValue << endl ;
    cout << " pValue: " << *pValue << endl ;

    // 引用修改value
    refValue = 14 ;
    cout << " value: " << value << endl ;
    cout << " refValue: " << refValue << endl ;
    cout << " pValue: " << *pValue << endl ;



    double n{1.4} ;
    double m{1.5};
    // 数据不可变，指针可变
    double const* p1{&n} ;
    // 指针不可变，数据可变
    double *const p2{&n} ;

    cout << "p1 address: " << p1 << "\t p1 : " << *p1 << endl;
    // 数据不可变 error: *p1 = 1.6 ;
    p1 = &m ;
    cout << "p1 address: " << p1 << "\t p1 : " << *p1 << endl;

    cout << "p2 address: " << p2 << "\t p2 : " << *p2 << endl;
    // 指针不可变 error: p2 = &m ;
    *p2 = 1.6 ;
    cout << "p2 address: " << p2 << "\t p2 : " << *p2 << endl;


    cout<<"===================== end ====================="<<endl;
    return 0 ;
}