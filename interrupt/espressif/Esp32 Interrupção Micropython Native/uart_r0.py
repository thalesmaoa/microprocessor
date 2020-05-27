# from machine import UART
# from time import sleep
#
# # Primeiro teste com a UART. Funciona corretamente
# uart1 = UART(1, baudrate=9600, bits=8, parity=None, stop=1, tx=12, rx=14, rts=-1, cts=-1, txbuf=256, rxbuf=256, timeout=5000, timeout_char=2)
# uart2 = UART(2, 9600)
#
# uart1.init()
# uart2.init(9600, bits=8, parity=None, stop=1, tx=17, rx=16)
#
# while True:
#     print("UART 1: ", uart1.read())
#     print("UART 2: ", uart2.read())
#
#     uart1.write("Escreveu UART 1\n")
#     uart2.write("Escreveu UART 2\n")
#     sleep(1)
