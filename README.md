# DUMB2SMART

The **DUMB2SMART** is a way for some dumb equipment to gain some intelligence and inform a MQTT broker if they are ON or OFF. It was developed for use with ESP-01 in mind but can be used with other ESPs.

### Version
Current version is: _DUMB2SMART v0.0.1 (04/06/2018)_

### Features
  - OTA updates
  - Remote Debug

### How it works
The ESP-01 should be connected to the device you want to get the state.

If you're using Home Assistant, just add this code:

```yaml
binary_sensor:
#### GET DEVICE STATE
  - platform: mqtt
    name: "dumb2smart"
    state_topic: "home/test/status"
    value_template: "{{ value }}"
    payload_on: "Online"
    payload_off: "Offline"
    device_class: connectivity
```

To use the OTA feature, navigate to http://<ipaddress>/firmware

### Notes
This project was created on PlatformIO. If you are using Arduino IDE, you should open the _.cpp_ file inside the _src_ folder. Libraries are inside the _lib_ folder.
