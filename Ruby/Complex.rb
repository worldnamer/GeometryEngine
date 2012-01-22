class Complex

   def initialize(a, b)
      @real, @imag = a, b
   end

   def Re
      @real
   end

   def Im
      @imag
   end

   # overload assignment operators
   def Re=(a)
      @real = a
   end

   def Im=(b)
      @imag = b
   end

   # overload arithmetic operators
   def +(z)
      Complex.new(@real + z.Re, @imag + z.Im)
   end

   def -(z)
      Complex.new(@real - z.Re, @imag - z.Im)
   end

   # overload comparison operators

end

def testReIm
   z = Complex.new(0.0, 0.0)
   puts z.Re, z.Im
end

def testAssignmentOperator
   z = Complex.new(0.0, 0.0)
   z.Re, z.Im = 1.0, 2.0
   puts z.Re, z.Im
end

def testArithmeticOperators
   z = Complex.new(0.0, 1.0)
   w = Complex.new(2.0, 3.0)
   sum = z + w
   puts sum.Re, sum.Im
end

testReIm
testAssignmentOperator
testArithmeticOperators

