import java.util.Scanner;

import entities.Rectangle;
import view.RectangleMenuManager;


public class Program {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Rectangle rectange = new Rectangle(0, 0, 0, 0);
        int op = 0;

        while(op != 3){
            System.out.println("[1]Set rectangle width and height\n[2]Show rectangle data\n[3]Quit");
            System.out.print("select > ");
            op = sc.nextInt();
            RectangleMenuManager.menu(op, rectange, sc);
        }
        sc.close();

    }
}
