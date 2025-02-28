import matplotlib.pyplot as pt
from scipy.io import wavfile as wf

rate,data=wf.read('33.wav')

print(data[:25000])

pt.plot(data[:25000])
pt.show()