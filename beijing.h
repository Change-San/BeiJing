#ifndef BEIJING_H_INCLUDED
#define BEIJING_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#define MAX_GOODS 8       //商品数量
#define GOODS_NAME 16      //商品名长度
#define INIT_CASH 2000      //初始现金数
#define INIT_SAVING 0       //初始存款数
#define INIT_OWED 5500      //初始欠款数
#define INIT_GOODS 0        //初始库存商品
#define INIT_ROOM 100       //初始仓库容量
#define MONEY_SIN 20        //金钱事件概率
#define MONEY_DOB 5        //金钱双事件概率
#define BUSINESS_SIN 40     //商业事件概率
#define BUSINESS_DOB 15     //商业双事件概率
#define CASEPRICE 0     //事件中的货物价格
#define CARGETNUM 2     //获取汽车数量
#define SMOKEGETNUM 6       //获取香烟数量
#define WINEGETNUM 7        //获取白酒数量
#define PHONEPRICE 2500     //强卖手机价格
#define PHONENUM 1      //强卖手机数量
#define WHITEBACK 240       //反白字代码
#define YELLOW 14        //黄色字代码
#define GREEN 10        //绿色字代码
#define RED 12      //红色字代码
#define LIGHTBLUE 11        //亮蓝字代码

enum Order      //枚举命令
{
    EXIT,       //退出
    MOVE,       //移动
    PLACE,      //场所
    BUSYNESS        //交易
};

enum Station        //枚举车站
{
    PINGGUOYUAN,        //苹果园
    GONGZHUFEN,     //公主坟
    FUXINGMEN,      //复兴门
    XIZHIMEN,       //西直门
    JISHUITAN,      //积水潭
    DONGZHIMEN,     //东直门
    JIANGUOMEN,     //建国门
    BEIJINGZHAN,        //北京站
    CONGWENMEN,     //崇文门
    CHANGCHUNJIE,        //长椿街
    BACKUP      //返回
};

enum Place      //枚举场所
{
    BACK,       //返回
    BANK,       //银行
    POST,       //邮局
    HOUSE,       //中介
    NET     //网吧
};

enum Business       //枚举交易选择
{
    RETURN,     //返回
    BUY,        //买入
    SELL,       //卖出
};

enum GoodsName      //枚举商品名
{
    VCD,        //VCD
    SMOKE,      //香烟
    COS,        //化妆品
    TOY,        //玩具
    WINE,       //酒
    PHONE,      //手机
    BOOK,       //禁书
    CAR     //汽车
};

enum BusinessCase       //枚举商业事件名
{
    TOYUP,      //玩具涨价
    WINEUP,     //白酒涨价
    BOOKUP,     //禁书涨价
    VCDUP,      //VCD涨价
    CARUP,      //汽车涨价
    COSUP,      //化妆品涨价
    BOOKBIGUP,      //禁书大涨
    COSBIGUP,       //化妆品大涨
    WINEBIGUP,      //白酒大涨
    PHONEUP,        //手机涨价
    CARBIGUP,       //汽车大涨
    SMOKEDOWN,      //香烟下跌
    TOYDOWN,        //玩具下跌
    VCDDOWN,        //VCD下跌
    CARGET,     //得到汽车
    SMOKEGET,       //得到香烟
    WINEGET,        //得到白酒
    PHONEOWED       //强卖手机
};

typedef struct Goods        //定义商品结构体
{
    char name[GOODS_NAME];      //定义商品名称
    int price;      //定义商品价格
    int num;        //定义商品数量
}Goods;

typedef struct StoreGoods
{
    Goods store_arr[MAX_GOODS];
    int store_size;
}StoreGoods;

void Menu();        //菜单函数
void Map();     //初始地图函数

void Map_PingGuoYuan();     //苹果园函数
void Map_GongZhuFen();      //公主坟函数
void Map_FuXingMen();       //复兴门函数
void Map_XiZhiMen();        //西直门函数
void Map_JiShuiTan();       //积水潭函数
void Map_DongZhiMen();      //东直门函数
void Map_JianGuoMen();      //建国门函数
void Map_BeiJingZhan();     //北京站函数
void Map_CongWenMen();      //崇文门函数
void Map_ChangChunJie();        //长椿街函数

