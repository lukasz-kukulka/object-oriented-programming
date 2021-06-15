#include "Cargo.hpp"

Cargo& Cargo::operator+=(const uint16_t value){
    amount_ += value;
    return *this;
}

Cargo& Cargo::operator-=(const uint16_t value){
    amount_ -= value;
    return *this;
}