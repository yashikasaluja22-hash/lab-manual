#include <iostream>
#include <algorithm>  // for min_element
using namespace std;
int main() {
float temp[30] = {0};
 cout << "Enter temperatures for 30 days:\n";
    for(int i = 0; i < 30; i++)
    {
        cout << "temp " << (i+1) << " ";
        cin >> temp[i];
    }
float mintemp = *min_element(temp, temp + 30);
 cout << "Minimum temperature of the month = " << mintemp;
return 0;
}
