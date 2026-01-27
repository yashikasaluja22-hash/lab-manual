#include <iostream>
#include <math.h>//to compute area of a circle
using namespace std;
#define PI  3.1415
int main() {
double radius, area;
cout << "Enter radius: ";
cin >> radius;
cout << "Area is: " << (PI * pow(radius, 2));
return 0;
}