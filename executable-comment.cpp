#include <iostream>
using namespace std;
#define EXECUTE_CODE
int main() {
    #ifdef EXECUTE_CODE
    cout << "This code will be executed." <<endl;
    #endif

    return 0;
}
