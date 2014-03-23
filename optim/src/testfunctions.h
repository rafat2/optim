/*
 * testfunctions.h
 *
 *  Created on: Mar 16, 2014
 *      Author: HOME
 */

#ifndef TESTFUNCTIONS_H_
#define TESTFUNCTIONS_H_


#ifdef __cplusplus
extern "C" {
#endif

double myvalue
(
    double   *x,
    int       n
);

void myvaluegrad(
		double *x,
		int n,
		double *jac
);

double quartic(double *x,int N);

void quarticgrad(double *x,int N,double *jac);

double func4(double *x,int N);

double rosenbrock(double *x,int N);

void rosenbrockgrad(double *x,int N,double *g);

double func1(double *x,int N);

#ifdef __cplusplus
}
#endif

#endif /* TESTFUNCTIONS_H_ */
