mini 示波器 v1.1--------20.3.26

功能：显示波形（仅仅只有波形而已），串口DMA收发（发虽然定义了，但是没有使用额），按键中断控制led（待后面更新内容）
硬件：正点原子mini板（stm32f103rct6，2.8寸LCD，一根杜邦线）
连接：LCD并行数据线D0-D15---->PB0-PB15 
          LCD_CS----> PC9
          LCD_RS----> PC8
          LCD_WR----> PC7
          LCD_RD---->PC6

          ADC1_IN10---->PC0
          TIM3_CH1---->PA6
          KEY0---->PC5
          UART_TX---->PA10
          UART_RX---->PA9
          
软件：cubemx提供配置，LCD提供显示程序（需使用正点原子历程中的sys文件），结合网络稍作修改。


