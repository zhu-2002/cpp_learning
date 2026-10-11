/*==================================================
 * Cpp在线参考手册:https://cppreference.cn/
 *==================================================
 * 08.函数
 * =================================================
 */

#include <iostream>
using namespace std ;

// 函数声明
int factorial(int) ;

// 函数值传递、引用传递
int addAgePoint1(int);
int addAgePoint2(int &);




int main(int argc, char *argv[])
{
    cout<<"==================== begin ===================="<<endl;

    int number{3} ;

    // 函数调用
    cout<< "factorial : "<< factorial(number) << endl ;
    cout<< "addAgePoint1 : "<< addAgePoint1(number) << " number : "<< number << endl ;

    cout<< "addAgePoint2 : "<< addAgePoint2(number) << " number : "<< number << endl ;


    // lambda函数(匿名函数)
    // 值捕获：[a](){}、[=](){}
    // 引用捕获：[&a](){}、[&](){}
    auto func1 = []()
    {
        cout<< "This is lambda function" << endl ;
    };
    func1() ;

    
    int a{10} ;
    int b{12} ;
    // 值捕获
    auto func2 = [a]()
    {
        cout<< "func2 a : " << a << endl ;
    };
    func2() ;

    auto func3 = [=]()
    {
        cout<< "func3 a : " << a << endl ;
        cout<< "func3 b : " << b << endl ;
    };
    func3() ;


    // 引用捕获
    auto func4 = [&a]()
    {
        cout<< "func4 a : " << a++ << endl ;
    };

    func4() ;
    cout<< "after func4 a : " << a << endl ;


    
    auto func5 = [&]()
    {
        cout<< "func5 a : " << a++ << endl ;
        cout<< "func5 b : " << b++ << endl ;
    };

    func5() ;
    cout<< "after func5 a : " << a << endl ;
    cout<< "after func5 b : " << b << endl ;

    cout<<"===================== end ====================="<<endl;
    return 0 ;
}

// 函数创建
// n!
int factorial(int number)
{
    if ( number == 1 )
        return 1 ;
    return number*factorial(number-1);
}

// 引用传递
int addAgePoint1(int age )
{
    return ++age ;
}
int addAgePoint2(int &age )
{
    return ++age ;
}
