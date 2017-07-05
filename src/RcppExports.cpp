// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// standard_to_matrix
arma::mat standard_to_matrix(arma::vec v);
RcppExport SEXP eulerr_standard_to_matrix(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(standard_to_matrix(v));
    return rcpp_result_gen;
END_RCPP
}
// standard_to_matrix2
arma::mat standard_to_matrix2(const arma::vec v);
RcppExport SEXP eulerr_standard_to_matrix2(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(standard_to_matrix2(v));
    return rcpp_result_gen;
END_RCPP
}
// matrix_to_standard
arma::vec matrix_to_standard(const arma::mat m);
RcppExport SEXP eulerr_matrix_to_standard(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_to_standard(m));
    return rcpp_result_gen;
END_RCPP
}
// intersect_conic_line
arma::mat intersect_conic_line(const arma::mat A, const arma::vec l);
RcppExport SEXP eulerr_intersect_conic_line(SEXP ASEXP, SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(intersect_conic_line(A, l));
    return rcpp_result_gen;
END_RCPP
}
// split_conic
arma::mat split_conic(const arma::mat A);
RcppExport SEXP eulerr_split_conic(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(split_conic(A));
    return rcpp_result_gen;
END_RCPP
}
// intersect_conics
arma::mat intersect_conics(const arma::mat A, const arma::mat B);
RcppExport SEXP eulerr_intersect_conics(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(intersect_conics(A, B));
    return rcpp_result_gen;
END_RCPP
}
// adopt
arma::umat adopt(arma::mat points, arma::mat ellipses, arma::uword n, arma::uword i, arma::uword j);
RcppExport SEXP eulerr_adopt(SEXP pointsSEXP, SEXP ellipsesSEXP, SEXP nSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type points(pointsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ellipses(ellipsesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type i(iSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(adopt(points, ellipses, n, i, j));
    return rcpp_result_gen;
END_RCPP
}
// ellipse_segment
double ellipse_segment(arma::vec v, arma::vec p0, arma::vec p1);
RcppExport SEXP eulerr_ellipse_segment(SEXP vSEXP, SEXP p0SEXP, SEXP p1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type v(vSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type p0(p0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type p1(p1SEXP);
    rcpp_result_gen = Rcpp::wrap(ellipse_segment(v, p0, p1));
    return rcpp_result_gen;
END_RCPP
}
// intersect_ellipses
arma::mat intersect_ellipses(const arma::vec par);
RcppExport SEXP eulerr_intersect_ellipses(SEXP parSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type par(parSEXP);
    rcpp_result_gen = Rcpp::wrap(intersect_ellipses(par));
    return rcpp_result_gen;
END_RCPP
}
// return_intersections
arma::vec return_intersections(const arma::vec par);
RcppExport SEXP eulerr_return_intersections(SEXP parSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type par(parSEXP);
    rcpp_result_gen = Rcpp::wrap(return_intersections(par));
    return rcpp_result_gen;
END_RCPP
}
// venneuler_stress
double venneuler_stress(const arma::vec areas, const arma::vec fit);
RcppExport SEXP eulerr_venneuler_stress(SEXP areasSEXP, SEXP fitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type areas(areasSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type fit(fitSEXP);
    rcpp_result_gen = Rcpp::wrap(venneuler_stress(areas, fit));
    return rcpp_result_gen;
END_RCPP
}
// loss_final
double loss_final(const arma::vec par, const arma::vec areas);
RcppExport SEXP eulerr_loss_final(SEXP parSEXP, SEXP areasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type areas(areasSEXP);
    rcpp_result_gen = Rcpp::wrap(loss_final(par, areas));
    return rcpp_result_gen;
END_RCPP
}
// optim_init_loss
double optim_init_loss(arma::vec par, arma::vec d, arma::uvec disjoint, arma::uvec contained);
RcppExport SEXP eulerr_optim_init_loss(SEXP parSEXP, SEXP dSEXP, SEXP disjointSEXP, SEXP containedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type d(dSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type disjoint(disjointSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type contained(containedSEXP);
    rcpp_result_gen = Rcpp::wrap(optim_init_loss(par, d, disjoint, contained));
    return rcpp_result_gen;
END_RCPP
}
// optim_init_grad
std::vector<double> optim_init_grad(arma::rowvec par, arma::vec d, arma::uvec disjoint, arma::uvec contained);
RcppExport SEXP eulerr_optim_init_grad(SEXP parSEXP, SEXP dSEXP, SEXP disjointSEXP, SEXP containedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type par(parSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type d(dSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type disjoint(disjointSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type contained(containedSEXP);
    rcpp_result_gen = Rcpp::wrap(optim_init_grad(par, d, disjoint, contained));
    return rcpp_result_gen;
END_RCPP
}
// choose_two
arma::umat choose_two(const arma::uvec x);
RcppExport SEXP eulerr_choose_two(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(choose_two(x));
    return rcpp_result_gen;
END_RCPP
}
// bit_indexr
Rcpp::LogicalMatrix bit_indexr(const arma::uword n);
RcppExport SEXP eulerr_bit_indexr(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uword >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(bit_indexr(n));
    return rcpp_result_gen;
END_RCPP
}
// discdisc
Rcpp::NumericVector discdisc(const Rcpp::NumericVector r1, const Rcpp::NumericVector r2, const Rcpp::NumericVector d);
RcppExport SEXP eulerr_discdisc(SEXP r1SEXP, SEXP r2SEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type r1(r1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type r2(r2SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(discdisc(r1, r2, d));
    return rcpp_result_gen;
END_RCPP
}
// find_surrounding_sets
Rcpp::LogicalMatrix find_surrounding_sets(const arma::vec xs, const arma::vec ys, const arma::vec x, const arma::vec y, const arma::vec r);
RcppExport SEXP eulerr_find_surrounding_sets(SEXP xsSEXP, SEXP ysSEXP, SEXP xSEXP, SEXP ySEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type ys(ysSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(find_surrounding_sets(xs, ys, x, y, r));
    return rcpp_result_gen;
END_RCPP
}
// max_colmins
arma::uword max_colmins(const arma::mat x);
RcppExport SEXP eulerr_max_colmins(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(max_colmins(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"eulerr_standard_to_matrix", (DL_FUNC) &eulerr_standard_to_matrix, 1},
    {"eulerr_standard_to_matrix2", (DL_FUNC) &eulerr_standard_to_matrix2, 1},
    {"eulerr_matrix_to_standard", (DL_FUNC) &eulerr_matrix_to_standard, 1},
    {"eulerr_intersect_conic_line", (DL_FUNC) &eulerr_intersect_conic_line, 2},
    {"eulerr_split_conic", (DL_FUNC) &eulerr_split_conic, 1},
    {"eulerr_intersect_conics", (DL_FUNC) &eulerr_intersect_conics, 2},
    {"eulerr_adopt", (DL_FUNC) &eulerr_adopt, 5},
    {"eulerr_ellipse_segment", (DL_FUNC) &eulerr_ellipse_segment, 3},
    {"eulerr_intersect_ellipses", (DL_FUNC) &eulerr_intersect_ellipses, 1},
    {"eulerr_return_intersections", (DL_FUNC) &eulerr_return_intersections, 1},
    {"eulerr_venneuler_stress", (DL_FUNC) &eulerr_venneuler_stress, 2},
    {"eulerr_loss_final", (DL_FUNC) &eulerr_loss_final, 2},
    {"eulerr_optim_init_loss", (DL_FUNC) &eulerr_optim_init_loss, 4},
    {"eulerr_optim_init_grad", (DL_FUNC) &eulerr_optim_init_grad, 4},
    {"eulerr_choose_two", (DL_FUNC) &eulerr_choose_two, 1},
    {"eulerr_bit_indexr", (DL_FUNC) &eulerr_bit_indexr, 1},
    {"eulerr_discdisc", (DL_FUNC) &eulerr_discdisc, 3},
    {"eulerr_find_surrounding_sets", (DL_FUNC) &eulerr_find_surrounding_sets, 5},
    {"eulerr_max_colmins", (DL_FUNC) &eulerr_max_colmins, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_eulerr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
