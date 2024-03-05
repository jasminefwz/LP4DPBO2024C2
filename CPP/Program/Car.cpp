//menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

//memasukan library yang digunakan, termasuk kelas induk (kelas Vehicle) dari kelas Car
#include <iostream>
#include <string>
#include "Vehicle.cpp"

//deklarasi namespace
using namespace std;

//Kelas Car yang digunakan untuk merepresentasikan data Car, Car merupakan kelas turunan dari kelas Vehicle
class Car : public Vehicle{
    private:
        //atribut yang digunakan pada kelas Car terdiri dari jumlah kursi dan jumlah pintu
        int jumlah_kursi;
        int jumlah_pintu;

    public:
        //constructor
        Car(){

        }

        //constructor: overloading
        Car(string kode, string plat, string merk, int tahun_produksi, string warna, int jumlah_kursi, int jumlah_pintu)
        : Vehicle(kode, plat, merk, tahun_produksi, warna), jumlah_kursi(jumlah_kursi), jumlah_pintu(jumlah_pintu){}

        //menampilkan atribut car
        void displayInfo() const override{
            Vehicle::displayInfo();
            cout << "Jumlah Kursi       : " << jumlah_kursi << endl;
            cout << "Jumlah Pintu       : " << jumlah_pintu << endl;
        }

        //method set untuk set setiap nilai atribut pada kelas Car
        void setJumKursi(int jumlah_kursi){
            this->jumlah_kursi = jumlah_kursi;
        }

        void setJumPintu(int jumlah_pintu){
            this->jumlah_pintu = jumlah_pintu;
        }

        //method get untuk mendapatkan nilai setiap atribut pada kelas Car
        int getJumKursi(){
            return jumlah_kursi;
        }

        int getJumPintu(){
            return jumlah_pintu;
        }

        //destructor
        ~Car(){

        }
};