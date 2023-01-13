#include "polynomial.h"
#include <string>
#include <iostream>

using namespace std;

ostream &operator<<(ostream &out, const Polynomial &number){
    Polynomial:: Term *copy = number.head;
    while(copy -> next != number.head){
        out << copy -> coeff << "x^" << copy -> power;
        if(copy -> next != number.head){
            out << " + ";
        }
    }
    return out;
}

//constructor from nothing
Polynomial:: Polynomial( ){
    size = 0;
    head = new Term;
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
    Term* copy = head;
    while(copy -> next != head){
        if(copy -> power == power){
            if(newCoefficient == 0){
                remove(copy);
            }else{
                copy -> coeff = newCoefficient;
            }
            return true;
        }
        if(copy -> next -> power < power && (copy -> prev -> power > power || copy -> prev == head)){
            Term* item = new Term;
            insert(item, newCoefficient, power);
            return true;
        }
        copy = copy -> next;
    }
    return false; // base case
}

//math
// Arithmetic operators
//add polys together and return a new poly
Polynomial Polynomial:: operator+( const Polynomial& p ) const{
    Term* copy1 = this -> head;
    Term* copy2 = p.head;

    while (copy2 != p.head){

    }
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
    pos -> coeff = newCoefficient;
    pos -> power = power;

    Term *copy = head;
    Term* hold = head -> next;
    while(copy -> next != head){
        if(copy -> next -> power < power){

            size++;
            return true;
        }
        copy = copy -> next;
        hold = hold -> next;
    }
    return false; // base case
}
//remove a base from the poly
bool Polynomial:: remove( Term* pos ){
    Term* copy = head;
    if(copy -> next == head){
        return false; // base case
    }
    while(copy -> next != pos){
        copy = copy -> next;
    }
    copy -> next -> prev = copy -> prev;
    copy -> prev -> next = copy -> next;
    delete pos;
    size--;
    return true;
}
