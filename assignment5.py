import pandas as pd
import numpy as np
import nltk
from nltk.chat.util import Chat,reflections




pairs = [
    [
        r"my name is (.*)",
        ["Hello %1, How are you today ?",]
    ],
    [
        r"hi|hey|hello",
        ["Hello", "Hey there",]
    ], 
    [
        r"what is your name ?",
        ["I am a chatbot created by PICT to help freshers",]
    ],
    [
        r"how are you ?",
        ["I'm doing good. How about You ?",]
    ],
    [
        r"What is the admission process after MHT CET Result?",
        ["The steps which are included in the MHT CET counselling are Document Verification, Display of Provisional Merit List, Display of final Merit List, Display of Category-Wise Seats, Filling online CAP form, choice filling, provisional allotment & reporting"
         ,]
    ],
    [
        r"How can I take admission in MHT CET?",
        ["Candidates must have passed B.Sc. Degree from a recognized university with at least 45% aggregate marks (for General category) and at least 40% aggregate marks (for backward class/ Persons with Disability belonging to Maharashtra State only). These candidates should have passed XII class with Mathematics as a subject",]
    ],
    [
        r"What is the minimum marks to qualify in CET?",
        ["A candidate must have passed 12th with PCM/PCB with a minimum aggregate of 45% marks (40% for reserved category)",]
    ],
    [
        r"What are the top 3 colleges come under MHT-CET",
        ["PICT,COEP,VJTI",]
    ],
    [
        r"How many times a candidate can appear for MHT CET?",
        ["Number of attempts: You can only attempt MHT-CET 3 times.",]
    ],
    [
        r"How can I get admission after MHT CET 2021?",
        ["Qualified candidates have to participate in the counselling and seat allotment of MHT CET 2021 is being conducted as a Centralized Admission Process (CAP). Candidates have to fill out their choice of colleges and courses in the order of preference.",]
    ],
    [
        r"How many rounds are there in MHT CET?",
        ["There will be 3 MHT CET counselling rounds. The minimum cut off of every college and courses offered there could be varied. You can check previous years cut off to get an idea about the same and can apply easily according to that.",]
    ],
    [
        r"Where we have to apply for cap rounds?",
        ["It is available on mhtcet dbt website.",]
    ],
    [
        r"quit",
        ["BBye take care. See you soon :) ","It was nice talking to you. See you soon :)"]
    ],
]
def chat():
	print("Please ask me a Question?")
	chat=Chat(pairs,reflections)
	chat.converse()

if __name__=="__main__":
	chat()