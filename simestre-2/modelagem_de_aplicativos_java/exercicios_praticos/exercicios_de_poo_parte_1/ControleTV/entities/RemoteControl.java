package entities;

public class RemoteControl {
    private int channel;
    private int volume;

    public RemoteControl(int channel){
        setChannel(channel);
        this.volume = 100;
    }

    public int getChannel() {
        return channel;
    }
    public int getVolume() {
        return volume;
    }
    public void setChannel(int channel) {
        if (channel >= 0 && channel <= 100){
            this.channel = channel;
        }
    }
    
    public void volumeUp(){
        if (volume < 100){
            volume += 1;
        }
    }

    public void volumeDown(){
        if (volume > 0){
            volume -= 1;
        }
    }
    
}
