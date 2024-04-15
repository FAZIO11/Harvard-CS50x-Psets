# Sentiment Analysis of Amazon Alexa Reviews

## Video Demo:
<https://www.youtube.com/watch?v=I217RvoIOaQ>

## Project Overview

This project aims to develop and deploy a sentiment analysis model to classify Amazon Alexa product reviews as positive or negative. The model will help users understand the overall sentiment towards Alexa products and identify areas for improvement.

## How the model works!
![model-functionality](https://github.com/FAZIO11/Alexa-Review-Sentiment-Analysis/assets/108901411/d185ac62-08c2-4c60-aa06-abb03093af7d)

## Problem Formulation

The objective is to build a machine learning model capable of automatically classifying Amazon Alexa product reviews as positive or negative based on their textual content.

## Methodology

### Data Acquisition
The dataset consists of Amazon Alexa product reviews retrieved from Kaggle (https://www.kaggle.com/datasets/sid321axn/amazon-alexa-reviews).The dataset consists of a nearly 3000 Amazon customer reviews, star ratings, date of review, variant and feedback of various amazon Alexa products like Alexa Echo, Echo dots, Alexa Firesticks etc. for learning how to train Machine for sentiment analysis.



### Data Preprocessing
1. **Removing Stop Words**: Eliminated common words with minimal impact on sentiment.
2. **Punctuation Removal**: Removed punctuation marks.
3. **Text Cleaning**: Eliminated special characters, HTML tags, and other extraneous elements.
4. **Lowercasing**: Converted all text to lowercase for uniformity.

### Feature Engineering
Transformed text data into numerical representation using TF-IDF Vectorizer.

### Model Selection and Training
Chose Support Vector Classifier (SVC) for its effectiveness in sentiment analysis tasks.
1. Data split into training and testing sets.
2. Trained SVC model on the training set.
3. Performed hyperparameter tuning for optimization.

### Model Evaluation
Evaluated model's performance using testing set and metrics like accuracy, precision, recall, and F1-score.

### Deployment
Deployed the sentiment analysis model as a web application using Flask.

## Results and Discussion

The sentiment analysis model was evaluated using common metrics such as precision, recall, and F1-score. These metrics provide insights into the model's performance in classifying positive and negative reviews.The deployed Flask application offers a user-friendly interface for sentiment analysis.

## Limitations and Future Work

### Limitations
1. **Data Bias**: Model might be biased towards specific vocabulary and sentiment distribution in the training data.
2. **Context and Sarcasm**: Model might struggle to capture context or sarcasm.
3. **Limited Sentiment Categories**: Model only classifies reviews as positive or negative.

### Future Work
1. **Exploring Different Algorithms**: Experimenting with other models like Naive Bayes or LSTM networks.
2. **Sentiment Lexicon Expansion**: Expanding sentiment lexicon for diverse expressions.

## README.md

### Project Overview
This project develops a sentiment analysis model for Amazon Alexa product reviews. It includes data preprocessing, model training, evaluation, and deployment as a Flask web application.


### Usage
1. Clone the repository.
2. Install dependencies: `pip install -r requirements.txt`.
3. Run preprocessing scripts if necessary.
4. Train the model using `train_model.py`.
5. Evaluate the model with `evaluate_model.py`.
6. Deploy the Flask application using `app.py`.
