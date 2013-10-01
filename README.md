/*
  ThArFe - Thermo-electric Arduino Fermentation control
  
  A simple Arduino controller for a thermo-electric peltier device to
  heat and cool a thermally protected environment containing a 
  fermentation container.  Current design to fit one 23L glass carboy.
  
  Hardware
  Arduino Uno compatabile board (Freetronics Eleven R3 V2.0)
  OneWire Temperature probe DS18820
  15V 6A Peltier
  *15V 6A Power supply
  *230V PC Power Supply
  2 x Heatsinks
  2 x Fans
  *2 x MOSFET
  *2 x DPDT Relays
  1 x Red LED - indicate heating cycle
  *1 x Blue LED - indicate cooling cycle
  *Thermally protected Fermentation Chamber
  *need to aquire
  
  TODO
  Add LCD display and buttons to adjust high and low temp and display current temp
  Add CO2 Gas sensor and logging to SD card
  Add Clock and variable temp program on SD card to control temp depending on time and CO2 data
  Add wifi/ethernet to report to user via web graph
    
*/
