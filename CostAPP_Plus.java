/* unicode is GBK */
/* LSL01(SPGLP) */

import java.util.*;
import java.util.Scanner;

public class CostAPP_Plus {
    /* 纳税人信息类 */
    public static class usersClass{
        String U_name;                              //姓名
        double U_moneyW;                            //原收入
        double U_cost;                              //税
        double U_moneyS;                            //税后收入
    }
    public static void main(String[] args) {

        /* 变量定义 */
        int i = 0;                                  //计数器
        int cmdWord;                                //指令
        String name;                                //姓名
        double moneyW;                              //原收入
        double cost;                                //税
        double moneyS;                              //税后收入
        usersClass users[] = new usersClass[99];    //用户类定义
        Scanner mInput = new Scanner(System.in);    //输入扫描器

        /* 算法语句 */
        do {
            System.out.println("======================");
            System.out.println("输入代号进行相应功能");
            System.out.println("1 -- 开始/继续计算");
            System.out.println("2 -- 退出系统");
            System.out.println("3 -- 统计未交税人的数量");
            System.out.println("4 -- 统计交税总金额");
            System.out.println("======================");
            System.out.print("请输入：");
            cmdWord = mInput.nextInt();
            switch(cmdWord) {
                case 1 :
                    /* 计算 */
                    System.out.println("======================");
                    System.out.println("正在录入第 "+(i+1)+" 个");
                    System.out.print("请输入交税人姓名：");
                    name = mInput.next();
                    System.out.print("请输入劳务费：");
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
                    System.out.println("需要支付税费：" + cost);
                    System.out.println("税后劳务费剩余：" + moneyS);
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
                    /* 退出系统 */
                    break;
                case 3:
                    /* 统计未交税人数量 */
                    int j;                                  //计数器
                    int n = 0;                              //未交税人总和
                    System.out.println("======================");
                    System.out.println("未交税人名单：");
                    for (j = 0; j < i; j++) {
                        if (users[j] == null) {
                            users[j] = new usersClass();
                        }
                        if (users[j].U_cost == 0) {
                            n++;
                            System.out.println(users[j].U_name + " ");
                        }
                    }
                    System.out.println("总计： " + n + " 个");
                    break;
                case 4:
                    /* 统计交税总金额 */
                    int m = 0;                                  //交税总和
                    System.out.println("======================");
                    System.out.println("交税人名单和交税金额：");
                    for (j = 0; j < i; j++) {
                        if (users[j] == null) {
                            users[j] = new usersClass();
                        }
                        if (users[j].U_cost > 0) {
                            m += users[j].U_cost;
                            System.out.println(users[j].U_name + "   " + users[j].U_cost);
                        }
                    }
                    System.out.println("总计：" + m);
                    break;
                default:
                    System.out.println("未知指令，请重试！");
                    break;
                }
        } while (cmdWord != 2);
    }
}