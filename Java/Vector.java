
public class Vector {

   private Double comps[];
   private Integer dim;

   // constructors

   Vector(Integer n) {
      dim = n;
      comps = new Double[dim];
   }

   Vector(Double V[]) {
      comps = (Double[]) V.clone();
      dim = V.length;
   }

   public Integer size() {
      return dim;
   }

   public Double get(Integer k) {
      return comps[k];
   }

   public void set(Integer k, Double a) {
      comps[k] = a;
   }

   public void show() {
      for (Integer k = 0; k < dim; k++) {
         System.out.println(comps[k]);
      }
   }

   // vector addition
   public Vector add(Vector V){
      Double[] sum = new Double[dim];
      for (Integer k = 0; k < dim; k++) {
         sum[k] = comps[k] + V.get(k);
      }
      return new Vector(sum);
   }
}

