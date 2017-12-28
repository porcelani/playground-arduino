#include <UIPEthernet.h>
#include <PubSubClient.h>

// Update these with values suitable for your network.
byte mac[]    = {  0xDE, 0xED, 0xBA, 0xFE, 0xFE, 0xED };
byte server[] = { 104,41,0,81};
byte ip[] = { 10,255,6,32};


void callback(char* topic, byte* payload, unsigned int length) {
  // Aqui trataremos o retorno que vier do servidor.
}

EthernetClient ethClient;
PubSubClient client(server, 1883, callback, ethClient);

void setup()
{
  Serial.begin(9600);
  Serial.print("1");
  Ethernet.begin(mac);
  
  Serial.print("2");
  if (client.connect("arduinoClient")) {
    Serial.print("3");
    client.publish("bla","UMA MENSAGEM....");
    client.subscribe("bla");
  }
}

void loop()
{
  client.loop();
}
