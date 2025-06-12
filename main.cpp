#include <iostream>
#include <iomanip>
#include <string>
#include "ImpliedVolatility.h"

int main() {
    double S, K, r, T, marketPrice;
    std::string type;

    std::cout << "Enter option type (call/put): ";
    std::cin >> type;

    std::cout << "Spot price (S): ";
    std::cin >> S;

    std::cout << "Strike price (K): ";
    std::cin >> K;

    std::cout << "Risk-free rate (r): ";
    std::cin >> r;

    std::cout << "Time to maturity (T in years): ";
    std::cin >> T;

    std::cout << "Market option price: ";
    std::cin >> marketPrice;

    bool isCall = (type == "call");

    try {
        double iv = impliedVolatility(isCall, marketPrice, S, K, r, T);
        std::cout << std::fixed << std::setprecision(6);
        std::cout << "Implied Volatility: " << iv << std::endl;
    } catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
    }

    return 0;
}


// g++ -std=c++20 -o iv_solver main.cpp BlackScholes.cpp ImpliedVolatility.cpp
