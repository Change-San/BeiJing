#ifndef BEIJING_H_INCLUDED
#define BEIJING_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#define MAX_GOODS 8       //��Ʒ����
#define GOODS_NAME 16      //��Ʒ������
#define INIT_CASH 2000      //��ʼ�ֽ���
#define INIT_SAVING 0       //��ʼ�����
#define INIT_OWED 5500      //��ʼǷ����
#define INIT_GOODS 0        //��ʼ�����Ʒ
#define INIT_ROOM 100       //��ʼ�ֿ�����
#define MONEY_SIN 20        //��Ǯ�¼�����
#define MONEY_DOB 5        //��Ǯ˫�¼�����
#define BUSINESS_SIN 40     //��ҵ�¼�����
#define BUSINESS_DOB 15     //��ҵ˫�¼�����
#define CASEPRICE 0     //�¼��еĻ���۸�
#define CARGETNUM 2     //��ȡ��������
#define SMOKEGETNUM 6       //��ȡ��������
#define WINEGETNUM 7        //��ȡ�׾�����
#define PHONEPRICE 2500     //ǿ���ֻ��۸�
#define PHONENUM 1      //ǿ���ֻ�����
#define WHITEBACK 240       //�����ִ���
#define YELLOW 14        //��ɫ�ִ���
#define GREEN 10        //��ɫ�ִ���
#define RED 12      //��ɫ�ִ���
#define LIGHTBLUE 11        //�����ִ���

enum Order      //ö������
{
    EXIT,       //�˳�
    MOVE,       //�ƶ�
    PLACE,      //����
    BUSYNESS        //����
};

enum Station        //ö�ٳ�վ
{
    PINGGUOYUAN,        //ƻ��԰
    GONGZHUFEN,     //������
    FUXINGMEN,      //������
    XIZHIMEN,       //��ֱ��
    JISHUITAN,      //��ˮ̶
    DONGZHIMEN,     //��ֱ��
    JIANGUOMEN,     //������
    BEIJINGZHAN,        //����վ
    CONGWENMEN,     //������
    CHANGCHUNJIE,        //������
    BACKUP      //����
};

enum Place      //ö�ٳ���
{
    BACK,       //����
    BANK,       //����
    POST,       //�ʾ�
    HOUSE,       //�н�
    NET     //����
};

enum Business       //ö�ٽ���ѡ��
{
    RETURN,     //����
    BUY,        //����
    SELL,       //����
};

enum GoodsName      //ö����Ʒ��
{
    VCD,        //VCD
    SMOKE,      //����
    COS,        //��ױƷ
    TOY,        //���
    WINE,       //��
    PHONE,      //�ֻ�
    BOOK,       //����
    CAR     //����
};

enum BusinessCase       //ö����ҵ�¼���
{
    TOYUP,      //����Ǽ�
    WINEUP,     //�׾��Ǽ�
    BOOKUP,     //�����Ǽ�
    VCDUP,      //VCD�Ǽ�
    CARUP,      //�����Ǽ�
    COSUP,      //��ױƷ�Ǽ�
    BOOKBIGUP,      //�������
    COSBIGUP,       //��ױƷ����
    WINEBIGUP,      //�׾ƴ���
    PHONEUP,        //�ֻ��Ǽ�
    CARBIGUP,       //��������
    SMOKEDOWN,      //�����µ�
    TOYDOWN,        //����µ�
    VCDDOWN,        //VCD�µ�
    CARGET,     //�õ�����
    SMOKEGET,       //�õ�����
    WINEGET,        //�õ��׾�
    PHONEOWED       //ǿ���ֻ�
};

typedef struct Goods        //������Ʒ�ṹ��
{
    char name[GOODS_NAME];      //������Ʒ����
    int price;      //������Ʒ�۸�
    int num;        //������Ʒ����
}Goods;

typedef struct StoreGoods
{
    Goods store_arr[MAX_GOODS];
    int store_size;
}StoreGoods;

void Menu();        //�˵�����
void Map();     //��ʼ��ͼ����

void Map_PingGuoYuan();     //ƻ��԰����
void Map_GongZhuFen();      //�����غ���
void Map_FuXingMen();       //�����ź���
void Map_XiZhiMen();        //��ֱ�ź���
void Map_JiShuiTan();       //��ˮ̶����
void Map_DongZhiMen();      //��ֱ�ź���
void Map_JianGuoMen();      //�����ź���
void Map_BeiJingZhan();     //����վ����
void Map_CongWenMen();      //�����ź���
void Map_ChangChunJie();        //�����ֺ���

