// A Polynomial class                                  
#ifndef POLYNOMIAL_H                                   
#define POLYNOMIAL_H
 
#include <iostream>
#include <string>

using namespace std;

class Polynomial {
    // Overloaded <<: prints Cn * x^n + Cn-1 * X^n-1 + ... C1 * X + C0
    friend ostream& operator<<( ostream &output, const Polynomial& p );
    // Constructor: the default is a 0-degree polynomial with 0.0 coefficient
public:
    // Member functions
    Polynomial( );
    Polynomial( const Polynomial& p );
    ~Polynomial( );
    int degree( ) const; // returns the degree of a polynomial
    double coefficient( const int power ) const; 
                 // returns the coefficient of the x^power term.
    bool changeCoefficient( const double newCoefficient, const int power );
                 // replaces the coefficient of the x^power term
    // Arithmetic operators
    Polynomial operator+( const Polynomial& p ) const;
    Polynomial operator-( const Polynomial& p ) const;
    // Boolean comparison operators
    bool operator==( const Polynomial& p ) const;
    bool operator!=( const Polynomial& p ) const;
    // Assignment operators
    Polynomial& operator=( const Polynomial& p );
    Polynomial& operator+=( const Polynomial& p );
    Polynomial& operator-=( const Polynomial& p );
private:
    struct Term {     // a term on the sparce polynomial
        double coeff;   // the coefficient of each term
        int power;      // the degree of each term
        Term *prev;     // a pointer to the previous higher term
        Term *next;     // a pointer to the next lower term
    };
    int size;         // # terms in the sparce polynomial
    Term *head;       // a pointer to the doubly-linked circular list of
                    // sparce polynomial
    bool insert( Term* pos, const double newCoefficient, const int power );
    bool remove( Term* pos );
};
#endif