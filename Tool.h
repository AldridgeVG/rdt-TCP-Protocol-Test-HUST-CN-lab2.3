#pragma once
#include "DataStructure.h"

// ���ߣ����ڴ�ӡ���ģ�����У��ͣ�����0-1֮�������
struct Tool {
	// ��ӡPacket����Ϣ
	// ��һ���������Զ��������������������Ҫ�����������ʲô���ڶ����Ǳ��ġ�
	virtual void printPacket(const char * description, const Packet &packet) = 0;

	// ����һ��Packet��У���
	virtual int calculateCheckSum(const Packet &packet) = 0;

	// ����һ�����ȷֲ���[0-1]��������
	virtual double random() = 0;
};