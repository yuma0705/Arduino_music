/***************************************************** 
name: music
purpose: Arduinoで電子オルゴールを作る。
author: Katsuhiro Morishita
created: 2015-05-26
license: MIT
*****************************************************/
const int loudspeaker_pin = 13; // 13番ポートを使う
const int base_time = 16 * 100;  // 16の倍数が都合がいい

void setup()
{
  pinMode(loudspeaker_pin, OUTPUT); // 使うIOポートを出力に指定
}

void loop()
{
tone(loudspeaker_pin, 262);
delay(base_time / 4);
tone(loudspeaker_pin, 262);
delay(base_time / 8);
tone(loudspeaker_pin, 294);
delay(base_time / 8);
tone(loudspeaker_pin, 330);
delay(base_time / 8);
tone(loudspeaker_pin, 330);
delay(base_time / 8);
tone(loudspeaker_pin, 392);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 8);
tone(loudspeaker_pin, 330);
delay(base_time / 8);
tone(loudspeaker_pin, 294);
delay(base_time / 8);
tone(loudspeaker_pin, 294);
delay(base_time / 8);
tone(loudspeaker_pin, 262);
delay(base_time / 4);
noTone(loudspeaker_pin);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 8);
tone(loudspeaker_pin, 349);
delay(base_time / 8);
tone(loudspeaker_pin, 392);
delay(base_time / 4);
tone(loudspeaker_pin, 523);
delay(base_time / 4);
tone(loudspeaker_pin, 440);
delay(base_time / 4);
tone(loudspeaker_pin, 523);
delay(base_time / 4);
tone(loudspeaker_pin, 392);
delay(base_time / 4);
noTone(loudspeaker_pin);
delay(base_time / 4);
tone(loudspeaker_pin, 523);
delay(base_time / 4);
tone(loudspeaker_pin, 523);
delay(base_time / 4);
tone(loudspeaker_pin, 494);
delay(base_time / 4);
tone(loudspeaker_pin, 392);
delay(base_time / 4);
tone(loudspeaker_pin, 440);
delay(base_time / 8);
tone(loudspeaker_pin, 440);
delay(base_time / 8);
tone(loudspeaker_pin, 440);
delay(base_time / 8);
tone(loudspeaker_pin, 440);
delay(base_time / 8);
tone(loudspeaker_pin, 392);
delay(base_time / 4);
noTone(loudspeaker_pin);
delay(base_time / 4);
tone(loudspeaker_pin, 262);
delay(base_time / 4);
tone(loudspeaker_pin, 262);
delay(base_time / 8);
tone(loudspeaker_pin, 294);
delay(base_time / 8);
tone(loudspeaker_pin, 330);
delay(base_time / 8);
tone(loudspeaker_pin, 330);
delay(base_time / 8);
tone(loudspeaker_pin, 392);
delay(base_time / 4);
tone(loudspeaker_pin, 330);
delay(base_time / 8);
tone(loudspeaker_pin, 330);
delay(base_time / 8);
tone(loudspeaker_pin, 294);
delay(base_time / 8);
tone(loudspeaker_pin, 294);
delay(base_time / 8);
tone(loudspeaker_pin, 262);
delay(base_time / 4);
noTone(loudspeaker_pin);
delay(base_time / 4);

}



