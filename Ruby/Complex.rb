class Complex

   def initialize(a, b)
      @real = a
      @imag = b
   end

   def Re
      @real
   end

   def Im
      @imag
   end

   def Re=(a)
      @real = a
   end

   def Im=(b)
      @imag = b
   end

end

zero = Complex.new(0.0, 0.0)

