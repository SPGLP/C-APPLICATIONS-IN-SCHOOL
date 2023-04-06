/* unicode is GBK */
/* LSL01(SPGLP) */

import java.util.*;
import java.util.Scanner;

public class CoatAPP {
    public static void main(String[] args) {

        /* 变量定义 */
        double moneyW;                              //原收入
        double coat;                                //税
        double moneyS;                              //税后收入
        Scanner mInput = new Scanner(System.in);    //输入扫描器

        /* 算法语句 */
        System.out.println("======================");
        System.out.println("请输入劳务费：");
        System.out.println("======================");
        moneyW = mInput.nextDouble();
        coat = (moneyW - 800) * 0.20;
        moneyS = moneyW - coat;
        System.out.println("======================");
        System.out.println("需要支付税费：" + coat);
        System.out.println("税后劳务费剩余：" + moneyS);
        System.out.println("======================");
    }
}