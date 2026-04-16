#include <iostream>
using namespace std;
class Vehicle{
    private:
    string brand;
    int year;
    public:
    void brand1(string r, int a){
        brand = r;
        year = a;
    }
    void output1(){
       cout << "Brand of this car is " << brand << endl;;
        cout << "year: " << year << endl; 
    }
};
class Car : public Vehicle{
    private:
    string model;
    int seating;
    public:
    void model1(string b, int c){
        model = b;
        seating = c;
    }
    void output2(){
       cout << "model of this car is " << model << endl;
        cout << "seating capacity: " << seating << '\n';
    }
};
int main(){
Car c1;
c1.brand1("mercedes", 2012);
c1.output1();
c1.model1("UVW12", 6);
c1.output2();
return 0;
}