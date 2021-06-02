#include <iostream>
using namespace std;

class LList;
class PersonNode;
typedef LList* LListPtr;
typedef PersonNode* PersonNodePtr;

class PersonNode{
private:
    double height;
    double age;
    double weight;
    PersonNodePtr next;
public:
    PersonNode(double init_height = 0, double init_age = 0, double init_weight = 0) : height(init_height), age(init_age), weight(init_weight), next(nullptr){}
    double get_height()const {return height;}
    double get_age()const {return age;}
    double get_weight() const {return weight;}

    //setters
    void set_next (PersonNodePtr next_node){next = next_node;}
    friend class LList;

    void operator + (const double num) {this->age += num;}

};

class LList{

};


int main() {

    return 0;
}
