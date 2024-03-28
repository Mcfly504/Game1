#include <iostream>
#include <string>

// Base Character class
class Character {
protected:
    std::string name;
    int health;

public:
    Character(const std::string& n, int h) : name(n), health(h) {}

    virtual void attack() = 0; // Pure virtual function for attacking

    void displayInfo() {
        std::cout << "Name: " << name << ", Health: " << health << std::endl;
    }
};

// Derived Warrior class
class Warrior : public Character {
public:
    Warrior(const std::string& n, int h) : Character(n, h) {}

    void attack() override {
        std::cout << "Warrior " << name << " attacks with a sword!" << std::endl;
    }
};

// Derived Mage class
class Mage : public Character {
public:
    Mage(const std::string& n, int h) : Character(n, h) {}

    void attack() override {
        std::cout << "Mage " << name << " casts a fireball!" << std::endl;
    }
};

// Derived Archer class
class Archer : public Character {
public:
    Archer(const std::string& n, int h) : Character(n, h) {}

    void attack() override {
        std::cout << "Archer " << name << " shoots an arrow!" << std::endl;
    }
};

int main() {
    // Creating objects of different character types
    Warrior warrior("Conan", 100);
    Mage mage("Gandalf", 80);
    Archer archer("Legolas", 90);

    // Displaying information and attacking for each character
    warrior.displayInfo();
    warrior.attack();

    mage.displayInfo();
    mage.attack();

    archer.displayInfo();
    archer.attack();

    return 0;
}
