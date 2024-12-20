#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){

    string Grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    int numGrade = sizeof(Grade)/sizeof(Grade[0]);
    cout << "Press Enter 3 times to reveal your future." << endl;
    
    for (int i = 0; i < 3; i++) {
        cin.get();
    }
    
    srand(time(0));
    int realGrade = rand()% numGrade;
    cout << "You will get " << Grade[realGrade] << " in this 261102.";


    return 0;
}