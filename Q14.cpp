#include <iostream>
using namespace std;
int main(){
int choice;
do{
    choice = 0;
    cout << "1.Addition\n";
    cout << "2.Subtraction\n";
    cout << "3.Division\n";
    cout << "4.Multiply\n";
    cout << "5.Exit\n";
    cout << "Enter choice(1-5): ";
    cin>>choice;

    int a,b;
    if(choice >= 1 && choice <= 4){
    cout << "Enter two numbers: \n";
    cin>>a>>b;
    }
    switch(choice){
        case 1:
        cout << (a + b);
        break;
  case 2:
        cout << (a - b);
        break;
    case 3:
      cout << (a * b);
        break;
     case 4:
       cout << (a / b);
        break;
    case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice\n";  
}
}
while(choice != 5);
return 0;
}