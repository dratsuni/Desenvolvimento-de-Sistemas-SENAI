package view;

import entities.RemoteControl;
import java.util.Scanner;

public class ControlMenuManager {
    public static void menu(int op,RemoteControl remoteControl, Scanner sc){
        switch (op) {
            case 1:
                selectChannel(remoteControl, sc);
                break;
            case 2:
                remoteControl.volumeUp();
                break;
            case 3:
                remoteControl.volumeDown();
                break;
            case 4:
                System.out.println("Bye!");
                break;
            default:
                System.out.println("This option does'nt exist.");
                break;
        }
    }


    private static void selectChannel(RemoteControl remoteControl, Scanner sc){
        int channel = 0;
        System.out.print("Choice a channel [0-100] > ");
        channel = sc.nextInt();
        remoteControl.setChannel(channel);
    }
}
