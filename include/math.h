/*
 * Copyright (c) 1986 Regents of the University of California.
 * All rights reserved.  The Berkeley software License Agreement
 * specifies the terms and conditions for redistribution.
 */

double  fabs(), floor(), ceil(), fmod(), ldexp();
double  sqrt(), hypot(), atof();
double  sin(), cos(), tan(), asin(), acos(), atan(), atan2();
double  exp(), log(), log10(), pow();
double  sinh(), cosh(), tanh();
double  gamma();
double  j0(), j1(), jn(), y0(), y1(), yn();

#define HUGE        1.701411733192644270e38
#define LOGHUGE     39

int isnanf(float x);
int isnan(double x);

int isinff(float x);
int isinf(double x);

float modff(float x, float *iptr);
double modf(double x, double *iptr);

float frexpf(float x, int *exp);
double frexp(double x, int *exp);

float ldexpf(float x, int exp);
double ldexp(double x, int exp);

double fmod(double x, double y);

#if !defined(_ANSI_SOURCE) && !defined(_POSIX_SOURCE)

#define M_E             2.7182818284590452354   /* e */
#define M_LOG2E         1.4426950408889634074   /* log 2e */
#define M_LOG10E        0.43429448190325182765  /* log 10e */
#define M_LN2           0.69314718055994530942  /* log e2 */
#define M_LN10          2.30258509299404568402  /* log e10 */
#define M_PI            3.14159265358979323846  /* pi */
#define M_PI_2          1.57079632679489661923  /* pi/2 */
#define M_PI_4          0.78539816339744830962  /* pi/4 */
#define M_1_PI          0.31830988618379067154  /* 1/pi */
#define M_2_PI          0.63661977236758134308  /* 2/pi */
#define M_2_SQRTPI      1.12837916709551257390  /* 2/sqrt(pi) */
#define M_SQRT2         1.41421356237309504880  /* sqrt(2) */
#define M_SQRT1_2       0.70710678118654752440  /* 1/sqrt(2) */

#endif /* !_ANSI_SOURCE && !_POSIX_SOURCE */
