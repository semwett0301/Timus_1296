#include <iostream>

using namespace std;

int main() {
    int stages;
    cin >> stages;
    int gravitational_potential = 0;
    int max_potential = 0;
    for (int stage =0; stage < stages; stage++) {
        int p;
        cin >> p;
        gravitational_potential += p;

        if (gravitational_potential < 0) gravitational_potential = 0;
        if (max_potential < gravitational_potential) max_potential = gravitational_potential;
    }

    cout << max_potential;
    return 0;
}
