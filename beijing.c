#include "beijing.h"

void Color(int x);       //���巴�׸�������
void Color_Back();      //�ָ�������ʾ����
void Location(int x, int y);

void Color(int x)        //���巴�׸�������
{
    HANDLE hOut;
    hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hOut,x);
}

void Color_Back()       //�ָ�������ʾ����
{
    HANDLE hOut;
    hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hOut,0x07);
}

void Location(int x, int y)         //���궨λ����
{
    HANDLE hOut;
    hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(hOut,pos);
}

void Menu()     //��Ϸ��ʼ�˵�
{
    printf("\n                +----------------------------------------------+\n");
    printf("                |                  ����������                  |\n");
    printf("                |----------------------------------------------|\n");
    printf("                |        ������һλ����ص�����ı�������ꡣ    |\n");
    printf("                |    һ��ʼ����ֻ��2000Ԫ�����һ�Ƿ�峤��һ    |\n");
    printf("                |    ����åͷ�ӣ�5500Ԫծ����Щծ��ÿ���    |\n");
    printf("                |    ��Ϣ�ߴ�10%���������ʱ���壬�峤�����   |\n");
    printf("                |    �������������������������������ڱ�����    |\n");
    printf("                |    ͷ���������ڱ������������е���������Ʒ    |\n");
    printf("                |    �������¸�����������ծ�񣬶���Ҫ�ٵǱ�    |\n");
    printf("                |    ���������а�                            |\n");
    printf("                |        ��ֻ���ڱ�����40�죬ÿ�α���һ����    |\n");
    printf("                |    ����һ�졣һ��ʼ������ķ���ֻ�ܷ�100     |\n");
    printf("                |    �������������ڱ��������������¼�������    |\n");
    printf("                |    �е���������֮���ѡ���̬֮�������Լ���    |\n");
    printf("                |    �����ʱ�����еĸ�Ц�¼���                |\n");
    printf("                |----------------------------------------------|\n");
    printf("                |-----   1.������Ϸ   ----   0.�뿪��Ϸ   -----|\n");
    printf("                +----------------------------------------------+\n");
}

