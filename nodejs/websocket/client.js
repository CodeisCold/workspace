const WebSocket = require('ws');
 
const ws = new WebSocket('ws://192.168.68.130:12345');
 
ws.on('open', function open () {
  ws.send('something');
});
 
ws.on('message', function incoming (data) {
  console.log(data);
});