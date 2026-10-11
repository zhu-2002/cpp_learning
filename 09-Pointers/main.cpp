/*===================================================
 * Cpp在线参考手册:https://cppreference.cn/
 *===================================================
 * 09.指针、引用、左值与右值
 *==================================================
 */

#include <iostream>
using namespace std ;


int main(int argc, char *argv[])
{
    cout<<"==================== begin ===================="<<endl;

    // 栈
    // 函数调用
    // 变量的生命周期由scope决定
    int num{50} ;
    int *pNum = &num ;
    /* 注意：不要像下面这样写pNum
     *int *pNum ;
     *pNum = &num ;
     */
    cout << num << ": " << *pNum << endl;
    cout << &num << ": " << pNum << endl;

    // 堆
    // 运行时分配
    // 变量的生命周期完全由开发者决定，与scope无关
    // new/delete
    int *pNum1{nullptr} ;
    // 这个地址是固定的，我们将这个地址设置为一个数
    pNum1 = new int ;
    *pNum1 = 13 ;

    cout << *pNum1 << endl;


    // 删除且一定要指向为null
    delete pNum1 ;
    pNum1 = nullptr ;


    cout<<"===================== end ====================="<<endl;
    return 0 ;
}