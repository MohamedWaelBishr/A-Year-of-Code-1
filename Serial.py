import serial

while True :
	packet = raw_input("Enter Next Command : ")
	ser = serial.Serial(port='/dev/ttyUSB1', baudrate=9600, timeout=1000)
	ser.write(packet)
