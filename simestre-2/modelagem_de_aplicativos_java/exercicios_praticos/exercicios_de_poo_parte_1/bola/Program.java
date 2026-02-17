import entities.Ball;
import view.BallMenuManager;

import java.util.Scanner;

public class Program {
    public static void main(String[] args){
        Ball ball = new Ball("RED");
        Scanner sc = new Scanner(System.in);
        int op = 0;

        while(op != 2){
            System.out.println(ball);
            System.out.println("[1]Set the ball color\n[2]quit");
            System.out.print("Choice: ");
            op = sc.nextInt();
            BallMenuManager.menu(op, ball, sc);
        }
        sc.close();
    }
}
