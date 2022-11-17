


//LED Yellow Control GPIOB Pin 5
#define Yellow_LED_Off HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET)
#define Yellow_LED_On HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET)
#define Yellow_LED_Toggle HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5)


//LED Green Control GPIO Pin 8
#define Green_LED_Off HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET)
#define Green_LED_On HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET)
#define Green_LED_Toggle HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_8)

//LED Red Control GPIO Pin 9
#define Red_LED_Off HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET)
#define Red_LED_On HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET)
#define Red_LED_Toggle HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_9)

//All LED Control
#define All_LED_Off HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5 | GPIO_PIN_8 | GPIO_PIN_9, GPIO_PIN_SET)
#define All_LED_On HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5 | GPIO_PIN_8 | GPIO_PIN_9, GPIO_PIN_RESET)
#define All_LED_Toggle HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_5 | GPIO_PIN_8 | GPIO_PIN_9)



