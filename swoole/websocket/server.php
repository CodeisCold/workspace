<?php
// 弃用
    $user_fds = []; // user fds
    $fd_user = []; // fd user

    $server = new swoole_websocket_server("192.168.68.130", 12345);

    $server->on('open'), function (swoole_websocket_server $server, $request) {

    });

    $server->on('message', function (swoole_websocket_server $server, $frame) {
        echo "receive from {$frame->fd}:{$frame->data},opcode:{$frame->opcode},fin:{$frame->finish}\n";

        // 根据 $frame->data 判断 客户端账号信息，最好在建立连接时通过 header 传入
        if () {
            $user_fds[$user_id][] = $frame->fd;
            $fd_user[$frame->fd] = $user_id;
        }

    });

    $server->on('close', function ($ser, $fd) {
        echo "client {$fd} closed\n";


    });

    $server->start();