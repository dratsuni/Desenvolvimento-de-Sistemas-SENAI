package entities;


public class Square{
    private int side;
    private int area;

    public Square(int side, int area){
        this.side = side;
    }

    public int getSide(){
        return this.side;
    }

    public int getArea(){
        return this.area;
    }

    public void setSide(int side){
        this.side = side;
        calculateArea();
    }

    private void calculateArea(){
        area = side * side;
    }
}



