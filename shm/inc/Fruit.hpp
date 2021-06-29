#pragma once

#include "shm/inc/Cargo.hpp"

class Fruit : private Cargo {
public:
    Fruit(const std::string& name, size_t amount, size_t basePrice);

    //override from Cargo class
    Fruit& operator--();

    std::size_t getPrice() override;
    std::string getName() const override { return name_; }
    std::size_t getAmount() const override { return amount_; }
    std::size_t getBestPrice() const override{ return basePrice_; }

private:
    size_t rottenTime { 10 };
};
