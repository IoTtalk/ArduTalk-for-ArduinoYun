ServerURL='http://IP:9999'   
dm_name = 'MCU_board'
d_name = None

MQTT_broker =  None
MQTT_port = 1883
MQTT_User = '?'
MQTT_PW = '?'

Comm_interval = 1 # unit:second

odf_list = [
        ('D2', 0, 'D2'),
        ('D3', 0, 'D3'),
        ('D4', 0, 'D4'),
        ('D5~PWM', 0, 'D5~PWM'),
        ('D6~PWM', 0, 'D6~PWM'),
        ('D7', 0, 'D7'),
        ('D8', 0, 'D8'),
        ('D9~PWM', 0, 'D9~PWM'),
    ]

idf_list = [
       ('A1', int),
       ('A2', int),
       ('A3', int),
       ('A4', int),
       ('A5', int),
    ]


