#include "stdafx.h"
#include "NPC.h"


CNPC::CNPC(void)
{
	
//	printf_s("NPC created\n");
	
}


CNPC::~CNPC(void)
{
//	printf_s("NPC deleted\n");
}


void CNPC::PrintType()
{
//	printf_s("My Type is CNPC\n");
}

void CNPC::AddSpeach( std::string speach )
{
	m_Conversation.push_back(speach);
}

void CNPC::SpeachInit()
{
	char buf[160];
	sprintf_s(buf, "�ȳ��ϽŰ�! ������ ���� ��ħ, ���� ���� ����� ���� %s", GetName().c_str());
	std::string dialog = buf;
	AddSpeach(dialog);
	AddSpeach("���� ��ħ!");
	AddSpeach("All Your Grade Are belong to us");
	AddSpeach("���̻��� ��ȭ�� ������?");
}

void CNPC::Speak()
{
	std::cout << GetName() << " : " <<  m_Conversation[rand() % m_Conversation.size()] << std::endl;
}

void CNPC::ClearSpeach()
{
	m_Conversation.clear();
}

