#include "pch.h"
#include "service.h"

int startMenu() // ����
{
	int punkt;
	printf("�������� ����� ���� � ������� ��� �����(1,2,3,4,5,6,7):\n 1. ���������� ����������;\n 2. �������� ���� ����� �������;\n 3. ���������� ���������� � ����;\n 4. �������� ������������� ��������;\n 5. ���������� ����������;\n 6. ������� ���������� �� �����;\n 7. �����;\n");
	while (scanf("%d", &punkt) < 1)
	{
		printf("������! ������� ������������ ��������!!!\n");
		scanf("%*[^\n]");
		scanf("%*c");
		printf("�������� ����� ���� � ������� ��� �����(1,2,3,4,5,6,7):\n 1. ���������� ����������;\n 2. �������� ���� ����� �������;\n 3. ���������� ���������� � ����;\n 4. �������� ������������� ��������;\n 5. ���������� ����������;\n 6. ������� ���������� �� �����;\n 7. �����;\n");
	}
	return punkt;
}

Data startProg(int punkt, Train* list, int count) // ������
{
	Data pos;
	pos.count = count;
	pos.pointer = list;
	switch (punkt)
	{
	case 1:
		pos = startEnter(list, count);
		break;
	case 2:
		pos = addElem(list, count);
		break;
	case 3:
		saveList(list, count);
		break;
	case 4:
		pos = deleteElem(list, count);
		break;
	case 5:
		sortList(list, count);
		break;
	case 6:
		outList(list, count);
		break;
	case 7:
		finish();
		break;
	default:
		printf("������! ������� ������������ ��������!!!\n");
		scanf("%*[^\n]");
		scanf("%*c");
		break;
	}
	return pos;
}

void finish() // ���������� ���������
{
	printf("������� �� ������������� ���������!!!\n");
	getchar();
}