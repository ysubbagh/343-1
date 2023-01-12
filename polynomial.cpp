#include "polynomial.h"
#include <string>
#include <iostream>

using namespace std;

ostream &operator<<(ostream &out, const Polynomial &number){
    
}

//constructor from nothing
Polynomial:: Polynomial( ){
    size = 0;
    head -> next = head;
    head -> prev = head;
    head -> coeff = 0;
    head -> power = 0;
}
//copy constructor from one polynomial to a new polynomial 
Polynomial:: Polynomial( const Polynomial& p ){
    this -> size = p.size;
    this -> head = p.head;
}

//destructor
Polynomial:: ~Polynomial( ){
    head -> prev = nullptr;
    while(head -> next != nullptr){
        head = head -> next;
        delete head -> prev;
    }
    delete head;
}

//get the highest degree of the poly
int Polynomial:: degree( ) const {
    if(head -> next == head){
        return -1; // base case
    }
    return head -> next -> power;
}

//get the coeffient of the given power in the poly
double Polynomial:: coefficient(const int power) const {
    Term* copy = head;
    while(copy -> next != head){
        if(copy -> power == power){
            return copy -> coeff;
        }
        copy = copy -> next;
    }
    return -1; // base case
}

//change the coeffient of the given power in the poly
bool Polynomial:: changeCoefficient( const double newCoefficient, const int power) {


}

//math
// Arithmetic operators
//add polys together and return a new poly
Polynomial Polynomial:: operator+( const Polynomial& p ) const{

}
//subtract a poly from another and return a new poly
Polynomial Polynomial:: operator-( const Polynomial& p ) const{

}
// Boolean comparison operators
//detrmine if 2 polys equal each other
bool Polynomial:: operator==( const Polynomial& p ) const{

}
//determine if 2 polys do not equal other
bool Polynomial:: operator!=( const Polynomial& p ) const{

}
// Assignment operators
//set a new value to a poly
Polynomial& Polynomial:: operator=( const Polynomial& p ){

}
//add a 
Polynomial& Polynomial:: operator+=( const Polynomial& p ){

}
Polynomial& Polynomial:: operator-=( const Polynomial& p ){

}

//insert a new base into the poly
bool Polynomial:: insert( Term* pos, const double newCoefficient, const int power ){
    Term* newNode; 
    Term* copy = head;
    while(copy != nullptr && copy -> power > power && copy -> next -> power < power){

    }
    return true;
}
//remove a base from the poly
bool Polynomial:: remove( Term* pos ){
    

}
