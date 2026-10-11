/*
 *==================================================
 * 06.循环
 * =================================================
 */
#include <iostream>
using namespace std ;

int main(int argc, char *argv[])
{
    cout<<"----- begin -----"<<endl;

    for ( size_t i = 0 ; i <= 10 ; i++ )
    {
        cout << i << " " ;
    }
    cout << endl ;


    int arr1[]{1,2,3,4};

    int arr1Size = sizeof(arr1) / sizeof(arr1[0]) ;

    cout << "size : " << arr1Size << endl ;


    // auto
    for (auto x : arr1)
    {
        cout << x << endl ;
    }


    cout<<"----- end -----"<<endl;
    return 0 ;
}