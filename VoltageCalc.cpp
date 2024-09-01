#include <iostream>

using namespace std;

int main() {
    double millivolts;
    std::cout << "Enter the voltage in millivolts: ";
    std::cin >> millivolts;

    double volts = millivolts / 1000.0;;
    std::cout << "The voltage in volts is: " << volts << std::endl;

    return 0;
}