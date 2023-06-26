import machine
import utime

uart = machine.UART(0, baudrate=9600, tx=machine.Pin(0), rx=machine.Pin(1))

while True:
    uart.write("Hello from Pi Pico!\n")
    utime.sleep(0.2)
    if uart.any():
        try:
            received_data = uart.readline().decode('utf-8').strip()
        except UnicodeError:
            try:
                received_data = uart.readline().decode('utf-8').strip()
            except AttributeError:
                pass
        try:
            print(eval(received_data))
            print(len(eval(received_data)))
        except:
            pass


