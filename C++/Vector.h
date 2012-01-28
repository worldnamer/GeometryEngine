// class Vector
//    an element a (dim)-dimensional vector space
//    over the field T

#ifndef VECTOR_H
#define VECTOR_H

#include <cmath>

#include "BaseTypes.h"

template <class T>
class Vector {

   protected:

      T* comps;  // vector components
      Index dim; // vector space dimension

   public:

      // constructors
      Vector() {
         dim = 1;
         comps = new T[dim];
      }

      Vector(Index n) {
         dim = n;
         comps = new T[dim];
      }

      Vector(Index n, T s) {
         dim = n;
         comps = new T[dim];
         for (Index k = 0; k < dim; k++) {
            comps[k] = s;
         }
      }

      // destructor
      ~Vector() { delete[] comps; }

      // dimensionality
      Index size() const { return dim; }

      // vector component
      T operator[](Index k) const {
         return comps[k];
      }

      // vector component assignment
      T& operator[](Index k) {
         return comps[k];
      }

      // must pass by reference when overloading operators
 
      // vector assignment
      Vector<T>& operator = (const Vector<T>& V) {
         for (Index k = 0; k < dim; k++) {
            comps[k] = V[k];
         }
         return *this;
      }

      // scalar assignment
      Vector<T>& operator = (const T& s) {
         for (Index k = 0; k < dim; k++) {
            comps[k] = s;
         }
         return *this;
      }

      // vector addition
      Vector<T> operator + (const Vector<T>& V) const {
         Vector<T> sum;
         for (Index k = 0; k < dim; k++) {
            sum[k] = comps[k] + V[k];
         }
         return sum;
      }

      // addition of scalar
      Vector<T> operator + (const T& s) const {
         Vector<T> sum;
         for (Index k = 0; k < dim; k++) {
            sum[k] = comps[k] + s;
         }
         return sum;
      }

      // vector subtraction
      Vector<T> operator - (const Vector<T>& V) const {
         Vector<T> diff;
         for (Index k = 0; k < dim; k++) {
            diff[k] = comps[k] - V[k];
         }
         return diff;
      }

      // subtraction of scalar
      Vector<T> operator - (const T& s) const {
         Vector<T> diff;
         for (Index k = 0; k < dim; k++) {
            diff[k] = comps[k] - s;
         }
         return diff;
      }

      // elementwise product
      T operator * (const Vector<T>& V) const {
         Vector<T> prod;
         for (Index k = 0; k < dim; k++) {
            prod[k] = comps[k] * V[k];
         }
         return prod;
      }

      // scalar multiplication
      Vector<T> operator * (const T& s) const {
         Vector<T> prod;
         for (Index k = 0; k < dim; k++) {
            prod[k] = comps[k] * s;
         }
         return prod;
      }

      // elementwise division
      T operator / (const Vector<T>& V) const {
         Vector<T> quot;
         for (Index k = 0; k < dim; k++) {
            quot[k] = comps[k] / V[k];
         }
         return quot;
      }

      // scalar division
      Vector<T> operator / (const T& s) const {
         Vector<T> quot;
         for (Index k = 0; k < dim; k++) {
            quot[k] = comps[k] / s;
         }
         return quot;
      }

      // inner or dot product
      T dot(Vector<T> V) {
         T dotprod(0);
         for (Index k = 0; k < dim; k++) {
            dotprod += comps[k] * V[k];
         }
         return dotprod;
      }

      // norm
      T norm() {
         T normsq(0);
         for (Index k = 0; k < dim; k++) {
            normsq += comps[k] * comps[k];
         }
         return sqrt(normsq);
      }
} ;

#endif
