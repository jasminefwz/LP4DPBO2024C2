# deklarasi class
class Vehicle:
    # constructor
    def __init__(self, kode_kendaraan, plat_nomor, merk, tahun_produksi, warna):
        self.kode_kendaraan = kode_kendaraan
        self.plat_nomor = plat_nomor
        self.merk = merk
        self.tahun_produksi = tahun_produksi
        self.warna = warna

    # menampilkan atribut vehicle
    def display_info(self):
        print("Kode Kendaraan     :", self.kode_kendaraan)
        print("Plat Nomor         :", self.plat_nomor)
        print("Merk               :", self.merk)
        print("Tahun Produksi     :", self.tahun_produksi)
        print("Warna              :", self.warna)
    
    # method setter untuk set nilai setiap atribut pada kelas Vehicle
    # set kode kendaraan
    def set_kode_kendaraan(self, kode_kendaraan):
        self.kode_kendaraan = kode_kendaraan
    
    # set plat_nomor
    def set_plat_nomor(self, plat_nomor):
        self.plat_nomor = plat_nomor
        
    # set merk
    def set_merk(self, merk):
        self.merk = merk
        
    # set tahun produksi
    def set_tahun_produksi(self, tahun_produksi):
        self.tahun_produksi = tahun_produksi
        
    # set warna
    def set_warna(self, warna):
        self.warna = warna
        
    # method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
    # get kode_kendaraan
    def get_kode_kendaraan(self):
        return self.kode_kendaraan

    # get plat nomor
    def get_plat_nomor(self):
        return self.plat_nomor
    
    # get merk
    def get_merk(self):
        return self.merk
    
    # get tahun produksi
    def get_tahun_produksi(self):
        return self.tahun_produksi
    
    # get warna
    def get_warna(self):
        return self.warna