# LP4DPBO2024C2

## Janji
Saya Jasmine Noor Fawzia [2200598] mengerjakan soal LP4 dalam Mata Kuliah DPBO
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan
Aamiin

## Desain Kelas (Diagram)
![lp4_dpbo](https://github.com/jasminefwz/LP4DPBO2024C2/assets/147362810/deea6354-cdb4-4b61-8c01-53d288d84a25)

## Desain Program
**1. Kelas Vehicle**

Kelas ini berfungsi sebagai kelas dasar yang merepresentasikan kendaraan serta menjadi kelas orangtua bagi kelas Car dan kelas Motorcycle. Memiliki atribut seperti kode kendaraan, plat nomor, merk, tahun produksi, dan warna, serta terdapat metode untuk menampilkan informasi kendaraan.

**2. Kelas Car**

Kelas ini merupakan kelas turunan dari kelas Vehicle. Terdapat atribut seperti jumlah kursi dan jumlah pintu. Meng-override metode untuk menampilkan informasi kendaraan.

**3. Kelas Motorcycle**

Kelas ini merupakan kelas turunan dari kelas Vehicle, khusus untuk sepeda motor. Terdapat atribut seperti jenis motor dan kapasitas tangki. Meng-override metode untuk menampilkan informasi kendaraan.

**4. Kelas Garage**

Kelas yang merepresentasikan sebuah garasi untuk menyimpan kendaraan. Memiliki atribut seperti nama garasi, luas garasi, dan daftar kendaraan yang tersimpan. Terdapat metode untuk menambahkan kendaraan ke dalam garasi juga menampilkan informasi garasi beserta kendaraannya.

**5. Kelas ParkingLot**

Kelas yang merepresentasikan tempat parkir umum dengan kapasitas tertentu. Memiliki atribut kapasitas, jumlah kendaraan yang saat ini terparkir, dan daftar kendaraan yang terparkir. Terdapat metode untuk memarkirkan kendaraan serta menampilkan informasi tempat parkir beserta kendaraannya.

**6. Kelas Main**

Membuat beberapa objek kendaraan seperti mobil dan sepeda motor kemudian membuat objek garasi dan objek tempat parkir. Dapat menambahkan kendaraan ke dalam garasi dan tempat parkir serta mnampilkan informasi garasi dan tempat parkir beserta kendaraannya.

## Penjelasan Alur
Program ini dimulai dengan menginstansiasi objek kendaraan seperti mobil dan sepeda motor. Kemudian, objek garasi dan objek tempat parkir dibuat dengan parameter seperti nama garasi, luas garasi, dan kapasitas tempat parkir. Objek kendaraan ditambahkan ke dalam garasi menggunakan metode tambahKendaraan(), sedangkan objek tempat parkir menggunakan metode park(). Setelah semua objek kendaraan ditambahkan, informasi garasi dan tempat parkir ditampilkan menggunakan metode displayInfo() dari masing-masing kelas. Program selesai dijalankan setelah semua informasi ditampilkan. Dengan demikian, program akan memungkinkan manajemen penyimpanan kendaraan di garasi dan tempat parkir.

## Dokumentasi Program saat Dijalankan
### Contoh -> Bahasa Python
1. Tampilan informasi garage dan informasi parking lot serta daftar kendaraannya
<img width="351" alt="output" src="https://github.com/jasminefwz/LP4DPBO2024C2/assets/147362810/7200456a-47b7-4701-a191-24da53f95675">
