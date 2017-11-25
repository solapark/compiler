/***************************************************************
 * File Name    : hash.c
 * Description
 *      This is an implementation file for the open hash table.
 *
 ****************************************************************/

#include "subc.h"

#define  HASH_TABLE_SIZE   101

struct nlist {
   struct nlist *next;
   struct id *data;
};

static struct nlist *hashTable[HASH_TABLE_SIZE];

unsigned hash(char *name) {
	/* implementation is given here */
	int length = strlen(name);

	//Sums the ASCII values of whole letters in a string.
	int key = 0;
	for (int i=0; i < length; i++)
	{
		key += name[i];
	}
	//modular of the sum.
	key %= HASH_TABLE_SIZE;
	//printf("naem : %s, key : %d\n", name, key);
}

struct id *enter(int lextype, char *name, int length) {
   /* implementation is given here */
	struct id* lookupResult = lookup(name);
	if(lookupResult)
		return lookupResult;
 
	int tokenType = lextype;
	//find the key
	unsigned key = hash(name);
	
	//find the pointer of nlist matching the key  
	struct nlist* pNlist = hashTable[key];

	//if pNist != NULL,		
	if(pNlist)	
	{	
		//find the tail of nlist[key]
		while(pNlist->next)
		{
			pNlist = pNlist->next;
		}
		//make a new nlist at the tail of nlist[key]
		pNlist -> next =(struct nlist*) malloc(sizeof(struct nlist));
		//update the pointer to new nlist
		pNlist = pNlist->next; 
	}
	//if pNist == NULL,				
	else
	{
		//make a new nlist  at the head of nlist[key]
		hashTable[key] = (struct nlist*) malloc(sizeof(struct nlist));
		//update the pointer to new nlist
		pNlist = hashTable[key];	
	}	
	
	//make a new id struct
	struct id* curId = (struct id*) malloc(sizeof(struct id));	
	curId->lextype = lextype; 
	curId->name = name;
	curId->leng = length; 
//	curId->count = 0;

	//entyer the new id struct to data of pNlist
	pNlist->data = curId;
	//return the pointer of id struct
	return curId;
}

struct id *lookup(char *name) {
	/* implementation is given here */
	int length = strlen(name);
	//find the key
	unsigned key = hash(name);

	struct nlist* curList = hashTable[key];
	char* curName;
	struct id* curId;
	int isSame = 1; 

	//if current nlist != NULL
	while(curList)
	{
		//compare the nlist's data and target name.  
		isSame = 1;
		curId = curList->data;
		curName = curId->name;
		for(int i=0; i<length; i++)		 
		{
			//if nlist's data doesn't match to target name
			if(curName[i]!=name[i])
			{
				//isSame flag = 0 and stop comparing.
				isSame = 0;	
				break;
			}
		}

		//if nlist's data matches to target name	
		if(isSame)
		{
//			printf("SEARCH. %s, count:%d\n", curId->name, curId->count);
			//return pointer to id struct
			return curId;
		}
		//if nlist's data doesn't match to target name	
		else
		{
			//select next nlist[key], and repeat above process
			curList = curList->next;
		}
	}
	
	//if there is no matching entry, return NULL
	return NULL;
} 	
