import machine

def handle_interrupt(pin):
    #global out_pin
    out_pin.value( out_pin.value()^1 )
    #print("Entrou")

out_pin = machine.Pin(21, machine.Pin.OUT)

int_interrup = machine.Pin(16, machine.Pin.IN)
int_interrup.irq(trigger=machine.Pin.IRQ_FALLING, handler=handle_interrupt)
