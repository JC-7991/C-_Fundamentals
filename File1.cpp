/*Things to brush up on:
C++: abstraction, inheritance, constructors, classes, structs, keywords, method overloading vs method overriding
Multi-threading, deadlocks
Bitwise manipulations
*/

using namespace std;
#include <iostream>

class Test{

   public:

        Test(){
            std::cout<<"\n Constructor executed";
        }   
 
        ~Test(){
            std::cout<<"\n Destructor executed";
        }

};

main(){
    
    Test t;   
    return 0;

}