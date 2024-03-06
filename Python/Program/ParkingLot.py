# deklarasi class
class ParkingLot:
    # constructor
    def __init__(self, kapasitas):
        self.kapasitas = kapasitas
        self.jumlah_kendaraan = 0
        self.daftar_kendaraan = []

    # menambah data
    def park(self, kendaraan):
        # jika kendaraan memenuhi kapasitas
        if self.jumlah_kendaraan < self.kapasitas:
            self.daftar_kendaraan.append(kendaraan)
            self.jumlah_kendaraan += 1
            print("Kendaraan berhasil diparkir di tempat parkir!")
        else:
            print("Tempat parkir penuh.")

    # menampilkan atribut parking lot
    def display_info(self):
        print("Kapasitas Tempat Parkir     :", self.kapasitas)
        print("Jumlah Kendaraan Saat Ini   :", self.jumlah_kendaraan, "\n")
        print("Daftar Kendaraan di Tempat Parkir")
        print("---------------------------------")
        # menampilkan data
        for i, kendaraan in enumerate(self.daftar_kendaraan, 1):
            print("Kendaraan ke-", i)
            kendaraan.display_info()
            print()