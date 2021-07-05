#pragma once

#include <cstddef>
#include <string>

class Cargo {
public:
    Cargo(const std::string& name, size_t amount, size_t basePrice);
    virtual ~Cargo() = default;

    std::string getName() const;
    size_t getAmount() const;
    size_t getBasePrice() const;

    virtual Cargo& operator+=(const size_t amount) = 0;
    virtual Cargo& operator-=(const size_t amount) = 0;
    virtual bool operator==(const Cargo& cargo) const = 0;
    virtual size_t getPrice() const = 0;

protected:
    const std::string name_; 
    size_t amount_ {};
    size_t basePrice_ {}; 
};
