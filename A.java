// unicode is GBK //
// LSL01 (SPGLP) //

import java.util.*;
import java.util.Scanner;

public class A {
    String name[] = new String[99];                 //����
    String studentNumber[] = new String[99];        //ѧ��
    int age[] = new int[99];                        //����
    Scanner codeInput = new Scanner(System.in);     //ָ��ɨ����
    String codeText;                                //�ı�ָ����ܱ���
    int objNumber;                                  //����ָ����ܱ���

    public void main(String args[]) {
        commandcenter();
    }

    public void commandcenter() {                   //���˵�����̨
        System.out.println("��ѡ��һ�����");
        System.out.println("Search -- ��ѯ");
        System.out.println("Edit -- ¼��");
        System.out.println("������뿪ʼ������");
        codeText = codeInput.nextLine();
        if (codeText == "Search") {
            SearchData();
        }
        else if (codeText == "Edit") {
            EditData();
        }
    }

    public void SearchData() {                      //��ѯ����
        System.out.println("������Ų�ѯ��");
        objNumber = codeInput.nextInt();
        if (name[objNumber] != null) {
            System.out.println(name[objNumber]);
            System.out.println(studentNumber[objNumber]);
            System.out.println(age[objNumber]);
        }
        commandcenter();
    }

    public void EditData() {                        //�༭����
        System.out.println("������Ŷ�λҪ�༭����Ŀ��");
        objNumber = codeInput.nextInt();
        System.out.print("���ڣ����������֣�");
        name[objNumber] = codeInput.nextLine();
        System.out.print("���ڣ�������ѧ�ţ�");
        studentNumber[objNumber] = codeInput.nextLine();
        System.out.print("���ڣ����������䣺");
        age[objNumber] = codeInput.nextInt();
        System.out.println("¼����ϣ�");
        commandcenter();
    }
}
