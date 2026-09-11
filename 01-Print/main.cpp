//
// Created by Zenos on 2026-09-10.
//

#include <iostream>
#include <string>

using namespace std ;

// argc  参数数量 argv命令行字符串列表
int main(int argc, char *argv[])
{
    cout<<"----- begin -----"<<endl;

    string num1,num2 ;

    cout<<"Enter num1 : "<<endl;
    cin >> num1 ;

    cout<<"Enter num2 : "<<endl;
    cin >> num2 ;

    int number1 = stoi(num1) ;
    int number2 = stoi(num2) ;


    cout<<"num1 : "<<number1<<endl;
    cout<<"num2 : "<<number2<<endl;

    if ( argc != 1 )
    {
        cout << " You input " << argc << " arguments" << endl ;
        for (int i = 0; i < argc; ++i)
        {
            cout <<"arg" << i << " : " << argv[i] << endl ;
        }
    }


    return 0 ;
}