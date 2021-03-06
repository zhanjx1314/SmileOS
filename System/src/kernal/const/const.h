#define SHEET_NUM 512

#define VRAM_ADDRESS 0xe0000000
#define MAP_ADDRESS 0x100000
#define SHEET_MANAGE_TABLE 0x28800

#define TRANSPARENT 0x00

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 1024
#define SCREEN_DENSITY 3

#define PIC0_OCW2 0x0020

#define ADDRESS_GDT 0x7e002
#define ADDRESS_IDT 0x17e00
#define LIMIT_IDT 0x7FF

#define AR_INTGATE32 0x008e

#define PIC0_ICW1		0x0020
#define PIC0_OCW2		0x0020
#define PIC0_IMR		0x0021
#define PIC0_ICW2		0x0021
#define PIC0_ICW3		0x0021
#define PIC0_ICW4		0x0021
#define PIC1_ICW1		0x00a0
#define PIC1_OCW2		0x00a0
#define PIC1_IMR		0x00a1
#define PIC1_ICW2		0x00a1
#define PIC1_ICW3		0x00a1
#define PIC1_ICW4		0x00a1

#define PIT_CTRL		0x0043
#define PIT_CNT0		0x0040

#define INTERRUPT_MOUSE 0x2c
#define INTERRUPT_TIMING 0x20
#define INTERRUPT_KEYBOARD 0x21
#define INTERRUPT_HARDDISK 0x2e

#define PORT_KEYDATA 			0x0060
#define PORT_KEYSTAT 			0x0064
#define PORT_KEYCMD	 			0x0064
#define KEYSTA_SEND_NOTREADY	0x0002
#define KEYCMD_WRITE_MODE		0x0060
#define KBC_MODE				0x0047
#define KEYCMD_SENDTO_MOUSE		0x00d4
#define MOUSECMD_ENABLE			0x00f4

#define FLAGS_OVERRUN			0x0001

#define SYSTEM_BUFFER_SIZE		1024

#define MOUSE_WIDTH 			12
#define MOUSE_HEIGHT			22

#define MAX_TIMER_NUM			512
#define STATUS_TIMER_UNUSE		0
#define STATUS_TIMER_ALLOC		1
#define STATUS_TIMER_USING		2

#define TRUE 1
#define FALSE 0

#define null					0


