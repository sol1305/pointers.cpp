#include <iostream>
using namespace std;
int main(){
    int* pPointer = nullptr;
    int integerVar = 5 ;
    pPointer = &integerVar;

    cout << "integerVar : " << integerVar << endl;
    cout << "address of the integerVar : " << &integerVar << endl;
    cout << "pPointer : " << pPointer << endl;
    cout << "address of pPointer" << &pPointer << endl;


return 0;    


}