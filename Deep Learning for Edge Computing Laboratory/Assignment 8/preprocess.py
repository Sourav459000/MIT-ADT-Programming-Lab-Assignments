import numpy as np
import tensorflow as tf
from tensorflow.keras import datasets
from sklearn.model_selection import train_test_split


def load_and_preprocess_data():
    #Load CIFAR-IO dataset
    (x_train, y_train), (x_test, y_test) = datasets.cifar10.load_data()

    #Normalize the images to [0, 1]
    x_train = x_train.astype('float32') / 255.0
    x_test = x_test.astype('float32') / 255.0

    #Split training data into training and validations sets
    x_train, x_val, y_train, y_val = train_test_split(x_train, y_train, test_size=0.2, random_state=42)

    return (x_train, y_train), (x_val, y_val), (x_test, y_test)


if __name__ == '__main__':
    load_and_preprocess_data()