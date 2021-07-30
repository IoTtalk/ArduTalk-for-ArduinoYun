# ArduTalk_for_ArduinoYun

Device model: 'MCU_board'


Input device features: 'A0', 'A1', 'A2', 'A3', 'A4', 'A5'


Output device features: 'D2', 'D3', 'D4', 'D5\~PWM', 'D6\~PWM', 'D7', 'D8', 'D9\~PWM'






在AR9331上面的OpenWRT上安裝Python套件 requests 的指令(依序)


    opkg update                 #updates the available packages list

    opkg install distribute     #it contains the easy_install command line tool

    opkg install python-openssl #adds ssl support to python

    opkg install openssh-sftp-server
    
    wget http://yun.iottalk.tw/pip-10.0.1.tar.gz
    
    easy_install pip-10.0.1.tar.gz
    
    rm pip-10.0.1.tar.gz
    
    wget http://yun.iottalk.tw/requests-2.15.1-py2.py3-none-any.whl
    
    pip install requests-2.15.1-py2.py3-none-any.whl

    rm requests-2.8.1-py2.py3-none-any.whl

    Ref. :
    https://blog.csdn.net/cpq37/article/details/101766475



針對 ArduinoYun Rev2，在OpenWRT上安裝Python套件 requests 的指令(依序) (Rev2拿到後直接可以使用，無須刷韌體)
        
    opkg update
    opkg install python-pip 
    wget http://yun.iottalk.tw/idna2.8.tar.gz
    tar zxvf idna2.8.tar.gz
    cd idna-master
    python setup.py install
    pip install requests
    opkg install openssh-sftp-server
