//memasukan library yang digunakan ke dalam fungsi main (program utama)
#include <bits/stdc++.h>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "ParkingLot.cpp"

//deklarasi namespace
using namespace std;

//fungsi main() yang digunakan sebagai program utama
int main(){
    //instansiasi objek Car
    Car car1("C", "B 1234 CD", "Toyota", 2020, "Hitam", 5, 4);
    Car car2("C", "E 9012 FG", "Suzuki", 2018, "Biru", 4, 2);

    //instansiasi objek Motorcycle
    Motorcycle motor1("M", "D 5678 EF", "Honda", 2019, "Merah", "Matic", 5);
    Motorcycle motor2("M", "H 3456 IJ", "Yamaha", 2021, "Putih", "Manual", 6);
 
    cout << "+--------+" << endl;
    cout << "+ GARAGE +" << endl;
    cout << "+--------+" << endl;
    //membuat objek Garage
    Garage garage("Garasi Mobilku", 50);
    garage.tambahKendaraan(&car1);
    garage.tambahKendaraan(&motor1);

    //menampilkan informasi dari Garage
    cout << endl << "Informasi Garasi Mobil" << endl;
    garage.displayInfo();
    cout << endl;

    cout << "+-------------+" << endl;
    cout << "+ PARKING LOT +" << endl;
    cout << "+-------------+" << endl;
    //membuat objek ParkingLot
    ParkingLot parkingLot(10);
    parkingLot.park(&car2);
    parkingLot.park(&motor2);

    //menampilkan informasi dari ParkingLot
    cout << endl << "Informasi Tempat Parkir" << endl;
    parkingLot.displayInfo();

    return 0;//menyatakan keluaran dari fungsi main() adalah true
}