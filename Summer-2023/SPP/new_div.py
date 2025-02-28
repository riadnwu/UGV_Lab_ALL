import librosa
import soundfile as sf
import matplotlib.pyplot as plt

# Load audio file
audio_file = 'input_audio.wav'
y, sr = librosa.load(audio_file, sr=None)

# Convert to PCM (16-bit PCM)
y_pcm = (y * 32767).astype('int16')

# Write PCM data to a new file
output_file = 'output_pcm.wav'
sf.write(output_file, y_pcm, sr)

# Plot original audio waveform
plt.figure(figsize=(10, 6))
plt.subplot(2, 1, 1)
plt.plot(y)
plt.title('Original Audio Waveform')
plt.xlabel('Sample')
plt.ylabel('Amplitude')

# Plot PCM waveform
plt.subplot(2, 1, 2)
plt.plot(y_pcm)
plt.title('PCM Waveform')
plt.xlabel('Sample')
plt.ylabel('Amplitude')

plt.tight_layout()
plt.show()