
public class testVector {

   public static void testAssignmentOperators() {
      double[] Varray = {1.0, 2.0, 3.0};
      Vector V = new Vector(Varray);

      System.out.println(V.size());
   }

   public static void main(String[] args) {
      testAssignmentOperators();
   }
}

