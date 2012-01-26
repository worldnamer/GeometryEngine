from Vector import *

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

def testVectorOperators() :
   V = Vector([0.0, 1.0, 2.0])
   W = Vector([3.0, 4.0, 5.0])
   print V.dot(W)
   print V.norm()
   U = V.cross(W)
   U.show()

if __name__ == '__main__' :
   # testAssignmentOperators()
   # testArithmeticOperators()
   testVectorOperators()

