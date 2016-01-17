@echo off
color 0a
title Server Monitor
:Serverstart
echo Launching Server
C:
cd "C:\Users\Admin\Desktop\ALServer"
echo Server Monitor... Active !
echo Contact Jesse for support!
start "Arma3" /min /wait arma3server.exe -mod=@life_server;@extDB2;Kart,Mark,Heli; -config=C:\Users\Admin\Desktop\ALServer\@life_server\config.cfg -port=2302 -profiles=SC -cfg=C:\Users\Admin\Desktop\ALServer\@life_server\basic.cfg -name=NL -autoinit
ping 127.0.0.1 -n 15 >NUL
echo Server Shutdown ... Restarting!
ping 127.0.0.1 -n 5 >NUL
cls
goto Serverstart
