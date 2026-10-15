/*===================================================
 * Cpp在线参考手册:https://cppreference.cn/
 *===================================================
 * 13.cpp标准字符串库<string>.
 *==================================================
 */

#include <iostream>
#include <string>
using namespace std ;


int main(int argc, char *argv[])
{
    cout<<"==================== begin ===================="<<endl;
    string a{"hello"} ;
    string b{"world"} ;
    string hello{a + "!" + b} ;

    cout << hello << endl;

    cout<<"===================== end ====================="<<endl;
    return 0 ;
}