
public class Vector<T> {

   private T comps[];
   private Integer dim;

   // constructors
   Vector(T V[]) {
      comps = (T[]) V.clone();
      dim = V.length;
   }

   public Integer size() {
      return dim;
   }

   public T get(Integer k) {
      return comps[k];
   }
}

