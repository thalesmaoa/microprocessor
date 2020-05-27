import machine


def handle_interrupt(pin):
    global out_pin
    out_pin.value( not out_pin.value() )
    #print("Entrou")

out_pin = machine.Pin(26, machine.Pin.OUT)

int_interrup = machine.Pin(27, machine.Pin.IN)
int_interrup.irq(trigger=machine.Pin.IRQ_RISING, handler=handle_interrupt)
