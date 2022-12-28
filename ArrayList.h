#pragma once
#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#define True		1
#define False		0

#define LIST_LEN	100
typedef int LData;

typedef struct __ArrayList
{
	LData arr[LIST_LEN];
	int numOfData;
	int curPosition;
} ArrayLIst;

typedef ArrayList List;

void ListInit(List* plist);
void LInsert(List* plist, LData data);

int LFirst(LIst* plist, LData* pdata);
int LNext(List* plist, LData* pdata);

LData LRemove(List* plist);
int LCount(List* plist);

#endif