// unicode is GBK //
// LSL01 (SPGLP) //

import java.util.*;
import java.util.Scanner;

public class A {
    String name[] = new String[99];                 //名字
    String studentNumber[] = new String[99];        //学号
    int age[] = new int[99];                        //年龄
    Scanner codeInput = new Scanner(System.in);     //指令扫描器
    int codeText;                                   //指令接受变量
    int objNumber;                                  //数字指令接受变量

    public void main(String args[]) {
        commandcenter();
    }

    public void commandcenter() {                   //主菜单控制台
        System.out.println("请选择一项服务：");
        System.out.println("1 -- 查询");
        System.out.println("2 -- 录入");
        System.out.println("输入代码开始工作：");
        codeText = codeInput.nextInt();
        if (codeText == 1) {
            SearchData();
        }
        else if (codeText == 2) {
            EditData();
        }
    }

    public void SearchData() {                      //查询数据
        System.out.println("输入序号查询：");
        objNumber = codeInput.nextInt();
        if (name[objNumber] != null) {
            System.out.println(name[objNumber]);
            System.out.println(studentNumber[objNumber]);
            System.out.println(age[objNumber]);
        } else {
            System.out.println("此项目不存在记录");
        }
        commandcenter();
    }

    public void EditData() {                        //编辑数据
        System.out.println("输入序号定位要编辑的项目：");
        objNumber = codeInput.nextInt();
        System.out.println("现在，请输入名字：");
        name[objNumber] = codeInput.nextLine();
        System.out.println("现在，请输入学号：");
        studentNumber[objNumber] = codeInput.nextLine();
        System.out.println("现在，请输入年龄：");
        age[objNumber] = codeInput.nextInt();
        System.out.println("录入完毕！");
        commandcenter();
    }
}
