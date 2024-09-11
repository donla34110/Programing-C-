#include <iostream>
using namespace std;


int main (){
    int num;

    cout << "กรุณาใส่ตัวเลข";
    cin >> num;

    if (num % 2 == 0){
        cout << num << "เป็นเลขคู่" << endl;
    }
    else{
        cout << num <<  "เป็นเลขคี่" << endl;
    }


    return 0;





}