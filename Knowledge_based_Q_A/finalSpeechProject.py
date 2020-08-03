#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Nov  2 00:35:35 2019

@author: mp
"""

#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Oct 29 20:23:29 2019

@author: mp
"""
#os.system https://www.quora.com/How-do-i-get-os-system-to-say-a-variable

"""
university name
university location
faculty
notable people
"""

import os
import speech_recognition as sr

r = sr.Recognizer()
with sr.Microphone() as source:
	print('Speak Anything : ')
	audio = r.listen(source)
    
	try: 
         text = r.recognize_google(audio) ## 2 space
         if text == 'university name':
             name = 'jahangirnagar university'
             os.system('espeak "{}"'.format(name))
             
         elif text == 'University location':
             location = 'The university stands on the west side of the Asian Highway, popularly known as the Dhaka-Aricha Road, and is 32 kilometres away from the capital. Spread over an area of 697.56 acres'
             os.system('espeak "{}"'.format(location))
             
         elif text == 'faculty':
             facultyName = 'Mathematical and Physical Science, Biological Science, Social Science, Arts and Humanities, Business StudiesLaw'
             os.system('espeak "{}"'.format(facultyName))
             
         elif text == 'notable people':
             peopleName = 'Mashrafe Bin Mortaza, Mushfiqur Rahim, Selim Al Deen and so on'
             os.system('espeak "{}"'.format(peopleName))
         #print(text)
	except:
		 print('Sorry could not recognize your voice')
         
         
