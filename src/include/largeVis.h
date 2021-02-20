#ifndef _LARGEVIS
#define _LARGEVIS
//#ifdef _WIN32
//#define ARMA_32BIT_WORD
//#endif
#include <RcppArmadillo.h>
#include <RcppEigen.h>
// copied from https://github.com/elbamos/largeVis
#ifdef _OPENMP
#include <omp.h>
#endif

#define NDEBUG 1

using namespace arma;
/*
 * Global types
 */
typedef double distancetype;
typedef double coordinatetype;

typedef sword vertexidxtype;
typedef sword edgeidxtype;
typedef uword iterationtype;

typedef unsigned int dimidxtype;
typedef unsigned int kidxtype;

#ifdef _OPENMP
void checkCRAN(Rcpp::Nullable<Rcpp::IntegerVector> threads);
#endif

#endif
