import time {sleep_ms}
import pin

pin.setup(17, pin.out)

for {
	pin.high(17)
	sleep_ms(250)
	pin.low(17)
	sleep_ms(250)
}