import tkinter as tk
from PIL import Image , ImageTk
from tkinter import messagebox
from datetime import datetime,timedelta

class MainApp:
    def __init__(self, apk):
        apk.title("Nonstop Ngoding November")
        iagme = Image.open("Bg.jpg")
        iagme = iagme.resize((250,400))
        self.photo = ImageTk.PhotoImage(iagme), 
        label_image = tk.Label(apk, image = self.photo)
        label_image.place(x=445, y=0)
        label_image.lower()

        font_stlye= ("Helvetica",14)
        bg_color= 'lightblue'

        label1 = tk.Label(apk, text="Anter Aer Kang Arga",font=("helvetica",16),bg=bg_color)
        label1.place(x=125, y=10)
        self.entry_nama = tk.Entry (apk, text= "Nama:")
        self.entry_nama.place(x=20, y=90)
        self.entry_alamat = tk.Entry (apk, text= " Alamat:")
        self.entry_alamat.place(x=20, y=150)
        self.entry_noHP= tk.Entry(apk, text= "+62")
        self.entry_noHP.place (x=20, y=210)
        label_nama = tk.Label(apk , text= "Masukkan Nama Penerima" , font=font_stlye, bg=bg_color)
        label_nama.place(x=20,y=60)
        label_alamat = tk.Label(apk, text="Masukan Alamat", font=font_stlye, bg=bg_color)
        label_alamat.place(x=20,y=120)
        label_noHP= tk.Label(apk, text="No.Hp=", font= font_stlye, bg=bg_color)
        label_noHP.place(x=20,y=180)

        self.status = tk.IntVar()
        self.radio = tk.Checkbutton (apk, text="Saya Bagian Dari KelompokXX", font=("Helvetica", 10) ,bg=bg_color, variable=self.status).place(x=20,y= 250)
        Submit= tk.Button(apk, text="Submit",font= font_stlye, command=self.submit_data)
        Submit.place(x=350,y=350)


    def submit_data(self):
        nama = self.entry_nama.get()
        alamat = self.entry_alamat.get()
        noHp = self.entry_noHP.get()
        waktu = datetime.now() + timedelta(hours=1)
        waktu_str = waktu.strftime("%H:%M")
        if nama == "" or alamat == "" or noHp == "" or self.status.get() != 1:
            messagebox.showerror("Error", "Data tidak boleh kosong")
        else:
            messagebox.showinfo("Pesanan Diterima",f"Nama: {nama}\n Alamat: {alamat}\n NoHP: {noHp}\n Estimasi Sampai : {waktu_str}")


if __name__ == "__main__":
    apk = tk.Tk()
    app = MainApp(apk)
    apk.geometry("700x400") #Ubah menjadi 700x400
    apk.configure(bg='lightblue')
    apk.resizable(False, False)
    apk.mainloop()
