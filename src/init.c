#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME:
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP _rcpp_module_boot_xts(void);

static const R_CallMethodDef CallEntries[] = {
    {"_rcpp_module_boot_xts",   (DL_FUNC) &_rcpp_module_boot_xts,   0},
    {NULL, NULL, 0}
};

void R_init_RcppAnnoy(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
