#pragma once
#include "DataStructure.h"

// ����RdtReceiver�����࣬�涨�˱���ʵ�ֵ�һ���ӿڷ���
// ������������StopWaitRdtReceiver��GBNRdtReceiver���������һ�������ľ���ʵ��
// ֻ���ǵ����䣬�����շ�ֻ��������
struct  RdtReceiver
{
	// ���ձ��ģ�����NetworkService����
	virtual void receive(Packet &packet) = 0;
};