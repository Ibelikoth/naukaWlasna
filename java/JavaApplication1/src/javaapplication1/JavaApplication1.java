package javaapplication1;
public class JavaApplication1 {
    public static void main(String[] args) {
        int [] tab = new int [] {1, 2, 3, 4, 5};
        int i=0;
        while (i<tab.length){
            if(tab[i]%2 == 0){
                System.out.println("Element ["+i+"]="+tab[i]);       
            }
                i++;
            
            
        }
    }
    
}
