#include "beijing.h"

void run_game();        //����������Ϸ����
void game(int* inputp);        //������Ϸ����

int main()
{
    system("mode con cols=80 lines=30");        //�趨���ڴ�С
    run_game();     //����������Ϸ����
    return 0;
}

void run_game()         //������Ϸ����
{
    int input = 0;      //�����������ѡ��
    int* inputp = &input;
    srand((unsigned int)time(NULL));        //���������������
    do
    {
        system("cls");
        Menu();         //��ʾ��ʼ�˵�
        printf("\n\n\t\t��ѡ��:>");        //�����ѡ������
        scanf("%d", &input);        //��ȡ���ѡ��
        switch(input)       //�������ѡ����ת
        {
        case 1:     //ѡ�������Ϸ
            system("cls");      //����׼����ʾ��Ϸ����
            game(inputp);
            break;
        case 0:     //ѡ���˳�
            GameEndShow();
            break;      //ֱ���˳�
        default:        //����ѡ��
            system("cls");      //������������ʾ�˵�����
            break;
        }
    }while(input);      //��ѡ��Ϊ0ʱһֱ����
}

void game(int* inputp)
{
    int days = 0;       //��������
    int cash = INIT_CASH;        //������ʼ�ֽ�
    int saving = INIT_SAVING;     //������ʼ���
    int owed = INIT_OWED;        //������ʼǷ��
    int room = INIT_ROOM;       //������ʼ�ֿ�����
    int goods = INIT_GOODS;      //������ʼ������
    int net_times = 0;      //����ȥ���ɴ���
    int choose = -1;        //����ѡ��
    int move_station = 0;      //�����ƶ���վѡ��
    int at_station = -1;        //�������ڳ�վ����
    int place_choose = -1;      //���峡��ѡ��
    int business_choose = -1;       //���彻��ѡ��
    int bad_end = -1;
    StoreGoods store_goods;     //��������Ʒ
    InitStore(&store_goods);        //��ʼ�������Ʒ
    Goods market_goods[MAX_GOODS] = {0};        //�����������
    Goods all_goods[MAX_GOODS]={        //���岢��ʼ����Ʒ����
        {
            .name = "����VCD/��Ϸ",
            .price=0,
            .num=0
        },
        {
            .name = "��������",
            .price=0,
            .num=0
        },
        {
            .name = "α�ӻ�ױƷ",
            .price=0,
            .num=0
        },
        {
            .name = "�������",
            .price=0,
            .num=0
        },
        {
            .name = "�ٰ׾�",
            .price=0,
            .num=0
        },
        {
            .name = "ˮ���ֻ�",
            .price=0,
            .num=0
        },
        {
            .name = "���Ϻ�С������",
            .price=0,
            .num=0
        },
        {
            .name = "��˽����",
            .price=0,
            .num=0
        },
    };
    void (*show[10])(StoreGoods*, int, int, int, int, int, int)={ShowStation0, ShowStation1, ShowStation2,
                        ShowStation3, ShowStation4, ShowStation5, ShowStation6,
                        ShowStation7, ShowStation8, ShowStation9};      //�������վ��ʾ����ָ������
    int sz = sizeof(market_goods);      //��ȡ���������С
    InitPrice(all_goods);       //��ʼ����Ʒ�۸�
    InitMarket(market_goods, sz, all_goods, days, cash, saving, &owed, &store_goods, &goods, room);        //��ʼ��������Ʒ
    StartShow(&store_goods, days, cash, saving, owed, goods, room);
    do
    {
        printf("��Ҫ��ʲô��:>1.�ƶ� 2.���� 3.���� 0.�˳�");      //��ʾѡ��
        scanf("%d", &choose);       //��ȡ���ѡ��
        switch(choose)      //����ѡ����ת
        {
        case MOVE:      //��ѡ���ƶ�
            printf("\n��Ҫȥ�ĸ���վ��:>");     //ѯ���ƶ�Ŀ��
            StationList(at_station);        //������ʾ��վ����
            scanf("%d", &move_station);     //��ȡ���ѡ��
            if(move_station == at_station && move_station != 10)        //��ѡ���뵱ǰ��վ��ͬ��δѡ�񷵻�
            {
                printf("\n�㵱ǰ���ڴ˳�վ��\n");      //��ʾ
                Sleep(1000);        //����1�뻭��
                system("cls");      //����
                show[at_station](&store_goods, days, cash, saving, owed, goods, room);     //������ʾ��ǰ��վ
            }else if(move_station != at_station && move_station != 10)      //��ѡ���뵱ǰ��վ��ͬ��δѡ�񷵻�
            {
                at_station = move_station;      //�����ڳ�վ����ѡ��վ
                if(days < 38)     //�����ԼӺ�δ��39ʱ
                {
                    switch(move_station)        //����ѡ��վ��ת
                    {
                    case PINGGUOYUAN:
                        days++;     //�������ӣ���ͬ��
                        MoneyChange(&saving, &owed);        //��Ƿ��������ӣ���ͬ��
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
                        InitPrice(all_goods);       //��ʼ����Ʒ�۸���ͬ��
                        InitMarket(market_goods, sz, all_goods, days, cash, saving, &owed, &store_goods, &goods, room);        //��ʼ��������Ʒ����ͬ��
                        IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                        system("cls");      //����
                        show[at_station](&store_goods, days, cash, saving, owed, goods, room);     //��ʾ��ǰ��վ���棨��ͬ��
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
                }else if(days == 38)        //�������ԼӺ����39
                {
                    days++;     //�������ӵ�39
                    MoneyChange(&saving, &owed);        //������Ƿ��
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
                    InitPrice(all_goods);       //��ʼ����Ʒ�۸�
                    EndMarket(market_goods, sz, all_goods);         //�������ȫ����Ʒ
                    IfMoneyCase(&store_goods, days, &cash, &saving, owed, goods, room);
                    system("cls");
                    show[at_station](&store_goods, days, cash, saving, owed, goods, room);
                }else       //�������ԼӺ����40
                {
                    days++;     //�������ӵ�40
                    MoneyChange(&saving, &owed);        //������Ƿ��
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
                    InitPrice(all_goods);       //��ʼ����Ʒ�۸�
                    EndMarket(market_goods, sz, all_goods);         //�������ȫ����Ʒ
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
        case PLACE:     //��ѡ����
            PlaceMap(&store_goods, days, cash, saving, owed, goods, room);     //��ʾ��������
            printf("��Ҫȥ���:>1.���� 2.�ʾ� 3.�н� 4.���� 0.����\n");      //��ʾ��ѡ��
            scanf("%d", &place_choose);     //��ȡ����ѡ����
            switch(place_choose)        //����ѡ����ת
            {
            case BANK:      //ѡ������
                BankShow(&store_goods, days, &cash, &saving, owed, goods, room, show, at_station);
                break;
            case POST:      //ѡ���ʾ�
                PostShow(&store_goods, days, &cash, saving, &owed, goods, room, show, at_station);
                break;
            case HOUSE:     //ѡ���н�
                HouseShow(&store_goods, &cash, &room, days, saving, owed, goods, show, at_station);
                break;
            case NET:       //ѡ������
                NetShow(&store_goods, &net_times, &cash, saving, owed, goods, room, days);
                break;
            case BACK:      //ѡ�񷵻�
            default:        //������ѡ��
                system("cls");      //����
                if(at_station < 0 || at_station > 10)       //�����ڳ�վ�������κγ�վ
                {
                    StartShow(&store_goods, days, cash, saving, owed, goods, room);        //��ʾ��ʼ����
                }else       //������ĳ��վ
                {
                    show[at_station](&store_goods, days, cash, saving, owed, goods, room);     //��ʾ��Ӧ��վͼ��
                }
                break;
            }
            break;
        case BUSYNESS:      //��ѡ����
            system("cls");
            MarketShow(&store_goods, market_goods, days, cash, saving, owed, goods, room);
            printf("��Ҫ��ʲ��:>1.���� 2.���� 0.����");        //��ʾ
            scanf("%d", &business_choose);      //��ȡ����ѡ����
            switch(business_choose)
            {
            case BUY:       //ѡ������
                BuyIn(&goods, room, &store_goods, market_goods, &cash);     //ִ�����뺯��
                system("cls");      //����
                MarketShow(&store_goods, market_goods, days, cash, saving, owed, goods, room);      //��ʾ�г�����
                break;
            case SELL:      //ѡ������
                SellOut(&goods, room, &store_goods, market_goods, &cash);       //ִ����������
                system("cls");      //����
                MarketShow(&store_goods, market_goods, days, cash, saving, owed, goods, room);      //��ʾ�г�����
                break;
            case RETURN:        //ѡ�񷵻�
            default:        //������ѡ��
                system("cls");      //����
                if(at_station < 0 || at_station > 10)       //�����ڳ�վ�������κγ�վ
                {
                    StartShow(&store_goods, days, cash, saving, owed, goods, room);        //��ʾ��ʼ����
                }else       //������ĳ��վ
                {
                    show[at_station](&store_goods, days, cash, saving, owed, goods, room);     //��ʾ��Ӧ��վͼ��
                }
                break;
            }
            break;
        case EXIT:      //��ѡ���˳�
            *inputp = 0;        //ʹ��ʼѡ��ֵΪ0
            BreakGameShow();
            GameEndShow();
            return;     //�˳���ǰ����
            break;
        default:
            ChooseMenu();
            break;
        }
    }while(choose);
}


