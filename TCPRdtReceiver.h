#pragma once
#include "RdtReceiver.h"

class TCPRdtReceiver :public RdtReceiver {
private:
	int seqmax;
	int expectSequenceNumberRcvd;	// �ڴ��յ�����һ���������
	Packet lastAckPkt;				//�ϴη��͵�ȷ�ϱ���
public:
	TCPRdtReceiver(Configuration config);
	virtual ~TCPRdtReceiver();
public:
	void receive(Packet &packet);	//���ձ��ģ�����NetworkService����
};
