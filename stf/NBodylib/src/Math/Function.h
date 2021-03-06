/*! \file Function.h
 *  \brief header file that defines several function structures
 */
// Function.h

#ifndef NBODYFUNCTION_H
#define NBODYFUNCTION_H

namespace Math
{

/// \struct Math::math_function 
/// \brief single dependent variable function
struct math_function
{
  Double_t (* function) (Double_t x, void * params);
  void * params;
};

/// \struct Math::math_multidim_function
/// \brief multi-dimensional function
struct math_multidim_function
{
  Double_t (* function) (Double_t *x, int ndim, void * params);
  int ndim;
  void * params;
};
}
#endif

