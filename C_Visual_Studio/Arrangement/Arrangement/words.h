#pragma once
enum type {
	CHAR = 1,
	INT,
	FLOAT,
	DOUBLE
};

extern char e[][10] = { "dog", "pig", "tiger", "hourse" };
extern char h[][10] = { "��", "����", "ȣ����", "��"};
extern int elength = sizeof(e) / sizeof(e[0]);
