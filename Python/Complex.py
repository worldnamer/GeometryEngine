"""
@package Complex
"""

class Complex :

   def __init__(self, real, imag) :
      """
      initialize complex number
      """
      self.real = real
      self.imag = imag

   def Re(self) :
      """
      return real part
      """
      return self.real

   def Im(self) :
      """
      return imaginary part
      """
      return self.imag

   def set(self, real, imag) :
      self.real = real
      self.imag = imag

   def show(self) :
      print "(", self.real, ", ", self.imag, ")"

   def __add__(self, z) :
      return Complex(self.real + z.Re(), self.imag + z.Im())

   def __sub__(self, z) :
      return Complex(self.real - z.Re(), self.imag - z.Im())

   def __mul__(self, z) :
      return Complex(self.real * z.Re() - self.imag * z.Im(), \
                     self.real * z.Im() + self.imag * z.Re())

def testAssignmentOperator() :
   z = Complex(0.0, 0.0)
   z.show()
   z.set(3.0, 4.0)
   z.show()
   w = z
   w.show()

def testArithmeticOperators() :
   z = Complex(1.0, 2.0)
   w = Complex(3.0, 4.0)
   sum = z + w
   sum.show()
   diff = z - w
   diff.show()
   prod = z * w
   prod.show()

if __name__ == '__main__' :
   testAssignmentOperator()
   testArithmeticOperators()

