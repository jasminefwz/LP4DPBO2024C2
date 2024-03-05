//menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

//memasukan library yang digunakan, termasuk kelas induk (kelas Vehicle) dari kelas Motorcycle
#include <iostream>
#include <string>
#include "Vehicle.cpp"

//deklarasi namespace
using namespace std;

//Kelas Motorcycle yang digunakan untuk merepresentasikan data Motorcycle, Motorcycle merupakan kelas turunan dari kelas Vehicle
class Motorcycle : public Vehicle{
    private:
        //atribut yang digunakan pada kelas Motorcycle terdiri dari jenis motor dan kapasitas tangki
        string jenis_motor;
        int kapasitas_tangki;

    public:
        //constructor
        Motorcycle(){

        }

        //constructor: overloading
        Motorcycle(string kode, string plat_nomor, string merk, int tahun_produksi, string warna, string jenis_motor, int kapasitas_tangki)
        : Vehicle(kode, plat_nomor, merk, tahun_produksi, warna), jenis_motor(jenis_motor), kapasitas_tangki(kapasitas_tangki) {}

        //menampilkan atribut motorcycle
        void displayInfo() const override {
            Vehicle::displayInfo();
            cout << "Jenis Motor        : " << jenis_motor << endl;
            cout << "Kapasitas Tangki   : " << kapasitas_tangki << " liter" << endl;
        }

        //method set untuk set setiap nilai atribut pada kelas Motorcycle
        void setJenisMotor(string jenis_motor){
            this->jenis_motor = jenis_motor;
        }

        void setKapasitasTangki(int kapasitas_tangki){
            this->kapasitas_tangki = kapasitas_tangki;
        }

        //method get untuk mendapatkan nilai setiap atribut pada kelas Motorcycle
        string getJenisMotor(){
            return jenis_motor;
        }

        int getKapasitasTangki(){
            return kapasitas_tangki;
        }

        //destructor
        ~Motorcycle(){

        }
};