/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once
#pragma warning(disable : 4996)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#include <queue>
using namespace std;

#include "Customer.h"

int bestWindow ( queue<Customer> window[], int nWin );
void printCustomer ( Customer c );
void printQueue (queue<Customer> Q);
void displayProgress ( queue<Customer> window[], int nWin, int now );
void simulate ( int, int );

extern int delay; //控制进度显示的延迟