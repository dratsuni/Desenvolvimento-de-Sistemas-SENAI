package view;
import java.util.Scanner;
import entities.Rectangle;

public class RectangleMenuManager {
    public static void menu(int op, Rectangle retangle, Scanner sc){
        switch(op){
            case 1:
                setWidthAndHeight(retangle, sc);
                break;
            case 2:
                showRectangleData(retangle);
                break;
            case 3:
                System.out.println("Bye!");
                break;
            default:
                System.out.println("This option does'nt exist.");
                break;
        }
    }

    private static void setWidthAndHeight(Rectangle rectangle, Scanner sc){
        int width = 0;
        int height = 0;

        System.out.print("Width: ");
        width = sc.nextInt();
        System.out.print("Height: ");
        height = sc.nextInt();

        rectangle.setWidth(width);
        rectangle.setHeight(height);
        rectangle.calcPerimeter();
        rectangle.calcArea();

    }

    private static void showRectangleData(Rectangle rectangle){
        System.out.printf("Width: %d\n", rectangle.getWidth());
        System.out.printf("Height: %d\n", rectangle.getHeight());
        System.out.printf("Area: %.2f\n", rectangle.getArea());
        System.out.printf("Perimeter: %.2f\n", rectangle.getPerimeter());

    }
}
