import java.applet.Applet;
import java.awt.Color;
import java.awt.Graphics;
import java.util.Date;

public class DateTimeApplet extends Applet implements Runnable {
    private Thread thread;
    private volatile boolean running = false;

    public void init() {
        setBackground(Color.WHITE);
    }

    public void start() {
        if (thread == null) {
            running = true;
            thread = new Thread(this);
            thread.start();
        }
    }

    public void stop() {
        running = false;
        if (thread != null) {
            try {
                thread.join();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        thread = null;
    }

    public void run() {
        while (running) {
            repaint();
            try {
                Thread.sleep(1000); // Update every second
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    public void paint(Graphics g) {
        Date currentDate = new Date();
        g.setColor(Color.RED);
        g.drawString("Current Date: " + currentDate.toString(), 20, 20);

        g.setColor(Color.BLUE);
        g.drawString("Current Time: " + currentDate.getHours() + ":" + currentDate.getMinutes() + ":" + currentDate.getSeconds(), 20, 40);
    }
}
