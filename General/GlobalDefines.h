/*
*
* GLOBAL DEFINES - Global defines, that are used firmware-wide
*
* DIY-Thermocam Firmware
*
* GNU General Public License v3.0
*
* Copyright by Max Ritter
*
* http://www.diy-thermocam.net
* https://github.com/maxritter/DIY-Thermocam
*
*/

/* Defines */

//Pins
#define pin_button        2
#define pin_laser         4
#define pin_touch_irq     5
#define pin_lcd_dc        6
#define pin_cam_si        8
#define pin_touch_cs      9  //Only resistive touch
#define pin_flash_cs      10 //Not in use
#define pin_mosi          11
#define pin_miso          12
#define pin_sck           13
#define pin_alt_sck       14
#define pin_lepton_cs     15
#define pin_sda           18
#define pin_scl           19
#define pin_sd_cs         20
#define pin_lcd_cs        21
#define pin_lcd_backlight 22
#define pin_bat_measure   23
#define pin_usb_measure   A14

//Modes
#define displayMode_thermal  0
#define displayMode_visual   1
#define displayMode_combined 2

//MLX90614 sensor version
#define mlx90614Version_old 0 //MLX90614-BCI
#define mlx90614Version_new 1 //MLX90614-DCI, MLX90614-BCF, MLX90614-DCH

//FLIR Lepton sensor version
#define leptonVersion_2_Shutter   0 //FLIR Lepton2 Shuttered
#define leptonVersion_3_Shutter   1 //FLIR Lepton3 Shuttered
#define leptonVersion_2_NoShutter 2 //FLIR Lepton2 Non-Shuttered

//Temperature format
#define tempFormat_celcius    0
#define tempFormat_fahrenheit 1

//Filter type
#define filterType_none     0
#define filterType_gaussian 1
#define filterType_box      2

//Display Min/Max Points
#define minMaxPoints_disabled 0
#define minMaxPoints_min      1
#define minMaxPoints_max      2
#define minMaxPoints_both     3

//Shutter mode
#define shutterMode_manual 0
#define shutterMode_auto   1
#define shutterMode_none   2

//Text color
#define textColor_white 0
#define textColor_black 1
#define textColor_red   2
#define textColor_green 3
#define textColor_blue  4

//Screen off time
#define screenOffTime_disabled 0
#define screenOffTime_5min     1
#define screenOffTime_20min    2

//Hot / cold
#define hotColdMode_disabled 0
#define hotColdMode_cold     1
#define hotColdMode_hot      2

//Hot / cold color
#define hotColdColor_white 0
#define hotColdColor_black 1
#define hotColdColor_red   2
#define hotColdColor_green 3
#define hotColdColor_blue  4

//EEPROM registers
#define eeprom_tempFormat       101
#define eeprom_colorScheme      102
#define eeprom_convertEnabled   103
#define eeprom_visualEnabled    104
#define eeprom_spotEnabled      105
#define eeprom_colorbarEnabled  106
#define eeprom_batteryEnabled   107
#define eeprom_timeEnabled      108
#define eeprom_dateEnabled      109
#define eeprom_pointsEnabled    110
#define eeprom_storageEnabled   111
#define eeprom_rotationEnabled  112
#define eeprom_displayMode      113
#define eeprom_textColor        114
#define eeprom_filterType       115
#define eeprom_minTemp1Low      116
#define eeprom_minTemp1High     117
#define eeprom_maxTemp1Low      118
#define eeprom_maxTemp1High     119
#define eeprom_minMax1Set       120
#define eeprom_adjComb1Left     121
#define eeprom_adjComb1Right    122
#define eeprom_adjComb1Up       123
#define eeprom_adjComb1Down     124
#define eeprom_adjComb1Alpha    125
#define eeprom_adjComb1Set      126
#define eeprom_minMaxPoints     127
#define eeprom_screenOffTime    128
#define eeprom_massStorage      129
#define eeprom_calSlopeSet      130
#define eeprom_calSlopeBase     131 //4 Byte (131-134)
#define eeprom_hotColdMode      135
#define eeprom_hotColdLevelLow  136
#define eeprom_hotColdLevelHigh 137
#define eeprom_hotColdColor     138
#define eeprom_adjComb2Left     139
#define eeprom_adjComb2Right    140
#define eeprom_adjComb2Up       141
#define eeprom_adjComb2Down     142
#define eeprom_adjComb2Alpha    143
#define eeprom_adjComb2Set      144
#define eeprom_adjComb3Left     145
#define eeprom_adjComb3Right    146
#define eeprom_adjComb3Up       147
#define eeprom_adjComb3Down     148
#define eeprom_adjComb3Alpha    149
#define eeprom_firstStart       150
#define eeprom_liveHelper       151
#define eeprom_adjComb3Set      152
#define eeprom_adjCombPreset    153
#define eeprom_minTemp2Low      154
#define eeprom_minTemp2High     155
#define eeprom_maxTemp2Low      156
#define eeprom_maxTemp2High     157
#define eeprom_minMax2Set       158
#define eeprom_minTemp3Low      159
#define eeprom_minTemp3High     160
#define eeprom_maxTemp3Low      161
#define eeprom_maxTemp3High     162
#define eeprom_minMax3Set       163
#define eeprom_minMaxPreset     164
#define eeprom_fwVersion        250
#define eeprom_setValue         200

//Presets for min/max & adjComb
#define minMax_temporary  0
#define minMax_preset1    1
#define minMax_preset2    2
#define minMax_preset3    3
#define adjComb_temporary 0
#define adjComb_preset1   1
#define adjComb_preset2   2
#define adjComb_preset3   3

//Hardware diagnostic bit codes
#define diag_spot 0
#define diag_display 1
#define diag_camera 2
#define diag_touch 3
#define diag_sd 4
#define diag_bat 5
#define diag_lep_conf 6
#define diag_lep_data 7
#define diag_ok 255

//Color scheme numbers
#define colorSchemeTotal          19
#define colorScheme_arctic        0
#define colorScheme_blackHot      1
#define colorScheme_blueRed       2
#define colorScheme_coldest       3
#define colorScheme_contrast      4
#define colorScheme_doubleRainbow 5
#define colorScheme_grayRed       6
#define colorScheme_glowBow       7
#define colorScheme_grayscale     8
#define colorScheme_hottest       9
#define colorScheme_ironblack     10
#define colorScheme_lava          11
#define colorScheme_medical       12
#define colorScheme_rainbow       13
#define colorScheme_wheel1        14
#define colorScheme_wheel2        15
#define colorScheme_wheel3        16
#define colorScheme_whiteHot      17
#define colorScheme_yellow        18

//Calibration
#define cal_warmup   0
#define cal_standard 1
#define cal_manual   2
#define cal_stdSlope 0.0402f //Standard slope value

//Image save marker
#define imgSave_disabled 0
#define imgSave_save     1
#define imgSave_set      2
#define imgSave_create   3

//Video save marker
#define videoSave_disabled   0
#define videoSave_menu       1
#define videoSave_recording  2
#define videoSave_processing 3

//Load touch decision marker
#define loadTouch_none     0
#define loadTouch_find     1
#define loadTouch_delete   2
#define loadTouch_previous 3
#define loadTouch_next     4
#define loadTouch_exit     5
#define loadTouch_convert  6


