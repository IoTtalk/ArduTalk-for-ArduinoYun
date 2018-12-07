# ArduTalk_for_ArduinoYun

Device model: 'MCU_board'


Input device features: 'A0', 'A1', 'A2', 'A3', 'A4', 'A5'


Output device features: 'D2', 'D3', 'D4', 'D5\~PWM', 'D6\~PWM', 'D7', 'D8', 'D9\~PWM'






在AR9331上面的OpenWRT上安裝Python套件 requests 的指令(依序)


    opkg update                 #updates the available packages list

    opkg install distribute     #it contains the easy_install command line tool

    opkg install python-openssl #adds ssl support to python

    easy_install https://files.pythonhosted.org/packages/ae/e8/2340d46ecadb1692a1e455f13f75e596d4eab3d11a57446f08259dee8f02/pip-10.0.1.tar.gz#sha256=f2bd08e0cd1b06e10218feaf6fef299f473ba706582eb3bd9d52203fdbd7ee68

    pip install requests

    opkg install openssh-sftp-server



針對 ArduinoYun Rev2，在OpenWRT上安裝Python套件 requests 的指令(依序) (Rev2拿到後直接可以使用，無須刷韌體)

    opkg update
    opkg install python-pip
    pip install requests    (斷電重開機後執行，不然一定會發生記憶體不足 Memory error)
    opkg update
    opkg install openssh-sftp-server

    註：上述順序不可改。 如果裝requests時一直發生memory error記憶體不足，
    可試著手動依序安裝 idna, urllib3, chardet, certifi, requests 
    一旦遭遇記憶體不足就斷電重開機後執行後再繼續裝，
    如果怎樣都裝不起來，只能Factory reset後再試試看。
