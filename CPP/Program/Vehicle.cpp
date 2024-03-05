//menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

//memasukkan library yang digunakan
#include <iostream>
#include <string>

//deklarasi namespace
using namespace std;

//kelas Vehicle yang digunakan untuk merepresentasikan data Vehicle, Vehicle merupakan kelas induk dari kelas Car dan Motorcycle
class Vehicle{
    private:
        //atribut yang digunakan pada kelas Vehicle terdiri dari id, plat nomor, merk, tahun produksi, dan warna
        string kode;
        string plat_nomor;
        string merk;
        int tahun_produksi;
        string warna;

    public:
        //constructor
        Vehicle(){

        }

        //constructor: overloading
        Vehicle(string kode, string plat_nomor, string merk, int tahun_produksi, string warna){
            this->kode = kode;
            this->plat_nomor = plat_nomor;
            this->merk = merk;
            this->tahun_produksi = tahun_produksi;
            this->warna = warna;
        }

        //menampilkan atribut vehicle
        virtual void displayInfo() const{
            cout << "Kode Kendaraan     : " << kode << endl;
            cout << "Plat Nomor         : " << plat_nomor << endl;
            cout << "Merk               : " << merk << endl;
            cout << "Tahun Produksi     : " << tahun_produksi << endl;
            cout << "Warna              : " << warna << endl;
        }

        //method setter untuk set nilai setiap atribut pada kelas Vehicle
        //set kode
        void setKode(string kode){
            this->kode = kode;
        }

        //set plat nomor
        void setPlatNomor(string plat_nomor){
            this->plat_nomor = plat_nomor;
        }

        //set merk
        void setMerk(string merk){
            this->merk = merk;
        }

        //set tahun produksi
        void setTahunProduksi(int tahun_produksi){
            this->tahun_produksi = tahun_produksi;
        }

        //set warna
        void setWarna(string warna){
            this->warna = warna;
        }

        //method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
        //get kode
        string getKode(){
            return kode;
        }

        //get plat nomor
        string getPlatNomor(){
            return plat_nomor;
        }

        //get merk
        string getMerk(){
            return merk;
        }

        //get tahun produksi
        int getTahunProduksi(){
            return tahun_produksi;
        }

        //get warna
        string getWarna(){
            return warna;
        }

        //destructor
        virtual ~Vehicle() {

        }
};