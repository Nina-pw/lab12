#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    string a[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    cout << "You will get " << a[x] << " in this 261102.";
}