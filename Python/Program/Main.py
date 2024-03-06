# import class file
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot

# instansiasi objek Car
car1 = Car("C", "B 1234 CD", "Toyota", 2020, "Hitam", 4, 5)
car2 = Car("C", "E 9012 FG", "Suzuki", 2018, "Biru", 4, 5)

# instansiasi objek Motorcycle
motor1 = Motorcycle("M", "D 5678 EF", "Honda", 2019, "Merah", "Manual", 5)
motor2 = Motorcycle("M", "H 3456 IJ", "Yamaha", 2021, "Putih", "Matic", 8)

print ("+--------+")
print ("+ GARAGE +")
print ("+--------+")
# instansiasi objek Garage
garage = Garage("Garasi Mobilku", 50)
garage.tambah_kendaraan(car1)
garage.tambah_kendaraan(motor1)

# menampilkan informasi dari Garage
print("\nInformasi Garasi Mobil")
print("----------------------")
garage.display_info()

print ("+-------------+")
print ("+ PARKING LOT +")
print ("+-------------+")
# instansiasi objek ParkingLot
parking_lot = ParkingLot(10)
parking_lot.park(car2)
parking_lot.park(motor2)

# menampilkan informasi ParkingLot
print("\nInformasi Tempat Parkir")
print("-----------------------")
parking_lot.display_info()