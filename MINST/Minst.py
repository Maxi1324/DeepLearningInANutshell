
from ast import Str
import datetime
from statistics import mode
from turtle import shape
import numpy as np
import tensorflow  as tf
import tensorboard
from random import randint
from tensorflow.python.keras.models import Sequential
from tensorflow.python.keras.layers import Dense, Flatten,Dropout,Convolution2D,MaxPooling2D
from tensorflow.python.keras.optimizer_v2.gradient_descent import SGD
from tensorflow.python.keras.optimizer_v2.adam import Adam
from tensorflow.python.keras.losses import mean_squared_error; 
from keras.layers.advanced_activations import LeakyReLU
from tensorflow.python.keras.models import load_model

def GenData(trainData:bool): 
    mnist = tf.keras.datasets.mnist
    (x_train, y_train), (x_test, y_test) = mnist.load_data()
    x_train, x_test = x_train / 255.0, x_test / 255.0
    print(x_train.shape)
    return ((x_train.reshape((60000,28,28,1)),labelToResult(y_train)),(x_test.reshape((10000,28,28,1)),labelToResult(y_test)))

def labelToResult(y:list)->list:
    r = np.empty(0)
    for i3,x in enumerate(y):
        r1 =  np.empty(0)
        for i in range(0,10):
            r1 = np.append(r1, 1 if x == i else 0)
        r = np.append(r,[r1])
    return r.reshape(len(y),10)

def SetupModel(LR = 0.1)->Sequential:
    model = model = Sequential([
    Convolution2D(12,(4,4),strides=(1,1), activation='relu',input_shape=(28,28,1)),
    MaxPooling2D(),
    Convolution2D(12,(4,4),strides=(1,1), activation='relu'),
    MaxPooling2D(),
    Flatten(input_shape=(28,28,1)),
    Dense(16, activation='relu'),
    Dense(16, activation='relu'),
    Dense(10)
    ])
    
    Optimizer = SGD(learning_rate=LR)
    model.compile(optimizer=Optimizer,loss= mean_squared_error,metrics=['accuracy'])
    model.build()
    model.summary()

   
    return model

def LoadModel( Model:Sequential, Path:Str = "SuperCoolesNeuronalesNetzwerk0"):
    Model.load_weights("MinstModel/SuperCoolesNeuronalesNetzwerk69")

def Train(Model:Sequential,Data):
    X,Y = Data  
    
    log_dir = "logs/fit/" + datetime.datetime.now().strftime("%Y%m%d-%H%M%S")
    tensorboard_callback = tf.keras.callbacks.TensorBoard(log_dir=log_dir, histogram_freq=1)

    Model.fit(X,Y,epochs=200,verbose=2,callbacks=[tensorboard_callback])

def Validate(model:Sequential,Data):
    X,Y = Data

    dings = model.fit(X,Y)
    print(dings)

def Save(Model:Sequential):
    Model.save_weights("MinstModel/SuperCoolesNeuronalesNetzwerk69")

if __name__ == "__main__":
    print("start")
    TrianD, ValD = GenData(True)
    Model = SetupModel(.008)
    Train(Model=Model,Data = TrianD)
    Save(Model)
    Validate(Model,ValD)
    print("end")
    