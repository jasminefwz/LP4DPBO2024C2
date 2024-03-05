//menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

//memasukkan library yang digunakan
#include <iostream>
#include <string>
#include <list>
#include "Vehicle.cpp"

//deklarasi namespace
using namespace std;

//kelas ParkingLot yang digunakan untuk merepresentasikan data ParkingLot
class ParkingLot{
    private:
        //atribut yang digunakan pada kelas ParkingLot terdiri dari kapasitas dan jumlah kendaraan
        int kapasitas;
        int jumlah_kendaraan;
        list<Vehicle*> daftar_kendaraan;

    public:
        //constructor
        ParkingLot(){

        }

        //constructor: overloading
        ParkingLot(int kapasitas) : kapasitas(kapasitas), jumlah_kendaraan(0){}

        //menambah data
        void park(Vehicle* kendaraan){
            //jika kendaraan memenuhi kapasitas
            if(jumlah_kendaraan < kapasitas){
                daftar_kendaraan.push_back(kendaraan);
                jumlah_kendaraan++;
                cout << "Kendaraan berhasil diparkir di tempat parkir!" << endl;
            }else{
                cout << "Tempat parkir penuh." << endl;
            }   
        }

        //menampilkan atribut parking lot
        void displayInfo() const{
            cout << "Kapasitas Tempat Parkir     : " << kapasitas << endl;
            cout << "Jumlah Kendaraan Saat Ini   : " << jumlah_kendaraan << endl << endl;
            cout << "Daftar Kendaraan di Tempat Parkir" << endl;
            //menampilkan data
            int hitung = 0;
            for(const auto& kendaraan : daftar_kendaraan){
                cout << "Kendaraan ke-" << hitung + 1 << endl;
                kendaraan->displayInfo();
                hitung++;
                cout << endl;
            }
        }

        //method setter untuk set nilai setiap atribut pada kelas ParkingLot
        //set kapasitas
        void setKapasitas(int kapasitas){
            this->kapasitas = kapasitas;
        }

        //set luas garasi
        void setJumKendaraan(int jumlah_kendaraan){
            this->jumlah_kendaraan = jumlah_kendaraan;
        }

        //set daftar kendaraan
        void setDaftarKendaraan(list<Vehicle*>& daftar_kendaraan){
            this->daftar_kendaraan = daftar_kendaraan;
        }

        //method getter untuk mendapatkan nilai setiap atribut pada kelas ParkingLot
        //get nama garasi
        int getKapasitas(){
            return kapasitas;
        }

        //get luas garasi
        int getJumKendaraan(){
            return jumlah_kendaraan;
        }

        //get luas garasi
        list<Vehicle*> getDaftarKendaraan(){
            return daftar_kendaraan;
        }

        //destructor
        ~ParkingLot(){
            
        }
};