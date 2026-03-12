#include <iostream>
#include <algorithm>
using namespace std;
int main() {
double price[10] = {0};
for(int i = 0; i < 10; i++){
    cout << "Price " << (i+1) << " ";
    cin>>price[i];
}
double maxprice = *max_element(price, price + 10);
cout << "Maximum price = " << maxprice;
//in exam display the array also, ver important

return 0;
}