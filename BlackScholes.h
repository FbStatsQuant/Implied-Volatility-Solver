#ifndef BLACK_SCHOLES_H
#define BLACK_SCHOLES_H

double norm_cdf(double x);
double blackScholesPrice(
    bool isCall,
    double S,      // Spot price
    double K,      // Strike
    double r,      // Risk-free rate
    double T,      // Time to maturity
    double sigma   // Volatility
);

#endif
