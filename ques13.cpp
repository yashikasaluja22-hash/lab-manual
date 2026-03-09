#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a, b, c, root1 = 0, root2 = 0;
cout << "Enter a, b, c: ";
cin>>a>>b>>c;
float D = pow(b, 2) - 4*a*c;
if(D > 0){
    root1 = (-b + sqrt(D))/ 2*a;
    root2 = (-b - sqrt(D))/ 2*a;
    cout << "Roots are real and different\n";
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
}
else if(D == 0){
     root1 = -b / (2*a);
        cout << "Roots are real and equal\n";
        cout << "Root = " << root1;
}
else{
    cout << "Roots are complex\n";
}
return 0;
}