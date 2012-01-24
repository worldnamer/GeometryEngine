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

