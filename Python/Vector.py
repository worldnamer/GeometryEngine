class Vector :

   def __init__(self, V) :
      self.comps = V
      self.dim = len(V)

   def size(self) :
      return self.dim

   def __getitem__(self, k) :
      return self.comps[k]

   def show(self) :
      print self.comps

   # overload arithmetic operators
   def __add__(self, V) :
      sum = []
      for k in range(self.dim) :
         sum.append(self.comps[k] + V[k])
      return Vector(sum)

   def __sub__(self, V) :
      diff = []
      for k in range(self.dim) :
         diff.append(self.comps[k] - V[k])
      return Vector(diff)

def testAssignmentOperator() :
   V = Vector([0.0, 0.0, 0.0])
   print V.size()
   V.show()
   for k in range(V.size()) :
      print V[k]

def testArithmeticOperators() :
   V = Vector([0.0, 1.0, 2.0])
   W = Vector([3.0, 4.0, 5.0])
   sum = V + W
   sum.show()
   diff = V - W
   diff.show()

if __name__ == '__main__' :
   testAssignmentOperator()
   testArithmeticOperators()