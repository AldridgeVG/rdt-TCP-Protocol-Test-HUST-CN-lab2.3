#pragma once
#include "DataStructure.h"

//����RdtSender�����࣬�涨�˱���ʵ�ֵ������ӿڷ���
//������������StopWaitRdtSender��GBNRdtSender������������������ľ���ʵ��
//ֻ���ǵ����䣬�����ͷ�ֻ�������ݺͽ���ȷ��
struct  RdtSender
{
	// ����Ӧ�ò�������Message����NetworkService���á�
	// ������ͷ��ɹ��ؽ�Message���͵�����㣬����true;
	// �����Ϊ���ͷ����ڵȴ�ȷ��״̬���ʹ����������ܾ�����Message���򷵻�false
	virtual bool send(Message &message) = 0;

	//����ȷ��Ack������NetworkService����	
	virtual void receive(Packet &ackPkt) = 0;

	//Timeout handler������NetworkService����
	virtual void timeoutHandler(int seqNum) = 0;

	//����RdtSender�Ƿ��ڵȴ�״̬��������ͷ����ȴ�ȷ�ϻ��߷��ʹ�������������true
	virtual bool getWaitingState() = 0;
};
