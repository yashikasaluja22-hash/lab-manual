#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
for(int i = 1; i <= N; i++){
if(i % 3 == 0) cout << "BUZZ ";
if(i % 5 == 0) cout << "FUZZ";
if(i % 3 != 0 && i % 5 != 0) cout << i;
cout << endl;
}

return 0;
}