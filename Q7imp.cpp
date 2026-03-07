#include <iostream>
#include <algorithm> // to use max_element
using namespace std;
int main() {
int scores[3];

for(int i = 0; i < 3; i++){
    cin >> scores[i];
};
int maxscore = *max_element(scores, scores + 3);
for(int i = 0; i < 3; i++){
    if(scores[i] == maxscore){
        cout << "player " << i + 1 << " ";
    }
}
cout << "wins!!";
return 0;
}
