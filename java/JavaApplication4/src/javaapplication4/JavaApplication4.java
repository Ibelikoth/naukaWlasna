package javaapplication4;
public class JavaApplication4 {

    private double side=0;
    public JavaApplication4 (){
        
    }
    public JavaApplication4(double side){
        setSide(side);
    }
    public double getSide(){
        return side;
    }
    public void setSide(double side){
        this.side=side;
    }
    public double getJavaApplication4(){
        return side*side;
    }
    
}
