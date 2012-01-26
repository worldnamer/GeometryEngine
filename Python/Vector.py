import math

class Vector :

   def __init__(self, V) :
      self.comps = V
      self.dim = len(V)

   def size(self) :
      return self.dim

   def __getitem__(self, k) :
      return self.comps[k]

   def __setitem__(self, k, a) :
      self.comps[k] = a

   def show(self) :
      print self.comps

   # overload arithmetic operators

   # vector addition
   def __add__(self, V) :
      sum = []
      for k in range(self.dim) :
         sum.append(self.comps[k] + V[k])
      return Vector(sum)

   # vector subtraction
   def __sub__(self, V) :
      diff = []
      for k in range(self.dim) :
         diff.append(self.comps[k] - V[k])
      return Vector(diff)

   # vector negation
   def __neg__(self) :
      minus = []
      for k in range(self.dim) :
         minus.append(- self.comps[k])
      return Vector(minus)

   # scalar multiplication
   def __mul__(self, a) :
      prod = []
      for k in range(self.dim) :
         prod.append(self.comps[k] * a)
      return Vector(prod)

   # scalar division
   def __div__(self, a) :
      quot = []
      for k in range(self.dim) :
         quot.append(self.comps[k] / a)
      return Vector(quot)

   # dot product
   def dot(self, V) :
      dotprod = 0.0
      for k in range(self.dim) :
         dotprod += self.comps[k] * V[k]
      return dotprod

   # norm
   def norm(self) :
      return math.sqrt(self.dot(self))

   # cross product
   def cross(self, V) :
      assert self.dim == 3
      crossprod = [None, None, None]
      crossprod[0] = self.comps[1] * V[2] - self.comps[2] * V[1]
      crossprod[1] = self.comps[2] * V[0] - self.comps[0] * V[2]
      crossprod[2] = self.comps[0] * V[1] - self.comps[1] * V[0]
      return Vector(crossprod)

