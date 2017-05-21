public enum Directions{
	  EAST, 
	  WEST, 
	  NORTH, 
	  SOUTH
}

public class EnumExample
{
   Directions dir;
   public EnumExample(Directions dir) {
      this.dir = dir;
   }
   public void getMyDirection() {
     switch (dir) {
       case EAST:
          System.out.println("In East Direction");
          break;
                    
       case WEST:
          System.out.println("In West Direction");
          break;
                         
       case NORTH: 
          System.out.println("In North Direction");
          break;
                        
       default:
          System.out.println("In South Direction");
          break;
     }
   }
    
    public static void main(String[] args) {
        EnumExample obj1 = new EnumDemo(Directions.EAST);
        obj1.getMyDirection();
        EnumExample obj2 = new EnumDemo(Directions.SOUTH);
        obj2.getMyDirection();
    }
}
