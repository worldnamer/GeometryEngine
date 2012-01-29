
public class VectorImpl extends AbstractVector<Double> {
   // constructors
   VectorImpl(Integer n) {
      dim = n;
      comps = new Double[dim];
   }

   VectorImpl(Double V[]) {
      comps = (Double[]) V.clone();
      dim = V.length;
   }

   // VectorImpl addition
   public Vector<Double> add(Vector<Double> V){
      Double[] sum = new Double[dim];
      for (Integer k = 0; k < dim; k++) {
         sum[k] = comps[k] + V.get(k);
      }
      return new VectorImpl(sum);
   }
}

