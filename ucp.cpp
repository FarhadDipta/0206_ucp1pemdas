#include <iostream>
using namespace std;

int sensor1,sensor2,sensor3,jumlahKota;
string namaLokasi[20];

void input() {
    while (true)
    {
        cout << "Masukan banyaknya kota yang anda inginkan : ";
        cin >> jumlahKota;

        if (jumlahKota <+ 20)
            break;
        else
            cout << "\nMaksimum banyaknya kota adalah adalah 20" << endl;
    }

    cout << "\n--------------------" << endl;
    cout << "\nMasukan nama kota" << endl;
    cout << "\n--------------------" << endl;

    for (int i = 0; i < jumlahKota; i++)
    {
        cout << "<" << (i + 1) << ">. ";
        cin >> namaLokasi[i];
    }
}

void Sensorpolutan(){
    for ( int i = 0; i < jumlahKota; i++)
    {  
        cout << "Nama kota ke-" << (i+1) << endl;
        cout << "=====================" << endl;
        cout << "Masukan tingkat polutannya"  << endl;
        cout << "Sensor 1 : ";
        cin >> sensor1;
        cout << "Sensor 2 : ";
        cin >> sensor2;
        cout << "Sensor 3 : ";
        cin >> sensor3;
    }
    
}

void display(){
    for(int i = 0; i < jumlahKota; i++){
        cout << "Data kota ke-" << (i+1) << endl;
        cout << "=====================" << endl;
        cout << "Sensor 1 : " << sensor1 << endl;
        cout << "Sensor 2 : " << sensor2 << endl;
        cout << "Sensor 3 : " << sensor3 << endl;
        if (sensor1,sensor2,sensor3 <= 45)
        {
            cout << "kota dari " << (i+1) << " sehat" << endl;
        }
        else
        {
            cout << "kota dari " << (i+1) << " tidak sehat" << endl;
        }
        
        
    }
}

int main(){
    input();
    Sensorpolutan();
    display();
}


/*
    1.  - float #bilangan pecahan
        - integer #bilangan bulat
        - string #kata atau kalimat
    2.  - void Nama_void (){

    }
        - int main(){

        }
    3.  - for (kondisi){
            proses
        } perulangan ketika sudah mengetahui jumlah yang diinginkan
        - while (kondisi){
            proses
        } perulangan ketika belum mengetahui jumlah perulangan dan dicoba di awal
        - do {
            proses
        } while (kondisi) perulangan ketika belum mengetahui jumlah perulangan dan dicoba di awal
    4. switch (kondisi)
        {
            case 1:
            cout << "........."
            break;
            case 2:
            cout << "........."
            break;
            case 3:
            cout << "........."
            break;
            default :
            cout << ",,,,,,,"
            break;
        }
    5. struct{
        int nim;
        string kota;
    }; kumpulan data di dalam tabel
*/