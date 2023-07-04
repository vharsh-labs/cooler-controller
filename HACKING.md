# Hacking

1. Getting chip details using esptool python library

```python
>>> import esptool
>>> # it does fail at times, RTFM!
>>> ok = esptool.detect_chip(port='/dev/ttyUSB2', baud=115200, connect_mode='default_reset', trace_enabled=False, connect_attempts=7)
Connecting......................................
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
  File "/home/harsh/.local/lib/python3.10/site-packages/esptool/cmds.py", line 93, in detect_chip
    detect_port.connect(connect_mode, connect_attempts, detecting=True)
  File "/home/harsh/.local/lib/python3.10/site-packages/esptool/loader.py", line 641, in connect
    raise FatalError(
esptool.util.FatalError: Failed to connect to Espressif device: Wrong boot mode detected (0xb)! The chip needs to be in download mode.
For troubleshooting steps visit: https://docs.espressif.com/projects/esptool/en/latest/troubleshooting.html
>>> # see if any hardware pins are in contact or if the BOOT or EN button needs to be toggled or hold-pressed while the code is being pushed/burned to the chip
>>> ok = esptool.detect_chip(port='/dev/ttyUSB2', baud=115200, connect_mode='default_reset', trace_enabled=False, connect_attempts=7)
Connecting....................
Detecting chip type... Unsupported detection protocol, switching and trying again...
Connecting.....
Detecting chip type... ESP32
```

2. Access to serial ports might need you to add your $USER to a Linux group, such as `dialout`, see if this is required for pushing code to your hardware or reading things over the Serial port
