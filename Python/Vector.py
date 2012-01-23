class Vector :

   def __init__(self, V) :
      self.V = V
      self.n = len(V)

   def size(self) :
      return self.n

   def show(self) :
      print self.V

def testAssignmentOperator() :
   V = Vector([0.0, 0.0, 0.0])
   print V.size()
   V.show()

if __name__ == '__main__' :
   testAssignmentOperator()

