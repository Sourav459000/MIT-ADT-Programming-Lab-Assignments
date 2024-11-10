import numpy as np
from preprocess import load_and_preprocess_data
from model import create_cnn_model


def train_model():
    (x_train, y_train), (x_val, y_val), (x_test, y_test) = load_and_preprocess_data()
    model = create_cnn_model()

    #Train the model
    history = model.fit(x_train, y_train, epochs=10, validation_data=(x_val, y_val), verbose=2)

    #Save the model
    model.save('models/model.h5')

    #Evaluate the model
    test_loss, test_acc = model.evaluate(x_test, y_test, verbose=2)
    print(f'Test accuracy: {test_acc:.4f}')


if __name__ == '__main__':
    train_model()