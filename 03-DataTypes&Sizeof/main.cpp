#include <iostream>
using namespace std ;

int main(int argc, char *argv[])
{
    cout<<"----- begin -----"<<endl;


    cout<<"Char Size: " << sizeof(char) << endl ;
    cout<<"Bool Size: " << sizeof(bool) << endl ;
    cout<<"Intger Size: " << sizeof(int) << endl ;
    cout<<"Float Size: " << sizeof(float) << endl ;
    cout<<"Double Size: " << sizeof(double) << endl ;
    cout<<"Long Size: " << sizeof(long) << endl ;
    cout<<"Long Long Size: " << sizeof(long long) << endl ;
    cout<<"Unsigned Long Size: " << sizeof(unsigned long) << endl ;
    // size_t是某种足够大的无符号整数类型
    // 64位上是unsigned long long ，32位上是unsigned long
    cout<<"Size_t Size: " << sizeof(size_t) << endl ;


    cout<<"Bool* Size: " << sizeof(bool *) << endl ;
    cout<<"Float* Size: " << sizeof(float *) << endl ;
    cout<<"Double* Size: " << sizeof(double *) << endl ;
    cout<<"Long* Size: " << sizeof(long *) << endl ;

    auto val1{12} ;
    auto val2{2.1f} ;

    // int
    std::cout << sizeof(val1) << endl ;
    // double
    std::cout << sizeof(val2) << endl ;

    cout<<"----- end -----"<<endl;
    return 0 ;
}