void ShowPlace();       //场所显示函数
void ParmShow(int cash, int saving, int owed);        //参数显示函数
void StoreShow(StoreGoods* ps, int goods, int room);       //仓库显示函数
void DaysShow(int days);        //天数显示函数
void StartShow(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //游戏整体显示函数

void MoneyChange(int* psaving, int* powed);         //每日利息函数
void ChooseMenu();      //返回用显示选择菜单

void ShowStation0(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //车站0整体显示
void ShowStation1(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //车站1整体显示
void ShowStation2(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //车站2整体显示
void ShowStation3(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //车站3整体显示
void ShowStation4(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //车站4整体显示
void ShowStation5(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //车站5整体显示
void ShowStation6(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //车站6整体显示
void ShowStation7(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //车站7整体显示
void ShowStation8(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //车站8整体显示
void ShowStation9(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //车站9整体显示
void StationList(int at_station);      //显示车站选择

void PlaceMap(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //选择场所时的显示函数
void MainShow(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room, void (*show[])(), int at_station);     //主界面显示函数
void BankShow(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room, void (*show[])(), int at_station);     //银行显示函数
void PostShow(StoreGoods* ps, int days, int* pcash, int saving, int* powed, int goods, int room, void (*show[])(), int at_station);     //邮局显示函数
void HouseShow(StoreGoods* ps, int* pcash, int* proom, int days, int saving, int owed, int goods, void (*show[])(), int at_station);     //中介显示函数
void NetShow(StoreGoods* ps, int* pnet_times, int* pcash, int saving, int owed, int goods, int room, int days);        //网吧显示函数

void InitPrice(Goods all_goods[]);       //价格初始化函数
void InitMarket(Goods market_goods[], int sz, Goods all_goods[], int days, int cash, int saving, int* powed, StoreGoods* ps, int* pgoods, int room);       //黑市初始化函数
void EndMarket(Goods market_goods[], int sz, Goods all_goods[]);        //结束前的黑市函数
void MarketShow(StoreGoods* ps, Goods market_goods[], int days, int cash, int saving, int owed, int goods, int room);      //显示黑市函数

void IfMoneyCase(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);     //金钱事件发生函数
void MoneyCase0(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //金钱事件1
void MoneyCase1(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //金钱事件2
void MoneyCase2(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //金钱事件3
void MoneyCase3(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //金钱事件4
void MoneyCase4(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //金钱事件5
void MoneyCase5(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //金钱事件6
void MoneyCase6(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //金钱事件7

void IfBusinessCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, int* powed, StoreGoods* ps, int* pgoods, int room);      //商业事件发生函数
void ToyUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //玩具涨价函数
void WineUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);      //白酒涨价函数
void BookUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);      //禁忌涨价函数
void VCDUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //VCD涨价函数
void CarUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //汽车涨价函数
void CosUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //化妆品涨价函数
void BookBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //禁书大涨函数
void CosBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);        //化妆品大涨函数
void WineBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //白酒大涨函数
void PhoneUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);     //手机涨价函数
void CarBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);        //汽车大涨函数
void SmokeDownCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //香烟下跌函数
void ToyDownCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);     //玩具下跌函数
void VCDDownCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);     //VCD下跌函数
void CarGetCase(int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);      //得到汽车函数
void SmokeGetCase(int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);        //得到香烟函数
void WineGetCase(int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);     //得到白酒函数
void PhoneOwedCase(int days, int cash, int saving, int* powed, StoreGoods* ps, int* pgoods, int room);       //手机强卖函数

void InitStore(StoreGoods* ps);         //初始化仓库数组函数
void BuyIn(int* pgoods, int room, StoreGoods* ps, Goods market_goods[], int szbuy, int* pcash);        //买入函数
void AddStore(int* pgoods, StoreGoods* ps, Goods market_goods[], int buyser, int buynum, int* pcash);        //将买入商品添加仓库函数
void SellOut(int* pgoods, int room, StoreGoods* ps, Goods market_goods[], int* pcash);      //卖出函数
void DelStore(int* pgoods, StoreGoods* ps, int sellser, int sellnum, int* pcash, Goods market_goods[], int i);     //删除库存函数
void ModifyStore(int* pgoods, StoreGoods* ps, int sellser, int sellnum, int* pcash, Goods market_goods[], int i);      //修改库存函数

void LastDayShow(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //最后一天提示
void EndDay(Goods market_goods[], int* pgoods, int room, StoreGoods* ps, int* pcash, int saving, int owed);
void EndDayShow(Goods market_goods[], int goods, int room, StoreGoods* ps, int cash, int saving, int owed);
void SystemSell(StoreGoods* ps, int num);
int GoodEnd(int cash, int saving, int owed);
int BadEnd();       //坏结局函数
void BreakGameShow();
void GameEndShow();     //游戏结束画面



#endif // BEIJING_H_INCLUDED

