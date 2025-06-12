#include "BlackScholes.h"
#include <cmath>

double norm_cdf(double x) {
    return 0.5 * std::erfc(-x / std::sqrt(2));
}

double blackScholesPrice(bool isCall, double S, double K, double r, double T, double sigma) {
    double d1 = (std::log(S / K) + (r + 0.5 * sigma * sigma) * T) / (sigma * std::sqrt(T));
    double d2 = d1 - sigma * std::sqrt(T);

    if (isCall)
        return S * norm_cdf(d1) - K * std::exp(-r * T) * norm_cdf(d2);
    else
        return K * std::exp(-r * T) * norm_cdf(-d2) - S * norm_cdf(-d1);
}
