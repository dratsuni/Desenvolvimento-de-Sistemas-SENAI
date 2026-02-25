package entities;

public class Ball{
    private ColorBall color;

    public Ball(String color){
        try{
            this.color = ColorBall.valueOf(color);
        } catch (IllegalArgumentException e) {
            System.err.println("ERROR: A cor  " + color + " não existe.");
        }
    }

    public void setColor(String color){
        try{
            this.color = ColorBall.valueOf(color);
        } catch (IllegalArgumentException e){
            System.err.println("ERROR: A cor  " + color + " não existe.");
        }
    }


    @Override
    public String toString(){
        String bola = color.getAnsiColor() + " ===\n|   |\n ===\u001B[0m";
        
        return bola;
    }
}
