// class Vector3D
//    an element V of an 3-dimensional vector space
//    over the field T

#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <cmath>

#include <boost/array.hpp>

#include "BaseTypes.h"

template <class T>
class Vector3D {

   protected:

      // T*  V; // vector
      boost::array<T, 3> V;

   public:

      // constructors
      Vector3D() {
         // V = new T[3];
      }

      Vector3D(T s) {
         // V = new T[3];
         for (Index k = 0; k < 3; k++) {
            V[k] = s;
         }
      }

      Vector3D(T s0, T s1, T s2) {
         V[0] = s0;
         V[1] = s1;
         V[2] = s2;
      }

      Vector3D(boost::array<T, 3> W) {
         V = W;
      }

      // destructor
      // ~Vector3D() { delete[] V; }
      ~Vector3D() { }

      // dimensionality
      Index dim() const { return 3; }
      Index size() const { return 3; }
      // T* begin() { return V; }
      // T* end() { return V + 3; }

      // vector component
      T operator[](Index k) const {
         return V[k];
      }

      // vector component assignment
      T& operator[](Index k) {
         return V[k];
      }

      // must pass by reference when overloading operators

      // array assignment
      Vector3D<T>& operator = (boost::array<T, 3>& W) {
         for (Index k = 0; k < 3; k++) {
            V[k] = W[k];
         }
         return *this;
      }
 
      // vector assignment
      Vector3D<T>& operator = (const Vector3D<T>& W) {
         for (Index k = 0; k < 3; k++) {
            V[k] = W[k];
         }
         return *this;
      }

      // scalar assignment
      Vector3D<T>& operator = (const T& s) {
         for (Index k = 0; k < 3; k++) {
            V[k] = s;
         }
         return *this;
      }

      // vector addition
      Vector3D<T> operator + (const Vector3D<T>& W) const {
         Vector3D<T> sum;
         for (Index k = 0; k < 3; k++) {
            sum[k] = V[k] + W[k];
         }
         return sum;
      }

      // vector addition compound assignment
      Vector3D<T>& operator += (const Vector3D<T>& W) {
         for (Index k = 0; k < 3; k++) {
            V[k] += W[k];
         }
         return *this;
      }

      // addition of scalar
      Vector3D<T> operator + (const T& s) const {
         Vector3D<T> sum;
         for (Index k = 0; k < 3; k++) {
            sum[k] = V[k] + s;
         }
         return sum;
      }

      // scalar addition compound assignment
      Vector3D<T>& operator += (const T& s) {
         for (Index k = 0; k < 3; k++) {
            V[k] += s;
         }
         return *this;
      }

      // vector subtraction
      Vector3D<T> operator - (const Vector3D<T>& W) const {
         Vector3D<T> difference;
         for (Index k = 0; k < 3; k++) {
            difference[k] = V[k] - W[k];
         }
         return difference;
      }

      // vector subtraction compound assignment
      Vector3D<T>& operator -= (const Vector3D<T>& W) {
         for (Index k = 0; k < 3; k++) {
            V[k] -= W[k];
         }
         return *this;
      }

      // subtraction of scalar
      Vector3D<T> operator - (const T& s) const {
         Vector3D<T> difference;
         for (Index k = 0; k < 3; k++) {
            difference[k] = V[k] - s;
         }
         return difference;
      }

      // scalar subtraction compound assignment
      Vector3D<T>& operator -= (const T& s) {
         for (Index k = 0; k < 3; k++) {
            V[k] -= s;
         }
         return *this;
      }

      // elementwise product
      T operator * (const Vector3D<T>& W) const {
         Vector3D<T> product;
         for (Index k = 0; k < 3; k++) {
            product[k] = V[k] * W[k];
         }
         return product;
      }

      // scalar multiplication
      Vector3D<T> operator * (const T& s) const {
         Vector3D<T> product;
         for (Index k = 0; k < 3; k++) {
            product[k] = V[k] * s;
         }
         return product;
      }

      // scalar multiplication compound assignment
      Vector3D<T>& operator *= (const T& s) {
         for (Index k = 0; k < 3; k++) {
            V[k] *= s;
         }
         return *this;
      }

      // elementwise division
      T operator / (const Vector3D<T>& W) const {
         Vector3D<T> quotient;
         for (Index k = 0; k < 3; k++) {
            quotient[k] = V[k] / W[k];
         }
         return quotient;
      }

      // scalar division
      Vector3D<T> operator / (const T& s) const {
         Vector3D<T> quotient;
         for (Index k = 0; k < 3; k++) {
            quotient[k] = V[k] / s;
         }
         return quotient;
      }

      // scalar division compound assignment
      Vector3D<T>& operator /= (const T& s) {
         for (Index k = 0; k < 3; k++) {
            V[k] /= s;
         }
         return *this;
      }

      // inner or dot product
      T dot(const Vector3D<T>& W) {
         T dotproduct(0);
         for (Index k = 0; k < 3; k++) {
            dotproduct += V[k] * W[k];
         }
         return dotproduct;
      }

      // norm
      T norm() {
         T normsquared(0);
         for (Index k = 0; k < 3; k++) {
            normsquared += V[k] * V[k];
         }
         return sqrt(normsquared);
      }

      // cross product
      Vector3D<T> cross(const Vector3D<T>& W) {
         Vector3D<T> crossproduct;
         crossproduct[0] = V[1] * W[2] - V[2] * W[1];
         crossproduct[1] = V[2] * W[0] - V[0] * W[2];
         crossproduct[2] = V[0] * W[1] - V[1] * W[0];
         return crossproduct;
      }
} ;

typedef Vector3D<Real> Vertex;

#endif
