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
    // 本地变量、函数调用
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
    pNum1 = new int{13} ;

    cout << *pNum1 << endl;


    // 删除且一定要指向为null
    delete pNum1 ;      // 放弃控制
    pNum1 = nullptr ;   // 清空指针


    // 堆上的数组
    double *pArray{new double[13]{1.0,3.1}} ;

    for (size_t i = 0; i < 13 ; ++i)
    {
        cout << "index: "<< i << " ; value: " << pArray[i] << endl;
    }

    double arr[13]{12,1.2,1.4};

    cout << "arr sizeof: " << size(arr)<< endl;

    // 删除指针
    delete[] pArray ;
    pArray = nullptr ;


    cout<<"===================== end ====================="<<endl;
    return 0 ;
}