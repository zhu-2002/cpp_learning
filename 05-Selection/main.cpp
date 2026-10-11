/*===================================================
 * Cpp在线参考手册:https://cppreference.cn/
 *==================================================
 * 05.选择分支语句
 * =================================================
 */
#include <iostream>
using namespace std ;

int main(int argc, char *argv[])
{
    cout<<"==================== begin ===================="<<endl;

    /*
     *if-else
     *
     *
    int score{0} ;
    cin >> score ;

    if ( score >= 90 )
    {
        cout << "A " << endl ;
    }else if ( score >= 75){
        cout << "B " << endl ;
    }else if ( score >= 60 ){
        cout << "C " << endl ;
    }else
    {
        cout << "D " << endl ;
    }*/

    /*
     *switch
     *
     *int a,b;
    char op{' '};
    cin >> a >> op >> b ;
     switch (op){
    case '+' :
        cout << "a + b : " << a+b << endl ;
        break ;
    case '-' :
        cout << "a - b : " << a-b << endl ;
        break ;
    default:
        cout << "Illegal Input " << endl ;
        break ;

    }*/

    // 三目运算
    int x{0} ;
    cin >> x ;
    x%2 == 0 ? cout<< "Even" << endl : cout << "Odd" << endl ;

    int y{0} ;

    cin >> y ;
    string temperature = y > 24 ? "Hot":"Cool" ;
    cout << temperature <<  endl ;

    cout<<"===================== end ====================="<<endl;
    return 0 ;
}