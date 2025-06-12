#include "ImpliedVolatility.h"
#include "BlackScholes.h"
#include <cmath>
#include <stdexcept>

double impliedVolatility(bool isCall, double marketPrice, double S, double K, double r, double T, double tol, int maxIter) {
    double low = 0.0001;
    double high = 5.0;
    double mid = 0.0;

    for (int i = 0; i < maxIter; ++i) {
        mid = 0.5 * (low + high);
        double price = blackScholesPrice(isCall, S, K, r, T, mid);
        double diff = price - marketPrice;

        if (std::fabs(diff) < tol) return mid;

        if (diff > 0) high = mid;
        else          low = mid;
    }

    throw std::runtime_error("Implied volatility not found within tolerance.");
}
