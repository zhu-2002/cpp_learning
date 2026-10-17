/*===================================================
 * Cpp在线参考手册:https://cppreference.cn/
 *===================================================
 * 15.类和对象学习.
 * 在栈上和在堆上创建对象的区别
 *==================================================
 */

#include <iostream>
using namespace std ;

const double PI = 3.14;

class Circle
{
public:
    static int number;

    Circle()
    {
        number++;
        radius = 1.0;
        cout << "Construction default number : " << number <<endl;
        cout << "Construction radius : " << radius <<endl;

    }

    Circle(double r)
    {
        number++;
        radius = r ;
        cout << "Construction default number : " << number <<endl;
        cout << "Construction radius : " << radius <<endl;
    }

    ~Circle()
    {
        number--;
        cout << "Destruction default number : " << number <<endl;
        cout << "Destruction radius : " << radius <<endl;
    }

    double area()
    {
        return PI * radius * radius ;
    }

private:
    double radius{0.0};
};


// 初始化类的静态成员变量
int Circle::number = 0;


int main(int argc, char* argv[])
{
    cout << "==================== begin ====================" << endl;
    // 创建一个在栈上的对象
    Circle circle1 ;
    Circle circle2(2.0) ;

    Circle::number ++ ;
    cout << "Circle1::number :" << Circle::number << endl;
    cout << "Circle2::area :" << circle2.area() << endl;


    // 堆上创建对象
    Circle *circle3 = new Circle(3.0);
    cout << "circle3::area :" << circle3->area() << endl;

    // 删除指针
    delete circle3; // 清空指针指向的变量内存
    circle3 = nullptr; // 将指针置空，防止野指针

    cout << "===================== end =====================" << endl;

    return 0;
}
