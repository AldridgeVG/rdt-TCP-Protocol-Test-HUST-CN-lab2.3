#pragma once

//����Ϊclass������ʵ����
class  Configuration {
public:
	//byte size of payload
	static const int PAYLOAD_SIZE = 21;

	//timeout
	static const int TIME_OUT = 20;

	//max seq bits and decimal max number
	int SEQNUM_BIT;
	int SEQNUM_MAX;

	//size of window
	int WINDOW_N;

	//���ι��캯����window���Լ���seqbitsָ��seqmax
	Configuration(int x, int y) :SEQNUM_BIT(x), WINDOW_N(y) {
		SEQNUM_MAX = 1;
		for (int i = 0; i < SEQNUM_BIT; i++) {
			SEQNUM_MAX *= 2;
		}
	}
};
struct  Message {
	//appication layer message content
	char data[Configuration::PAYLOAD_SIZE];
	Message();
	Message(const Message &msg);
	virtual Message & operator=(const Message &msg);
	virtual ~Message();

	virtual void print();
};

//transmiting layer data packet
//print?
struct  Packet {
	int seqnum;										//sequence number
	int acknum;										//ACK
	int checksum;									//check sum
	char payload[Configuration::PAYLOAD_SIZE];		//content of message

	Packet();
	Packet(const Packet& pkt);
	virtual Packet & operator=(const Packet& pkt);
	virtual bool operator==(const Packet& pkt) const;
	virtual ~Packet();

	virtual void print();
};