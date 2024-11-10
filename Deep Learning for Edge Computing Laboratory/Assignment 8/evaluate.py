import matplotlib.pyplot as plt
from tensorflow.keras.models import load_model

from preprocess import load_and_preprocess_data


def plot_training_history(history):
    plt.plot(history.history['accuracy'], label='Accuracy')
    plt.plot(history.history['val_accuracy'], label='val_accuracy')
    plt.xlabel('Epoch')
    plt.ylabel('Accuracy')
    plt.legend()
    plt.show()


def evaluate_model():
    model = load_model('models/model.h5')

    #Load test data
    (x_train, y_train), (x_val, y_val), (x_test, y_test) = load_and_preprocess_data()
    test_loss, test_acc = model.evaluate(x_test, y_test, verbose=2)
    print(f'Test accuracy: {test_acc:.4f}')


if __name__ == '__main__':
    evaluate_model()