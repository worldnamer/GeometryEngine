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

def testAssignmentOperators() :
   V = Vector([1.0, 2.0, 3.0])
   print V.size()
   V.show()
   W = V
   W.show()
   for k in range(V.size()) :
      print V[k]
   for k in range(V.size()) :
      V[k] = 0.0
   V.show()

def testArithmeticOperators() :
   V = Vector([0.0, 1.0, 2.0])
   W = Vector([3.0, 4.0, 5.0])
   U = V + W
   U.show()
   U = V - W
   U.show()
   U = V * 2.0
   U.show()
   U = V / 2.0
   U.show()

if __name__ == '__main__' :
   testAssignmentOperators()
   testArithmeticOperators()