package costWintest;
public class costmethod {
    public class usersClass{
        String U_name;                              //姓名
        double U_moneyW;                            //原收入
        double U_cost;                              //税
        double U_moneyS;                            //税后收入
    }
    int i = 0;                                  //计数器
    int cmdWord;                                //指令
    String name;                                //姓名
    double moneyW;                              //原收入
    double cost;                                //税
    double moneyS;                              //税后收入
    usersClass users[] = new usersClass[99];    //用户类定义

    public void method1() {
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
    }
}
