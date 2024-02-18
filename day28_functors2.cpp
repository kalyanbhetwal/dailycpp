#include <iostream>
#include <vector>
#include <algorithm>

struct Goblin{
    int health;
    Goblin(int h): health(h){}
    bool operator<(const Goblin&rhs) const{
        return this->health < rhs.health;
    }
};

int main(){
     std::vector<Goblin> goblins{
            Goblin(10),
            Goblin(5),
            Goblin(6) 
     };
     std::sort(begin(goblins), end(goblins));
}