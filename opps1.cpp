//objects are entities in real world 
//class is the blue prints of these entities 
//for example in toyota company there would be a blue print
//of how their cars would look its the class while the car they made car1 car2 .. are obj.
//class can also be said groups of objects.

           //ACCESS MOFIERS 
           //PUBLIC:  can acess all proper..,fun of class inside and outside of class.
           //PRIVATE: can acess only inside class , you cannot acess it outside like in int main fun , by default class is private.
        //    PROTECTED: in inheritance concept , understand later....

#include <iostream>
#include <string>

using namespace std;

class Book {      //declear a class with the desired name
  public:      //Access Modifiers  
    //properties
    int id;
    string name;
    string author;
    string borrowed= "NO";
    string borrowed_by;

    //methods or member functions

    void change_borrower(string borrower_name){
         borrowed="YES";
         borrowed_by = borrower_name;
    }


};

int main(){


}