void ShowPlace();       //������ʾ����
void ParmShow(int cash, int saving, int owed);        //������ʾ����
void StoreShow(StoreGoods* ps, int goods, int room);       //�ֿ���ʾ����
void DaysShow(int days);        //������ʾ����
void StartShow(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //��Ϸ������ʾ����

void MoneyChange(int* psaving, int* powed);         //ÿ����Ϣ����
void ChooseMenu();      //��������ʾѡ��˵�

void ShowStation0(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //��վ0������ʾ
void ShowStation1(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //��վ1������ʾ
void ShowStation2(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //��վ2������ʾ
void ShowStation3(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //��վ3������ʾ
void ShowStation4(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //��վ4������ʾ
void ShowStation5(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //��վ5������ʾ
void ShowStation6(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //��վ6������ʾ
void ShowStation7(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //��վ7������ʾ
void ShowStation8(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //��վ8������ʾ
void ShowStation9(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //��վ9������ʾ
void StationList(int at_station);      //��ʾ��վѡ��

void PlaceMap(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //ѡ����ʱ����ʾ����
void MainShow(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room, void (*show[])(), int at_station);     //��������ʾ����
void BankShow(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room, void (*show[])(), int at_station);     //������ʾ����
void PostShow(StoreGoods* ps, int days, int* pcash, int saving, int* powed, int goods, int room, void (*show[])(), int at_station);     //�ʾ���ʾ����
void HouseShow(StoreGoods* ps, int* pcash, int* proom, int days, int saving, int owed, int goods, void (*show[])(), int at_station);     //�н���ʾ����
void NetShow(StoreGoods* ps, int* pnet_times, int* pcash, int saving, int owed, int goods, int room, int days);        //������ʾ����

void InitPrice(Goods all_goods[]);       //�۸��ʼ������
void InitMarket(Goods market_goods[], int sz, Goods all_goods[], int days, int cash, int saving, int* powed, StoreGoods* ps, int* pgoods, int room);       //���г�ʼ������
void EndMarket(Goods market_goods[], int sz, Goods all_goods[]);        //����ǰ�ĺ��к���
void MarketShow(StoreGoods* ps, Goods market_goods[], int days, int cash, int saving, int owed, int goods, int room);      //��ʾ���к���

void IfMoneyCase(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);     //��Ǯ�¼���������
void MoneyCase0(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //��Ǯ�¼�1
void MoneyCase1(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //��Ǯ�¼�2
void MoneyCase2(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //��Ǯ�¼�3
void MoneyCase3(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //��Ǯ�¼�4
void MoneyCase4(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //��Ǯ�¼�5
void MoneyCase5(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //��Ǯ�¼�6
void MoneyCase6(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room);      //��Ǯ�¼�7

void IfBusinessCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, int* powed, StoreGoods* ps, int* pgoods, int room);      //��ҵ�¼���������
void ToyUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //����Ǽۺ���
void WineUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);      //�׾��Ǽۺ���
void BookUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);      //�����Ǽۺ���
void VCDUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //VCD�Ǽۺ���
void CarUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //�����Ǽۺ���
void CosUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //��ױƷ�Ǽۺ���
void BookBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //������Ǻ���
void CosBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);        //��ױƷ���Ǻ���
void WineBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //�׾ƴ��Ǻ���
void PhoneUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);     //�ֻ��Ǽۺ���
void CarBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);        //�������Ǻ���
void SmokeDownCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);       //�����µ�����
void ToyDownCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);     //����µ�����
void VCDDownCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);     //VCD�µ�����
void CarGetCase(int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);      //�õ���������
void SmokeGetCase(int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);        //�õ����̺���
void WineGetCase(int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room);     //�õ��׾ƺ���
void PhoneOwedCase(int days, int cash, int saving, int* powed, StoreGoods* ps, int* pgoods, int room);       //�ֻ�ǿ������

void InitStore(StoreGoods* ps);         //��ʼ���ֿ����麯��
void BuyIn(int* pgoods, int room, StoreGoods* ps, Goods market_goods[], int* pcash);        //���뺯��
void AddStore(int* pgoods, StoreGoods* ps, Goods market_goods[], int buyser, int buynum, int* pcash);        //��������Ʒ��Ӳֿ⺯��
void SellOut(int* pgoods, int room, StoreGoods* ps, Goods market_goods[], int* pcash);      //��������
void DelStore(int* pgoods, StoreGoods* ps, int sellser, int sellnum, int* pcash, Goods market_goods[], int i);     //ɾ����溯��
void ModifyStore(int* pgoods, StoreGoods* ps, int sellser, int sellnum, int* pcash, Goods market_goods[], int i);      //�޸Ŀ�溯��

void LastDayShow(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room);        //���һ����ʾ
void EndDay(Goods market_goods[], int* pgoods, int room, StoreGoods* ps, int* pcash, int saving, int owed);
void EndDayShow(Goods market_goods[], int goods, int room, StoreGoods* ps, int cash, int saving, int owed);
void SystemSell(StoreGoods* ps, int num);
int GoodEnd(int cash, int saving, int owed);
int BadEnd();       //����ֺ���
void BreakGameShow();
void GameEndShow();     //��Ϸ��������



#endif // BEIJING_H_INCLUDED

