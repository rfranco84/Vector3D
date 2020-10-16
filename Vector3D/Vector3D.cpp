/* Vector3D.cpp is a project that allows one to make Vector3 objects, which represent mathematical 3D Vectors and allow for 
* Vector calculations. 
* By: Ricardo Franco, 10/14/2020
* 
* Use main() to test Vector3. 
* Vector3 is a class that allows the creation of 3D vectors and does basic vector calculations. Initialize using x, y, z 
* Cartesian coordinates.
*/ 

#include <iostream>
#include "Vector3.h"
using namespace std;

int main()
{
    
    Vector3 v(0.5, 0, 0);
    Vector3 u(1, 0, 0);

    Vector3 w = v - u;
    cout << w.getMagnitude();
    

    cout << Vector3::zero.getMagnitude();
}
