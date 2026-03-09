#include <iostream>
using namespace std;
int main(){
int n;
cout  << "Enter a number: ";
cin >> n;
for(int i = 2; i < n; i++){
if(n % i == 0){
    cout << "Not Prime\n";
    return 0;
}
}
cout << "Prime";

}
/*return 0; has two purposes.

1️⃣ It immediately stops the program

Inside the loop:

if(n % i == 0){
    cout << "Not Prime";
    return 0;
}

1. If the number gets divisible by i, we already know it is not prime.
So return 0; ends the program immediately. The loop and the rest of the code will not run anymore.

2. It tells the operating system the program ended successfully
main() returns an integer value.
int main()
return 0; means:
The program finished successfully without errors.*/
