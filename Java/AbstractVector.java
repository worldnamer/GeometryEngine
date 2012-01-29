public abstract class AbstractVector<ValueType> implements Vector<ValueType>
{
   protected ValueType comps[];
   protected Integer dim;

   public Integer size() {
      return dim;
   }

   public ValueType get(Integer k) {
      return comps[k];
   }

   public void set(Integer k, ValueType a) {
      comps[k] = a;
   }

   public void show() {
      for (Integer k = 0; k < dim; k++) {
         System.out.println(comps[k]);
      }
   }
}