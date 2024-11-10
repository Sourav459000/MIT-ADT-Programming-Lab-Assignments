from flask import Flask, request, jsonify
import numpy as np
import tensorflow as tf
from tensorflow.keras.models import load_model
from tensorflow.keras.preprocessing.image import img_to_array, load_img

app = Flask(__name__)
model = load_model('models/model.h5')

@app.route('/predict', methods=['GET','POST'])
def predict():
    #Load and preprocess image
    img = request.files['images']
    img_path = "images/airplane.jpg"
    img.save(img_path)

    image = load_img(img_path, target_size=(32, 32))
    image = img_to_array(image) / 255.0
    image = np.expand_dims(image, axis=0)

    #Make predictions
    result = model.predict(image)
    class_index = np.argmax(result[0])

    return jsonify({'class_index': int(class_index), 'confidence': float(result[0][class_index])})


if __name__ == '__main__':
    app.run(debug=True)