
public class testVector {

   public static void testAssignmentOperators() {
      Double[] Varray = {1.0, 2.0, 3.0};
      Vector<Double> V = new Vector<Double>(Varray);

      System.out.println(V.size());
      for (Integer k = 0; k < V.size(); k++) {
         System.out.println(V.get(k));
      }
   }

   public static void main(String[] args) {
      testAssignmentOperators();
   }
}

