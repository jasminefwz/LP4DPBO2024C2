//menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

//memasukkan library yang digunakan
#include <iostream>
#include <string>
#include <list>
#include "Vehicle.cpp"

//deklarasi namespace
using namespace std;

//kelas Garage yang digunakan untuk merepresentasikan data Garage
class Garage{
    private:
        //atribut yang digunakan pada kelas Garage terdiri dari nama garasi dan luas garasi
        string nama_garasi;
        int luas_garasi;
        list<Vehicle*> daftar_kendaraan;

    public:
        //constructor
        Garage(){

        }

        //constructor: overloading
        Garage(string nama_garasi, int luas_garasi) : nama_garasi(nama_garasi), luas_garasi(luas_garasi) {}

        //menambah data
        void tambahKendaraan(Vehicle* kendaraan){
            daftar_kendaraan.push_back(kendaraan);
            cout << "Kendaraan berhasil diparkir di garasi!" << endl;
        }

        //menampilkan atribut garage
        void displayInfo() const{
            cout << "Nama Garasi   : " << nama_garasi << endl;
            cout << "Luas Garasi   : " << luas_garasi << " m^2" << endl << endl;
            cout << "Daftar Kendaraan di Garasi" << endl;
            //menampilkan data kendaraan
            int hitung = 0;
            for(const auto& kendaraan : daftar_kendaraan){
                cout << "Kendaraan ke-" << hitung + 1 << endl;
                kendaraan->displayInfo();
                hitung++;
                cout << endl;
            }
        }

        //method setter untuk set nilai setiap atribut pada kelas Garage
        //set nama_garasi
        void setNamaGarasi(string nama_garasi){
            this->nama_garasi = nama_garasi;
        }

        //set luas garasi
        void setLuasGarasi(int luas_garasi){
            this->luas_garasi = luas_garasi;
        }

        //set daftar kendaraan
        void setDaftarKendaraan(list<Vehicle*>& daftar_kendaraan){
            this->daftar_kendaraan = daftar_kendaraan;
        }

        //method getter untuk mendapatkan nilai setiap atribut pada kelas Garage
        //get nama garasi
        string getNamaGarasi(){
            return nama_garasi;
        }

        //get luas garasi
        int getLuasGarasi(){
            return luas_garasi;
        }

        //get luas garasi
        list<Vehicle*> getDaftarKendaraan(){
            return daftar_kendaraan;
        }

        //destructor
        ~Garage(){
            
        }
};