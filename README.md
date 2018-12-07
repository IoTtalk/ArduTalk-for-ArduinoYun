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
    pip install requests    (***注意，看註1***)
    opkg update
    opkg install openssh-sftp-server

    註1：
        若遭遇Memoey不夠的問題(看到Killed, non mem,等安裝失敗等都是記憶體不足之故)，
        解法就是：用top看process，先把bridge砍掉，kill <bridge的pid>，然後再看有哪些service，
        下service指令後，看有哪些項目，用 "service 項目 stop" 去停止，停了幾個後，
        直接下 pip install requests 就可以裝成功了，若是還失敗，繼續停掉service，
        kill掉一些不重要的process，約 35868K free 記憶體時，就可以安裝成功。
