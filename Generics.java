public class Generics<T> {
   private T t;

   public void add(T t) {
      this.t = t;
   }

   public T get() {
      return t;
   }

   public static void main(String[] args) {
   
      Generics<Integer> integer = new Generics<Integer>();
      Generics<String> string = new Generics<String>();
      Generics<Double> double = new Generics<Double>();
    
      integer.add(new Integer(1000));
      string.add(new String("Hello World"));
      double.add(new Double(3.14));

      System.out.printf("Integer Value :%d\n\n", integer.get());
      System.out.printf("String Value :%s\n", string.get());
      System.out.printf("Double Value :%s\n", double.get());
      
   }
}
