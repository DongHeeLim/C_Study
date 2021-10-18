#pragma once
enum type {
	CHAR = 1,
	INT,
	FLOAT,
	DOUBLE
};

char e[][10] = { "dog", "pig", "tiger", "hourse" };
char h[][10] = { "°³", "µÅÁö", "È£¶ûÀÌ", "¸»"};
int elen = sizeof(e) / sizeof(e[0]);
