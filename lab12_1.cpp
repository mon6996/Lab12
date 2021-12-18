#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int i;
    string enter, grade[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    cout << "Press Enter 3 times to reveal your future.";
    for(int j = 0; j < 3; j++)
        getline(cin,enter);
    srand(time(0));
    i = rand()%9;
    cout << "You will get " << grade[i] << " in this 261102.";
    return 0;
}