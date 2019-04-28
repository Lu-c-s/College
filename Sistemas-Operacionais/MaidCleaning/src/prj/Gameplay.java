package prj;

import javax.swing.*;
import java.awt.*;
import java.util.Random;

public class Gameplay extends JPanel {

	private static final long serialVersionUID = 1L;

	private ImageIcon maidImage;
	private ImageIcon lixoImage;
	private int maidXpos = 200;
	private int maidYpos = 200;

	private Random random = new Random();
	private int xpos = random.nextInt(4);
	private int ypos = random.nextInt(4);

	private int[] lixoXpos = { 200,400,600,800};
	private int[] lixoYpos = { 200,400,600,800};
	
	public Gameplay() {
		setFocusable(true);
	}

	public void move() {
		JFrame obj = new JFrame("Maid Cleaning 2.0");
		obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		MyPanel panel = new MyPanel();

		obj.setBounds(10, 10, 1000, 1000);
		obj.setBackground(Color.PINK);
		obj.setResizable(false);
		obj.setVisible(true);
		obj.getContentPane().add(panel);
		
	for(int i = 0 ; i < 11 ;i++) {
		while (lixoXpos[xpos] < maidXpos){
			maidXpos -= 200;
			panel.repaint();
			System.out.println(" U Xmaid =" + maidXpos + " lixoXpos[xpos]" + lixoXpos[xpos]);
			try {
				Thread.sleep(300);
			} catch (Exception ex) {
			}
		}
		while (lixoXpos[xpos] > maidXpos){
			maidXpos += 200;
			panel.repaint();
			System.out.println(" L Xmaid =" + maidXpos + " lixoXpos[xpos]" + lixoXpos[xpos]);
			try {
				Thread.sleep(300);
			} catch (Exception ex) {
			}
		}
		while (lixoYpos[ypos] > maidYpos){
			maidYpos += 200;
			panel.repaint();
			System.out.println(" U Ymaid =" + maidYpos + " lixoYpos[xpos]" + lixoYpos[ypos]);
			try {
				Thread.sleep(300);
			} catch (Exception ex) {
			}
		}
		while (lixoYpos[ypos] < maidYpos){
			maidYpos -= 200;
			panel.repaint();
			System.out.println("L Ymaid =" + maidYpos + " lixoYpos[xpos]" + lixoYpos[ypos]);
			try {
				Thread.sleep(300);
			} catch (Exception ex) {
			}
		}
		if((maidXpos == lixoXpos[xpos] )&& (maidYpos == lixoYpos[ypos])) {
			maidXpos = 200;
			maidYpos = 200;
			System.out.println("reseted");
		}
		System.out.println("Loop ="+i);
		
	}
}

	class MyPanel extends JPanel {
		private static final long serialVersionUID = 1L;

		@Override
		public void paintComponent(Graphics g) {

			// border
			g.setColor(Color.GREEN);
			g.drawRect(24, 34, 951, 900);

			// background for gameplay
			g.setColor(Color.orange);
			g.fillRect(25, 35, 950, 898);

			maidImage = new ImageIcon("maido.png");
			maidImage.paintIcon(this, g, maidXpos, maidYpos);

			lixoImage = new ImageIcon("lixo2.png");
			if ((lixoXpos[xpos] == maidXpos) && (lixoYpos[ypos] == maidYpos)) {
				xpos = random.nextInt(4);
				ypos = random.nextInt(4);
			}

			lixoImage.paintIcon(this, g, lixoXpos[xpos], lixoYpos[ypos]);

			// g.dispose();
		}
	}
}
