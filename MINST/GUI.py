import imp
import math
import random
import tkinter as tk
from tkinter import *
from turtle import color
from PIL import ImageGrab
from numpy import size
from Minst import *
import Minst
import numpy as np


class GUI1:

    width = 400
    height = 400

    cWidth = 200

    def __init__(self, Model="Model"):
        self.root = tk.Tk()
        self.root.title('DL Demo')
        self.root.geometry(f'{self.width}x{self.height}')
        self.root.resizable(False, False)

        self.img = PhotoImage(file="MINST/Brush.png")

        self.placeLabel()
        self.placeCanvas()
        self.PlaceButtons()
        self.Model = Minst.SetupModel(0.001)
        Minst.LoadModel(self.Model, Model)

       # TrianD, ValD = Minst.GenData(True)
       # x,y = ValD;
       # self.Model.fit(x,y,epochs=1)

        self.root.mainloop()

    def drawData(self,Data):
        for i,x1 in enumerate(Data):
                    for j,y1 in enumerate(x1):
                        d = 200/28
                        x3 = j*d
                        y3 = i*d
                        dings = int((1-y1)*255)
                        col = self._from_rgb((dings,dings,dings))
                        self.c.create_rectangle(x3,y3,x3+d+1,y3+d+1,fill=col)


    def PlaceButtons(self):
        self.Reset = tk.Button(self.root, text="Reset",
                               width=6, command=self.ResetCanvas)
        self.Reset.place(x=323, y=75)

        self.Reset = tk.Button(self.root, text="Process",
                               width=6, command=self.Predict)
        self.Reset.place(x=323, y=110)

    def placeCanvas(self):
        self.c = Canvas(self.root, bg="white", height=self.cWidth,
                        width=self.cWidth)
        self.c.pack()
        self.c.bind("<B1-Motion>", self.paint)

    def placeLabel(self):
        text = tk.Label(self.root, text="Hadwritten Digits Detector")
        text.pack(side=tk.TOP, ipady=20)
        text.config(font=('Helvetica bold', 15))

        text1 = tk.Label(self.root, text="Hadwritten Digits Detector")
        text1.pack(side=tk.BOTTOM, ipady=20)
        text1.config(font=('Helvetica bold', 15))
        self.text1 = text1

    def ResetCanvas(self):
        self.c.delete("all")

    def Predict(self):
        Infos = self.ReadInfos()
        in1 = np.array(Infos).reshape((1,28, 28,1))
        
        #self.drawData(in1)
        
        r = self.Model.__call__(in1)

        actMax = 0
        index = 0
        self.text1['text'] = ""
        for i in range(0, 10):
            if r[0][i] > actMax:
                actMax = r[0][i]
                index = i
           # self.text1['text'] += f'{i}:{(int)(r[0][i]*100)};'
        self.text1['text'] =(str(index))

    def ReadInfos(self):
        x = self.root.winfo_x()+self.c.winfo_x()+10
        y = self.root.winfo_y()+self.c.winfo_y()+33
        im = ImageGrab.grab((x, y, x+self.cWidth, y+self.cWidth))

        ar = []
        for i in range(0, 28):
            for j in range(0, 28):
                r, b, g = im.getpixel((j*self.cWidth/28, i*self.cWidth/28))
                ar.append(1-(r/255))
        return ar

    def paint(self, event):
        self.c.create_image(event.x, event.y, image=self.img)
        self.c.create_rectangle

    def _from_rgb(self,rgb):
        return "#%02x%02x%02x" % rgb   

GUI1("MINST/MinstModel/SuperCoolesNeuronalesNetzwerk1")
