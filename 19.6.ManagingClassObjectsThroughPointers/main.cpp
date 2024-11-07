#include <iostream>
//#include "constants.h" // you can put even more than once now because we made a guard (remember, #ifndef)
#include "cylinder.h"

// Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o
// (freeCodeCamp.org)

int main(){

    Cylinder cylinder1(3,4);

    cylinder1.volume();

    // Managing a stack object through pointers -> there are two ways
    Cylinder* p_cylinder = &cylinder1;  // one of them is if you have a pointer that points to a stack object

    //std::cout << "volume is : " << (*p_cylinder).volume() << std::endl;   // ugly syntax
    std::cout << "volume is : " << p_cylinder->volume() << std::endl;   // nice syntax

    // Create a cylinder heap object through the new operator
    Cylinder* p_cylinder2 = new Cylinder(2,3);      // Heap     
                        // and second way is using pointers to allocate objects on heap and pointing them with pointer
    
    std::cout << "Volume of p_cylinder2(2,3) : " << p_cylinder2->volume() << std::endl;

    std::cout << "base_radius of cylinder2 : " << p_cylinder2->get_base_radius() << std::endl;

    delete p_cylinder2;     

    return 0;
}