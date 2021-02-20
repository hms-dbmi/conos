#include "include/largeVis.h"
#include <Rcpp.h>

#ifdef _OPENMP
  #include <omp.h>
#endif

using namespace Rcpp;

#ifdef _OPENMP
void checkCRAN(Rcpp::Nullable<Rcpp::IntegerVector> threads) {
	if (threads.isNotNull()) {
		int nthreads = IntegerVector(threads)[0];
		if (nthreads > 0) omp_set_num_threads(nthreads);
	}
}
#endif

// [[Rcpp::export]]
bool checkBits() {
	if (sizeof( vertexidxtype ) == 8) return true;
	else return false;
}

// [[Rcpp::export]]
bool checkOpenMP() {
#ifdef _OPENMP
	return true;
#else
	return false;
#endif
}
