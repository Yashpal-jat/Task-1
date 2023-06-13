#include <iostream>
using namespace std;

int main() {
    int i = 0;

    loop:
    i++;

    if (i <= 3) {
        cout << "named loop executing..." << i <<endl;
        goto loop;
    }

    return 0;
}
