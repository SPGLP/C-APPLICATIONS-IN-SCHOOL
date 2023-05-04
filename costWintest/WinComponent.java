package costWintest;
import java.awt.*;
import javax.swing.*;

import costWintest.WinListener.Meun1L;

public class WinComponent extends JFrame{
    JTextArea textBox;
    JButton startB;
    Meun1L meun1l;
    JButton exitB;
    JButton nocostB;
    JButton allmoneyB;
    public WinComponent() {
        init();
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    void init() {
        setLayout(new FlowLayout());
        textBox = new JTextArea("不交税，就雷普");
        startB = new JButton("开始/继续计算");
        meun1l = new Meun1L();
        startB.addActionListener(meun1l);
        exitB = new JButton("退出系统");
        nocostB = new JButton("统计未交税人的数量");
        allmoneyB = new JButton("统计交税总金额");
        add(textBox);
        add(startB);
        add(exitB);
        add(nocostB);
        add(allmoneyB);
    }
}
