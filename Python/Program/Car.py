# import class file
from Vehicle import Vehicle

# deklarasi class
class Car(Vehicle):
    # constructor
    def __init__(self, kode_kendaraan, plat_nomor, merk, tahun_produksi, warna, jumlah_kursi, jumlah_pintu):
        super().__init__(kode_kendaraan, plat_nomor, merk, tahun_produksi, warna)
        self.jumlah_kursi = jumlah_kursi
        self.jumlah_pintu = jumlah_pintu

    # menampilkan atribut car
    def display_info(self):
        super().display_info()
        print("Jumlah Kursi       :", self.jumlah_kursi)
        print("Jumlah Pintu       :", self.jumlah_pintu)
    
    # method setter untuk set nilai setiap atribut pada kelas Car        
    # set jumlah kursi
    def set_jumlah_kursi(self, jumlah_kursi):
        self.jumlah_kursi = jumlah_kursi
        
    # set jumlah pintu
    def set_jumlah_pintu(self, jumlah_pintu):
        self.jumlah_pintu = jumlah_pintu
        
    # method getter untuk mendapatkan nilai setiap atribut pada kelas Car
    # get jumlah kursi
    def get_jumlah_kursi(self):
        return self.jumlah_kursi
    
    # get jumlah pintu
    def get_jumlah_pintu(self):
        return self.jumlah_pintu