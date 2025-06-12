#ifndef IMPLIED_VOLATILITY_H
#define IMPLIED_VOLATILITY_H

double impliedVolatility(
    bool isCall,
    double marketPrice,
    double S,
    double K,
    double r,
    double T,
    double tol = 1e-6,
    int maxIter = 100
);

#endif
