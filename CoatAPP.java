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
        System.out.print("����������ѣ�");
        moneyW = mInput.nextDouble();
        System.out.println("======================");
        if (moneyW > 800) {
            coat = (moneyW - 800) * 0.20;
            moneyS = moneyW - coat;
        } else {
            coat = 0;
            moneyS = moneyW;
        }
        System.out.println("======================");
        System.out.println("��Ҫ֧��˰�ѣ�" + coat);
        System.out.println("˰�������ʣ�ࣺ" + moneyS);
        System.out.println("======================");
    }
}