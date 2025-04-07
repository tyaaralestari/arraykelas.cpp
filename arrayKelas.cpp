#include <iostream>
using namespace std;

int main() {
    string menu[3] = {
        "Indomi goreng plus telor.",
        "Indomi goreng plus telor, Ayam Bacem Sambal mata.",
        "Indomi goreng plus telor, Ayam Bacem Sambal mata, Lontong Sayur Lauk Haruan."
    };

    for(int i = 0; i < 3; i++) {
        cout << menu[i] << endl;
    }

    return 0;
}
