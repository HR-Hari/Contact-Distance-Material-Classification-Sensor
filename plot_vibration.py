import serial
import matplotlib.pyplot as plt

ser = serial.Serial('COM3', 115200)  

ax_data = []

print("Collecting data... Press Ctrl+C to stop")

try:
    while len(ax_data) < 200:
        line = ser.readline().decode().strip()
        ax, ay, az = map(int, line.split(','))
        ax_data.append(ax)
except KeyboardInterrupt:
    pass

ser.close()

plt.plot(ax_data)
plt.title("Accelerometer X-axis Vibration")
plt.xlabel("Sample")
plt.ylabel("Raw Acceleration")
plt.grid(True)
plt.show()
