
public class testVector {

   public static void testAssignmentOperators() {
      Double[] Varray = {1.0, 2.0, 3.0};
      Vector V = new Vector(Varray);
      V.show();
   }

   public static void testArithmeticOperators() {
      Double[] Varray = {0.0, 1.0, 2.0};
      Vector V = new Vector(Varray);
      Double[] Warray = {3.0, 4.0, 5.0};
      Vector W = new Vector(Warray);
      Vector U = V.add(W);
      U.show();
   }

   public static void main(String[] args) {
      testAssignmentOperators();
      testArithmeticOperators();
   }
}

