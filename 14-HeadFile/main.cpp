/*===================================================
 * Cpp在线参考手册:https://cppreference.cn/
 *===================================================
 * 15.多文件编译.
 * clang++ ./main.cpp ./yourfile.cpp -o main
 *==================================================
 */

#include <iostream>
#include "yourfile.h"
using namespace std ;


int main(int argc, char *argv[])
{
    cout<<"==================== begin ===================="<<endl;

    cout << add(1,2) << endl;

    cout<<"===================== end ====================="<<endl;
    return 0 ;
}