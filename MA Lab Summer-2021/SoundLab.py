from scipy.io import wavfile as wf
from scipy.fftpack import fft
import matplotlib.pyplot as pt
rate,sound=wf.read('33.wav')
print(sound[:rate])
print(rate)
print(len(sound)/rate)

pt.plot(sound[:256])
pt.show()

ffdata=fft(sound[:2500])

pt.plot(ffdata)
pt.show()