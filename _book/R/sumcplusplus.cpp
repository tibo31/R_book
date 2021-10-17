#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double sum_rcpp(NumericVector x) {
  double res = 0;
  int n = x.size();
  
  for(int i = 0; i < n; i++) {
    res = res + x(i);
  }
        
  return res;
}

