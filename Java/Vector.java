
public interface Vector<ValueType> {
   public Integer size();
   public ValueType get(Integer k);
   public void set(Integer k, ValueType a);
   public void show();
   public Vector<ValueType> add(Vector<ValueType> V);
}

