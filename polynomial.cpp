#include "polynomial.h"
#include <string>
#include <iostream>

using namespace std;

//constructors
Polynomial:: Polynomial( ){

}
Polynomial:: Polynomial( const Polynomial& p ){
    
}

//destructor
Polynomial:: ~Polynomial( ){

}

//get the highest degree of the poly
int Polynomial:: degree( ) const {


}

//get the coeffient of the given power in the poly
double Polynomial:: coefficient(const int power) const {

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


}
//remove a base from the poly
bool Polynomial:: remove( Term* pos ){


}