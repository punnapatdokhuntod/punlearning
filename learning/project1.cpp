#include <iostream>
using namespace std ;
class Human {
    private: 
    int age ;
    public: 
    string name ;
    void sleep(){
        cout << "This person is sleeping.";
    }
};
int main() {
    Human human1 ;
    cin >> human1.name ;
    cout<< human1.name ;
    return 0;
}