void Map()          //��ʼ��ͼ
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.��ֱ��|---|4.��ˮ̶|---|5.��ֱ��|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.ƻ��԰|---|1.������|---|2.������|                |6.������|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.������|---|8.������|---|7.����վ|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_PingGuoYuan()     //ѡ��ƻ��԰
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.��ֱ��|---|4.��ˮ̶|---|5.��ֱ��|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |");
    Color(WHITEBACK);
    printf("0.ƻ��԰");
    Color_Back();
    printf("|---|1.������|---|2.������|                |6.������|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.������|---|8.������|---|7.����վ|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_GongZhuFen()      //ѡ������
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.��ֱ��|---|4.��ˮ̶|---|5.��ֱ��|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.ƻ��԰|---|");
    Color(WHITEBACK);
    printf("1.������");
    Color_Back();
    printf("|---|2.������|                |6.������|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.������|---|8.������|---|7.����վ|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_FuXingMen()       //ѡ������
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.��ֱ��|---|4.��ˮ̶|---|5.��ֱ��|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.ƻ��԰|---|1.������|---|");
    Color(WHITEBACK);
    printf("2.������");
    Color_Back();
    printf("|                |6.������|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.������|---|8.������|---|7.����վ|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_XiZhiMen()        //ѡ����ֱ��
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |");
    Color(WHITEBACK);
    printf("3.��ֱ��");
    Color_Back();
    printf("|---|4.��ˮ̶|---|5.��ֱ��|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.ƻ��԰|---|1.������|---|2.������|                |6.������|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.������|---|8.������|---|7.����վ|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_JiShuiTan()       //ѡ���ˮ̶
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.��ֱ��|---|");
    Color(WHITEBACK);
    printf("4.��ˮ̶");
    Color_Back();
    printf("|---|5.��ֱ��|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.ƻ��԰|---|1.������|---|2.������|                |6.������|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.������|---|8.������|---|7.����վ|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_DongZhiMen()      //ѡ��ֱ��
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.��ֱ��|---|4.��ˮ̶|---|");
    Color(WHITEBACK);
    printf("5.��ֱ��");
    Color_Back();
    printf("|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.ƻ��԰|---|1.������|---|2.������|                |6.������|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.������|---|8.������|---|7.����վ|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_JianGuoMen()      //ѡ�񽨹���
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.��ֱ��|---|4.��ˮ̶|---|5.��ֱ��|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.ƻ��԰|---|1.������|---|2.������|                |");
    Color(WHITEBACK);
    printf("6.������");
    Color_Back();
    printf("|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.������|---|8.������|---|7.����վ|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_BeiJingZhan()     //ѡ�񱱾�վ
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.��ֱ��|---|4.��ˮ̶|---|5.��ֱ��|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.ƻ��԰|---|1.������|---|2.������|                |6.������|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.������|---|8.������|---|");
    Color(WHITEBACK);
    printf("7.����վ");
    Color_Back();
    printf("|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_CongWenMen()      //ѡ�������
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.��ֱ��|---|4.��ˮ̶|---|5.��ֱ��|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.ƻ��԰|---|1.������|---|2.������|                |6.������|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |9.������|---|");
    Color(WHITEBACK);
    printf("8.������");
    Color_Back();
    printf("|---|7.����վ|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void Map_ChangChunJie()        //ѡ�񳤴���
{
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |3.��ֱ��|---|4.��ˮ̶|---|5.��ֱ��|\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                        |                         |\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("         |0.ƻ��԰|---|1.������|---|2.������|                |6.������|\n");
    printf("         ----------   ----------   ----------                ----------\n");
    printf("                                        |                         |\n");
    printf("                                   ----------   ----------   ----------\n");
    printf("                                   |");
    Color(WHITEBACK);
    printf("9.������");
    Color_Back();
    printf("|---|8.������|---|7.����վ|\n");
    printf("                                   ----------   ----------   ----------\n");
}

void ShowPlace()        //������ʾ
{
    Location(0, 5);
    printf("              ----------    ----------    ----------    ----------\n");
    printf("              | 1.���� |    | 2.�ʾ� |    | 3.�н� |    | 4.���� |\n");
    printf("              ----------    ----------    ----------    ----------\n\n");
}

void ParmShow(int cash, int saving, int owed)     //������ʾ����
{
    Location(5, 14);
    printf("-----------------------\n");
    Location(5, 15);
    printf("| %s\t%10d |\n", "�ֽ�", cash);
    Location(5, 16);
    printf("-----------------------\n");
    Location(5, 17);
    printf("| %s\t%10d |\n", "���", saving);
    Location(5, 18);
    printf("-----------------------\n");
    Location(5, 19);
    printf("| %s\t%10d |\n", "Ƿ��", owed);
    Location(5, 20);
    printf("-----------------------\n");
}

void StoreShow(StoreGoods* ps, int goods, int room)            //�ֿ���ʾ����
{
    Location(35, 12);
    printf("----------------------------------------\n");
    Location(35, 13);
    printf("|%s|%14s|%6s|%s%3d/%3d|\n","���","����","�۸�","����", goods, room);
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

void DaysShow(int days)     //��ʾ��������
{
    Location(8, 0);     //��λ����
    Color(WHITEBACK);        //������ɫ
    printf("%2d/40��\n", days);      //��ʾ����
    Color_Back();       //�ָ�������ɫ
}

void StartShow(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)        //��ʼ���溯��
{
    DaysShow(days);
    Map();      //��ʾ��վ����
    ParmShow(cash, saving, owed);     //��ʾ���Խ���
    StoreShow(ps, goods, room);        //��ʾ�ֿ����
}

void MoneyChange(int* psaving, int* powed)      //ÿ����Ϣ����
{
    *psaving = *psaving*101/100;        //���ÿ������1%
    *powed = *powed*110/100;        //Ƿ��ÿ������10%
}

void ChooseMenu()       //���ز˵���ʾ����
{
    Location(0, 23);        //��λ��λ��
    int i = 0;
    for(i = 0; i < 80*4; i++)       //ѭ���ÿո����ԭ����
    {
        printf(" ");
    }
    Location(0, 23);        //���¶�λ����ʾ��ѡ��
}

void ShowStation0(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //ƻ��԰��վ������ʾ����
{
    DaysShow(days);
    Map_PingGuoYuan();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation1(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //�����س�վ������ʾ����
{
    DaysShow(days);
    Map_GongZhuFen();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation2(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //�����ų�վ������ʾ����
{
    DaysShow(days);
    Map_FuXingMen();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation3(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //��ֱ�ų�վ������ʾ����
{
    DaysShow(days);
    Map_XiZhiMen();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation4(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //��ˮ̶��վ������ʾ����
{
    DaysShow(days);
    Map_JiShuiTan();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation5(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //��ֱ�ų�վ������ʾ����
{
    DaysShow(days);
    Map_DongZhiMen();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation6(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //�����ų�վ������ʾ����
{
    DaysShow(days);
    Map_JianGuoMen();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation7(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //����վ��վ������ʾ����
{
    DaysShow(days);
    Map_BeiJingZhan();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation8(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //�����ų�վ������ʾ����
{
    DaysShow(days);
    Map_CongWenMen();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void ShowStation9(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //�����ֳ�վ������ʾ����
{
    DaysShow(days);
    Map_ChangChunJie();
    ParmShow(cash, saving, owed);
    StoreShow(ps, goods, room);
}

void StationList(int at_station)        //�ƶ�ѡ���Ӳ˵�����
{
    char station[][10] = {"ƻ��԰", "������","������","��ֱ��","��ˮ̶",
                        "��ֱ��","������","����վ","������","������"};     //���峵վ������
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        if(i == at_station)     //��⵱ǰ���ڳ�վ
        {
            continue;       //�ҵ��������˳�վ
        }else
        {
            printf("%d.%s ", i, station[i]);        //�����ǵ�ǰ���ڳ�վ���ӡ��ź�վ��
        }
    }
    printf("10. ����\t��ѡ��:>");     //β�˼��뷵��
}

void PlaceMap(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)     //��������
{
    system("cls");      //����
    DaysShow(days);     //��ʾ����
    ShowPlace();        //��ʾ����
    ParmShow(cash, saving, owed);     //��ʾ����
    StoreShow(ps, goods, room);        //��ʾ�ֿ�
}

void MainShow(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room, void (*show[])(), int at_station)      //��������ʾ����
{
    system("cls");
    if(at_station >= 0 && at_station <= 9)        //���ݵ�ǰ���ڳ�վ��ʾ��Ӧ����
    {       //δ�ƶ���ʾ��ʼ����
        show[at_station](ps, days, cash, saving, owed, goods, room);
    }else       //���ƶ���ʾ��Ӧվ̨����
    {
        DaysShow(days);
        Map();
        ParmShow(cash, saving, owed);
        StoreShow(ps, goods, room);
    }
}

void BankShow(StoreGoods* ps, int days, int* pcash, int* psaving, int owed, int goods, int room, void (*show[])(), int at_station)      //������ʾ����
{
    int money = 0;
    int bank_choose = 0;
    system("cls");      //��ʾ������ʾ����
    DaysShow(days);
    Location(0, 5);
    printf("             ------------------------------------------------------\n");
    printf("             |�ͻ����ã������ֽ���%8dԪ�����Ĵ����%8dԪ|\n", *pcash, *psaving);
    printf("             ------------------------------------------------------\n");
    ParmShow(*pcash, *psaving, owed);
    StoreShow(ps, goods, room);
    printf("������Ҫ��1.��� 2.ȡ�� 0.�뿪:>");
    scanf("%d", &bank_choose);
    switch(bank_choose)
    {
    case 1:
        printf("��Ҫ�������Ԫ��:>");
        scanf("%d", &money);
        if(money > *pcash)
        {
            printf("��û����ô���ֽ�\n");
            Sleep(1000);
            MainShow(ps, days, *pcash, *psaving, owed, goods, room, show, at_station);
        }else if(money <= *pcash && money >= 0)
        {
            *pcash -= money;
            *psaving += money;
            MainShow(ps, days, *pcash, *psaving, owed, goods, room, show, at_station);
        }else
        {
            printf("��������\n");
            Sleep(1000);
            PlaceMap(ps, days, *pcash, *psaving, owed, goods, room);
        }
        break;
    case 2:
        printf("��Ҫȡ������Ԫ��:>");
        scanf("%d", &money);
        if(money > *psaving)
        {
            printf("��û����ô���\n");
            Sleep(1000);
            MainShow(ps, days, *pcash, *psaving, owed, goods, room, show, at_station);
        }else if(money <= *psaving && money >= 0)
        {
            *psaving -= money;
            *pcash += money;
            MainShow(ps, days, *pcash, *psaving, owed, goods, room, show, at_station);
        }else
        {
            printf("��������\n");
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

void PostShow(StoreGoods* ps, int days, int* pcash, int saving, int* powed, int goods, int room, void (*show[])(), int at_station)      //�ʾ���ʾ����
{
    int pay_back = 0;       //�趨�������
    int post_choose = 0;        //�趨�ʾ�ѡ�����
    system("cls");      //��ʾ�ʾֻ�Ǯ����
    DaysShow(days);
    Location(0, 5);
    printf("                 ----------------------------------------------\n");
    printf("                 |�峤�ڵ绰��˵������ţ����Ƿ��%dԪ���컹����|\n", *powed);
    printf("                 ----------------------------------------------\n");
    ParmShow(*pcash, saving, *powed);
    StoreShow(ps, goods, room);
    printf("��������%dԪ����Ƿ��%dԪ����Ҫ��1.��Ǯ 0.�������:>", *pcash, *powed);       //��ʾ�ֽ�����������
    scanf("%d", &post_choose);      //��ȡ���ѡ��
    switch(post_choose)
    {
    case 1:     //��ѡ��Ǯ
        printf("��Ҫ������Ǯ��:>");        //��ʾ��Ŀ
        scanf("%d", &pay_back);     //��ȡ����ֵ
        if(pay_back > *pcash)       //������ֵ�����ֽ�
        {
            printf("��û����ô��Ǯ��\n");       //��ʾ
            Sleep(1000);        //����1��ͼ��
            PlaceMap(ps, days, *pcash, saving, *powed, goods, room);        //������ʾ����
        }else if(pay_back <= *pcash && pay_back <= *powed && pay_back >= 0)      //������ֵ�������ֽ��Ҳ�����Ƿ�����0
        {
            *pcash -= pay_back;     //��ȥ��Ӧ�ֽ�
            *powed -= pay_back;     //��ȥ��ӦǷ��
            MainShow(ps, days, *pcash, saving, *powed, goods, room, show, at_station);
        }else if(pay_back > *powed)       //������ֵ����Ƿ��ֵ
        {
            printf("��ûǷ��ô��Ǯ��\n");       //��ʾ
            Sleep(1000);        //����1��ͼ��
            PlaceMap(ps, days, *pcash, saving, *powed, goods, room);        //������ʾ����
        }else if(pay_back == *powed)
        {
            *pcash -= pay_back;     //��ȥ��Ӧ�ֽ�
            *powed -= pay_back;     //��ȥ��ӦǷ��
            MainShow(ps, days, *pcash, saving, *powed, goods, room, show, at_station);
        }else        //������ֵΪ������������
        {
            printf("��������\n");
            Sleep(1000);
            PlaceMap(ps, days, *pcash, saving, *powed, goods, room);        //������ʾ����
        }
        break;
    case 0:     //ѡ�񲻻���
        MainShow(ps, days, *pcash, saving, *powed, goods, room, show, at_station);
        break;
    default:        //����ѡ����
        PlaceMap(ps, days, *pcash, saving, *powed, goods, room);        //��ʾ��������
        break;
    }
}

void HouseShow(StoreGoods* ps, int* pcash, int* proom, int days, int saving, int owed, int goods, void(*show[])(), int at_station)      //�н���ʾ����
{
    int rent = 0;       //�趨�ⷿѡ��
    if(*proom < 140)        //����������С��140��ִ���ⷿ�ж�
    {
        if(*pcash < 30000)      //���ֽ�С��30000��ʾ�޷��ⷿ���˻�
        {
            system("cls");
            DaysShow(days);
            Location(0, 5);
            Color(LIGHTBLUE);
            printf("                   ------------------------------------------\n");
            printf("                   |�н�˵��û�������ֽ����ⷿ��һ������ȥ��|\n");
            printf("                   ------------------------------------------\n");
            Color_Back();
            ParmShow(*pcash, saving, owed);
            StoreShow(ps, goods, *proom);
            return;
        }else if(*pcash == 30000)       //���ֽ����30000��ʾ��Ӧ���ݲ���ʾ�ⷿ
        {
            system("cls");
            DaysShow(days);
            Location(0, 3);
            Color(LIGHTBLUE);
            printf("          ------------------------------------------------------------\n");
            printf("          |            ��ӭ�������������Ӿӡ��ⷿ�н鹫˾��          |\n");
            printf("          |    ���ǵ������ѿ������ɽ����ͯ�����ۣ��޳���η    |\n");
            printf("          |   ����������������ڵķ���ֻ�ܷ�%d����Ʒ��̫С�ˣ�    |\n", *proom);
            printf("          |         ����20000Ԫ���������ܷ�%d����Ʒ�ķ���           |\n", (*proom+10));
            printf("          ------------------------------------------------------------\n");
            Color_Back();
            ParmShow(*pcash, saving, owed);
            StoreShow(ps, goods, *proom);
            printf("�Ƿ��ⷿ��1.�ɽ� 2.���ϵ����´ΰ�:>");        //��ʾ�������ѡ��
            scanf("%d", &rent);     //��ȡѡ����
            switch(rent)
            {
            case 1:     //ѡ���ⷿ
                *pcash = *pcash - 25000;        //��ȥ�ֽ�
                *proom = *proom + 10;       //��������+10
                system("cls");      //������������ʾ����
                DaysShow(days);
                Location(0, 5);
                Color(YELLOW);
                printf("          ------------------------------------------------------------\n");
                printf("          |�ҵķ����ܷ�%d����Ʒ�ˣ����ǣ��н鹫˾����ƭ����һЩǮ...|\n", *proom);
                printf("          ------------------------------------------------------------\n");
                Color_Back();
                ParmShow(*pcash, saving, owed);
                StoreShow(ps, goods, *proom);
                break;
            case 2:     //ѡ����
                system("cls");      //��������ʾ��Ӧ����
                DaysShow(days);
                Location(0, 5);
                Color(YELLOW);
                printf("                ------------------------------------------------\n");
                printf("                |�ǣ�С��Ϊ����ű����е��ⷿ�н����ƭ�ˡ���|\n");
                printf("                ------------------------------------------------\n");
                Color_Back();
                ParmShow(*pcash, saving, owed);
                StoreShow(ps, goods, *proom);
                break;
            default:        //�������뷵��
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
        }else       //���ֽ����30000ʱ
        {
            system("cls");      //������������Ӧ��ʾ
            DaysShow(days);
            Location(0, 3);
            Color(LIGHTBLUE);
            printf("          ------------------------------------------------------------\n");
            printf("          |            ��ӭ�������������Ӿӡ��ⷿ�н鹫˾��          |\n");
            printf("          |    ���ǵ������ѿ������ɽ����ͯ�����ۣ��޳���η    |\n");
            printf("          |   ����������������ڵķ���ֻ�ܷ�%d����Ʒ��̫С�ˣ�    |\n", *proom);
            printf("          |         ����%dԪ���������ܷ�%d����Ʒ�ķ���", (*pcash/2), (*proom+10));
            Location(69, 7);
            printf("|\n");
            printf("          ------------------------------------------------------------\n");
            Color_Back();
            ParmShow(*pcash, saving, owed);
            StoreShow(ps, goods, *proom);
            printf("�Ƿ��ⷿ��1.�ɽ� 2.���ϵ����´ΰ�:>");        //��ʾ�Ƿ��ⷿ
            scanf("%d", &rent);     //��ȡѡ����
            switch(rent)
            {
            case 1:     //ѡ���ⷿ
                *pcash = *pcash*43/100;     //��ȥ��Ӧ��Ǯ
                *proom = *proom + 10;       //��������+10
                system("cls");      //������ʾ��ʾ����Ӧ����
                DaysShow(days);
                Location(0, 5);
                Color(YELLOW);
                printf("          ------------------------------------------------------------\n");
                printf("          |�ҵķ����ܷ�%d����Ʒ�ˣ����ǣ��н鹫˾����ƭ����һЩǮ...|\n", *proom);
                printf("          ------------------------------------------------------------\n");
                Color_Back();
                ParmShow(*pcash, saving, owed);
                StoreShow(ps, goods, *proom);
                break;
            case 2:     //ѡ����
                system("cls");      //��ʾ��Ӧ���ݲ�����
                DaysShow(days);
                Location(0, 5);
                Color(YELLOW);
                printf("                ------------------------------------------------\n");
                printf("                |�ǣ�С��Ϊ����ű����е��ⷿ�н����ƭ�ˡ���|\n");
                printf("                ------------------------------------------------\n");
                Color_Back();
                ParmShow(*pcash, saving, owed);
                StoreShow(ps, goods, *proom);
                break;
            default:        //����ѡ�񷵻�
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
    }else       //��������������140
    {
        system("cls");      //��������ʾ��Ӧ��ʾ
        DaysShow(days);
        Location(0, 5);
        Color(LIGHTBLUE);
        printf("                     --------------------------------------\n");
        printf("                     |�н�˵����ķ��ӱȾֳ����󣬻��ⷿ��|\n");
        printf("                     --------------------------------------\n");
        Color_Back();
        ParmShow(*pcash, saving, owed);
        StoreShow(ps, goods, *proom);
    }
}

void NetShow(StoreGoods* ps, int* pnet_times, int* pcash, int saving, int owed, int goods, int room, int days)      //������ʾ����
{
    if(*pnet_times < 3)     //���������ɴ���С��3��
    {
        (*pnet_times)++;        //�����Լ�
        int plus = (rand()%18+2);       //���������
        *pcash += plus;     //�����ֽ�
        system("cls");      //��������ʾ��Ӧ����
        DaysShow(days);
        Location(0, 5);
        Color(GREEN);
        printf("          ------------------------------------------------------------\n");
        printf("          |��л���Ÿĸ�����������������׬�����Ĺ���%2dԪ���ٺ٣�|\n", plus);
        printf("          ------------------------------------------------------------\n\n");
        Color_Back();
        ParmShow(*pcash, saving, owed);
        StoreShow(ps, goods, room);
    }else{      //����������3������
        system("cls");      //��������ʾ��Ӧ����
        DaysShow(days);
        Location(0, 5);
        Color(RED);
        printf("           ----------------------------------------------------------\n");
        printf("           |    �峤�ų�������������������ɹ�죬��ȥ����������    |\n");
        printf("           ----------------------------------------------------------\n\n");
        Color_Back();
        ParmShow(*pcash, saving, owed);
        StoreShow(ps, goods, room);
    }
}

void InitPrice(Goods all_goods[])       //��ʼ���۸���
{
    int i = 0;
    for(i = 0; i < MAX_GOODS; i++)      //���������м۸��ʼΪ0
    {
        all_goods[i].price = 0;
    }
    all_goods[VCD].price = rand()%51+10;        //�������VCD�۸�
    all_goods[SMOKE].price = rand()%351+100;        //����������̼۸�
    all_goods[COS].price = rand()%151+80;       //������ɻ�ױƷ�۸�
    all_goods[TOY].price = rand()%201+400;      //���������߼۸�
    all_goods[WINE].price = rand()%901+1500;        //������ɰ׾Ƽ۸�
    all_goods[PHONE].price = rand()%401+800;        //��������ֻ��۸�
    all_goods[BOOK].price = rand()%5501+7500;       //������ɽ���۸�
    all_goods[CAR].price = rand()%14001+16000;      //������������۸�
}

void InitMarket(Goods market_goods[], int sz, Goods all_goods[], int days, int cash, int saving, int* powed, StoreGoods* ps, int* pgoods, int room)        //�����к���
{
    memset(market_goods, 0, sz);        //��գ���ʼ������������
    int kind = rand()%3+5;      //�����Ʒ����
    int market_num[MAX_GOODS] = {0};        //������Ʒ�������
    int i = 0;
    for (i = 0; i < kind; i++)      //������Ʒ���������Ʒ���
    {
        market_num[i] = rand()%8;
        int j = 0;
        for (j = 0; j < i; j++)     //�ж���Ʒ����Ƿ����ظ�
        {
            while(market_num[i]==market_num[j])
            {
                market_num[i] = 0;
                market_num[i] = rand()%8;       //����ظ��������������
                j = 0;
            }
        }
    }
    IfBusinessCase(kind, market_num, all_goods, days, cash, saving, powed, ps, pgoods, room);
    for (i = 0; i < kind; i++)
    {
        market_goods[i] = all_goods[market_num[i]];     //����Ӧ��ţ��±꣩����Ʒ��䵽����������
    }
}

void EndMarket(Goods market_goods[], int sz, Goods all_goods[])     //����ǰ���к���
{
    memset(market_goods, 0, sz);        //��գ���ʼ������������
    int i = 0;
    for (i = 0; i < MAX_GOODS; i++)     //������ȫ����Ʒ������������
    {
        market_goods[i] = all_goods[i];
    }
}

void MarketShow(StoreGoods* ps, Goods market_goods[], int days, int cash, int saving, int owed, int goods, int room)    //������ʾ����
{
    DaysShow(days);        //��ʾ����
    int i = 0;
    printf("                         ------------------------------\n");        //��ʾ���
    printf("                         |%s|%16s|%6s|\n", "���", "��Ʒ", "�۸�");       //��ʾ��ͷ
    for(i = 0; i < MAX_GOODS; i++)
    {
        printf("                         |%4d|%16s|%6d|\n", i+1, market_goods[i].name, market_goods[i].price);      //������ʾ��Ӧ��Ʒ�����۸�
    }
    printf("                         ------------------------------\n");        //��ʾ����β
    ParmShow(cash, saving, owed);       //��ʾ����
    StoreShow(ps, goods, room);     //��ʾ�ֿ�
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
    printf("       |           ���������ݳ���ؤ����̫̫�ǡ� �ֽ����10%��           |\n");
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
    printf("       |    һ�������ڽ�ͷ��ס���������ǣ�����Ǯ�ã��� �ֽ����10%��    |\n");
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
    printf("       |       һ����������˰�һ�£�˵��������!���ֽ����40%��       |\n");
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
    printf("       |�����������µ���̫̫��ס��������������ˣ������ �ֽ����20%��|\n");
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
    printf("       |�������о�ס���������л��ѡ��������ӷѡ������ѡ��� ������15%��|\n");
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
    printf("       |      �����������˵�������ϱ����Ҽ���Ǯ���� ������10%��      |\n");
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
    printf("       |         ����������Ⱦ����������ȥ�����������ֽ����5%��         |\n");
    printf("       ------------------------------------------------------------------\n");
    Color_Back();
    ParmShow(*pcash, *psaving, owed);
    StoreShow(ps, goods, room);
    Sleep(2000);
}

void IfBusinessCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, int* powed, StoreGoods* ps, int* pgoods, int room)      //��ҵ�¼���������
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

void ToyUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //����Ǽۺ���
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
    printf("        |        ר��������ߴ�ѧ�����������ʡ���������ߴ�����        |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void WineUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)      //�׾��Ǽۺ���
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
    printf("        |          ����˵���������ô����ҩ���ȼٰ׾ƾͿ��ԣ�          |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void BookUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)      //�����Ǽۺ���
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
    printf("        |       ҽԺ�����ܱ��棺�����Ϻ�С��������Ч����ΰ�硱��       |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void VCDUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //VCD�Ǽۺ���
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
    printf("        |       ��ä˵����2000��ŵ������ѧ�����ޣ�������� VCD��       |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void CarUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //�����Ǽۺ���
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
    printf("        |       ����������С����������˽���������ƽ��������ѣ���       |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void CosUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //��ױƷ�Ǽۺ���
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
    printf("        |���������������ۣ����ᳫ�������䵽ʵ��������α�ӻ�ױƷ������|\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void BookBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //������Ǻ���
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
    printf("        |  8858.com�������Ҳ���������Ϻ�С������������һ�������ۡ�  |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void CosBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)        //��ױƷ���Ǻ���
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
    printf("        |л�����������˵�����ҿᣡ��ʹ��α�ӻ�ױƷ����α�ӻ�ױƷ������|\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void WineBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //�׾ƴ��Ǻ���
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
    printf("        |               �������˿���ɽ���پƣ����������               |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void PhoneUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)     //�ֻ��Ǽۺ���
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
    printf("        |         �����Ĵ�ѧ���ǿ�ʼ�ҹ�����ˮ���ֻ����ܻ�ӭ��         |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void CarBigUpCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)        //�������Ǻ���
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
    printf("        |                �����ĸ��˷��ع�����˽������                |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void SmokeDownCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)       //�����µ�����
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
    printf("        |               �г��ϳ�������Ը�������˽���̡�               |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void ToyDownCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)     //����µ�����
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
    printf("        |          �����ĺ��Ӷ�æ������ѧϰ���������û����          |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void VCDDownCase(int kind, int market_num[], Goods all_goods[], int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)     //VCD�µ�����
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
    printf("        |         ���й���ȡ������йش�ȫ�������� VCD�Ĵ�á�         |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    ParmShow(cash, saving, *powed);
    StoreShow(ps, *pgoods, room);
    Sleep(2000);
}

void CarGetCase(int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)      //�õ���������
{
    Goods car_goods[1] = {{.name = "��˽����", .price = CASEPRICE, .num=0}};
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |            ���ŵ���ͬѧ������������˽���������ˣ�            |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    if(*pgoods == room)
    {
        system("cls");
        DaysShow(days);
        Location(0, 5);
        printf("                    ----------------------------------------\n");
        printf("                    |��ϧ�ҵĲֿ�̫С�ˣ�ֻ�ܷ�%4d����Ʒ��|\n", room);
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
        printf("                    |��ϧ�ҵĲֿ�̫С�ˣ�ֻ�ܷ�%4d����Ʒ��|\n", room);
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

void SmokeGetCase(int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)        //�õ����̺���
{
    Goods smoke_goods[1] = {{.name = "��������", .price = CASEPRICE, .num=0}};
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |         ���̾�ɨ���󣬰��ڽ��䷢��������Ľ������̡�         |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    if(*pgoods == room)
    {
        system("cls");
        DaysShow(days);
        Location(0, 5);
        printf("                    ----------------------------------------\n");
        printf("                    |��ϧ�ҵĲֿ�̫С�ˣ�ֻ�ܷ�%4d����Ʒ��|\n", room);
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
        printf("                    |��ϧ�ҵĲֿ�̫С�ˣ�ֻ�ܷ�%4d����Ʒ��|\n", room);
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

void WineGetCase(int days, int cash, int saving, const int* powed, StoreGoods* ps, int* pgoods, int room)     //�õ��׾ƺ���
{
    Goods wine_goods[1] = {{.name = "�ٰ׾�", .price = CASEPRICE, .num=0}};
    system("cls");
    DaysShow(days);
    Location(0, 5);
    Color(YELLOW);
    printf("        ----------------------------------------------------------------\n");
    printf("        |                ������ؼ�ǰ��һЩ�ٰ׾Ƹ�����                |\n");
    printf("        ----------------------------------------------------------------\n");
    Color_Back();
    if(*pgoods == room)
    {
        system("cls");
        DaysShow(days);
        Location(0, 5);
        printf("                    ----------------------------------------\n");
        printf("                    |��ϧ�ҵĲֿ�̫С�ˣ�ֻ�ܷ�%4d����Ʒ��|\n", room);
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
        printf("                    |��ϧ�ҵĲֿ�̫С�ˣ�ֻ�ܷ�%4d����Ʒ��|\n", room);
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

void PhoneOwedCase(int days, int cash, int saving, int* powed, StoreGoods* ps, int* pgoods, int room)       //�ֻ�ǿ������
{
    Goods phone_goods[1] = {{.name = "ˮ���ֻ�", .price = PHONEPRICE, .num=0}};
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
        printf("        |        �ձ���Ʒ�ֳ��¹ʣ��ձ������������ˣ��ܾ��⳥��        |\n");
        printf("        |             �峤�ŵð�����ˮ���ֻ��߼�ǿ��������             |\n");
        printf("        ----------------------------------------------------------------\n");
        Color_Back();
        ParmShow(cash, saving, *powed);
        StoreShow(ps, *pgoods, room);
        Sleep(2000);
    }
}

void InitStore(StoreGoods* ps)      //��ʼ���ֿ�
{
    memset(ps->store_arr, 0, sizeof(ps->store_arr));        //���ֿ����鰴�ֽ����0
    ps->store_size = 0;     //��ʼʹ����Ϊ0
}

void BuyIn(int* pgoods, int room, StoreGoods* ps, Goods market_goods[], int* pcash)
{
    int buyser = 0;     //��ʼ���������
    int buynum = 0;     //��ʼ����������
    if(*pgoods == room)     //������������ڲֿ�����
    {
        printf("��û�и���Ŀռ���װ��Ʒ�ˣ�\n");     //��ʾ�ֿ�����
        Sleep(1000);        //����1�뻭��
        ChooseMenu();       //���������
    }else       //�������δ��
    {
        printf("��Ҫ�����ļ���Ʒ������������ţ�:>");       //��ʾ����
        scanf("%d", &buyser);       //��ȡ�������
        buyser--;       //�������-1ƥ���������
        if(market_goods[buyser].price == 0)     //���������ų����б�
        {
            printf("�������\n");      //��ʾ
            Sleep(1000);        //����1�뻭��
            ChooseMenu();       //���������
        }else if(market_goods[buyser].price > *pcash)       //����ѡ��Ʒ�۸񳬳��ֽ�
        {
            printf("���Ǯ������\n");     //��ʾ
            Sleep(1000);        //����1�뻭��
            ChooseMenu();       //���������
        }else       //����ѡ��Ʒ���Թ���
        {
            int num = *pcash/market_goods[buyser].price;        //���������Թ�����
            if(num > (room-*pgoods))        //���ɹ����������ֿ�ʣ��ռ�
            {
                num = room-*pgoods;     //������������ڲֿ�ʣ��ռ�
            }
            printf("��������%dԪ�����Թ���%d��%s����Ҫ���򼸼���:>\n", *pcash, num, market_goods[buyser].name);        //��ʾ�ɹ�������
            scanf("%d", &buynum);       //��ȡ��������
            if(buynum > num)        //���������������������
            {
                printf("��������ô�࣡\n");     //��ʾ
                Sleep(1000);        //����1�뻭��
                ChooseMenu();       //���������
            }else       //��������δ���޶�
            {
                AddStore(pgoods, ps, market_goods, buyser, buynum, pcash);      //ִ����Ӳֿ⺯��
            }
        }
    }
}

void AddStore(int* pgoods, StoreGoods* ps, Goods market_goods[], int buyser, int buynum, int* pcash)        //��Ӳֿ⺯��
{
    int ret = -1;        //����ԱȽ������
    int temp_price = 0;     //������ʱ�۸�ת��
    int i = 0;
    for(i = 0; i < ps->store_size; i++)     //�������Ҳֿ����Ƿ�����ͬ����Ʒ
    {
        ret = strcmp(market_goods[buyser].name, ps->store_arr[i].name);     //ͨ�����ƱȶԲ���
        if(ret == 0)        //���ҵ�ͬ����Ʒ
        {
            break;      //ֱ������
        }
    }
    if(ret == 0)        //���������ҵ�ͬ����Ʒ
    {
        temp_price = (ps->store_arr[i].price)*(ps->store_arr[i].num);       //ʹ��ʱ�۸����֮ǰ������Ʒ���ܼ�
        ps->store_arr[i].num += buynum;     //��������Ʒ������������
        *pgoods += buynum;      //������ӹ�������
        *pcash -= buynum*market_goods[buyser].price;      //�ֽ��ȥ������
        ps->store_arr[i].price = (temp_price+market_goods[buyser].price*buynum)/ps->store_arr[i].num;       //��ԭ�۸���ּ۸����ƽ���۸�
    }else
    {
        ps->store_arr[ps->store_size] = market_goods[buyser];       //�ڲֿ�����һ���л�ȡ������Ʒ�Ĳ���
        ps->store_arr[ps->store_size].num = buynum;         //��Ʒ����Ϊ��������
        *pgoods += buynum;      //������ӹ�������
        *pcash -= buynum*market_goods[buyser].price;      //�ֽ��ȥ������
        ps->store_size++;       //ʹ����+1
    }
}

void SellOut(int* pgoods, int room, StoreGoods* ps, Goods market_goods[], int* pcash)
{
    if(ps->store_size == 0)
    {
        printf("��û����Ʒ���Գ��ۣ�\n");
        Sleep(1000);
    }else
    {
        int sellser = 0;        //��ʼ���������
        int sellnum = 0;        //��ʼ����������
        printf("��Ҫ�����ļ���Ʒ������������ţ�:>");       //��ʾ����
        scanf("%d", &sellser);      //��ȡ�������
        sellser--;      //�������+1��ƥ���������
        int ret = -1;       //����ԱȽ������
        int i = 0;
        for(i = 0; i < MAX_GOODS; i++)
        {
            ret = strcmp(ps->store_arr[sellser].name, market_goods[i].name);        //ͨ�����ƶԱȲ���
            if(ret == 0)        //���ҵ�ͬ����Ʒ
            {
                break;      //ֱ������
            }
        }
        if(ret != 0)        //��δ���г����ҵ�ͬ����Ʒ
        {
            printf("���ź�������û������%s���⣡\n", ps->store_arr[sellser].name);       //��ʾ
            Sleep(1000);        //����1�뻭��
            ChooseMenu();       //���������
        }else       //����ͬ����Ʒ
        {
            printf("��������%d��%s����Ҫ�۳����ټ���:>", ps->store_arr[sellser].num, ps->store_arr[sellser].name);        //��ʾ����������
            scanf("%d", &sellnum);      //��ȡ��������
            if(sellnum > ps->store_arr[sellser].num)        //���۳��������ڿ��ֵ
            {
                printf("��û����ô���棡\n");      //��ʾ
                Sleep(1000);        //����1�뻭��
                ChooseMenu();       //���������
            }else if(sellnum == ps->store_arr[sellser].num)     //������������ڸ���Ʒ���п��
            {
                DelStore(pgoods, ps, sellser, sellnum, pcash, market_goods, i);      //ִ��ɾ����溯��
            }else       //���������С�ڿ��
            {
                ModifyStore(pgoods, ps, sellser, sellnum, pcash, market_goods, i);       //ִ���޸Ŀ�溯��
            }
        }
    }

}

void DelStore(int* pgoods, StoreGoods* ps, int sellser, int sellnum, int* pcash, Goods market_goods[], int i)     //ɾ����溯��
{
    int j = 0;
    *pgoods -= sellnum;     //������������۳���
    *pcash += market_goods[i].price*sellnum;     //�ֽ�����۳���Ǯ
    for(j = sellser; j < ps->store_size-1; j++)     //���۳���Ʒ����ʼ������Ԫ��ǰ��
    {
        ps->store_arr[j] = ps->store_arr[j+1];
    }
    ps->store_size--;       //����ʹ����-1
}

void ModifyStore(int* pgoods, StoreGoods* ps, int sellser, int sellnum, int* pcash, Goods market_goods[], int i)     //����޸ĺ���
{
    *pgoods -= sellnum;     //������������۳���
    *pcash += market_goods[i].price*sellnum;     //�ֽ�����۳���Ǯ
    ps->store_arr[sellser].num -= sellnum;      //����Ʒ��������ص��۳���
}

void LastDayShow(StoreGoods* ps, int days, int cash, int saving, int owed, int goods, int room)
{
    system("cls");
    DaysShow(days);
    Location(0, 5);
    printf("                    ------------------------------------------\n");
    printf("                    |     ");
    Color(WHITEBACK);
    printf("������ؼң��ðѻ���ȫ��������");
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
                ret = strcmp(ps->store_arr[i].name, market_goods[j].name);        //ͨ�����ƶԱȲ���
                if(ret == 0)        //���ҵ�ͬ����Ʒ
                {
                    break;      //ֱ������
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
    printf("��������40���ˣ��ûؼҽ���ˡ�");
    Color_Back();
    Location(56, 2);
    printf("|\n");
    Location(25, 3);
    printf("--------------------------------\n");
    Location(3, 5);
    printf("���У�\n");
    int i = 0;
    Location(3, 6);
    printf("------------------------------\n");        //��ʾ���
    Location(3, 7);
    printf("|%s|%16s|%6s|\n", "���", "��Ʒ", "�۸�");       //��ʾ��ͷ
    for(i = 0; i < MAX_GOODS; i++)
    {
        Location(3, 8+i);
        printf("|%4d|%16s|%6d|\n", i+1, market_goods[i].name, market_goods[i].price);      //������ʾ��Ӧ��Ʒ�����۸�
    }
    Location(3, 8+i);
    printf("------------------------------\n");        //��ʾ����β
    Location(37, 5);
    printf("�ֿ⣺\n");
    Location(37, 6);
    printf("----------------------------------------\n");
    Location(37, 7);
    printf("|%s|%14s|%6s|%s%3d/%3d|\n","���","����","�۸�","����", goods, room);
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
    printf("                 |�ֽ�%8d|��%8d|Ƿ�%8d|\n", cash, saving, owed);
    printf("                 ----------------------------------------------\n");
}

void SystemSell(StoreGoods* ps, int num)
{
    Location(28, 22);
    printf("ϵͳ����������ʣ����Ʒ��\n");
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
        printf("               |    ��ϲ�㣡��������Ƿ��ڱ���������������    |\n");
        printf("               |   ���ڶ̶�40��֮��׬��%8dԪ�ĸ߶��ʲ���   |\n", money);
        printf("               |��ɹ�����פ�˱��������ã�����ѡ�˱����ܳ����ꡣ|\n");
        printf("               |     �������׬Ǯ�����ܵ��˸���Ů�������ͣ�     |\n");
        printf("               |      ����˳����ӭȢ�׸��������������۷塣      |\n");
        printf("               |  �����������һ���Ǿ��ʵ�һ�����Ǵ����һ����  |\n");
        printf("               |        ��������С˵��������ôд��һ����        |\n");
        printf("               |             ���Ϊ�˱����Ĵ�˵����             |\n");
        printf("               --------------------------------------------------\n");
        Color_Back();
        printf("\n");
    }else if(money > 999)
    {
        printf("\n\n\n\n\n\n\n\n\n");
        Color(YELLOW);
        printf("                  --------------------------------------------\n");
        printf("                  |       ��ϲ�㣡���ڱ���������������       |\n");
        printf("                  |��40������ɹ��ػ�����Ƿ���С׬��һ�ʡ�|\n");
        printf("                  |        �����ĸ�������ûʲôӡ��        |\n");
        printf("                  |   ������Ļ�Ծ�����е��˶��㶼����Ϥ��   |\n");
        printf("                  |          ������׬����%6dԪ��          |\n", money);
        printf("                  |      ��Ȼ���࣬���ڴ���Ҳ��޿��ˡ�      |\n");
        printf("                  |  �峤����ǳ����ͣ�������Ů���޸����㡣  |\n");
        printf("                  |      �����Ҳ���ڴ������������ˡ���      |\n");
        printf("                  --------------------------------------------\n");
        Color_Back();
        printf("\n");
    }else if(money >= 0)
    {
        printf("\n\n\n\n\n\n\n\n\n");
        Color(YELLOW);
        printf("                       ----------------------------------\n");
        printf("                       | �š����������ڱ��������������� |\n");
        printf("                       |     ���Ұ�Ƿ��Ǯ�������ˣ�     |\n");
        printf("                       |    ��Ȼ��Ҳû��׬��ʲôǮ��    |\n");
        printf("                       |   ������ȫ������ֻ��%4dԪ��   |\n", money);
        printf("                       |������Լ�ʵ����ûʲô�����츳��|\n");
        printf("                       |      ���Ǳ�ؼ�����ȥ�ˡ�      |\n");
        printf("                       |    û���˼ǵ���������������    |\n");
        printf("                       ----------------------------------\n");
        Color_Back();
        printf("\n");
    }else
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n");
        Color(YELLOW);
        printf("                   ------------------------------------------\n");
        printf("                   |���ڱ���ͦ����40�죬������û�ܻ���Ƿ�|\n");
        printf("                   |    ֱ�����ڣ��㻹Ƿ�Ŵ峤%6dԪ��    |\n", money);
        printf("                   |     �峤��Ϊ������˱�����һ�١�     |\n");
        printf("                   |      ������̱���ڴ����˴˲�������      |\n");
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
        printf("\t\tҪ����һ����>:1. ����һ�� 0. ������");
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
    printf("                  |��ǷǮ̫�࣬�峤���˸��˰����ӣ������ˡ���|\n");
    printf("                  --------------------------------------------\n");
    Color_Back();
    Sleep(2000);
    system("cls");
    Location(0, 14);
    Color(YELLOW);
    printf("                   ------------------------------------------\n");
    printf("                   |��Ϊ�峤�º��֣�����ƨ�ˣ�Ҫ���¿�ʼô��|\n");
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
        printf("                         1.���¿�ʼ             0.������\n");
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
    printf("           ��������Ϸ����������           ");
    Color_Back();
    printf("|\n");
    printf("                  |");
    Color(WHITEBACK);
    printf("��ҡ������ϡ��ڱ���û����Ǯ����ǲ�ͻؼҡ�");
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
