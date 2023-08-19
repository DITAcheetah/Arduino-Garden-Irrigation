# Arduino-Garden-Irrigation
A simple code that switches a relay once a day for 5 min to open a valve for drip irrigation. 
I want to extend it in future and different things like: pump that fills a reservoir in combination with level sensor, water flow sensor, wifi or LoRa sending updates etc.

Curcuit diagram:
![Garden_Irrigation_1](https://github.com/DITAcheetah/Arduino-Garden-Irrigation/assets/66056418/d936fb61-c672-459c-8549-984ad817d71f)

Build in reality:
![image](https://github.com/DITAcheetah/Arduino-Garden-Irrigation/assets/66056418/b6c0450f-cc75-4532-bd95-c494716987a1)

Number 1 shows the water reservoir, which is a 30l container on elevated position. It has a 12V magnetic valve attached and is connected to the hoses in the bed with number 2. The hoses have little holes with distance of 30cm 
and allow drip irrigation.
The code opens the valve once a day for 5 min and the water flows down from the elevated postion and drip irrigates the plants in the bed.
