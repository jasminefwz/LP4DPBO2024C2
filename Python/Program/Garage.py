# deklarasi class
class Garage:
    # constructor
    def __init__(self, nama_garasi, luas_garasi):
        self.nama_garasi = nama_garasi
        self.luas_garasi = luas_garasi
        self.daftar_kendaraan = []

    # menambah data
    def tambah_kendaraan(self, kendaraan):
        self.daftar_kendaraan.append(kendaraan)
        print("Kendaraan berhasil diparkir di garasi!")

    # menampilkan atribut garage
    def display_info(self):
        print("Nama Garasi   :", self.nama_garasi)
        print("Luas Garasi   :", self.luas_garasi, "m^2\n")
        print("Daftar Kendaraan di Garasi")
        print("--------------------------")
        # menampilkan data
        for i, kendaraan in enumerate(self.daftar_kendaraan, 1):
            print("Kendaraan ke-", i)
            kendaraan.display_info()
            print()
    
    # method setter untuk set nilai setiap atribut pada kelas Garage        
    # set nama garasi
    def set_nama_garasi(self, nama_garasi):
        self.nama_garasi = nama_garasi
        
    # set luas garasi
    def set_luas_garasi(self, luas_garasi):
        self.luas_garasi = luas_garasi
        
    # set daftar kendaraan
    def set_daftar_kendaraan(self, daftar_kendaraan):
        self.daftar_kendaraan = daftar_kendaraan
        
    # method getter untuk mendapatkan nilai setiap atribut pada kelas Garage
    # get nama garasi
    def get_nama_garasi(self):
        return self.nama_garasi
    
    # get luas garasi
    def get_luas_garasi(self):
        return self.luas_garasi
    
    # get daftar kendaraan
    def get_daftar_kendaraan(self):
        return self.daftar_kendaraan