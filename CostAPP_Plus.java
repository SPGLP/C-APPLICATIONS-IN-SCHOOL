/* unicode is GBK */
/* LSL01(SPGLP) */

import java.util.*;
import java.util.Scanner;

public class CostAPP_Plus {
    /* ��˰����Ϣ�� */
    public static class usersClass{
        String U_name;                              //����
        double U_moneyW;                            //ԭ����
        double U_cost;                              //˰
        double U_moneyS;                            //˰������
    }
    public static void main(String[] args) {

        /* �������� */
        int i = 0;                                  //������
        int cmdWord;                                //ָ��
        String name;                                //����
        double moneyW;                              //ԭ����
        double cost;                                //˰
        double moneyS;                              //˰������
        usersClass users[] = new usersClass[99];    //�û��ඨ��
        Scanner mInput = new Scanner(System.in);    //����ɨ����

        /* �㷨��� */
        do {
            System.out.println("======================");
            System.out.println("������Ž�����Ӧ����");
            System.out.println("1 -- ��ʼ/��������");
            System.out.println("2 -- �˳�ϵͳ");
            System.out.println("3 -- ͳ��δ��˰�˵�����");
            System.out.println("4 -- ͳ�ƽ�˰�ܽ��");
            System.out.println("======================");
            System.out.print("�����룺");
            cmdWord = mInput.nextInt();
            switch(cmdWord) {
                case 1 :
                    /* ���� */
                    System.out.println("======================");
                    System.out.println("����¼��� "+(i+1)+" ��");
                    System.out.print("�����뽻˰��������");
                    name = mInput.next();
                    System.out.print("����������ѣ�");
                    moneyW = mInput.nextDouble();
                    System.out.println("======================");
                    if (moneyW > 800) {
                        cost = (moneyW - 800) * 0.20;
                        moneyS = moneyW - cost;
                    } else {
                        cost = 0;
                        moneyS = moneyW;
                    }
                    System.out.println("======================");
                    System.out.println("��Ҫ֧��˰�ѣ�" + cost);
                    System.out.println("˰�������ʣ�ࣺ" + moneyS);
                    System.out.println("======================");
                    if (users[i] == null) {
                        users[i] = new usersClass();
                    }
                    users[i].U_name = name;
                    users[i].U_moneyS = moneyS;
                    users[i].U_cost = cost;
                    users[i].U_moneyW = moneyW;
                    i++;
                    break;
                case 2:
                    /* �˳�ϵͳ */
                    break;
                case 3:
                    /* ͳ��δ��˰������ */
                    int j;                                  //������
                    int n = 0;                              //δ��˰���ܺ�
                    System.out.println("======================");
                    System.out.println("δ��˰��������");
                    for (j = 0; j < i; j++) {
                        if (users[j] == null) {
                            users[j] = new usersClass();
                        }
                        if (users[j].U_cost == 0) {
                            n++;
                            System.out.println(users[j].U_name + " ");
                        }
                    }
                    System.out.println("�ܼƣ� " + n + " ��");
                    break;
                case 4:
                    /* ͳ�ƽ�˰�ܽ�� */
                    int m = 0;                                  //��˰�ܺ�
                    System.out.println("======================");
                    System.out.println("��˰�������ͽ�˰��");
                    for (j = 0; j < i; j++) {
                        if (users[j] == null) {
                            users[j] = new usersClass();
                        }
                        if (users[j].U_cost > 0) {
                            m += users[j].U_cost;
                            System.out.println(users[j].U_name + "   " + users[j].U_cost);
                        }
                    }
                    System.out.println("�ܼƣ�" + m);
                    break;
                default:
                    System.out.println("δָ֪������ԣ�");
                    break;
                }
        } while (cmdWord != 2);
    }
}