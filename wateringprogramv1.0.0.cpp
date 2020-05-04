#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;
void main {
    auto start = high_resolution_clock::now();
    auto end = high_resolution_clock::now();
    cout << duration_cast<seconds>(end-start).cout() << endl;


}