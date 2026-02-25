import java.util.Scanner;

import entities.RemoteControl;
import view.ControlMenuManager;


public class Program {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        RemoteControl remoteControl = new RemoteControl(0);
        int op = 0;

        while(op != 4){
            System.out.printf("Channel [%d] | Volume [%d%%]\n", remoteControl.getChannel(), remoteControl.getVolume());
            System.out.println("[1]Choose channel\n[2]Volume up\n[3]Volume down\n[4]quit");
            System.out.print("Select > ");
            op = sc.nextInt();
            ControlMenuManager.menu(op, remoteControl, sc);
        }
    }
}
