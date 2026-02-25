import entities.Square;
import view.SquareMenuManager;
import java.util.Scanner;


public class Program {
        public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Square square = new Square(0, 0);
        int op = 0;

        while (op != 3){
            System.out.println("[1]Set side\n[2]Show area and side\n[3]Quit");
            System.out.print("choose: ");
            op = sc.nextInt();
            SquareMenuManager.menu(op, square, sc);
        }
    }
}
