package view;

import java.util.Scanner;

import entities.Ball;
import entities.ColorBall;

public class BallMenuManager {

    public static void menu(int op, Ball ball, Scanner sc){

        switch(op){
            case 1:
                defineBallColor(ball, sc);
                break;
            case 2:
                System.out.println("Bye!");
                break;
            default:
                System.out.println("ERROR: This option doesn't exist.");
                break;
        }

    }   


    public static void defineBallColor(Ball ball, Scanner sc){
        ColorBall[] dispColor = ColorBall.values();
        int dispColorLenght = dispColor.length;

        System.out.println("Choose a color:");
        for (int i = 0; i < dispColorLenght; i++){
            System.out.printf("[%d] %s\n", i, dispColor[i].name());
        }
        System.out.print("Color : " );

        int choice = sc.nextInt();
        if (choice < dispColorLenght && choice >= 0){
            ball.setColor(dispColor[choice].name());
        } else {
            System.out.println("Error: Out of range.");
        }
    }
}
