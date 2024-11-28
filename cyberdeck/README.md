# Cyberdeck
- La idea es hacer un Raspberry Pi Zero con una pantalla y un teclado QWERTY con un Linux.
- La pantalla va a ser HDMI para no necesitar drivers y poder cambiar la distribución de Linux sin tener que preocuparme por binarios.
- El único inconveniente es el teclado.
- Para eso, voy a usar un Raspberry Pi Pico con un PCB con interruptores.


## Pantalla
Encontré una que me gusta mucho: [4inch HDMI LCD (H)](https://www.waveshare.com/wiki/4inch_HDMI_LCD_(H))
- Display HDMI
- Opcional de touch-screen (con lapiz) con drivers


## Teclado

### Cómo alimentar de corriente el Pico
Todavía es temprano porque no decidí si conectarlo por USB o por GPIO. En el caso de que se conecte por GPIO:

Raspberry Pi Zero       Raspberry Pi Pico
------------------       -----------------
Pin 4 (5V)         ---> Pin 40 (VBUS)
Pin 6 (GND)        ---> Pin 38 (GND)


