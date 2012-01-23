class Complex

   def initialize(real, imag)
      @real, @imag = real, imag
   end

   def Re
      @real
   end

   def Im
      @imag
   end

   # overload assignment operators
   def Re=(real)
      @real = real
   end

   def Im=(imag)
      @imag = imag
   end

   def set(real, imag)
      @real, @imag = real, imag
   end

   # define show
   def show
      print "(", @real, ", ", @imag, ")\n"
   end

   # overload arithmetic operators
   def +(z)
      Complex.new(@real + z.Re, @imag + z.Im)
   end

   def -(z)
      Complex.new(@real - z.Re, @imag - z.Im)
   end

   def *(z)
      Complex.new(@real * z.Re - @imag * z.Im,
                  @real * z.Im + @imag * z.Re)
   end

   # overload comparison operators

end

def testAssignmentOperator
   z = Complex.new(0.0, 0.0)
   z.Re, z.Im = 1.0, 2.0
   z.show
   z.set(3.0, 4.0)
   z.show
   w = z
   w.show
end

def testArithmeticOperators
   z = Complex.new(1.0, 2.0)
   w = Complex.new(3.0, 4.0)
   sum = z + w
   sum.show
   diff = z - w
   diff.show
   prod = z * w
   prod.show
end

testAssignmentOperator
puts
testArithmeticOperators

