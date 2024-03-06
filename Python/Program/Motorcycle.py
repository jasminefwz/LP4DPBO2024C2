# import class file
from Vehicle import Vehicle

# deklarasi class
class Motorcycle(Vehicle):
    # constructor
    def __init__(self, kode_kendaraan, plat_nomor, merk, tahun_produksi, warna, jenis_motor, kapasitas_tangki):
        super().__init__(kode_kendaraan, plat_nomor, merk, tahun_produksi, warna)
        self.jenis_motor = jenis_motor
        self.kapasitas_tangki = kapasitas_tangki

    # menampilkan atribut car
    def display_info(self):
        super().display_info()
        print("Jenis Motor        :", self.jenis_motor)
        print("Kapasitas Tangki   :", self.kapasitas_tangki)
        
    # method setter untuk set nilai setiap atribut pada kelas Motorcycle        
    # set jenis motor
    def set_jenis_motor(self, jenis_motor):
        self.jenis_motor = jenis_motor
        
    # set kapasitas tangki
    def set_kapasitas_tangki(self, kapasitas_tangki):
        self.kapasitas_tangki = kapasitas_tangki
        
    # method getter untuk mendapatkan nilai setiap atribut pada kelas Motorcycle
    # get jenis motor
    def get_jenis_motor(self):
        return self.jenis_motor
    
    # get kapasitas tangki
    def get_kapasitas_tangki(self):
        return self.kapasitas_tangki