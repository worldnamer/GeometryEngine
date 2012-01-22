"""
@package Complex
"""

class Complex :

   def __init__(self, a, b) :
      """
      initialize complex number
      """
      self.real = a
      self.imag = b

   def Re() :
      """
      return real part
      """
      return self.real

   def Im() :
      """
      return imaginary part
      """
      return self.imag

if __name__ == '__main__' :
   zero = Complex(0, 0)

