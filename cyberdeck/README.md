# Cyberdeck
- La idea es hacer un Raspberry Pi Zero 2 con una pantalla y un teclado QWERTY con un Linux.
- La pantalla va a ser HDMI para no necesitar drivers y poder cambiar la distribución de Linux sin tener que preocuparme por binarios.
- El único inconveniente es el teclado.
- Para eso, voy a usar un Raspberry Pi Pico con un PCB con interruptores.


## Componentes principales
- [Raspberry Pi Zero 2]()
- [Screen 4" HDMI Waveshare](https://www.waveshare.com/wiki/4inch_HDMI_LCD_(H)) Adicionalmente tiene touch-screen (con lapiz) con drivers.
- [Ethernet/USB HUB HAT (B) Waveshare](https://www.waveshare.com/eth-usb-hub-hat-b.htm)
- [Conector HDMI (L) Waveshare](https://www.waveshare.com/product/accessories/adapters-cables-antennas/hdmi/hdmi-adapter-vertical.htm)
- [Conector mini-HDMI (H) Waveshare](https://www.waveshare.com/product/accessories/adapters-cables-antennas/hdmi/hdmi-adapter-vertical.htm)
- [Cable HDMI Waveshare](https://www.waveshare.com/catalog/product/view/id/3550/s/ffc-20pin-0.5pitch-0.2m-opposite-side-contact/category/535/)

## Teclado
En desarrollo

## Carcaza
La voy a empezar a diseñar cuando tenga todo lo demás funcionando. Posiblemente necesite extensores para los conectores como HDMI, Audio, USB y Power.

### Cómo alimentar de corriente el Pico
Todavía es temprano porque no decidí si conectarlo por USB o por GPIO. En el caso de que se conecte por GPIO:

| Raspberry Pi Zero || Raspberry Pi Pico |
| --- | --- | --- |
| Pin 4 (5V) | :arrow_right: | Pin 40 (VBUS) |
| Pin 6 (GND) | :arrow_right: | Pin 38 (GND) |


