# WaterMore

Introducing "WaterMore" – your plant's guardian. It yells if your plant is dry and you're in view, or sends an SMS when you're away.

<h2>Background</h2>
This project is a detection system which utilizes sensors to determine when your plant needs to be watered!

<img src="waterMore.png" title="WaterMore Logo" width="40%"/>

<h2>How It Works</h2>

If you are within the view of the plant, it will simply yell to you reminding you to water them! If you are not in view of the plant, you will be sent a passive-aggressive SMS from your plant reminding you to water them ASAP

To do this it follows the following process:

1. Determines if the moisture content of the soil is below the desired threshold
2. If the plant needs to be watered: take a picture of the view of the plant
3. Process and Embed the image
4. Send image to Tensorflow model performing object detection
5. Objects in image are classified and confidence ratings are produced
6. If a person is identified in the image and the plany needs to be watered, the plant screams for a drink, otherwise you will receive an SMS reminder

<h2>System Requirements</h2>

To recreate this project you will need the following hardware:
- Arduino
- Soil Moisture Sensor
- A Windows or Linux computer with USB-A or USB-C connectivity
- Webcam


To recreate this project you will need the following software:
- Python 3.8 or newer
- C++
- TensorFlow
- Tensorflow Object Detection API
- Jupyter Notesbooks
- Twilio Messaging API


<h2>Next Steps</h2>

- Developing a more nuanced casing for the circuitry
- Training own ML model for more personalized and accurate result


<h2>Things We Used</h2>

![TensorFlow](https://img.shields.io/badge/TensorFlow-%23FF6F00.svg?style=for-the-badge&logo=TensorFlow&logoColor=white)
![Twilio](https://img.shields.io/badge/Twilio-F22F46?style=for-the-badge&logo=Twilio&logoColor=white)
![Jupyter Notebook](https://img.shields.io/badge/jupyter-%23FA0F00.svg?style=for-the-badge&logo=jupyter&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)
![Visual Studio Code](https://img.shields.io/badge/Visual%20Studio%20Code-0078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white)
![Stack Overflow](https://img.shields.io/badge/-Stackoverflow-FE7A16?style=for-the-badge&logo=stack-overflow&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)



Created by: [Richard Li](https://www.linkedin.com/in/richardli2003/) and [Jemima Vijayasenan](https://www.linkedin.com/in/jemimav/)
