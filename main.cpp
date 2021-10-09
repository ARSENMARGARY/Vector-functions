#include <iostream>
#include "class_prototype.h"
using namespace std;


int main()
{
    Vector My_Vector;
    My_Vector.push_back(4);
    My_Vector.push_back(2);
    My_Vector.push_back(9);
    My_Vector.push_back(12);
    My_Vector.push_back(-3);
    // cout << My_Vector.at(2);
    // if(My_Vector.empty_vector())
    // {
    //     cout << "yes" << endl;
    // }
    // else{
    //     cout << "no" << endl;
    // }
    //My_Vector.insert(8,2);
    cout << My_Vector.at(0) << endl;
    cout << My_Vector.at(1) << endl;
    cout << My_Vector.at(2) << endl;
    cout << My_Vector.at(3) << endl;
    cout << My_Vector.at(4) << endl;
    My_Vector.erase(2); 
     cout << My_Vector.at(0) << endl;
    cout << My_Vector.at(1) << endl;
    cout << My_Vector.at(2) << endl;
    cout << My_Vector.at(3) << endl;
    cout << My_Vector.at(4) << endl;
    cout << endl ;
    cout << My_Vector.size();
    
    return 0;
}