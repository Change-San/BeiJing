#include "beijing.h"

void Color(int x);       //字体反白高亮函数
void Color_Back();      //恢复字体显示函数
void Location(int x, int y);

void Color(int x)        //字体反白高亮函数
{
    HANDLE hOut;
    hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hOut,x);
}

void Color_Back()       //恢复字体显示函数
{
    HANDLE hOut;
    hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hOut,0x07);
}

void Location(int x, int y)         //坐标定位函数
{
    HANDLE hOut;
    hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(hOut,pos);
}

void Menu()     //游戏开始菜单
{
    printf("\n                +----------------------------------------------+\n");
    printf("                |                  北京浮生记                  |\n");
    printf("                |----------------------------------------------|\n");
    printf("                |        您扮演一位从外地到北京谋生的青年。    |\n");
    printf("                |    一开始，您只有2000元，并且还欠村长（一    |\n");
    printf("                |    个流氓头子）5500元债务。这些债务每天的    |\n");
    printf("                |    利息高达10%。如果不及时还清，村长会叫在   |\n");
    printf("                |    北京的老乡们来扁您，您可能牺牲在北京街    |\n");
    printf("                |    头。您决定在北京地铁各黑市倒卖各种物品    |\n");
    printf("                |    来发财致富，不仅还掉债务，而且要荣登北    |\n");
    printf("                |    京富人排行榜。                            |\n");
    printf("                |        您只能在北京呆40天，每次奔走一个黑    |\n");
    printf("                |    市算一天。一开始，您租的房子只能放100     |\n");
    printf("                |    个东西。您会在北京遭遇到各种事件，让您    |\n");
    printf("                |    感到北京浮生之艰难、世态之炎凉、以及我    |\n");
    printf("                |    们这个时代才有的搞笑事件。                |\n");
    printf("                |----------------------------------------------|\n");
    printf("                |-----   1.进入游戏   ----   0.离开游戏   -----|\n");
    printf("                +----------------------------------------------+\n");
}

