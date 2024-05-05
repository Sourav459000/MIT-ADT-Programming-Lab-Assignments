{
 "cells": [
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "# Supervised Learning and K Nearest Neighbors Exercises\n",
    "\n",
    "![knn.png](Assets/knn.png)"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "# Learning Objectives:\n",
    "\n",
    "- Explain supervised learning and how it can be applied to regression and classification problems\n",
    "- Apply K-Nearest Neighbor (KNN) algorithm for classification\n",
    "- Apply Intel® Extension for Scikit-learn* to leverage underlying compute capabilities of hardware\n",
    "\n",
    "\n",
    "\n",
    "# scikit-learn* \n",
    "\n",
    "Frameworks provide structure that Data Scientists use to build code. Frameworks are more than just libraries, because in addition to callable code, frameworks influence how code is written. \n",
    "\n",
    "A main virtue of using an optimized framework is that code runs faster. Code that runs faster is just generally more convenient but when we begin looking at applied data science and AI models, we can see more material benefits. Here you will see how optimization, particularly hyperparameter optimization can benefit more than just speed. \n",
    "\n",
    "These exercises will demonstrate how to apply **the Intel® Extension for Scikit-learn*,** a seamless way to speed up your Scikit-learn application. The acceleration is achieved through the use of the Intel® oneAPI Data Analytics Library (oneDAL). Patching is the term used to extend scikit-learn with Intel optimizations and makes it a well-suited machine learning framework for dealing with real-life problems. \n",
    "\n",
    "To get optimized versions of many Scikit-learn algorithms using a patch() approach consisting of adding these lines of code Prior to importing sklearn: \n",
    "\n",
    "- **from sklearnex import patch_sklearn**\n",
    "- **patch_sklearn()**\n",
    "\n",
    "## This exercise relies on installation of  Intel® Extension for Scikit-learn*\n",
    "\n",
    "If you have not already done so, follow the instructions from Week 1 for instructions\n",
    "\n",
    "\n",
    "\n"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 1,
   "metadata": {
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.256340300Z",
     "start_time": "2024-02-20T04:44:59.152629200Z"
    }
   },
   "outputs": [
    {
     "name": "stderr",
     "output_type": "stream",
     "text": [
      "Intel(R) Extension for Scikit-learn* enabled (https://github.com/intel/scikit-learn-intelex)\n"
     ]
    }
   ],
   "source": [
    "from __future__ import print_function\n",
    "import os\n",
    "data_path = ['../data']\n",
    "\n",
    "from sklearnex import patch_sklearn\n",
    "patch_sklearn()  # patch should be called PRIOR to importing Scikit-learn algorithms\n",
    "\n",
    "from sklearn.preprocessing import LabelBinarizer\n",
    "from sklearn.preprocessing import MinMaxScaler\n",
    "from sklearn.neighbors import KNeighborsClassifier\n",
    "import numpy as np\n",
    "import pandas as pd"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "## Question 1\n",
    "\n",
    "* Begin by importing the data. Examine the columns and data.\n",
    "* Notice that the data contains a state, area code, and phone number. Do you think these are good features to use when building a machine learning model? Why or why not? \n",
    "\n",
    "We will not be using them, so they can be dropped from the data."
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 2,
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "Columns in the dataset:\n",
      "Index(['state', 'account_length', 'area_code', 'phone_number', 'intl_plan',\n",
      "       'voice_mail_plan', 'number_vmail_messages', 'total_day_minutes',\n",
      "       'total_day_calls', 'total_day_charge', 'total_eve_minutes',\n",
      "       'total_eve_calls', 'total_eve_charge', 'total_night_minutes',\n",
      "       'total_night_calls', 'total_night_charge', 'total_intl_minutes',\n",
      "       'total_intl_calls', 'total_intl_charge',\n",
      "       'number_customer_service_calls', 'churned'],\n",
      "      dtype='object')\n"
     ]
    }
   ],
   "source": [
    "df = pd.read_csv('resources/Orange_Telecom_Churn_Data.csv')\n",
    "\n",
    "print(\"Columns in the dataset:\")\n",
    "print(df.columns)"
   ],
   "metadata": {
    "collapsed": false,
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.273540600Z",
     "start_time": "2024-02-20T04:45:00.258342400Z"
    }
   }
  },
  {
   "cell_type": "code",
   "execution_count": 3,
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "\n",
      "First few rows of the dataset:\n",
      "  state  account_length  area_code phone_number intl_plan voice_mail_plan  \\\n",
      "0    KS             128        415     382-4657        no             yes   \n",
      "1    OH             107        415     371-7191        no             yes   \n",
      "2    NJ             137        415     358-1921        no              no   \n",
      "3    OH              84        408     375-9999       yes              no   \n",
      "4    OK              75        415     330-6626       yes              no   \n",
      "\n",
      "   number_vmail_messages  total_day_minutes  total_day_calls  \\\n",
      "0                     25              265.1              110   \n",
      "1                     26              161.6              123   \n",
      "2                      0              243.4              114   \n",
      "3                      0              299.4               71   \n",
      "4                      0              166.7              113   \n",
      "\n",
      "   total_day_charge  ...  total_eve_calls  total_eve_charge  \\\n",
      "0             45.07  ...               99             16.78   \n",
      "1             27.47  ...              103             16.62   \n",
      "2             41.38  ...              110             10.30   \n",
      "3             50.90  ...               88              5.26   \n",
      "4             28.34  ...              122             12.61   \n",
      "\n",
      "   total_night_minutes  total_night_calls  total_night_charge  \\\n",
      "0                244.7                 91               11.01   \n",
      "1                254.4                103               11.45   \n",
      "2                162.6                104                7.32   \n",
      "3                196.9                 89                8.86   \n",
      "4                186.9                121                8.41   \n",
      "\n",
      "   total_intl_minutes  total_intl_calls  total_intl_charge  \\\n",
      "0                10.0                 3               2.70   \n",
      "1                13.7                 3               3.70   \n",
      "2                12.2                 5               3.29   \n",
      "3                 6.6                 7               1.78   \n",
      "4                10.1                 3               2.73   \n",
      "\n",
      "   number_customer_service_calls  churned  \n",
      "0                              1    False  \n",
      "1                              1    False  \n",
      "2                              0    False  \n",
      "3                              2    False  \n",
      "4                              3    False  \n",
      "\n",
      "[5 rows x 21 columns]\n"
     ]
    }
   ],
   "source": [
    "print(\"\\nFirst few rows of the dataset:\")\n",
    "print(df.head())"
   ],
   "metadata": {
    "collapsed": false,
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.312537600Z",
     "start_time": "2024-02-20T04:45:00.274537300Z"
    }
   }
  },
  {
   "cell_type": "code",
   "execution_count": 4,
   "outputs": [],
   "source": [
    "columns_to_drop = ['state', 'area_code', 'phone_number']\n",
    "df = df.drop(columns=columns_to_drop)"
   ],
   "metadata": {
    "collapsed": false,
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.313537100Z",
     "start_time": "2024-02-20T04:45:00.284413500Z"
    }
   }
  },
  {
   "cell_type": "code",
   "execution_count": 5,
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "\n",
      "Dataset after dropping 'state', 'area_code', and 'phone_number' columns:\n",
      "   account_length intl_plan voice_mail_plan  number_vmail_messages  \\\n",
      "0             128        no             yes                     25   \n",
      "1             107        no             yes                     26   \n",
      "2             137        no              no                      0   \n",
      "3              84       yes              no                      0   \n",
      "4              75       yes              no                      0   \n",
      "\n",
      "   total_day_minutes  total_day_calls  total_day_charge  total_eve_minutes  \\\n",
      "0              265.1              110             45.07              197.4   \n",
      "1              161.6              123             27.47              195.5   \n",
      "2              243.4              114             41.38              121.2   \n",
      "3              299.4               71             50.90               61.9   \n",
      "4              166.7              113             28.34              148.3   \n",
      "\n",
      "   total_eve_calls  total_eve_charge  total_night_minutes  total_night_calls  \\\n",
      "0               99             16.78                244.7                 91   \n",
      "1              103             16.62                254.4                103   \n",
      "2              110             10.30                162.6                104   \n",
      "3               88              5.26                196.9                 89   \n",
      "4              122             12.61                186.9                121   \n",
      "\n",
      "   total_night_charge  total_intl_minutes  total_intl_calls  \\\n",
      "0               11.01                10.0                 3   \n",
      "1               11.45                13.7                 3   \n",
      "2                7.32                12.2                 5   \n",
      "3                8.86                 6.6                 7   \n",
      "4                8.41                10.1                 3   \n",
      "\n",
      "   total_intl_charge  number_customer_service_calls  churned  \n",
      "0               2.70                              1    False  \n",
      "1               3.70                              1    False  \n",
      "2               3.29                              0    False  \n",
      "3               1.78                              2    False  \n",
      "4               2.73                              3    False  \n"
     ]
    }
   ],
   "source": [
    "print(\"\\nDataset after dropping 'state', 'area_code', and 'phone_number' columns:\")\n",
    "print(df.head())"
   ],
   "metadata": {
    "collapsed": false,
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.317520400Z",
     "start_time": "2024-02-20T04:45:00.289555300Z"
    }
   }
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "## Question 2\n",
    "\n",
    "* Notice that some of the columns are categorical data and some are floats. These features will need to be numerically encoded using one of the methods from the lecture.\n",
    "* Finally, remember from the lecture that K-nearest neighbors requires scaled data. Scale the data using one of the scaling methods discussed in the lecture."
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 6,
   "metadata": {
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.319520100Z",
     "start_time": "2024-02-20T04:45:00.298540600Z"
    }
   },
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "\n",
      "Dataset after encoding categorical features:\n",
      "   account_length  intl_plan  voice_mail_plan  number_vmail_messages  \\\n",
      "0             128          0                1                     25   \n",
      "1             107          0                1                     26   \n",
      "2             137          0                0                      0   \n",
      "3              84          1                0                      0   \n",
      "4              75          1                0                      0   \n",
      "\n",
      "   total_day_minutes  total_day_calls  total_day_charge  total_eve_minutes  \\\n",
      "0              265.1              110             45.07              197.4   \n",
      "1              161.6              123             27.47              195.5   \n",
      "2              243.4              114             41.38              121.2   \n",
      "3              299.4               71             50.90               61.9   \n",
      "4              166.7              113             28.34              148.3   \n",
      "\n",
      "   total_eve_calls  total_eve_charge  total_night_minutes  total_night_calls  \\\n",
      "0               99             16.78                244.7                 91   \n",
      "1              103             16.62                254.4                103   \n",
      "2              110             10.30                162.6                104   \n",
      "3               88              5.26                196.9                 89   \n",
      "4              122             12.61                186.9                121   \n",
      "\n",
      "   total_night_charge  total_intl_minutes  total_intl_calls  \\\n",
      "0               11.01                10.0                 3   \n",
      "1               11.45                13.7                 3   \n",
      "2                7.32                12.2                 5   \n",
      "3                8.86                 6.6                 7   \n",
      "4                8.41                10.1                 3   \n",
      "\n",
      "   total_intl_charge  number_customer_service_calls  churned  \n",
      "0               2.70                              1        0  \n",
      "1               3.70                              1        0  \n",
      "2               3.29                              0        0  \n",
      "3               1.78                              2        0  \n",
      "4               2.73                              3        0  \n"
     ]
    }
   ],
   "source": [
    "label_binarizer = LabelBinarizer()\n",
    "\n",
    "categorical_columns = ['intl_plan', 'voice_mail_plan', 'churned']\n",
    "for column in categorical_columns:\n",
    "    df[column] = label_binarizer.fit_transform(df[column])\n",
    "\n",
    "print(\"\\nDataset after encoding categorical features:\")\n",
    "print(df.head())"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 7,
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "\n",
      "Dataset after scaling features:\n",
      "   account_length  intl_plan  voice_mail_plan  number_vmail_messages  \\\n",
      "0        0.524793        0.0              1.0               0.480769   \n",
      "1        0.438017        0.0              1.0               0.500000   \n",
      "2        0.561983        0.0              0.0               0.000000   \n",
      "3        0.342975        1.0              0.0               0.000000   \n",
      "4        0.305785        1.0              0.0               0.000000   \n",
      "\n",
      "   total_day_minutes  total_day_calls  total_day_charge  total_eve_minutes  \\\n",
      "0           0.754196         0.666667          0.754183           0.542755   \n",
      "1           0.459744         0.745455          0.459672           0.537531   \n",
      "2           0.692461         0.690909          0.692436           0.333242   \n",
      "3           0.851778         0.430303          0.851740           0.170195   \n",
      "4           0.474253         0.684848          0.474230           0.407754   \n",
      "\n",
      "   total_eve_calls  total_eve_charge  total_night_minutes  total_night_calls  \\\n",
      "0         0.582353          0.542866             0.619494           0.520000   \n",
      "1         0.605882          0.537690             0.644051           0.588571   \n",
      "2         0.647059          0.333225             0.411646           0.594286   \n",
      "3         0.517647          0.170171             0.498481           0.508571   \n",
      "4         0.717647          0.407959             0.473165           0.691429   \n",
      "\n",
      "   total_night_charge  total_intl_minutes  total_intl_calls  \\\n",
      "0            0.619584               0.500              0.15   \n",
      "1            0.644344               0.685              0.15   \n",
      "2            0.411930               0.610              0.25   \n",
      "3            0.498593               0.330              0.35   \n",
      "4            0.473270               0.505              0.15   \n",
      "\n",
      "   total_intl_charge  number_customer_service_calls  churned  \n",
      "0           0.500000                       0.111111        0  \n",
      "1           0.685185                       0.111111        0  \n",
      "2           0.609259                       0.000000        0  \n",
      "3           0.329630                       0.222222        0  \n",
      "4           0.505556                       0.333333        0  \n"
     ]
    }
   ],
   "source": [
    "scaler = MinMaxScaler()\n",
    "scaled_features = scaler.fit_transform(df.drop(columns=['churned']))\n",
    "\n",
    "scaled_df = pd.DataFrame(scaled_features, columns=df.columns[:-1])  # Exclude the target variable\n",
    "scaled_df['churned'] = df['churned']\n",
    "\n",
    "print(\"\\nDataset after scaling features:\")\n",
    "print(scaled_df.head())"
   ],
   "metadata": {
    "collapsed": false,
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.409603100Z",
     "start_time": "2024-02-20T04:45:00.319520100Z"
    }
   }
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "## Question 3\n",
    "\n",
    "* Separate the feature columns (everything except `churned`) from the label (`churned`). This will create two tables.\n",
    "* Fit a K-nearest neighbors model with a value of `k=3` to this data and predict the outcome on the same data."
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 8,
   "metadata": {
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.410606700Z",
     "start_time": "2024-02-20T04:45:00.389134700Z"
    }
   },
   "outputs": [],
   "source": [
    "X = scaled_df.drop(columns=['churned'])\n",
    "y = scaled_df['churned']"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 9,
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "\n",
      "Predicted outcomes on the same data:\n",
      "   Actual Churned  Predicted Churned\n",
      "0               0                  0\n",
      "1               0                  0\n",
      "2               0                  0\n",
      "3               0                  0\n",
      "4               0                  0\n"
     ]
    }
   ],
   "source": [
    "knn_model = KNeighborsClassifier(n_neighbors=3)\n",
    "knn_model.fit(X, y)\n",
    "\n",
    "y_pred = knn_model.predict(X)\n",
    "\n",
    "predicted_df = pd.DataFrame({'Actual Churned': y, 'Predicted Churned': y_pred})\n",
    "print(\"\\nPredicted outcomes on the same data:\")\n",
    "print(predicted_df.head())"
   ],
   "metadata": {
    "collapsed": false,
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.411212200Z",
     "start_time": "2024-02-20T04:45:00.394844700Z"
    }
   }
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "## Question 4\n",
    "\n",
    "Ways to measure error haven't been discussed in class yet, but accuracy is an easy one to understand--it is simply the percent of labels that were correctly predicted (either true or false). \n",
    "\n",
    "* Write a function to calculate accuracy using the actual and predicted labels.\n",
    "* Using the function, calculate the accuracy of this K-nearest neighbors model on the data."
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 10,
   "metadata": {
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.437779800Z",
     "start_time": "2024-02-20T04:45:00.410606700Z"
    }
   },
   "outputs": [],
   "source": [
    "def calculate_accuracy(actual, predicted):\n",
    "    \"\"\"\n",
    "    Calculate accuracy given the actual and predicted labels.\n",
    "    \n",
    "    Parameters:\n",
    "    - actual: Actual labels\n",
    "    - predicted: Predicted labels\n",
    "    \n",
    "    Returns:\n",
    "    - accuracy: Accuracy score\n",
    "    \"\"\"\n",
    "    correct_predictions = np.sum(actual == predicted)\n",
    "    total_predictions = len(actual)\n",
    "    accuracy = correct_predictions / total_predictions\n",
    "    return accuracy"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 11,
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "\n",
      "Accuracy of the K-nearest neighbors model: 94.22%\n"
     ]
    }
   ],
   "source": [
    "accuracy = calculate_accuracy(y, y_pred)\n",
    "\n",
    "print(f\"\\nAccuracy of the K-nearest neighbors model: {accuracy:.2%}\")"
   ],
   "metadata": {
    "collapsed": false,
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.438782Z",
     "start_time": "2024-02-20T04:45:00.413727300Z"
    }
   }
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "## Question 5\n",
    "\n",
    "* Fit the K-nearest neighbors model again with `n_neighbors=3` but this time use distance for the weights. Calculate the accuracy using the function you created above. \n",
    "* Fit another K-nearest neighbors model. This time use uniform weights but set the power parameter for the Minkowski distance metric to be 1 (`p=1`) i.e. Manhattan Distance.\n",
    "\n",
    "When weighted distances are used for part 1 of this question, a value of 1.0 should be returned for the accuracy. Why do you think this is? *Hint:* we are predicting on the data and with KNN the model *is* the data. We will learn how to avoid this pitfall in the next lecture."
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 12,
   "metadata": {
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.438782Z",
     "start_time": "2024-02-20T04:45:00.420107300Z"
    }
   },
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "\n",
      "Accuracy with distance weights: 96.48%\n"
     ]
    }
   ],
   "source": [
    "knn_distance_model = KNeighborsClassifier(n_neighbors=3, weights='distance')\n",
    "knn_distance_model.fit(X, y)\n",
    "y_pred_distance = knn_distance_model.predict(X)\n",
    "\n",
    "accuracy_distance = calculate_accuracy(y, y_pred_distance)\n",
    "print(f\"\\nAccuracy with distance weights: {accuracy_distance:.2%}\")"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 13,
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "Accuracy with uniform weights and Manhattan distance: 94.56%\n"
     ]
    }
   ],
   "source": [
    "knn_uniform_manhattan_model = KNeighborsClassifier(n_neighbors=3, weights='uniform', p=1)\n",
    "knn_uniform_manhattan_model.fit(X, y)\n",
    "y_pred_uniform_manhattan = knn_uniform_manhattan_model.predict(X)\n",
    "\n",
    "accuracy_uniform_manhattan = calculate_accuracy(y, y_pred_uniform_manhattan)\n",
    "print(f\"Accuracy with uniform weights and Manhattan distance: {accuracy_uniform_manhattan:.2%}\")"
   ],
   "metadata": {
    "collapsed": false,
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.520351Z",
     "start_time": "2024-02-20T04:45:00.434778500Z"
    }
   }
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "## Question 6\n",
    "\n",
    "* Fit a K-nearest neighbors model using values of `k` (`n_neighbors`) ranging from 1 to 20. Use uniform weights (the default). The coefficient for the Minkowski distance (`p`) can be set to either 1 or 2--just be consistent. Store the accuracy and the value of `k` used from each of these fits in a list or dictionary.\n",
    "* Plot (or view the table of) the `accuracy` vs `k`. What do you notice happens when `k=1`? Why do you think this is? *Hint:* it's for the same reason discussed above."
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 14,
   "metadata": {
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:00.972434500Z",
     "start_time": "2024-02-20T04:45:00.465347500Z"
    }
   },
   "outputs": [],
   "source": [
    "import matplotlib.pyplot as plt\n",
    "\n",
    "accuracy_list = []\n",
    "k_values = list(range(1, 21))\n",
    "\n",
    "for k in k_values:\n",
    "    knn_model = KNeighborsClassifier(n_neighbors=k)\n",
    "    knn_model.fit(X, y)\n",
    "    y_pred_k = knn_model.predict(X)\n",
    "    accuracy_k = calculate_accuracy(y, y_pred_k)\n",
    "    accuracy_list.append(accuracy_k)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 15,
   "outputs": [
    {
     "data": {
      "text/plain": "<Figure size 640x480 with 1 Axes>",
      "image/png": "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RESkH0yA9IBrAREREekXEyA94FR4IiIi/WICpAdcDJGIiEi/mADpAbvAiIiI9IsJkB442bALjIiISJ+YAOmBsy0XQyQiItInJkB64MIWICIiIr1iAqQHyhYgDoImIiLSCyZAelA0CDo7X47MvAI9R0NERFTzMAHSAytzE1iZSQAACensBiMiItI1JkB6wm4wIiIi/WECpCfPpsIzASIiItI1JkB68mwxRHaBERER6RoTID0p2g4jkS1AREREOscESE+ebYjKBIiIiEjXmADpiTMXQyQiItIbJkB6otwRntthEBER6RwTID1hFxgREZH+MAHSk6IusLQcGXJlcj1HQ0REVLMwAdITOwtTmJkUfvycCUZERKRbTID0RCQSwcma3WBERET6wARIj4rGASVyJhgREZFOMQHSI2duh0FERKQXTID0iFPhiYiI9IMJkB5xMUQiIiL9YAKkR1wLiIiISD+YAOkRu8CIiIj0gwmQHjlxEDQREZFeMAHSo6IusOSsPBTIFXqOhoiIqOZgAqRHDlbmEIsAQQCSs/L1HQ4REVGNwQRIjyRiERyLVoPmOCAiIiKdYQKkZ89mgnEqPBERka4wAdIz5UwwDoQmIiLSGSZAeqZcDJFdYERERDrDBEjPuBo0ERGR7jEB0jMnW3aBERER6RoTID3jjvBERES6xwRIz4oSoMR0doERERHpChMgPXN5rgtMoRD0HA0REVHNwARIz4oWQixQCHiazdWgiYiIdIEJkJ6ZmYhR28oMAMcBERER6QoTIAPAgdBERES6xQTIADgpF0PkQGgiIiJdYAJkALgdBhERkW4xATIARRuiJjIBIiIi0gkmQAaA22EQERHpFhMgA6DsAuOGqERERDrBBMgAFHWBcQwQERGRbjABMgDPd4EJAleDJiIi0ja9J0ArVqyAl5cXpFIp/P39cebMmVLLymQyzJs3Dz4+PpBKpfD19UVoaKhKGblcjs8//xze3t6wsLCAj48PvvrqK4NOLIq6wHJlCmTkFeg5GiIioupPrwnQ1q1bMX36dISEhCAyMhK+vr4ICAhAQkJCieU/++wzrF69GsuXL0dMTAwmTpyIIUOG4MKFC8oyCxYswMqVK/Hjjz/i6tWrWLBgARYuXIjly5frqlpqszCTwMbcBADHAREREemCXhOgJUuWYPz48QgKCkKzZs2watUqWFpaYs2a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"
     },
     "metadata": {},
     "output_type": "display_data"
    }
   ],
   "source": [
    "# Plot accuracy vs k\n",
    "plt.plot(k_values, accuracy_list, marker='o')\n",
    "plt.title('Accuracy vs k in K-nearest neighbors')\n",
    "plt.xlabel('k (Number of Neighbors)')\n",
    "plt.ylabel('Accuracy')\n",
    "plt.grid(True)\n",
    "plt.show()"
   ],
   "metadata": {
    "collapsed": false,
    "ExecuteTime": {
     "end_time": "2024-02-20T04:45:01.087195800Z",
     "start_time": "2024-02-20T04:45:00.974433600Z"
    }
   }
  }
 ],
 "metadata": {
  "anaconda-cloud": {},
  "kernelspec": {
   "display_name": "Python 3 (ipykernel)",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.11.5"
  },
  "name": "Linear_Regression_and_K_Nearest_Neighbors_Exercises-ANSWERS",
  "notebookId": 2125319687183902
 },
 "nbformat": 4,
 "nbformat_minor": 4
}
