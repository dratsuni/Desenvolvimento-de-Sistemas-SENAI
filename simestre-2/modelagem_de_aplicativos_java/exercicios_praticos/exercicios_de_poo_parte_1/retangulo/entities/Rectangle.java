package entities;

public class Rectangle {
    private int width;
    private int height;
    private double area;
    private double perimeter;

    public Rectangle(int width, int height, double area, double perimeter){
        this.width = width;
        this.height = height;
        this.area = 0;
        this.perimeter = 0;
    }

    public int getHeight() {
        return height;
    }
    public int getWidth() {
        return width;
    }
    public double getArea() {
        return area;
    }
    public double getPerimeter() {
        return perimeter;
    }

    public void setHeight(int height) {
        this.height = height;
    }
    public void setWidth(int width) {
        this.width = width;
    }
    public void calcArea(){
        area = width * height;
    }
    public void calcPerimeter(){
        perimeter = 2 * (width + height);
    }

}
