public class InsertionSort {  
    public static void insertionSort(int num[]) {  
    
       int j; 
       int key;
       int i;  

       for (j = 1; j < num.length; j++){
           key = num[ j ];
           for(i = j - 1; (i >= 0) && (num[ i ] < key); i--){
           
                 num[ i+1 ] = num[ i ];
          }
         num[ i+1 ] = key; 
    }

    public static void main(String a[]){    
        int[] arr1 = {9,14,3,2,43,11,58,22};    
   
        insertionSort(arr1); 
           
        System.out.println("Sorted Array");    
        for(int i:arr1){    
            System.out.print(i+" ");    
        }    
    }    
}    
