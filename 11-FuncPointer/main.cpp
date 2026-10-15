/*===================================================
 * Cpp在线参考手册:https://cppreference.cn/
 *===================================================
 * 11.函数指针.
 *==================================================
 */

#include <iostream>
#include <string>
using namespace std ;


char encode(const char &param)
{
    return param + 2 ;
}
char decode(const char &param)
{
    return param - 2 ;
}

// 传入函数指针作为变量，完成函数回调
void change(string &str , char (*callbackFunction)(const char &))
{
    for (size_t i = 0; i < str.size(); ++i)
    {
        str[i] = callbackFunction((str[i])) ;
    }
}

int main(int argc, char *argv[])
{
    cout<<"==================== begin ===================="<<endl;

    string msg{"bb"} ;

    change(msg,encode);
    cout << "encode: " << msg << endl;

    change(msg,decode) ;
    cout << "decode: " << msg << endl;


    cout<<"===================== end ====================="<<endl;
    return 0 ;
}