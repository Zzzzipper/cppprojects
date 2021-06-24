#ifndef __HARDWARE_H_
#define __HARDWARE_H_



/*
 * ���: ���������
 * ��������: ������ ����������� ������ ���������.
 * TODO: ��� ������������ ������������� ��������������� ����������� ������ �����, � ���������� ������������� � ����������� �� ������ ��������
 * ���������� ��� ����� �����, ������������ ������� � �������� �������� ���������� ���������. ��������: SIM900_UART, MDB_UART..
 * ������ ����� ������ ���������� �������� HW_VERSION ��� ����������. ����������� � defines.h
 *
 * A7, C4, C5
 *
 */




class Hardware
{
public:
	static Hardware *get();

	Hardware();
	uint32_t getVersion();

private:
	uint32_t version;
};

#endif