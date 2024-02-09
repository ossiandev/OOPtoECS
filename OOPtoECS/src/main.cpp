#include <iostream>
#include <string>

class Dancer {
private:
    std::string name;
    int energy;
    std::string mood;

public:
    Dancer(std::string name) {
        this->name = name;
        this->energy = 100;
        this->mood = "happy";
    }

    void dance() {
        if (energy > 10) {
            energy -= 10;
            mood = "excited";
            std::cout << name << " is dancing! Energy: " << energy << ", Mood: " << mood << std::endl;
        }
        else {
            std::cout << name << " is too tired to dance." << std::endl;
        }
    }

    void rest() {
        energy += 20;
        if (energy > 100) {
            energy = 100;
        }
        mood = "relaxed";
        std::cout << name << " is resting. Energy: " << energy << ", Mood: " << mood << std::endl;
    }
};

int main() {
    Dancer dancer("Alex");
    dancer.dance();
    dancer.rest();
}
