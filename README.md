# ArduTalk_for_ArduinoYun

Device model: 'MCU_board'


Input device features: 'A0', 'A1', 'A2', 'A3', 'A4', 'A5'


Output device features: 'D2', 'D3', 'D4', 'D5\~PWM', 'D6\~PWM', 'D7', 'D8', 'D9\~PWM'






在AR9331上面的OpenWRT上安裝Python套件 requests 的指令(依序)

    wget http://yun.iottalk.tw/yunDAinstall.sh
    chmod 700 yunDAinstall.sh
    ./yunDAinstall.sh

執行 yunDAinstall.sh 會需要運作一段時間，尤其執行到pip安裝時，會等很久，要有耐心等候，不要將之中斷。 安裝完畢後自動進入編輯config.py的畫面(vi config.py)，
在這邊填入需要的對應資訊後，按下 ESC 輸入 :wq 存檔退出即可。

要測試執行效果可以下指令python DAI.py
若出現錯誤 "socket.error: [Errno 146] Connection refused"
表示Arduino端的Bridge沒有正確執行，所以無法連線。通常是Arduino端的沒有燒入對應的 .ino 檔，或是沒有正確執行。





針對 ArduinoYun Rev2，在OpenWRT上安裝Python套件 requests 的指令(依序) (Rev2拿到後直接可以使用，無須刷韌體)
        
    opkg update
    opkg install python-pip 
    wget http://yun.iottalk.tw/idna2.8.tar.gz
    tar zxvf idna2.8.tar.gz
    cd idna-master
    python setup.py install
    pip install requests
    opkg install openssh-sftp-server



Ref.: https://blog.csdn.net/cpq37/article/details/101766475
