#include<iostream>

using namespace std;

struct Point2D{
    int x,y;
};
class Character{
    public:
        Character(Point2D& p): ref_home(p) {}
        ~Character(){}
    private:
        Point2D m_position;
        Point2D m_direction;
        Point2D& ref_home;
};

Point2D somePoint;
int main(void){
    Character test(somePoint);
    return 0;
}