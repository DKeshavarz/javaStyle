//Recurtion exercise 3: binerysearch
#include <iostream>
#include <algorithm>

int binerySearch(int *p , int start , int end , int key)
{

    if(start >= end )
        return -1 ;


    int mid { (start + end ) / 2 } ;

    if(p[mid] == key)
        return mid ;
    else if(p[mid] > key)
        return binerySearch(p , start ,mid , key) ;
    else if(p[mid] < key)
        return binerySearch(p, mid+1 , end , key) ;
}

int main ()
{
    int arr[] {1,3,4,2,5,6,55,35} ;
    int len {sizeof(arr)/sizeof(arr[0])} ;
    
    std::sort(arr,arr+len) ; //we should sort thr array befor binery search!!

    std::cout << binerySearch(arr , 0 , len , 1  ) << '\n' 
              << binerySearch(arr , 0 , len , 55 ) << '\n' 
              << binerySearch(arr , 0 , len , 45  ) ;

    cout << "hello world!\n";
    }