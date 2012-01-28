public class Vector {

   private double comps[];
   private int dim;

   // constructors
   Vector(double V[]) {
      comps = (double[]) V.clone();
      dim = V.length;
   }

   int size() {
      return dim;
   }
}
