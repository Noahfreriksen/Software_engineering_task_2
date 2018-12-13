//
// Created by Gebruiker on 13-12-2018.
//

#include <stdexcept>
#include "Calculator.h"


int Calculator::add(int a, int b) {
    return a+b;
}

double Calculator::add(double a, double b) {
    return a+b;
}

int Calculator::divide(int a, int b) {
    if (b==0){
        throw std::logic_error("Can't divide by 0");
    }
    else{
        return a/b;
    }
}

double Calculator::divide(double a, double b) {
    if (b==0){
        throw std::logic_error("Can't divide by 0");
    }
    else{
        return a/b;
    }
}

int Calculator::multiply(int a, int b) {
    return a*b;
}

double Calculator::multiply(double a, double b) {
    return a*b;
}

int Calculator::subtract(int a, int b) {
    return a-b;
}

double Calculator::subtract(double a, double b) {
    return a-b;
}

int Calculator::square(int a) {
    return a*a;
}

double Calculator::square(double a) {
    return a*a;
}