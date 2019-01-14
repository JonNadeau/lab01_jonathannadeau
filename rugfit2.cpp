// rugfit2.cpp - calculates fit of rug to a floor
// Jon Nadeau, 1/14/19

#include <iostream>
//#include <rugfit1.h>
using namespace std;

// definition of class Rectangle
// (usually would be in a separate file named rectangle.h)
class Rectangle {


public:
    // DECLARE a parameterized constructor to set the width and length
    Rectangle(double w, double l){
        width = w;
        length = l;
    } 
    // DECLARE accessors to get the width and length
    double getWidth(){
        return width;
    }
    double getLength(){
        return length;    
    }
    // DECLARE mutators to set the width and lengtg
    void setWidth(double newWidth){
        width = newWidth;    
    }
    void setLength(double newLength){
        length = newLength;    
    }
    // DECLARE (const) METHOD TO RETURN AREA OF RECTANGLE
    double area() const{
        return width * length;    
    }

private:
    double width, length;

}; // end of class definition

// implementation of class Rectangle here to main function
// (usually would be in a separate file named rectangle.cpp,
// and this separate file would #include "rugfit2.h")

// IMPLEMENT CONSTRUCTOR USING INITIALIZATION LIST


// IMPLEMENT ACCESSORS and MUTATORS


// IMPLEMENT THE AREA METHOD HERE




// change main where instructed in UPPER CASE below
// (usually would #include "rectangle.h" before main)
int main() {
    
    double rugWidth, rugLength, floorWidth, floorLength;
    Rectangle rug(0,0); // will be updated below

    // create Rectangle named "floor" for sizes input by user
    cout << "enter width and length of floor: ";
    cin >> floorWidth >> floorLength;
    const Rectangle floor(floorWidth, floorLength); // note: const object

    // RESET Rectangle NAMED "rug" FOR SIZES INPUT BY USER
    cout << "enter width and length of rug: ";
    cin >> rugWidth >> rugLength;
    rug.setWidth(rugWidth);
    rug.setLength(rugLength);

    
    
    // DO NOT CHANGE ANYTHING BELOW (if you do, you will earn 0 points,
    // no matter what submit.cs says is your "tentative" score)

    // print results
    cout << "floor area: " << floor.area() << endl;
    cout << "rug area: " << rug.area() << endl;
    double leftover = rug.area() - floor.area();
    cout << "leftover rug area: " <<
        (leftover > 0 ? leftover : 0) << endl;
    cout << "empty floor area: " <<
        (leftover < 0 ? -leftover : 0) << endl;

    return 0;
}
