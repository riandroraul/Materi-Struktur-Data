#include <iostream>
#include <cstdlib>
#include <conio.h>
#define n 5

void INSERT(void);
void DELETE(void);
void CETAKLAYAR(void);
void inisialisasi(void);

int pil, front, rear ,counter;
char pilihan[1],huruf;
char queue[n];

using namespace std;
int main()
{
    inisialisasi();
    do
    {

        cout<<"                          CIRCULAR QUEUE                             "<<endl;
        cout<<"_____________________________________________________________________"<<endl;
        cout<<" PROGRAM ANIMASI QUEUE                                               "<<endl;
        cout<<"====================================================================="<<endl;
        cout<<" 1.INSERT                                                            "<<endl;
        cout<<" 2.DELETE                                                            "<<endl;
        cout<<" 3.CETAK ANTRIAN                                                     "<<endl;
        cout<<" 4.KELUAR                                                            "<<endl;
        cout<<" * CATATAN : BATAS INPUT = 3 HURUF                                   "<<endl;
        cout<<"_____________________________________________________________________"<<endl;
        cout<<endl;
        cout<<" SILAHKAN MASUKKAN PILIHAN : ";cin>>pilihan;
        pil=atoi(pilihan);
        switch(pil)
        {
            case 1:
                INSERT();
                break;
            case 2:
                DELETE();
                break;
            case 3:
                CETAKLAYAR();
                break;
            default :
            cout<<"TERIMA KASIH"<<endl;
            break;
        }
        cout<<"Press any key to continue"<<endl;
        getch();
        system("cls");
    }
    while (pil<4);
    return 0;
}

void INSERT(void)
{
    if(counter<n)
    {
        cout<<endl<<"Masukkan 1 huruf : ";
        cin>>huruf;
        rear = (rear + 1) % n;
        queue[rear] = huruf;
        counter++;
    }
    else
        cout<<"Antrian Penuh!"<<endl;

}
void CETAKLAYAR(void)
{
    if(counter>0)
    {
        for(int k = 0; k < counter; k++)
        {
            int i = (front+k) % n;
            cout << "Q["<<k<<"]="<<queue[i] << endl;
        }
    }
    else
        cout<<"Queue kosong!"<<endl;

}
void DELETE(void)
{
    if(counter>0)
    {
        huruf=queue[front];
        front = (front + 1) %n;
        counter--;

        cout<<"Data yang di ambil :"<<huruf<<endl;
    }
    else
        cout<<"Antrian Kosong!"<<endl;

}
void inisialisasi(void)
{
    front=0;
    rear=-1;
    counter=0;
}