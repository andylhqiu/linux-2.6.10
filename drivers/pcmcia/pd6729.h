#ifndef _INCLUDE_GUARD_PD6729_H_
#define _INCLUDE_GUARD_PD6729_H_

/* Debuging defines */
#ifdef NOTRACE
#define dprintk(fmt, args...) printk(fmt , ## args)
#else
#define dprintk(fmt, args...) do {} while (0)
#endif

/* Flags for I365_GENCTL */
#define I365_DF_VS1		0x40	/* DF-step Voltage Sense */
#define I365_DF_VS2		0x80

/* Fields in PD67_EXTERN_DATA */
#define PD67_EXD_VS1(s)		(0x01 << ((s) << 1))
#define PD67_EXD_VS2(s)		(0x02 << ((s) << 1))




struct pd6729_socket {
	int	number;
	unsigned long io_base; 	/* base io address of the socket */
	struct pcmcia_socket socket;
};

#endif
