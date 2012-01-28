// class Vector
//    an element V of an n-dimensional vector space
//    over the field T

#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>

#include "BaseTypes.h"

template <class T>
class Vector {

   protected:

      Index n;   // vector space dimension
      T*  V;     // vector

   public:

      // constructors
      Vector() {
         n = 1;
         V = new T[n];
      }

      Vector(Index dim) {
         n = dim;
         V = new T[n];
      }

      Vector(Index dim, T s) {
         n = dim;
         V = new T[n];
         for (Index k = 0; k < n; k++) {
            V[k] = s;
         }
      }

      // destructor
      ~Vector() { delete[] V; }

      // dimensionality
      Index dim() const { return n; }
      Index size() const { return n; }
      T* begin() { return V; }
      T* end() { return V + n; }

      // vector component
      T operator[](Index k) const {
         return V[k];
      }

      // vector component assignment
      T& operator[](Index k) {
         return V[k];
      }

      // must pass by reference when overloading operators
 
      // vector assignment
      Vector<T>& operator = (const Vector<T>& W) {
         for (Index k = 0; k < n; k++) {
            V[k] = W[k];
         }
         return *this;
      }

      // scalar assignment
      Vector<T>& operator = (const T& s) {
         for (Index k = 0; k < n; k++) {
            V[k] = s;
         }
         return *this;
      }

      // vector addition
      Vector<T> operator + (const Vector<T>& W) const {
         Vector<T> sum;
         for (Index k = 0; k < n; k++) {
            sum[k] = V[k] + W[k];
         }
         return sum;
      }

      // addition of scalar
      Vector<T> operator + (const T& s) const {
         Vector<T> sum;
         for (Index k = 0; k < n; k++) {
            sum[k] = V[k] + s;
         }
         return sum;
      }

      // vector subtraction
      Vector<T> operator - (const Vector<T>& W) const {
         Vector<T> difference;
         for (Index k = 0; k < n; k++) {
            difference[k] = V[k] - W[k];
         }
         return difference;
      }

      // subtraction of scalar
      Vector<T> operator - (const T& s) const {
         Vector<T> difference;
         for (Index k = 0; k < n; k++) {
            difference[k] = V[k] - s;
         }
         return difference;
      }

      // elementwise product
      T operator * (const Vector<T>& W) const {
         Vector<T> product;
         for (Index k = 0; k < n; k++) {
            product[k] = V[k] * W[k];
         }
         return product;
      }

      // scalar multiplication
      Vector<T> operator * (const T& s) const {
         Vector<T> product;
         for (Index k = 0; k < n; k++) {
            product[k] = V[k] * s;
         }
         return product;
      }

      // elementwise division
      T operator / (const Vector<T>& W) const {
         Vector<T> quotient;
         for (Index k = 0; k < n; k++) {
            quotient[k] = V[k] / W[k];
         }
         return quotient;
      }

      // scalar division
      Vector<T> operator / (const T& s) const {
         Vector<T> quotient;
         for (Index k = 0; k < n; k++) {
            quotient[k] = V[k] / s;
         }
         return quotient;
      }

      // inner or dot product
      T dot(Vector<T> W) {
         T dotproduct(0);
         for (Index k = 0; k < n; k++) {
            dotproduct += V[k] * W[k];
         }
         return dotproduct;
      }

      // norm
      T norm() {
         T normsquared(0);
         for (Index k = 0; k < n; k++) {
            normsquared += V[k] * V[k];
         }
         return sqrt(normsquared);
      }
} ;

#endif
