package view;
import entities.Square;

import java.util.Scanner;

public class SquareMenuManager{
    public static void menu(int op, Square square, Scanner sc){
        switch(op){
            case 1:
                setSideSquare(square, sc);
                 break;
            case 2:
                showSideAndArea(square);
                break;
            case 3:
                System.out.println("Bye!");
                break;
            default:
                System.out.println("This option does'nt exist.");
                break;
        }
    }

    private static void setSideSquare(Square square, Scanner sc){
        int side = 0;
        System.out.print("Side lenght: ");
        side = sc.nextInt();
        square.setSide(side);
    }

    private static void showSideAndArea(Square square){
        System.out.printf("Side: %d\n", square.getSide());
        System.out.printf("Area: %d\n", square.getArea());
    }
    
}