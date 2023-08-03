#include "beijing.h"

void run_game();        //声明运行游戏函数
void game(int* inputp);        //声明游戏函数

int main()
{
    system("mode con cols=80 lines=30");        //设定窗口大小
    run_game();     //调用运行游戏函数
    return 0;
}

void run_game()         //运行游戏函数
{
    int input = 0;      //定义玩家输入选项
    int* inputp = &input;
    srand((unsigned int)time(NULL));        //定义随机数生成器
    do
    {
        system("cls");
        Menu();         //显示开始菜单
        printf("\n\n\t\t请选择:>");        //让玩家选择内容
        scanf("%d", &input);        //获取玩家选择
        switch(input)       //根据玩家选择跳转
        {
        case 1:     //选择进行游戏
            system("cls");      //清屏准备显示游戏内容
            game(inputp);
            break;
        case 0:     //选择退出
            GameEndShow();
            break;      //直接退出
        default:        //其它选项
            system("cls");      //清屏后重新显示菜单内容
            break;
        }
    }while(input);      //当选择不为0时一直运行
}

void game(int* inputp)
{
    int days = 0;       //定义天数
    int cash = INIT_CASH;        //定义起始现金
    int saving = INIT_SAVING;     //定义起始存款
    int owed = INIT_OWED;        //定义起始欠款
    int room = INIT_ROOM;       //定义起始仓库容量
    int goods = INIT_GOODS;      //定义起始库存货物
    int net_times = 0;      //定义去网吧次数
    int choose = -1;        //定义选择
    int move_station = 0;      //定义移动车站选项
    int at_station = -1;        //定义所在车站变量
    int place_choose = -1;      //定义场所选项
    int business_choose = -1;       //定义交易选项
    int bad_end = -1;
    StoreGoods store_goods;     //定义库存商品
    InitStore(&store_goods);        //初始化库存商品
    Goods market_goods[MAX_GOODS] = {0};        //定义黑市数组
    Goods all_goods[MAX_GOODS]={        //定义并初始化商品数组
        {
            .name = "盗版VCD/游戏",
            .price=0,
            .num=0
        },
        {
            .name = "进口香烟",
            .price=0,
            .num=0
        },
        {
            .name = "伪劣化妆品",
            .price=0,
            .num=0
        },
        {
            .name = "进口玩具",
            .price=0,
            .num=0
        },
        {
            .name = "假白酒",
            .price=0,
            .num=0
        },
        {
            .name = "水货手机",
            .price=0,
            .num=0
        },
        {
            .name = "《上海小宝贝》",
            .price=0,
            .num=0
        },
        {
            .name = "走私汽车",
            .price=0,
            .num=0
        },
    };
    void (*show[10])(StoreGoods*, int, int, int, int, int, int)={ShowStation0, ShowStation1, ShowStation2,
                        ShowStation3, ShowStation4, ShowStation5, ShowStation6,
                        ShowStation7, ShowStation8, ShowStation9};      //定义各车站显示函数指针数组
    int sz = sizeof(market_goods);      //获取黑市数组大小
    InitPrice(all_goods);       //初始化商品价格
    InitMarket(market_goods, sz, all_goods, days, cash, saving, &owed, &store_goods, &goods, room);        //初始化黑市商品
    StartShow(&store_goods, days, cash, saving, owed, goods, room);
    int szbuy = sizeof(market_goods)/sizeof(market_goods[0]);
    do
    {
        printf("你要做什么？:>1.移动 2.场所 3.交易 0.退出");      //显示选项
        scanf("%d", &choose);       //获取玩家选择
        switch(choose)      //基于选择跳转
        {
        case MOVE:      //若选择移动
            printf("\n你要去哪个车站？:>");     //询问移动目标
            StationList(at_station);        //调用显示车站函数
            scanf("%d", &move_station);     //获取玩家选择
            if(move_station == at_station && move_station != 10)        //若选择与当前车站相同且未选择返回
            {
                printf("\n你当前就在此车站！\n");      //提示
                Sleep(1000);        //保留1秒画面
                system("cls");      //清屏
                show[at_station](&store_goods, days, cash, saving, owed, goods, room);     //重新显示当前车站
            }else if(move_station != at_station && move_station != 10)      //若选择与当前车站不同且未选择返回
            {
                at_station = move_station;      //让所在车站等于选择车站
                if(days < 38)     //天数自加后未到39时
                {
                    switch(move_station)        //根据选择车站跳转
                    {
                    case PINGGUOYUAN:
                        days++;     //天数增加（下同）
                        MoneyChange(&saving, &owed);        //存款及欠款按天数增加（下同）
                        if(owed >= 100000)
                        {
                            bad_end = BadEnd();
                        }
                        if(bad_end == 1)
                        {
                            system("cls");
                            return;
                        }else if(bad_end == 0)
                        {
                            *inputp = 0;
                            GameEndShow();
                            return;
                        }
                        InitPrice(all_goods);       //初始化商品价格（下同）
                        InitMarket(market_goods, sz, all_goods, days, cash, saving, &owed, &store_goods, &goods, room);        //初始化黑市商品（下同）
                        IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                        system("cls");      //清屏
                        show[at_station](&store_goods, days, cash, saving, owed, goods, room);     //显示当前车站画面（下同）
                        break;
                    case GONGZHUFEN:
                        days++;
                        MoneyChange(&saving, &owed);
                        if(owed >= 100000)
                        {
                            bad_end = BadEnd();
                        }
                        if(bad_end == 1)
                        {
                            system("cls");
                            return;
                        }else if(bad_end == 0)
                        {
                            *inputp = 0;
                            GameEndShow();
                            return;
                        }
                        InitPrice(all_goods);
                        InitMarket(market_goods, sz, all_goods, days, cash, saving, &owed, &store_goods, &goods, room);
                        IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                        system("cls");
                        show[at_station](&store_goods, days, cash, saving, owed, goods, room);
                        break;
                    case FUXINGMEN:
                        days++;
                        MoneyChange(&saving, &owed);
                        if(owed >= 100000)
                        {
                            bad_end = BadEnd();
                        }
                        if(bad_end == 1)
                        {
                            system("cls");
                            return;
                        }else if(bad_end == 0)
                        {
                            *inputp = 0;
                            GameEndShow();
                            return;
                        }
                        InitPrice(all_goods);
                        InitMarket(market_goods, sz, all_goods, days, cash, saving, &owed, &store_goods, &goods, room);
                        IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                        system("cls");
                        show[at_station](&store_goods, days, cash, saving, owed, goods, room);
                        break;
                    case XIZHIMEN:
                        days++;
                        MoneyChange(&saving, &owed);
                        if(owed >= 100000)
                        {
                            bad_end = BadEnd();
                        }
                        if(bad_end == 1)
                        {
                            system("cls");
                            return;
                        }else if(bad_end == 0)
                        {
                            *inputp = 0;
                            GameEndShow();
                            return;
                        }
                        InitPrice(all_goods);
                        InitMarket(market_goods, sz, all_goods, days, cash, saving, &owed, &store_goods, &goods, room);
                        IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                        system("cls");
                        show[at_station](&store_goods, days, cash, saving, owed, goods, room);
                        break;
                    case JISHUITAN:
                        days++;
                        MoneyChange(&saving, &owed);
                        if(owed >= 100000)
                        {
                            bad_end = BadEnd();
                        }
                        if(bad_end == 1)
                        {
                            system("cls");
                            return;
                        }else if(bad_end == 0)
                        {
                            *inputp = 0;
                            GameEndShow();
                            return;
                        }
                        InitPrice(all_goods);
                        InitMarket(market_goods, sz, all_goods, days, cash, saving, &owed, &store_goods, &goods, room);
                        IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                        system("cls");
                        show[at_station](&store_goods, days, cash, saving, owed, goods, room);
                        break;
                    case DONGZHIMEN:
                        days++;
                        MoneyChange(&saving, &owed);
                        if(owed >= 100000)
                        {
                            bad_end = BadEnd();
                        }
                        if(bad_end == 1)
                        {
                            system("cls");
                            return;
                        }else if(bad_end == 0)
                        {
                            *inputp = 0;
                            GameEndShow();
                            return;
                        }
                        InitPrice(all_goods);
                        InitMarket(market_goods, sz, all_goods, days, cash, saving, &owed, &store_goods, &goods, room);
                        IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                        system("cls");
                        show[at_station](&store_goods, days, cash, saving, owed, goods, room);
                        break;
                    case JIANGUOMEN:
                        days++;
                        MoneyChange(&saving, &owed);
                        if(owed >= 100000)
                        {
                            bad_end = BadEnd();
                        }
                        if(bad_end == 1)
                        {
                            system("cls");
                            return;
                        }else if(bad_end == 0)
                        {
                            *inputp = 0;
                            GameEndShow();
                            return;
                        }
                        InitPrice(all_goods);
                        InitMarket(market_goods, sz, all_goods, days, cash, saving, &owed, &store_goods, &goods, room);
                        IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                        system("cls");
                        show[at_station](&store_goods, days, cash, saving, owed, goods, room);
                        break;
                    case BEIJINGZHAN:
                        days++;
                        MoneyChange(&saving, &owed);
                        if(owed >= 100000)
                        {
                            bad_end = BadEnd();
                        }
                        if(bad_end == 1)
                        {
                            system("cls");
                            return;
                        }else if(bad_end == 0)
                        {
                            *inputp = 0;
                            GameEndShow();
                            return;
                        }
                        InitPrice(all_goods);
                        InitMarket(market_goods, sz, all_goods, days, cash, saving, &owed, &store_goods, &goods, room);
                        IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                        system("cls");
                        show[at_station](&store_goods, days, cash, saving, owed, goods, room);
                        break;
                    case CONGWENMEN:
                        days++;
                        MoneyChange(&saving, &owed);
                        if(owed >= 100000)
                        {
                            bad_end = BadEnd();
                        }
                        if(bad_end == 1)
                        {
                            system("cls");
                            return;
                        }else if(bad_end == 0)
                        {
                            *inputp = 0;
                            GameEndShow();
                            return;
                        }
                        InitPrice(all_goods);
                        InitMarket(market_goods, sz, all_goods, days, cash, saving, &owed, &store_goods, &goods, room);
                        IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                        system("cls");
                        show[at_station](&store_goods, days, cash, saving, owed, goods, room);
                        break;
                    case CHANGCHUNJIE:
                        days++;
                        MoneyChange(&saving, &owed);
                        if(owed >= 100000)
                        {
                            bad_end = BadEnd();
                        }
                        if(bad_end == 1)
                        {
                            system("cls");
                            return;
                        }else if(bad_end == 0)
                        {
                            *inputp = 0;
                            GameEndShow();
                            return;
                        }
                        InitPrice(all_goods);
                        InitMarket(market_goods, sz, all_goods, days, cash, saving, &owed, &store_goods, &goods, room);
                        IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                        system("cls");
                        show[at_station](&store_goods, days, cash, saving, owed, goods, room);
                        break;
                    default:
                        ChooseMenu();
                        break;
                    }
                }else if(days == 38)        //当天数自加后等于39
                {
                    days++;     //天数增加到39
                    MoneyChange(&saving, &owed);        //增长存欠款
                    if(owed >= 100000)
                    {
                        bad_end = BadEnd();
                    }
                    if(bad_end == 1)
                    {
                        system("cls");
                        return;
                    }else if(bad_end == 0)
                    {
                        *inputp = 0;
                        GameEndShow();
                        return;
                    }
                    LastDayShow(&store_goods, days, cash, saving, owed, goods, room);
                    InitPrice(all_goods);       //初始化商品价格
                    EndMarket(market_goods, sz, all_goods);         //黑市填充全部商品
                    IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                    system("cls");
                    show[at_station](&store_goods, days, cash, saving, owed, goods, room);
                }else       //当天数自加后等于40
                {
                    days++;     //天数增加到40
                    MoneyChange(&saving, &owed);        //增长存欠款
                    if(owed >= 100000)
                    {
                        bad_end = BadEnd();
                    }
                    if(bad_end == 1)
                    {
                        system("cls");
                        return;
                    }else if(bad_end == 0)
                    {
                        *inputp = 0;
                        GameEndShow();
                        return;
                    }
                    InitPrice(all_goods);       //初始化商品价格
                    EndMarket(market_goods, sz, all_goods);         //黑市填充全部商品
                    IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                    system("cls");
                    EndDay(market_goods, &goods, room, &store_goods, &cash, saving, owed);
                    int game_end = GoodEnd(cash, saving, owed);
                    if(game_end == 0)
                    {
                        *inputp = 0;
                        GameEndShow();
                    }
                    return;
                }
            }else
            {
                ChooseMenu();
            }
            break;
        case PLACE:     //若选择场所
            PlaceMap(&store_goods, days, cash, saving, owed, goods, room);     //显示场所界面
            printf("你要去哪里？:>1.银行 2.邮局 3.中介 4.网吧 0.返回\n");      //提示子选项
            scanf("%d", &place_choose);     //获取场所选择结果
            switch(place_choose)        //根据选择跳转
            {
            case BANK:      //选择银行
                BankShow(&store_goods, days, &cash, &saving, owed, goods, room, show, at_station);
                break;
            case POST:      //选择邮局
                PostShow(&store_goods, days, &cash, saving, &owed, goods, room, show, at_station);
                break;
            case HOUSE:     //选择中介
                HouseShow(&store_goods, &cash, &room, days, saving, owed, goods, show, at_station);
                break;
            case NET:       //选择网吧
                NetShow(&store_goods, &net_times, &cash, saving, owed, goods, room, days);
                break;
            case BACK:      //选择返回
            default:        //或其它选择
                system("cls");      //清屏
                if(at_station < 0 || at_station > 10)       //若所在车站不属于任何车站
                {
                    StartShow(&store_goods, days, cash, saving, owed, goods, room);        //显示开始界面
                }else       //若属于某车站
                {
                    show[at_station](&store_goods, days, cash, saving, owed, goods, room);     //显示对应车站图像
                }
                break;
            }
            break;
        case BUSYNESS:      //若选择交易
            system("cls");
            MarketShow(&store_goods, market_goods, days, cash, saving, owed, goods, room);
            printf("你要做什？:>1.买入 2.卖出 0.返回");        //提示
            scanf("%d", &business_choose);      //获取交易选择结果
            switch(business_choose)
            {
            case BUY:       //选择买入
                BuyIn(&goods, room, &store_goods, market_goods, szbuy, &cash);     //执行买入函数
                system("cls");      //清屏
                MarketShow(&store_goods, market_goods, days, cash, saving, owed, goods, room);      //显示市场界面
                break;
            case SELL:      //选择卖出
                SellOut(&goods, room, &store_goods, market_goods, &cash);       //执行卖出函数
                system("cls");      //清屏
                MarketShow(&store_goods, market_goods, days, cash, saving, owed, goods, room);      //显示市场界面
                break;
            case RETURN:        //选择返回
            default:        //或其它选择
                system("cls");      //清屏
                if(at_station < 0 || at_station > 10)       //若所在车站不属于任何车站
                {
                    StartShow(&store_goods, days, cash, saving, owed, goods, room);        //显示开始界面
                }else       //若属于某车站
                {
                    show[at_station](&store_goods, days, cash, saving, owed, goods, room);     //显示对应车站图像
                }
                break;
            }
            break;
        case EXIT:      //若选择退出
            *inputp = 0;        //使初始选择值为0
            BreakGameShow();
            GameEndShow();
            return;     //退出当前函数
            break;
        default:
            ChooseMenu();
            break;
        }
    }while(choose);
}


