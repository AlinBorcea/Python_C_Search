import numpy as np

DATA_FILE = "../data/data.txt"
ARRAY_FILE = "../data/array.txt"

class Data:    
    def __init__(self):
        file = open(DATA_FILE, "r")
        self.fileName = file.readline()   
        self.func = file.readline()
        file.close()

        file = open(ARRAY_FILE, "r")
        self.size = file.readline()
        self.array = []
        self.array = np.load(file)


    def printData(self):
        print("Data:")
        print("fileName: ", self.fileName)