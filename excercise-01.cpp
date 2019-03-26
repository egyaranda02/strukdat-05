/*
Nama	: Ahmad Egy Aranda
NPM		: 140810180043
********************************/
#include<iostream>
using namespace std;

struct pembalap{
	int nomor;
	char nama[40];
	int waktu;
	pembalap* next;
	pembalap* prev;
};
typedef pembalap* pointer;
typedef pointer List;

void createList(List& First)
{
	First=NULL;
}

void insertFirst(List& First, pointer pBaru)
{
	if(First==NULL)
	{
		First=pBaru;
	}
	else
	{
		pBaru->next=First;
		First->prev=pBaru;
		First=pBaru;
	}
}

void createElement(pointer& pBaru,int i)
{
	pBaru=new pembalap;
	cout<<"Masukkan Pembalap ke-"<<i+1<<endl;
	cout<<"Masukkan Nomor	: ";cin>>pBaru->nomor;
	cout<<"Masukkan Nama	: ";cin>>pBaru->nama;
	cout<<"Masukkan Waktu	: ";cin>>pBaru->waktu;
	cout<<endl;
	pBaru->next=NULL;
	pBaru->prev=NULL;
	system("cls");
}

void insertBefore(List& First, int nomorKey)
{
    pointer pCari;
    search(First,nomorKey,pCari);
    if (First==NULL)
	{
        
    }
    else 
	{

    }
}

void deleteByKey()
{
	
}

void search(List& First, int nomorKey, pCari)
{
    pCari=List;
    while(pCari->nomor!=nomorKey)
	{	
        pCari=pCari->next;
    }
}

void traversal(List First)
{
	pointer pBantu;
	pBantu=First;
	
	while(pBantu != NULL)
 	{
  		cout<<"Nomor	: "<<pBantu->nomor<<endl;
  		cout<<"Nama	: "<<pBantu->nama<<endl;
  		cout<<"Waktu	: "<<pBantu->waktu<<endl;
  		cout<<endl;
  		pBantu=pBantu->next;
 	}
}

void sortingByNomor()
{
	
}

void update()
{
	
}

main()
{
	pointer pBaru, pBantu;
	List First;
	createList(First);
	for(int i=0;i<4;i++)
	{
		createElement(pBaru,i);
		insertFirst(First,pBaru);
	}
	
	cout<<">>>>>List"<<endl;
	traversal(First);
	
	int keyNomor=2;
	
	cout<<">>>>>>Inser Before Nomor"<<keyNomor<<endl;
	createElement(pBaru);
	insertBefore(pBaru,keyNomor);
}
