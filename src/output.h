#ifndef _OUTPUT_H
#define _OUTPUT_H


typedef struct tag_lprof_OUTPUT lprof_OUTPUT;

struct tag_lprof_OUTPUT
{
	int id;
	char* frame;
	char* data;
	lprof_OUTPUT* next;
};

typedef lprof_OUTPUT* lprofP_OUTPUT;
typedef struct tag_lprof_OUTPUT lprof_NODE;

struct tag_lprof_PREV
{
	int id;
	int data;
};

typedef struct tag_lprof_PREV lprof_PREVNODE;

void lprofP_addFrame(int id,char* str);
void lprofP_addData(char* str);
void lprofP_output();
void lprofP_close();



#endif