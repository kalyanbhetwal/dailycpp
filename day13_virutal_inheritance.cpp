#include <iostream>
using namespace std;

struct Entity{
    int x{4}, y{5};
};
struct Warrior: virtual public Entity{

};
struct Goblin: virtual public Entity{

};
struct Player: public Goblin, Warrior{

};

int main(){
     Player p1;
     cout << p1.x<<'\n';
     cout << p1.y<<'\n';
}
