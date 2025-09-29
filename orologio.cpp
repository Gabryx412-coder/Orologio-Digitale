#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    int ore, minuti, secondi;

    cout << "Inserisci l'ora iniziale (HH MM SS): ";
    cin >> ore >> minuti >> secondi;

    while (true) {
        system("clear"); // su Windows usa "cls"
        cout << setfill('0') << setw(2) << ore << ":"
             << setfill('0') << setw(2) << minuti << ":"
             << setfill('0') << setw(2) << secondi << endl;

        this_thread::sleep_for(chrono::seconds(1));

        secondi++;
        if (secondi == 60) {
            secondi = 0;
            minuti++;
        }
        if (minuti == 60) {
            minuti = 0;
            ore++;
        }
        if (ore == 24) {
            ore = 0;
        }
    }

    return 0;
}
