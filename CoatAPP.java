/* unicode is GBK */
/* LSL01(SPGLP) */

import java.util.*;
import java.util.Scanner;

public class CoatAPP {
    public static void main(String[] args) {

        /* �������� */
        double moneyW;                              //ԭ����
        double coat;                                //˰
        double moneyS;                              //˰������
        Scanner mInput = new Scanner(System.in);    //����ɨ����

        /* �㷨��� */
        System.out.println("======================");
        System.out.println("����������ѣ�");
        System.out.println("======================");
        moneyW = mInput.nextDouble();
        coat = (moneyW - 800) * 0.20;
        moneyS = moneyW - coat;
        System.out.println("======================");
        System.out.println("��Ҫ֧��˰�ѣ�" + coat);
        System.out.println("˰�������ʣ�ࣺ" + moneyS);
        System.out.println("======================");
    }
}