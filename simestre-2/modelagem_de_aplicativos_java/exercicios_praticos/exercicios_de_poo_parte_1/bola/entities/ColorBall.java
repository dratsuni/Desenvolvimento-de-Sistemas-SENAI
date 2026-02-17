package entities;

public  enum ColorBall {
    RED("\u001B[31m"),
    BLUE("\u001B[34m"),
    GREEN("\u001B[32m"),
    PURPLE("\u001B[35m"),
    YELLOW("\u001B[33m"),
    WHITE("\u001B[37m");

    private String ansiColor;

    ColorBall(String ansiColor){
        this.ansiColor = ansiColor;
    }

    public String getAnsiColor() {
        return this.ansiColor;
    }
}