void Map()          //初始地图
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.西直门|---|4.积水潭|---|5.东直门|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.苹果园|---|1.公主坟|---|2.复兴门|                |6.建国门|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.长椿街|---|8.崇文门|---|7.北京站|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_PingGuoYuan()     //选择苹果园
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.西直门|---|4.积水潭|---|5.东直门|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |");
    Color(WHITEBACK);
    printf("0.苹果园");
    Color_Back();
    printf("|---|1.公主坟|---|2.复兴门|                |6.建国门|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.长椿街|---|8.崇文门|---|7.北京站|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_GongZhuFen()      //选择公主坟
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.西直门|---|4.积水潭|---|5.东直门|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.苹果园|---|");
    Color(WHITEBACK);
    printf("1.公主坟");
    Color_Back();
    printf("|---|2.复兴门|                |6.建国门|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.长椿街|---|8.崇文门|---|7.北京站|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_FuXingMen()       //选择复兴门
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.西直门|---|4.积水潭|---|5.东直门|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.苹果园|---|1.公主坟|---|");
    Color(WHITEBACK);
    printf("2.复兴门");
    Color_Back();
    printf("|                |6.建国门|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.长椿街|---|8.崇文门|---|7.北京站|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_XiZhiMen()        //选择西直门
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |");
    Color(WHITEBACK);
    printf("3.西直门");
    Color_Back();
    printf("|---|4.积水潭|---|5.东直门|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.苹果园|---|1.公主坟|---|2.复兴门|                |6.建国门|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.长椿街|---|8.崇文门|---|7.北京站|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_JiShuiTan()       //选择积水潭
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.西直门|---|");
    Color(WHITEBACK);
    printf("4.积水潭");
    Color_Back();
    printf("|---|5.东直门|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.苹果园|---|1.公主坟|---|2.复兴门|                |6.建国门|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.长椿街|---|8.崇文门|---|7.北京站|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_DongZhiMen()      //选择东直门
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.西直门|---|4.积水潭|---|");
    Color(WHITEBACK);
    printf("5.东直门");
    Color_Back();
    printf("|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.苹果园|---|1.公主坟|---|2.复兴门|                |6.建国门|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.长椿街|---|8.崇文门|---|7.北京站|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_JianGuoMen()      //选择建国门
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.西直门|---|4.积水潭|---|5.东直门|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.苹果园|---|1.公主坟|---|2.复兴门|                |");
    Color(WHITEBACK);
    printf("6.建国门");
    Color_Back();
    printf("|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.长椿街|---|8.崇文门|---|7.北京站|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_BeiJingZhan()     //选择北京站
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.西直门|---|4.积水潭|---|5.东直门|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.苹果园|---|1.公主坟|---|2.复兴门|                |6.建国门|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.长椿街|---|8.崇文门|---|");
    Color(WHITEBACK);
    printf("7.北京站");
    Color_Back();
    printf("|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_CongWenMen()      //选择崇文门
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.西直门|---|4.积水潭|---|5.东直门|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.苹果园|---|1.公主坟|---|2.复兴门|                |6.建国门|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.长椿街|---|");
    Color(WHITEBACK);
    printf("8.崇文门");
    Color_Back();
    printf("|---|7.北京站|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_ChangChunJie()        //选择长椿街
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.西直门|---|4.积水潭|---|5.东直门|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.苹果园|---|1.公主坟|---|2.复兴门|                |6.建国门|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |");
    Color(WHITEBACK);
    printf("9.长椿街");
    Color_Back();
    printf("|---|8.崇文门|---|7.北京站|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void ShowPlace()        //场所显示
{
    Location(0, 5);
    printf("              ----------    ----------    ----------    ----------\n");
    printf("              | 1.银行 |    | 2.邮局 |    | 3.中介 |    | 4.网吧 |\n");
    printf("              ----------    ----------    ----------    ----------\n\n");
}

void ParmShow(int cash, int saving, int owed)     //参数显示函数
{
    Location(5, 14);
    printf("-----------------------\n");
    Location(5, 15);
    printf("| %s\t%10d |\n", "现金", cash);
    Location(5, 16);
    printf("-----------------------\n");
    Location(5, 17);
    printf("| %s\t%10d |\n", "存款", saving);
    Location(5, 18);
    printf("-----------------------\n");
    Location(5, 19);
    printf("| %s\t%10d |\n", "欠款", owed);
    Location(5, 20);
    printf("-----------------------\n");
}

void StoreShow(StoreGoods* ps, int goods, int room)            //仓库显示函数
{
    Location(35, 12);
    printf("----------------------------------------\n");
    Location(35, 13);
    printf("|%s|%14s|%6s|%s%3d/%3d|\n","序号","名称","价格","数量", goods, room);
    int i = 0;
    for(i = 0; i < ps->store_size; i++)
    {
        Location(36, 14+i);
        printf("%4d", i+1);
        Location(41, 14+i);
        printf("%14s", ps->store_arr[i].name);
        Location(56, 14+i);
        printf("%6d", ps->store_arr[i].price);
        Location(63, 14+i);
        printf("%10d", ps->store_arr[i].num);
    }
    Location(35, 14);
    printf("|");
    Location(40, 14);
    printf("|");
    Location(55, 14);
    printf("|");
    Location(62, 14);
    printf("|");
    Location(74, 14);
    printf("|\n");
    Location(35, 15);
    printf("|");
    Location(40, 15);
    printf("|");
    Location(55, 15);
    printf("|");
    Location(62, 15);
    printf("|");
    Location(74, 15);
    printf("|\n");
    Location(35, 16);
    printf("|");
    Location(40, 16);
    printf("|");
    Location(55, 16);
    printf("|");
    Location(62, 16);
    printf("|");
    Location(74, 16);
    printf("|\n");
    Location(35, 17);
    printf("|");
    Location(40, 17);
    printf("|");
    Location(55, 17);
    printf("|");
    Location(62, 17);
    printf("|");
    Location(74, 17);
    printf("|\n");
    Location(35, 18);
    printf("|");
    Location(40, 18);
    printf("|");
    Location(55, 18);
    printf("|");
    Location(62, 18);
    printf("|");
    Location(74, 18);
    printf("|\n");
    Location(35, 19);
    printf("|");
    Location(40, 19);
    printf("|");
    Location(55, 19);
    printf("|");
    Location(62, 19);
    printf("|");
    Location(74, 19);
    printf("|\n");
    Location(35, 20);
    printf("|");
    Location(40, 20);
    printf("|");
    Location(55, 20);
    printf("|");
    Location(62, 20);
    printf("|");
    Location(74, 20);
    printf("|\n");
    Location(35, 21);
    printf("|");
    Location(40, 21);
    printf("|");
    Location(55, 21);
    printf("|");
    Location(62, 21);
    printf("|");
    Location(74, 21);
    printf("|\n");
    Location(35, 22);
    printf("----------------------------------------\n");
}

void DaysShow(int days)     //显示天数函数
{
    Location(8, 0);     //定位坐标
    Color(WHITEBACK);        //字体颜色
    printf("%2d/40天\n", days);      //显示天数
    Color_Back();       //恢复字体颜色
}

void StartShow(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)        //开始界面函数
{
    DaysShow(days);
    Map();      //显示车站界面
    ParmShow(cash, saving, owed);     //显示属性界面
    StoreShow(ps, goods, room);        //显示仓库界面
}

void MoneyChange(int* psaving, int* powed)      //每日利息函数
{
    *psaving = *psaving*101/100;        //存款每日增加1%
    *powed = *powed*110/100;        //欠款每日增加10%
}

void ChooseMenu()       //返回菜单显示函数
{
    Location(0, 23);        //定位行位置
    int i = 0;
    for(i = 0; i < 80*4; i++)       //循环用空格填充原文字
    {
        printf(" ");
    }
    Location(0, 23);        //重新定位以显示新选项
}

void ShowStation0(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //苹果园车站整体显示函数
{
    DaysShow(days);
    Map_PingGuoYuan();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation1(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //公主坟车站整体显示函数
{
    DaysShow(days);
    Map_GongZhuFen();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation2(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //复兴门车站整体显示函数
{
    DaysShow(days);
    Map_FuXingMen();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation3(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //西直门车站整体显示函数
{
    DaysShow(days);
    Map_XiZhiMen();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation4(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //积水潭车站整体显示函数
{
    DaysShow(days);
    Map_JiShuiTan();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation5(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //东直门车站整体显示函数
{
    DaysShow(days);
    Map_DongZhiMen();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation6(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //建国门车站整体显示函数
{
    DaysShow(days);
    Map_JianGuoMen();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation7(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //北京站车站整体显示函数
{
    DaysShow(days);
    Map_BeiJingZhan();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation8(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //崇文门车站整体显示函数
{
    DaysShow(days);
    Map_CongWenMen();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation9(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //长椿街车站整体显示函数
{
    DaysShow(days);
    Map_ChangChunJie();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void StationList(int at_station)        //移动选项子菜单函数
{
    char station[][10] = {"苹果园", "公主坟","复兴门","西直门","积水潭",
                        "东直门","建国门","北京站","崇文门","长椿街"};     //定义车站名数组
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        if(i == at_station)     //检测当前所在车站
        {
            continue;       //找到后跳过此车站
        }else
        {
            printf("%d.%s ", i, station[i]);        //若不是当前所在车站则打印编号和站名
        }
    }
    printf("10. 返回\t请选择:>");     //尾端加入返回
}

void PlaceMap(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //场所界面
{
    system("cls");      //清屏
    DaysShow(days);     //显示天数
    ShowPlace();        //显示场所
    ParmShow(cash, saving, owed);     //显示属性
    StoreShow(ps, goods, room);        //显示仓库
}

void MainShow(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room, void (*show[])(), int at_station)      //主界面显示函数
{
    system("cls");
    if(at_station >= 0 && at_station <= 9)        //根据当前所在车站显示对应界面
    {       //未移动显示起始界面
        show[at_station](ps, days, cash, saving, owed, goods, room);
    }else       //已移动显示对应站台界面
    {
        DaysShow(days);
        Map();
        ParmShow(cash, saving, owed);
        StoreShow(ps, goods, room);
    }
}

void BankShow(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room, void (*show[])(), int at_station)      //银行显示函数
{
    int money = 0;
    int bank_choose = 0;
    system("cls");      //显示银行提示界面
    DaysShow(days);
    Location(0, 5);
    printf("             ------------------------------------------------------\n");
    printf("             |客户您好，您的现金是%8d元，您的存款是%8d元|\n", *pcash, *psaving);
    printf("             ------------------------------------------------------\n");
    ParmShow(*pcash, *psaving, owed);
    StoreShow(ps, goods, room);
    printf("请问您要：1.存款 2.取款 0.离开:>");
    scanf("%d", &bank_choose);
    switch(bank_choose)
    {
    case 1:
        printf("您要存入多少元？:>");
        scanf("%d", &money);
        if(money > *pcash)
        {
            printf("您没有那么多现金！\n");
            Sleep(1000);
            MainShow(ps, days, *pcash, *psaving, owed, goods, room, show, at_station);
        }else if(money <= *pcash && money >= 0)
        {
            *pcash -= money;
            *psaving += money;
            MainShow(ps, days, *pcash, *psaving, owed, goods, room, show, at_station);
        }else
        {
            printf("输入有误！\n");
            Sleep(1000);
            PlaceMap(ps, days, *pcash, *psaving, owed, goods, room);
        }
        break;
    case 2:
        printf("您要取出多少元？:>");
        scanf("%d", &money);
        if(money > *psaving)
        {
            printf("您没有那么多存款！\n");
            Sleep(1000);
            MainShow(ps, days, *pcash, *psaving, owed, goods, room, show, at_station);
        }else if(money <= *psaving && money >= 0)
        {
            *psaving -= money;
            *pcash += money;
            MainShow(ps, days, *pcash, *psaving, owed, goods, room, show, at_station);
        }else
        {
            printf("输入有误！\n");
            Sleep(1000);
            PlaceMap(ps, days, *pcash, *psaving, owed, goods, room);
        }
        break;
    case 0:
        MainShow(ps, days, *pcash, *psaving, owed, goods, room, show, at_station);
        break;
    default:
        PlaceMap(ps, days, *pcash, *psaving, owed, goods, room);
        break;
    }
}

void PostShow(StoreGoods* ps, int days, int* pcash, int saving, int* powed, int goods, int room, void (*show[])(), int at_station)      //邮局显示函数
{
    int pay_back = 0;       //设定还款变量
    int post_choose = 0;        //设定邮局选项变量
    system("cls");      //显示邮局还钱界面
    DaysShow(days);
    Location(0, 5);
    printf("                 ----------------------------------------------\n");
    printf("                 |村长在电话里说：“铁牛，你欠俺%d元，快还！”|\n", *powed);
    printf("                 ----------------------------------------------\n");
    ParmShow(*pcash, saving, *powed);
    StoreShow(ps, goods, room);
    printf("您现在有%d元，您欠款%d元。您要：1.还钱 0.缓几天吧:>", *pcash, *powed);       //提示现金数及还款数
    scanf("%d", &post_choose);      //获取玩家选择
    switch(post_choose)
    {
    case 1:     //若选择还钱
        printf("您要还多少钱？:>");        //提示数目
        scanf("%d", &pay_back);     //获取还款值
        if(pay_back > *pcash)       //若还款值大于现金
        {
            printf("您没有那么多钱！\n");       //提示
            Sleep(1000);        //保留1秒图像
            PlaceMap(ps, days, *pcash, saving, *powed, goods, room);        //重新显示界面
        }else if(pay_back <= *pcash && pay_back <= *powed && pay_back >= 0)      //若还款值不大于现金且不大于欠款并大于0
        {
            *pcash -= pay_back;     //减去对应现金
            *powed -= pay_back;     //减去对应欠款
            MainShow(ps, days, *pcash, saving, *powed, goods, room, show, at_station);
        }else if(pay_back > *powed)       //若还款值超过欠款值
        {
            printf("您没欠那么多钱！\n");       //提示
            Sleep(1000);        //保留1秒图像
            PlaceMap(ps, days, *pcash, saving, *powed, goods, room);        //重新显示界面
        }else if(pay_back == *powed)
        {
            *pcash -= pay_back;     //减去对应现金
            *powed -= pay_back;     //减去对应欠款
            MainShow(ps, days, *pcash, saving, *powed, goods, room, show, at_station);
        }else        //若还款值为负或其它输入
        {
            printf("输入有误！\n");
            Sleep(1000);
            PlaceMap(ps, days, *pcash, saving, *powed, goods, room);        //重新显示界面
        }
        break;
    case 0:     //选择不还款
        MainShow(ps, days, *pcash, saving, *powed, goods, room, show, at_station);
        break;
    default:        //若误选其它
        PlaceMap(ps, days, *pcash, saving, *powed, goods, room);        //显示场所界面
        break;
    }
}

void HouseShow(StoreGoods* ps, int* pcash, int* proom, int days, int saving, int owed, int goods, void(*show[])(), int at_station)      //中介显示函数
{
    int rent = 0;       //设定租房选项
    if(*proom < 140)        //若房间容量小于140，执行租房判定
    {
        if(*pcash < 30000)      //若现金小于30000显示无法租房并退回
        {
            system("cls");
            DaysShow(days);
            Location(0, 5);
            Color(LIGHTBLUE);
            printf("                   ------------------------------------------\n");
            printf("                   |中介说：没有三万现金想租房？一边凉快去！|\n");
            printf("                   ------------------------------------------\n");
            Color_Back();
            ParmShow(*pcash, saving, owed);
            StoreShow(ps, goods, *proom);
            return;
        }else if(*pcash == 30000)       //若现金等于30000显示对应内容并提示租房
        {
            system("cls");
            DaysShow(days);
            Location(0, 3);
            Color(LIGHTBLUE);
            printf("          ------------------------------------------------------------\n");
            printf("          |            欢迎来到北京“扇子居”租房中介公司！          |\n");
            printf("          |    我们的理念：免费看房，成交补款，童叟无欺，无耻无畏    |\n");
            printf("          |   想把生意做大？您现在的房子只能放%d个物品，太小了！    |\n", *proom);
            printf("          |         花费20000元，可以租能放%d个物品的房子           |\n", (*proom+10));
            printf("          ------------------------------------------------------------\n");
            Color_Back();
            ParmShow(*pcash, saving, owed);
            StoreShow(ps, goods, *proom);
            printf("是否租房？1.成交 2.怕上当，下次吧:>");        //提示并让玩家选择
            scanf("%d", &rent);     //获取选择结果
            switch(rent)
            {
            case 1:     //选择租房
                *pcash = *pcash - 25000;        //减去现金
                *proom = *proom + 10;       //房间容量+10
                system("cls");      //清屏并重新显示界面
                DaysShow(days);
                Location(0, 5);
                Color(YELLOW);
                printf("          ------------------------------------------------------------\n");
                printf("          |我的房子能放%d个物品了！可是，中介公司好像骗了我一些钱...|\n", *proom);
                printf("          ------------------------------------------------------------\n");
                Color_Back();
                ParmShow(*pcash, saving, owed);
                StoreShow(ps, goods, *proom);
                break;
            case 2:     //选择不租
                system("cls");      //清屏并显示对应内容
                DaysShow(days);
                Location(0, 5);
                Color(YELLOW);
                printf("                ------------------------------------------------\n");
                printf("                |呵！小心为妙！传闻北京有的租房中介很能骗人……|\n");
                printf("                ------------------------------------------------\n");
                Color_Back();
                ParmShow(*pcash, saving, owed);
                StoreShow(ps, goods, *proom);
                break;
            default:        //其它输入返回
                system("cls");
                if(at_station < 0 || at_station > 9)
                {
                    StartShow(ps, days, *pcash, saving, owed, goods, *proom);
                }else
                {
                    show[at_station](ps, days, *pcash, saving, owed, goods, *proom);
                }
                break;
            }
        }else       //当现金大于30000时
        {
            system("cls");      //清屏并给出对应提示
            DaysShow(days);
            Location(0, 3);
            Color(LIGHTBLUE);
            printf("          ------------------------------------------------------------\n");
            printf("          |            欢迎来到北京“扇子居”租房中介公司！          |\n");
            printf("          |    我们的理念：免费看房，成交补款，童叟无欺，无耻无畏    |\n");
            printf("          |   想把生意做大？您现在的房子只能放%d个物品，太小了！    |\n", *proom);
            printf("          |         花费%d元，可以租能放%d个物品的房子", (*pcash/2), (*proom+10));
            Location(69, 7);
            printf("|\n");
            printf("          ------------------------------------------------------------\n");
            Color_Back();
            ParmShow(*pcash, saving, owed);
            StoreShow(ps, goods, *proom);
            printf("是否租房？1.成交 2.怕上当，下次吧:>");        //提示是否租房
            scanf("%d", &rent);     //获取选择结果
            switch(rent)
            {
            case 1:     //选择租房
                *pcash = *pcash*43/100;     //减去对应金钱
                *proom = *proom + 10;       //房间容量+10
                system("cls");      //清屏显示提示及对应内容
                DaysShow(days);
                Location(0, 5);
                Color(YELLOW);
                printf("          ------------------------------------------------------------\n");
                printf("          |我的房子能放%d个物品了！可是，中介公司好像骗了我一些钱...|\n", *proom);
                printf("          ------------------------------------------------------------\n");
                Color_Back();
                ParmShow(*pcash, saving, owed);
                StoreShow(ps, goods, *proom);
                break;
            case 2:     //选择不租
                system("cls");      //提示对应内容并返回
                DaysShow(days);
                Location(0, 5);
                Color(YELLOW);
                printf("                ------------------------------------------------\n");
                printf("                |呵！小心为妙！传闻北京有的租房中介很能骗人……|\n");
                printf("                ------------------------------------------------\n");
                Color_Back();
                ParmShow(*pcash, saving, owed);
                StoreShow(ps, goods, *proom);
                break;
            default:        //其它选择返回
                system("cls");
                if(at_station < 0 || at_station > 9)
                {
                    StartShow(ps, days, *pcash, saving, owed, goods, *proom);
                }else
                {
                    show[at_station](ps, days, *pcash, saving, owed, goods, *proom);
                }
                break;
            }
        }
    }else       //若房间容量等于140
    {
        system("cls");      //清屏并显示对应提示
        DaysShow(days);
        Location(0, 5);
        Color(LIGHTBLUE);
        printf("                     --------------------------------------\n");
        printf("                     |中介说：你的房子比局长还大，还租房？|\n");
        printf("                     --------------------------------------\n");
        Color_Back();
        ParmShow(*pcash, saving, owed);
        StoreShow(ps, goods, *proom);
    }
}

void NetShow(StoreGoods* ps, int* pnet_times, int* pcash, int saving, int owed, int goods, int room, int days)      //网吧显示函数
{
    if(*pnet_times < 3)     //若进入网吧次数小于3次
    {
        (*pnet_times)++;        //次数自加
        int plus = (rand()%18+2);       //随机广告费数
        *pcash += plus;     //加入现金
        system("cls");      //清屏并显示对应内容
        DaysShow(days);
        Location(0, 5);
        Color(GREEN);
        printf("          ------------------------------------------------------------\n");
        printf("          |感谢电信改革，可以免费上网，还能赚美国的广告费%2d元，嘿嘿！|\n", plus);
        printf("          ------------------------------------------------------------\n\n");
        Color_Back();
        ParmShow(*pcash, saving, owed);
        StoreShow(ps, goods, room);
    }else{      //进入网吧在3次以上
        system("cls");      //清屏并显示对应内容
        DaysShow(days);
        Location(0, 5);
        Color(RED);
        printf("           ----------------------------------------------------------\n");
        printf("           |    村长放出话来：你别总是在网吧鬼混，快去做正经买卖    |\n");
        printf("           ----------------------------------------------------------\n\n");
        Color_Back();
        ParmShow(*pcash, saving, owed);
        StoreShow(ps, goods, room);
    }
}

void InitPrice(Goods all_goods[])       //初始化价格函数
{
    int i = 0;
    for(i = 0; i < MAX_GOODS; i++)      //遍历将所有价格初始为0
    {
        all_goods[i].price = 0;
    }
    all_goods[VCD].price = rand()%51+10;        //随机生成VCD价格
    all_goods[SMOKE].price = rand()%351+100;        //随机生成香烟价格
    all_goods[COS].price = rand()%151+80;       //随机生成化妆品价格
    all_goods[TOY].price = rand()%201+400;      //随机生成玩具价格
    all_goods[WINE].price = rand()%901+1500;        //随机生成白酒价格
    all_goods[PHONE].price = rand()%401+800;        //随机生成手机价格
    all_goods[BOOK].price = rand()%5501+7500;       //随机生成禁书价格
    all_goods[CAR].price = rand()%14001+16000;      //随机生成汽车价格
}

void InitMarket(Goods market_goods[], int sz, Goods all_goods[], int days, int cash, int saving, int* powed, StoreGoods* ps, int* pgoods, int room)        //填充黑市函数
{
    memset(market_goods, 0, sz);        //清空（初始化）黑市数组
    int kind = rand()%3+5;      //随机商品数量
    int market_num[MAX_GOODS] = {0};        //定义商品编号数组
    int i = 0;
    for (i = 0; i < kind; i++)      //根据商品数量随机商品序号
    {
        market_num[i] = rand()%8;
        int j = 0;
        for (j = 0; j < i; j++)     //判断商品序号是否有重复
        {
            while(market_num[i]==market_num[j])
            {
                market_num[i] = 0;
                market_num[i] = rand()%8;       //如果重复则重新生成序号
                j = 0;
            }
        }
    }
    IfBusinessCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
    for (i = 0; i < kind; i++)
    {
        market_goods[i] = all_goods[market_num[i]];     //将对应序号（下标）的商品填充到黑市数组中
    }
}

void EndMarket(Goods market_goods[], int sz, Goods all_goods[])     //结束前黑市函数
{
    memset(market_goods, 0, sz);        //清空（初始化）黑市数组
    int i = 0;
    for (i = 0; i < MAX_GOODS; i++)     //遍历将全部商品填充入黑市数组
    {
        market_goods[i] = all_goods[i];
    }
}

void MarketShow(StoreGoods* ps, Goods market_goods[], int days, int cash, int saving, int owed, int goods, int room)    //黑市显示函数
{
    DaysShow(days);        //显示天数
    int i = 0;
    printf("                         ------------------------------\n");        //显示表格
    printf("                         |%s|%16s|%6s|\n", "序号", "商品", "价格");       //显示标头
    for(i = 0; i < MAX_GOODS; i++)
    {
        printf("                         |%4d|%16s|%6d|\n", i+1, market_goods[i].name, market_goods[i].price);      //遍历显示对应商品名及价格
    }
    printf("                         ------------------------------\n");        //显示表格结尾
    ParmShow(cash, saving, owed);       //显示参数
    StoreShow(ps, goods, room);     //显示仓库
}

void IfMoneyCase(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room)
{
    int money_happen = rand()%100+1;
    if(money_happen <= MONEY_SIN && money_happen >MONEY_DOB)
    {
        int money_case_1 = rand()%7;
        switch(money_case_1)
        {
        case 0:
            MoneyCase0(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 1:
            MoneyCase1(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 2:
            MoneyCase2(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 3:
            MoneyCase3(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 4:
            MoneyCase4(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 5:
            MoneyCase5(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 6:
            MoneyCase6(ps, days, pcash, psaving, owed, goods, room);
            break;
        }
    }else if(money_happen <= MONEY_DOB)
    {
        int money_case_1 = rand()%7;
        int money_case_2 = rand()%7;
        while(money_case_2 == money_case_1)
        {
            money_case_2 = 0;
            money_case_2 = rand()%7;
        }
        switch(money_case_1)
        {
        case 0:
            MoneyCase0(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 1:
            MoneyCase1(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 2:
            MoneyCase2(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 3:
            MoneyCase3(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 4:
            MoneyCase4(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 5:
            MoneyCase5(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 6:
            MoneyCase6(ps, days, pcash, psaving, owed, goods, room);
            break;
        }
        switch(money_case_2)
        {
        case 0:
            MoneyCase0(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 1:
            MoneyCase1(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 2:
            MoneyCase2(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 3:
            MoneyCase3(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 4:
            MoneyCase4(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 5:
            MoneyCase5(ps, days, pcash, psaving, owed, goods, room);
            break;
        case 6:
            MoneyCase6(ps, days, pcash, psaving, owed, goods, room);
            break;
        }
    }
}

void MoneyCase0(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room)
{
    *pcash = (*pcash)*90/100;
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(GREEN);
    printf("       ------------------------------------------------------------------\n");
    printf("       |           俺怜悯扮演成乞丐的老太太们。 现金减少10%。           |\n");
    printf("       ------------------------------------------------------------------\n");
    Color_Back();
    ParmShow(*pcash, *psaving, owed);
    StoreShow(ps, goods, room);
    Sleep(2000);
}

void MoneyCase1(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room)
{
    *pcash = (*pcash)*90/100;
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(GREEN);
    printf("       ------------------------------------------------------------------\n");
    printf("       |    一个汉子在街头拦住俺：“哥们，给点钱用！” 现金减少10%。    |\n");
    printf("       ------------------------------------------------------------------\n");
    Color_Back();
    ParmShow(*pcash, *psaving, owed);
    StoreShow(ps, goods, room);
    Sleep(2000);
}

void MoneyCase2(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room)
{
    *pcash = (*pcash)*60/100;
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(GREEN);
    printf("       ------------------------------------------------------------------\n");
    printf("       |       一个大个子碰了俺一下，说：“别挤了!”现金减少40%。       |\n");
    printf("       ------------------------------------------------------------------\n");
    Color_Back();
    ParmShow(*pcash, *psaving, owed);
    StoreShow(ps, goods, room);
    Sleep(2000);
}

void MoneyCase3(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room)
{
    *pcash = (*pcash)*80/100;
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(GREEN);
    printf("       ------------------------------------------------------------------\n");
    printf("       |三个带红袖章的老太太揪住俺：“你是外地人？罚款！” 现金减少20%。|\n");
    printf("       ------------------------------------------------------------------\n");
    Color_Back();
    ParmShow(*pcash, *psaving, owed);
    StoreShow(ps, goods, room);
    Sleep(2000);
}

void MoneyCase4(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room)
{
    *psaving = (*psaving)*85/100;
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(GREEN);
    printf("       ------------------------------------------------------------------\n");
    printf("       |两个猛男揪住俺：“交市话费、长话附加费、上网费。” 存款减少15%。|\n");
    printf("       ------------------------------------------------------------------\n");
    Color_Back();
    ParmShow(*pcash, *psaving, owed);
    StoreShow(ps, goods, room);
    Sleep(2000);
}

void MoneyCase5(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room)
{
    *psaving = (*psaving)*90/100;
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(GREEN);
    printf("       ------------------------------------------------------------------\n");
    printf("       |      副主任严肃地说：“晚上别来我家送钱。” 存款减少10%。      |\n");
    printf("       ------------------------------------------------------------------\n");
    Color_Back();
    ParmShow(*pcash, *psaving, owed);
    StoreShow(ps, goods, room);
    Sleep(2000);
}

void MoneyCase6(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room)
{
    *pcash = (*pcash)*95/100;
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(GREEN);
    printf("       ------------------------------------------------------------------\n");
    printf("       |         北京空气污染得厉害，俺去氧吧吸氧。现金减少5%。         |\n");
    printf("       ------------------------------------------------------------------\n");
    Color_Back();
    ParmShow(*pcash, *psaving, owed);
    StoreShow(ps, goods, room);
    Sleep(2000);
}

void IfBusinessCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, int* powed, StoreGoods* ps, int* pgoods, int room)      //商业事件发生函数
{
    int business_happen = rand()%100+1;
    if(business_happen <= BUSINESS_SIN && business_happen > BUSINESS_DOB)
    {
        int business_case = rand()%18;
        switch(business_case)
        {
        case TOYUP:
            ToyUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case WINEUP:
            WineUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case BOOKUP:
            BookUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case VCDUP:
            VCDUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case CARUP:
            CarUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case COSUP:
            CosUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case BOOKBIGUP:
            BookBigUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case COSBIGUP:
            CosBigUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case WINEBIGUP:
            WineBigUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case PHONEUP:
            PhoneUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case CARBIGUP:
            CarBigUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case SMOKEDOWN:
            SmokeDownCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case TOYDOWN:
            ToyDownCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case VCDDOWN:
            VCDDownCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case CARGET:
            CarGetCase(days, cash, saving, powed, ps, pgoods, room);
            break;
        case SMOKEGET:
            SmokeGetCase(days, cash, saving, powed, ps, pgoods, room);
            break;
        case WINEGET:
            WineGetCase(days, cash, saving, powed, ps, pgoods, room);
            break;
        case PHONEOWED:
            PhoneOwedCase(days, cash, saving, powed, ps, pgoods, room);
            break;
        }
    }else if(business_happen <= BUSINESS_DOB)
    {
        int business_case1 = rand()%18;
        int business_case2 = rand()%18;
        while(business_case2 == business_case1)
        {
            business_case2 = 0;
            business_case2 = rand()%18;
        }
        switch(business_case1)
        {
        case TOYUP:
            while(business_case2 == business_case1 || business_case2 == TOYDOWN)
            {
                business_case2 = 0;
                business_case2 = rand()%18;
            }
            ToyUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case WINEUP:
            while(business_case2 == business_case1 || business_case2 == WINEBIGUP)
            {
                business_case2 = 0;
                business_case2 = rand()%18;
            }
            WineUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case BOOKUP:
            while(business_case2 == business_case1 || business_case2 == BOOKBIGUP)
            {
                business_case2 = 0;
                business_case2 = rand()%18;
            }
            BookUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case VCDUP:
            while(business_case2 == business_case1 || business_case2 == VCDDOWN)
            {
                business_case2 = 0;
                business_case2 = rand()%18;
            }
            VCDUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case CARUP:
            while(business_case2 == business_case1 || business_case2 == CARBIGUP)
            {
                business_case2 = 0;
                business_case2 = rand()%18;
            }
            CarUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case COSUP:
            while(business_case2 == business_case1 || business_case2 == COSBIGUP)
            {
                business_case2 = 0;
                business_case2 = rand()%18;
            }
            CosUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case BOOKBIGUP:
            while(business_case2 == business_case1 || business_case2 == BOOKUP)
            {
                business_case2 = 0;
                business_case2 = rand()%18;
            }
            BookBigUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case COSBIGUP:
            while(business_case2 == business_case1 || business_case2 == COSUP)
            {
                business_case2 = 0;
                business_case2 = rand()%18;
            }
            CosBigUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case WINEBIGUP:
            while(business_case2 == business_case1 || business_case2 == WINEUP)
            {
                business_case2 = 0;
                business_case2 = rand()%18;
            }
            WineBigUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case PHONEUP:
            PhoneUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case CARBIGUP:
            while(business_case2 == business_case1 || business_case2 == CARUP)
            {
                business_case2 = 0;
                business_case2 = rand()%18;
            }
            CarBigUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case SMOKEDOWN:
            SmokeDownCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case TOYDOWN:
            while(business_case2 == business_case1 || business_case2 == TOYUP)
            {
                business_case2 = 0;
                business_case2 = rand()%18;
            }
            ToyDownCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case VCDDOWN:
            while(business_case2 == business_case1 || business_case2 == VCDUP)
            {
                business_case2 = 0;
                business_case2 = rand()%18;
            }
            VCDDownCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case CARGET:
            CarGetCase(days, cash, saving, powed, ps, pgoods, room);
            break;
        case SMOKEGET:
            SmokeGetCase(days, cash, saving, powed, ps, pgoods, room);
            break;
        case WINEGET:
            WineGetCase(days, cash, saving, powed, ps, pgoods, room);
            break;
        case PHONEOWED:
            PhoneOwedCase(days, cash, saving, powed, ps, pgoods, room);
            break;
        }
        switch(business_case2)
        {
        case TOYUP:
            ToyUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case WINEUP:
            WineUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case BOOKUP:
            BookUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case VCDUP:
            VCDUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case CARUP:
            CarUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case COSUP:
            CosUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case BOOKBIGUP:
            BookBigUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case COSBIGUP:
            CosBigUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case WINEBIGUP:
            WineBigUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case PHONEUP:
            PhoneUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case CARBIGUP:
            CarBigUpCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case SMOKEDOWN:
            SmokeDownCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case TOYDOWN:
            ToyDownCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case VCDDOWN:
            VCDDownCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
            break;
        case CARGET:
            CarGetCase(days, cash, saving, powed, ps, pgoods, room);
            break;
        case SMOKEGET:
            SmokeGetCase(days, cash, saving, powed, ps, pgoods, room);
            break;
        case WINEGET:
            WineGetCase(days, cash, saving, powed, ps, pgoods, room);
            break;
        case PHONEOWED:
            PhoneOwedCase(days, cash, saving, powed, ps, pgoods, room);
            break;
        }
    }
}

void ToyUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //玩具涨价函数
{
    all_goods[TOY].price *= 2;
    int case_num = TOY;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |        专家提议提高大学生“动手素质”，进口玩具大卖！        |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void WineUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)      //白酒涨价函数
{
    all_goods[WINE].price *= 3;
    int case_num = WINE;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |          有人说：生病不用打针吃药，喝假白酒就可以！          |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void BookUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)      //禁忌涨价函数
{
    all_goods[BOOK].price *= 4;
    int case_num = BOOK;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |       医院的秘密报告：“《上海小宝贝》功效甚过伟哥”！       |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void VCDUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //VCD涨价函数
{
    all_goods[VCD].price = (rand()%21+40)*4;
    int case_num = VCD;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |       文盲说：“2000年诺贝尔文学奖？呸！不如盗版 VCD。       |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void CarUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //汽车涨价函数
{
    all_goods[CAR].price *= 3;
    int case_num = CAR;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |       《北京经济小报》：“走私汽车大力推进汽车消费！”       |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void CosUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //化妆品涨价函数
{
    all_goods[COS].price *= 4;
    int case_num = COS;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |《北京真理报》社论：“提倡爱美，落到实处！”，伪劣化妆品热销。|\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void BookBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //禁书大涨函数
{
    all_goods[BOOK].price *= 8;
    int case_num = BOOK;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |  8858.com电子书店也不敢卖《上海小宝贝》，黑市一册可卖天价。  |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void CosBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)        //化妆品大涨函数
{
    all_goods[COS].price *= 8;
    int case_num = COS;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |谢不疯在晚会上说：“我酷！我使用伪劣化妆品！”伪劣化妆品大卖。|\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void WineBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //白酒大涨函数
{
    all_goods[WINE].price *= 7;
    int case_num = WINE;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |               北京有人狂饮山西假酒，可卖出天价               |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void PhoneUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)     //手机涨价函数
{
    all_goods[PHONE].price *= 7;
    int case_num = PHONE;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |         北京的大学生们开始找工作，水货手机大受欢迎！         |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void CarBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)        //汽车大涨函数
{
    all_goods[CAR].price *= 7;
    int case_num = CAR;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |                北京的富人疯狂地购买走私汽车！                |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void SmokeDownCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //香烟下跌函数
{
    all_goods[SMOKE].price /= 7;
    int case_num = SMOKE;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |               市场上充斥着来自福建的走私香烟。               |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void ToyDownCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)     //玩具下跌函数
{
    all_goods[TOY].price /= 7;
    int case_num = TOY;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |          北京的孩子都忙于上网学习，进口玩具没人买。          |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void VCDDownCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)     //VCD下跌函数
{
    all_goods[VCD].price = (rand()%15+10)/8;
    int case_num = VCD;
    int i = 0;
    for(i = 0; i < kind; i++)
    {
        if(market_num[i] == case_num)
        {
            break;
        }
    }
    int n = 0;
    if(i == kind)
    {
        n = rand()%kind;
        market_num[n] = case_num;
    }
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |         “中国硅谷”——中关村全是卖盗版 VCD的村姑。         |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void CarGetCase(int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)      //得到汽车函数
{
    Goods car_goods[1] = {{.name = "走私汽车", .price = CASEPRICE, .num=0}};
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |            厦门的老同学资助俺两部走私汽车，发了！            |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    if(*pgoods == room)
    {
        system("cls");
        DaysShow(days);
        Location(0, 5);
        printf("                    ----------------------------------------\n");
        printf("                    |可惜我的仓库太小了，只能放%4d个商品。|\n", room);
        printf("                    ----------------------------------------\n");
        ParmShow(cash, saving, *powed);
        StoreShow(ps, *pgoods, room);
        Sleep(2000);
    }else if(*pgoods > (room-CARGETNUM))
    {
        AddStore(pgoods, ps, car_goods, 0, (room-*pgoods), &cash);
        system("cls");
        DaysShow(days);
        Location(0, 5);
        printf("                    ----------------------------------------\n");
        printf("                    |可惜我的仓库太小了，只能放%4d个商品。|\n", room);
        printf("                    ----------------------------------------\n");
        ParmShow(cash, saving, *powed);
        StoreShow(ps, *pgoods, room);
        Sleep(2000);
    }else
    {
        AddStore(pgoods, ps, car_goods, 0, CARGETNUM, &cash);
        ParmShow(cash, saving, *powed);
        StoreShow(ps, *pgoods, room);
        Sleep(2000);
    }
}

void SmokeGetCase(int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)        //得到香烟函数
{
    Goods smoke_goods[1] = {{.name = "进口香烟", .price = CASEPRICE, .num=0}};
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |         工商局扫荡后，俺在角落发现了老乡的进口香烟。         |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    if(*pgoods == room)
    {
        system("cls");
        DaysShow(days);
        Location(0, 5);
        printf("                    ----------------------------------------\n");
        printf("                    |可惜我的仓库太小了，只能放%4d个商品。|\n", room);
        printf("                    ----------------------------------------\n");
        ParmShow(cash, saving, *powed);
        StoreShow(ps, *pgoods, room);
        Sleep(2000);
    }else if(*pgoods > (room-SMOKEGETNUM))
    {
        AddStore(pgoods, ps, smoke_goods, 0, (room-*pgoods), &cash);
        system("cls");
        DaysShow(days);
        Location(0, 5);
        printf("                    ----------------------------------------\n");
        printf("                    |可惜我的仓库太小了，只能放%4d个商品。|\n", room);
        printf("                    ----------------------------------------\n");
        ParmShow(cash, saving, *powed);
        StoreShow(ps, *pgoods, room);
        Sleep(2000);
    }else
    {
        AddStore(pgoods, ps, smoke_goods, 0, SMOKEGETNUM, &cash);
        ParmShow(cash, saving, *powed);
        StoreShow(ps, *pgoods, room);
        Sleep(2000);
    }
}

void WineGetCase(int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)     //得到白酒函数
{
    Goods wine_goods[1] = {{.name = "假白酒", .price = CASEPRICE, .num=0}};
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |                俺老乡回家前把一些假白酒给俺。                |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    if(*pgoods == room)
    {
        system("cls");
        DaysShow(days);
        Location(0, 5);
        printf("                    ----------------------------------------\n");
        printf("                    |可惜我的仓库太小了，只能放%4d个商品。|\n", room);
        printf("                    ----------------------------------------\n");
        ParmShow(cash, saving, *powed);
        StoreShow(ps, *pgoods, room);
        Sleep(2000);
    }else if(*pgoods > (room-WINEGETNUM))
    {
        AddStore(pgoods, ps, wine_goods, 0, (room-*pgoods), &cash);
        system("cls");
        DaysShow(days);
        Location(0, 5);
        printf("                    ----------------------------------------\n");
        printf("                    |可惜我的仓库太小了，只能放%4d个商品。|\n", room);
        printf("                    ----------------------------------------\n");
        ParmShow(cash, saving, *powed);
        StoreShow(ps, *pgoods, room);
        Sleep(2000);
    }else
    {
        AddStore(pgoods, ps, wine_goods, 0, WINEGETNUM, &cash);
        ParmShow(cash, saving, *powed);
        StoreShow(ps, *pgoods, room);
        Sleep(2000);
    }
}

void PhoneOwedCase(int days, int cash, int saving, int* powed, StoreGoods* ps, int* pgoods, int room)       //手机强卖函数
{
    Goods phone_goods[1] = {{.name = "水货手机", .price = PHONEPRICE, .num=0}};
    if(*pgoods == room)
    {
        return;
    }else
    {
        *powed += 2500;
        AddStore(pgoods, ps, phone_goods, 0, PHONENUM, &cash);
        system("cls");
        DaysShow(days);
        Location(0, 4);
        Color(YELLOW);
        printf("        ----------------------------------------------------------------\n");
        printf("        |        日本产品又出事故！日本鬼子死不认账！拒绝赔偿！        |\n");
        printf("        |             村长吓得把他的水货手机高价强卖给俺。             |\n");
        printf("        ----------------------------------------------------------------\n");
        Color_Back();
        ParmShow(cash, saving, *powed);
        StoreShow(ps, *pgoods, room);
        Sleep(2000);
    }
}

void InitStore(StoreGoods* ps)      //初始化仓库
{
    memset(ps->store_arr, 0, sizeof(ps->store_arr));        //将仓库数组按字节填充0
    ps->store_size = 0;     //初始使用量为0
}

void BuyIn(int* pgoods, int room, StoreGoods* ps, Goods market_goods[], int* pcash)
{
    int buyser = 0;     //初始化购买序号
    int buynum = 0;     //初始化购买数量
    if(*pgoods == room)     //如果货物量等于仓库容量
    {
        printf("你没有更多的空间来装商品了！\n");     //提示仓库已满
        Sleep(1000);        //保留1秒画面
        ChooseMenu();       //清除操作区
    }else       //如果货物未满
    {
        printf("你要购买哪件商品？（请输入序号）:>");       //提示购买
        scanf("%d", &buyser);       //获取购买序号
        buyser--;       //购买序号-1匹配数组序号
        if(market_goods[buyser].price == 0)     //若输入的序号超出列表
        {
            printf("输入错误！\n");      //提示
            Sleep(1000);        //保留1秒画面
            ChooseMenu();       //清除操作区
        }else if(market_goods[buyser].price > *pcash)       //若所选商品价格超出现金
        {
            printf("你的钱不够！\n");     //提示
            Sleep(1000);        //保留1秒画面
            ChooseMenu();       //清除操作区
        }else       //若所选商品可以购买
        {
            int num = *pcash/market_goods[buyser].price;        //计算最多可以购买量
            if(num > (room-*pgoods))        //若可购买量超过仓库剩余空间
            {
                num = room-*pgoods;     //让最大购买量等于仓库剩余空间
            }
            printf("你现在有%d元，可以购买%d件%s，你要购买几件？:>\n", *pcash, num, market_goods[buyser].name);        //提示可购买数量
            scanf("%d", &buynum);       //获取购买数量
            if(buynum > num)        //若购买数量大于最大购买量
            {
                printf("你买不了这么多！\n");     //提示
                Sleep(1000);        //保留1秒画面
                ChooseMenu();       //清除操作区
            }else       //若购买量未超限定
            {
                AddStore(pgoods, ps, market_goods, buyser, buynum, pcash);      //执行添加仓库函数
            }
        }
    }
}

void AddStore(int* pgoods, StoreGoods* ps, Goods market_goods[], int buyser, int buynum, int* pcash)        //添加仓库函数
{
    int ret = -1;        //定义对比结果变量
    int temp_price = 0;     //定义临时价格转储
    int i = 0;
    for(i = 0; i < ps->store_size; i++)     //遍历查找仓库中是否已有同类商品
    {
        ret = strcmp(market_goods[buyser].name, ps->store_arr[i].name);     //通过名称比对查找
        if(ret == 0)        //若找到同名商品
        {
            break;      //直接跳出
        }
    }
    if(ret == 0)        //若遍历后找到同名商品
    {
        temp_price = (ps->store_arr[i].price)*(ps->store_arr[i].num);       //使临时价格等于之前已有商品的总价
        ps->store_arr[i].num += buynum;     //在已有商品上增加买入库存
        *pgoods += buynum;      //库存增加购入量数
        *pcash -= buynum*market_goods[buyser].price;      //现金减去消耗量
        ps->store_arr[i].price = (temp_price+market_goods[buyser].price*buynum)/ps->store_arr[i].num;       //用原价格和现价格算出平均价格
    }else
    {
        ps->store_arr[ps->store_size] = market_goods[buyser];       //在仓库最新一项中获取购买商品的参数
        ps->store_arr[ps->store_size].num = buynum;         //商品数量为购买数量
        *pgoods += buynum;      //库存增加购入量数
        *pcash -= buynum*market_goods[buyser].price;      //现金减去消耗量
        ps->store_size++;       //使用量+1
    }
}

void SellOut(int* pgoods, int room, StoreGoods* ps, Goods market_goods[], int* pcash)
{
    if(ps->store_size == 0)
    {
        printf("你没有商品可以出售！\n");
        Sleep(1000);
    }else
    {
        int sellser = 0;        //初始化出售序号
        int sellnum = 0;        //初始化出售数量
        printf("你要出售哪件商品？（请输入序号）:>");       //提示出售
        scanf("%d", &sellser);      //获取出售序号
        sellser--;      //出售序号+1以匹配货物数组
        int ret = -1;       //定义对比结果变量
        int i = 0;
        for(i = 0; i < MAX_GOODS; i++)
        {
            ret = strcmp(ps->store_arr[sellser].name, market_goods[i].name);        //通过名称对比查找
            if(ret == 0)        //若找到同名商品
            {
                break;      //直接跳出
            }
        }
        if(ret != 0)        //若未在市场中找到同名商品
        {
            printf("真遗憾，这里没有人做%s生意！\n", ps->store_arr[sellser].name);       //提示
            Sleep(1000);        //保留1秒画面
            ChooseMenu();       //清除操作区
        }else       //若有同类商品
        {
            printf("你现在有%d件%s，你要售出多少件？:>", ps->store_arr[sellser].num, ps->store_arr[sellser].name);        //提示可卖出数量
            scanf("%d", &sellnum);      //获取出售数量
            if(sellnum > ps->store_arr[sellser].num)        //若售出数量大于库存值
            {
                printf("你没有那么多库存！\n");      //提示
                Sleep(1000);        //保留1秒画面
                ChooseMenu();       //清除操作区
            }else if(sellnum == ps->store_arr[sellser].num)     //如果卖出数等于该商品所有库存
            {
                DelStore(pgoods, ps, sellser, sellnum, pcash, market_goods, i);      //执行删除库存函数
            }else       //如果卖出数小于库存
            {
                ModifyStore(pgoods, ps, sellser, sellnum, pcash, market_goods, i);       //执行修改库存函数
            }
        }
    }

}

void DelStore(int* pgoods, StoreGoods* ps, int sellser, int sellnum, int* pcash, Goods market_goods[], int i)     //删除库存函数
{
    int j = 0;
    *pgoods -= sellnum;     //库存数量减掉售出数
    *pcash += market_goods[i].price*sellnum;     //现金添加售出金钱
    for(j = sellser; j < ps->store_size-1; j++)     //从售出商品处开始将后面元素前移
    {
        ps->store_arr[j] = ps->store_arr[j+1];
    }
    ps->store_size--;       //数组使用量-1
}

void ModifyStore(int* pgoods, StoreGoods* ps, int sellser, int sellnum, int* pcash, Goods market_goods[], int i)     //库存修改函数
{
    *pgoods -= sellnum;     //库存数量减掉售出数
    *pcash += market_goods[i].price*sellnum;     //现金添加售出金钱
    ps->store_arr[sellser].num -= sellnum;      //该商品库存数量关掉售出数
}

void LastDayShow(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)
{
    system("cls");
    DaysShow(days);
    Location(0, 5);
    printf("                    ------------------------------------------\n");
    printf("                    |     ");
    Color(WHITEBACK);
    printf("俺明天回家，得把货物全部卖掉。");
    Color_Back();
    printf("     |\n");
    printf("                    ------------------------------------------\n");
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
    Sleep(2000);
}

void EndDay(Goods market_goods[], int* pgoods, int room, StoreGoods* ps, int* pcash, int saving, int owed)
{
    system("cls");
    if(ps->store_size == 0)
    {
        EndDayShow(market_goods, *pgoods, room, ps, *pcash, saving, owed);
    }else
    {
        int i = 0;
        int num = ps->store_size;
        StoreGoods temp_goods;
        for(i = 0; i < ps->store_size; i++)
        {
            temp_goods.store_arr[i] = ps->store_arr[i];
        }
        for(i = ps->store_size-1; i >= 0; i--)
        {
            int j = 0;
            int ret = -1;
            for(j = 0; j < MAX_GOODS; j++)
            {
                ret = strcmp(ps->store_arr[i].name, market_goods[j].name);        //通过名称对比查找
                if(ret == 0)        //若找到同名商品
                {
                    break;      //直接跳出
                }
            }
            DelStore(pgoods, ps, i, ps->store_arr[i].num, pcash, market_goods, j);
        }
        EndDayShow(market_goods, *pgoods, room, ps, *pcash, saving, owed);
        SystemSell(&temp_goods, num);
    }
    Sleep(5000);
}

void EndDayShow(Goods market_goods[], int goods, int room, StoreGoods* ps, int cash, int saving, int owed)
{
    Location(25, 1);
    printf("--------------------------------\n");
    Location(25, 2);
    printf("|");
    Location(26, 2);
    Color(WHITEBACK);
    printf("俺来北京40天了，该回家结婚了。");
    Color_Back();
    Location(56, 2);
    printf("|\n");
    Location(25, 3);
    printf("--------------------------------\n");
    Location(3, 5);
    printf("黑市：\n");
    int i = 0;
    Location(3, 6);
    printf("------------------------------\n");        //显示表格
    Location(3, 7);
    printf("|%s|%16s|%6s|\n", "序号", "商品", "价格");       //显示标头
    for(i = 0; i < MAX_GOODS; i++)
    {
        Location(3, 8+i);
        printf("|%4d|%16s|%6d|\n", i+1, market_goods[i].name, market_goods[i].price);      //遍历显示对应商品名及价格
    }
    Location(3, 8+i);
    printf("------------------------------\n");        //显示表格结尾
    Location(37, 5);
    printf("仓库：\n");
    Location(37, 6);
    printf("----------------------------------------\n");
    Location(37, 7);
    printf("|%s|%14s|%6s|%s%3d/%3d|\n","序号","名称","价格","数量", goods, room);
    for(i = 0; i < ps->store_size; i++)
    {
        Location(38, 8+i);
        printf("%4d", i+1);
        Location(43, 8+i);
        printf("%14s", ps->store_arr[i].name);
        Location(58, 8+i);
        printf("%6d", ps->store_arr[i].price);
        Location(65, 8+i);
        printf("%10d", ps->store_arr[i].num);
    }
    Location(37, 8);
    printf("|");
    Location(42, 8);
    printf("|");
    Location(57, 8);
    printf("|");
    Location(64, 8);
    printf("|");
    Location(76, 8);
    printf("|\n");
    Location(37, 9);
    printf("|");
    Location(42, 9);
    printf("|");
    Location(57, 9);
    printf("|");
    Location(64, 9);
    printf("|");
    Location(76, 9);
    printf("|\n");
    Location(37, 10);
    printf("|");
    Location(42, 10);
    printf("|");
    Location(57, 10);
    printf("|");
    Location(64, 10);
    printf("|");
    Location(76, 10);
    printf("|\n");
    Location(37, 11);
    printf("|");
    Location(42, 11);
    printf("|");
    Location(57, 11);
    printf("|");
    Location(64, 11);
    printf("|");
    Location(76, 11);
    printf("|\n");
    Location(37, 12);
    printf("|");
    Location(42, 12);
    printf("|");
    Location(57, 12);
    printf("|");
    Location(64, 12);
    printf("|");
    Location(76, 12);
    printf("|\n");
    Location(37, 13);
    printf("|");
    Location(42, 13);
    printf("|");
    Location(57, 13);
    printf("|");
    Location(64, 13);
    printf("|");
    Location(76, 13);
    printf("|\n");
    Location(37, 14);
    printf("|");
    Location(42, 14);
    printf("|");
    Location(57, 14);
    printf("|");
    Location(64, 14);
    printf("|");
    Location(76, 14);
    printf("|\n");
    Location(37, 15);
    printf("|");
    Location(42, 15);
    printf("|");
    Location(57, 15);
    printf("|");
    Location(64, 15);
    printf("|");
    Location(76, 15);
    printf("|\n");
    Location(37, 16);
    printf("----------------------------------------\n");
    Location(0, 18);
    printf("                 ----------------------------------------------\n");
    printf("                 |现金：%8d|存款：%8d|欠款：%8d|\n", cash, saving, owed);
    printf("                 ----------------------------------------------\n");
}

void SystemSell(StoreGoods* ps, int num)
{
    Location(28, 22);
    printf("系统替我卖掉了剩余物品：\n");
    Color(YELLOW);
    int i = 0;
    for(i = 0; i < num; i++)
    {
        Location(28+(i%2)*16, 23+i/2);
        printf("%s\t", ps->store_arr[i].name);
    }
    Color_Back();
    printf("\n");
}

int GoodEnd(int cash, int saving, int owed)
{
    system("cls");
    int money = 0;
    money = cash + saving - owed;
    int input = 0;
    if(money > 99999)
    {
        printf("\n\n\n\n\n\n\n\n\n");
        Color(YELLOW);
        printf("               --------------------------------------------------\n");
        printf("               |    恭喜你！不但还清欠款并在北京生存了下来，    |\n");
        printf("               |   还在短短40天之内赚到%8d元的高额资产！   |\n", money);
        printf("               |你成功地入驻了北京名人堂，并当选了北京杰出青年。|\n");
        printf("               |     你优秀的赚钱能力受到了富豪女儿的赞赏，     |\n");
        printf("               |      让你顺利地迎娶白富美，走上人生巅峰。      |\n");
        printf("               |  后人评价你的一生是精彩的一生，是传奇的一生，  |\n");
        printf("               |        是特喵的小说都不敢这么写的一生。        |\n");
        printf("               |             你成为了北京的传说……             |\n");
        printf("               --------------------------------------------------\n");
        Color_Back();
        printf("\n");
    }else if(money > 999)
    {
        printf("\n\n\n\n\n\n\n\n\n");
        Color(YELLOW);
        printf("                  --------------------------------------------\n");
        printf("                  |       恭喜你！你在北京生存了下来。       |\n");
        printf("                  |在40天里你成功地还清了欠款，并小赚了一笔。|\n");
        printf("                  |        北京的富豪对你没什么印象，        |\n");
        printf("                  |   但因你的活跃，黑市的人对你都很熟悉。   |\n");
        printf("                  |          你最终赚到了%6d元。          |\n", money);
        printf("                  |      虽然不多，但在村里也算巨款了。      |\n");
        printf("                  |  村长对你非常欣赏，将他的女儿嫁给了你。  |\n");
        printf("                  |      今后你也能在村里作威作福了……      |\n");
        printf("                  --------------------------------------------\n");
        Color_Back();
        printf("\n");
    }else if(money >= 0)
    {
        printf("\n\n\n\n\n\n\n\n\n");
        Color(YELLOW);
        printf("                       ----------------------------------\n");
        printf("                       | 嗯……至少你在北京活了下来…… |\n");
        printf("                       |     并且把欠的钱都还上了，     |\n");
        printf("                       |    当然你也没有赚到什么钱。    |\n");
        printf("                       |   现在你全身上下只有%4d元。   |\n", money);
        printf("                       |你觉得自己实在是没什么生意天赋，|\n");
        printf("                       |      于是便回家种田去了。      |\n");
        printf("                       |    没有人记得你来过北京……    |\n");
        printf("                       ----------------------------------\n");
        Color_Back();
        printf("\n");
    }else
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n");
        Color(YELLOW);
        printf("                   ------------------------------------------\n");
        printf("                   |你在北京挺过了40天，但最终没能还清欠款。|\n");
        printf("                   |    直到现在，你还欠着村长%6d元。    |\n", money);
        printf("                   |     村长大为光火，找人暴揍你一顿。     |\n");
        printf("                   |      最终你瘫痪在床，了此残生……      |\n");
        printf("                   ------------------------------------------\n");
        Color_Back();
        printf("\n");
    }
    do
    {
        Location(0, 20);
        int i = 0;
        for(i = 0; i < 80*2; i++)
        {
            printf(" ");
        }
        Location(0, 20);
        printf("\t\t要再玩一局吗？>:1. 再玩一局 0. 不玩了");
        scanf("%d", &input);
    }while(input != 1 && input != 0);
    return input;
}

int BadEnd()
{
    int input = 0;
    system("cls");
    Location(0, 14);
    Color(RED);
    printf("                  --------------------------------------------\n");
    printf("                  |俺欠钱太多，村长派人嘎了俺腰子，俺挂了……|\n");
    printf("                  --------------------------------------------\n");
    Color_Back();
    Sleep(2000);
    system("cls");
    Location(0, 14);
    Color(YELLOW);
    printf("                   ------------------------------------------\n");
    printf("                   |因为村长下黑手，你嗝屁了，要重新开始么？|\n");
    printf("                   ------------------------------------------\n");
    Color_Back();
    do
    {
        Location(0, 17);
        int i = 0;
        for(i = 0; i < 80*2; i++)
        {
            printf(" ");
        }
        Location(0, 17);
        printf("                         1.重新开始             0.不玩了\n");
        Location(20, 18);
        scanf("%d", &input);
    }while(input != 1 && input != 0);
    return input;
}

void BreakGameShow()
{
    system("cls");
    Location(0, 12);
    printf("                  --------------------------------------------\n");
    printf("                  |");
    Color(WHITEBACK);
    printf("           《北京游戏报》报道：           ");
    Color_Back();
    printf("|\n");
    printf("                  |");
    Color(WHITEBACK);
    printf("玩家“无名氏”在北京没挣着钱，被遣送回家。");
    Color_Back();
    printf("|\n");
    printf("                  --------------------------------------------\n");
    Sleep(2000);
}

void GameEndShow()
{
    system("cls");
    Color(YELLOW);
    printf("\n");
    printf("               _______   _    _       __       ___     _   _   __\n");
    printf("              |__   __| | |  | |     /  \\     |   \\   | | | | / /\n");
    printf("                 | |    | |__| |    / /\\ \\    | |\\ \\  | | | |/ /\n");
    printf("                 | |    |  __  |   / /__\\ \\   | | \\ \\ | | |   |\n");
    printf("                 | |    | |  | |  / ______ \\  | |  \\ \\| | | |\\ \\\n");
    printf("                 |_|    |_|  |_| /_/      \\_\\ |_|   \\___| |_| \\_\\\n");
    printf("\n");
    printf("                           __    __   ____    _   _\n");
    printf("                           \\ \\  / /  / __ \\  | | | |\n");
    printf("                            \\ \\/ /  | |  | | | | | |\n");
    printf("                             \\  /   | |  | | | | | |\n");
    printf("                             |  |   | |__| | | |_| |\n");
    printf("                             |__|    \\____/   \\___/\n");
    printf("\n");
    printf("                             _____    ____    ____\n");
    printf("                            |  ___|  / __ \\  |  _ \\\n");
    printf("                            | |__   | |  | | | |_| |\n");
    printf("                            |  __|  | |  | | |    /\n");
    printf("                            | |     | |__| | | |\\ \\\n");
    printf("                            |_|      \\____/  |_| \\_\\\n");
    printf("\n");
    printf("       ____    _           __      __    __  _____   ___     _    ______\n");
    printf("      |  _ \\  | |         /  \\     \\ \\  / / |_   _| |   \\   | |  / _____\\\n");
    printf("      | |_| | | |        / /\\ \\     \\ \\/ /    | |   | |\\ \\  | | | |  ___\n");
    printf("      |  __/  | |       / /__\\ \\     \\  /     | |   | | \\ \\ | | | | |_  |\n");
    printf("      | |     | |___   / ______ \\    |  |    _| |_  | |  \\ \\| | | |___| |\n");
    printf("      |_|     |_____| /_/      \\_\\   |__|   |_____| |_|   \\___|  \\______/\n");
    Color_Back();
    Sleep(2000);
}
