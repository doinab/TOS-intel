#define nx_struct struct
#define nx_union union
/* #define dbg(mode, format, ...) ((void)0) */
/* #define dbg_clear(mode, format, ...) ((void)0) */
#define dbg_active(mode) 0
/* # 151 "/opt/local/lib/gcc-lib/msp430/3.2.3/include/stddef.h" 3 */
typedef int ptrdiff_t;
/* #line 213 */
typedef unsigned int size_t;
/* #line 325 */
typedef int wchar_t;
/* # 8 "/opt/local/lib/ncc/deputy_nodeputy.h" */
struct __nesc_attr_nonnull {
/* #line 8 */
  int dummy;
}  ;
/* #line 9 */
struct __nesc_attr_bnd {
/* #line 9 */
  void *lo, *hi;
}  ;
/* #line 10 */
struct __nesc_attr_bnd_nok {
/* #line 10 */
  void *lo, *hi;
}  ;
/* #line 11 */
struct __nesc_attr_count {
/* #line 11 */
  int n;
}  ;
/* #line 12 */
struct __nesc_attr_count_nok {
/* #line 12 */
  int n;
}  ;
/* #line 13 */
struct __nesc_attr_one {
/* #line 13 */
  int dummy;
}  ;
/* #line 14 */
struct __nesc_attr_one_nok {
/* #line 14 */
  int dummy;
}  ;
/* #line 15 */
struct __nesc_attr_dmemset {
/* #line 15 */
  int a1, a2, a3;
}  ;
/* #line 16 */
struct __nesc_attr_dmemcpy {
/* #line 16 */
  int a1, a2, a3;
}  ;
/* #line 17 */
struct __nesc_attr_nts {
/* #line 17 */
  int dummy;
}  ;
/* # 38 "/opt/local/msp430/include/sys/inttypes.h" 3 */
typedef signed char int8_t;
typedef unsigned char uint8_t;

typedef int int16_t;
typedef unsigned int uint16_t;

typedef long int32_t;
typedef unsigned long uint32_t;

typedef long long int64_t;
typedef unsigned long long uint64_t;




typedef int16_t intptr_t;
typedef uint16_t uintptr_t;
/* # 281 "/opt/local/lib/ncc/nesc_nx.h" */
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_ntoh_int8(const void * source)  ;
/* #line 303 */
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
/* #line 340 */
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
/* #line 431 */
typedef struct { unsigned char nxdata[1]; }  nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; }  nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; }  nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; }  nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; }  nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; }  nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; }  nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; }  nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; }  nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; }  nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; }  nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; }  nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; }  nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; }  nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; }  nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; }  nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
/* # 41 "/opt/local/msp430/include/sys/types.h" 3 */
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t u_int32_t;
typedef uint64_t u_int64_t;

typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t *qaddr_t;

typedef char *caddr_t;
typedef const char *c_caddr_t;
typedef volatile char *v_caddr_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef int32_t ufs_daddr_t;
typedef int32_t ufs_time_t;
typedef u_int32_t uid_t;
/* # 39 "/opt/local/msp430/include/string.h" 3 */
extern int memcmp(const void *arg_0x100744de8, const void *arg_0x10074a100, size_t arg_0x10074a3a8);


extern void *memset(void *arg_0x100748980, int arg_0x100748be8, size_t arg_0x10074e020);
/* #line 63 */
extern void *memset(void *arg_0x100761b10, int arg_0x100761d78, size_t arg_0x100767060);
/* # 59 "/opt/local/msp430/include/stdlib.h" 3 */
/* #line 56 */
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;







/* #line 64 */
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;
/* # 122 "/opt/local/msp430/include/sys/config.h" 3 */
typedef long int __int32_t;
typedef unsigned long int __uint32_t;
/* # 12 "/opt/local/msp430/include/sys/_types.h" 3 */
typedef long _off_t;
typedef long _ssize_t;
/* # 28 "/opt/local/msp430/include/sys/reent.h" 3 */
typedef __uint32_t __ULong;


struct _glue {

  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _atexit {
  struct _atexit *_next;
  int _ind;
  void (*_fns[32])(void );
};








struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;
/* #line 116 */
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void *_cookie;

  int (*_read)(void *_cookie, char *_buf, int _n);
  int (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;

  struct _reent *_data;
};
/* #line 174 */
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};









struct _reent {


  int _errno;




  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x10079c0c8);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4244 {

    struct __nesc_unnamed4245 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      unsigned long long _rand_next;
      struct _rand48 _r48;
    } _reent;



    struct __nesc_unnamed4246 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int arg_0x10079f180);




  struct _glue __sglue;
  struct __sFILE __sf[3];
};
/* #line 273 */
struct _reent;
/* # 18 "/opt/local/msp430/include/math.h" 3 */
union __dmath {

  __uint32_t i[2];
  double d;
};




union __dmath;
/* #line 208 */
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
/* #line 261 */
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
/* # 23 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/tos.h" */
typedef uint8_t bool;
enum __nesc_unnamed4247 {
/* #line 24 */
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
/* #line 35 */
struct __nesc_attr_atleastonce {
};
/* #line 36 */
struct __nesc_attr_exactlyonce {
};
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/TinyError.h" */
enum __nesc_unnamed4248 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
/* # 39 "/opt/local/msp430/include/msp430/iostructures.h" 3 */
/* #line 27 */
typedef union port {
  volatile unsigned char reg_p;
  volatile struct __nesc_unnamed4249 {
    unsigned char __p0 : 1, 
    __p1 : 1, 
    __p2 : 1, 
    __p3 : 1, 
    __p4 : 1, 
    __p5 : 1, 
    __p6 : 1, 
    __p7 : 1;
  } __pin;
} __attribute_packed  ioregister_t;
/* #line 108 */
struct port_full_t {
  ioregister_t in;
  ioregister_t out;
  ioregister_t dir;
  ioregister_t ifg;
  ioregister_t ies;
  ioregister_t ie;
  ioregister_t sel;
};









struct port_simple_t {
  ioregister_t in;
  ioregister_t out;
  ioregister_t dir;
  ioregister_t sel;
};




struct port_full_t;



struct port_full_t;



struct port_simple_t;



struct port_simple_t;



struct port_simple_t;



struct port_simple_t;
/* # 116 "/opt/local/msp430/include/msp430/gpio.h" 3 */
volatile unsigned char P1OUT __asm ("0x0021");

volatile unsigned char P1DIR __asm ("0x0022");

volatile unsigned char P1IFG __asm ("0x0023");

volatile unsigned char P1IES __asm ("0x0024");

volatile unsigned char P1IE __asm ("0x0025");

volatile unsigned char P1SEL __asm ("0x0026");










volatile unsigned char P2OUT __asm ("0x0029");

volatile unsigned char P2DIR __asm ("0x002A");

volatile unsigned char P2IFG __asm ("0x002B");



volatile unsigned char P2IE __asm ("0x002D");

volatile unsigned char P2SEL __asm ("0x002E");










volatile unsigned char P3OUT __asm ("0x0019");

volatile unsigned char P3DIR __asm ("0x001A");

volatile unsigned char P3SEL __asm ("0x001B");










volatile unsigned char P4OUT __asm ("0x001D");

volatile unsigned char P4DIR __asm ("0x001E");

volatile unsigned char P4SEL __asm ("0x001F");










volatile unsigned char P5OUT __asm ("0x0031");

volatile unsigned char P5DIR __asm ("0x0032");

volatile unsigned char P5SEL __asm ("0x0033");










volatile unsigned char P6OUT __asm ("0x0035");

volatile unsigned char P6DIR __asm ("0x0036");

volatile unsigned char P6SEL __asm ("0x0037");
/* # 92 "/opt/local/msp430/include/msp430/usart.h" 3 */
volatile unsigned char U0CTL __asm ("0x0070");

volatile unsigned char U0TCTL __asm ("0x0071");



volatile unsigned char U0MCTL __asm ("0x0073");

volatile unsigned char U0BR0 __asm ("0x0074");

volatile unsigned char U0BR1 __asm ("0x0075");

volatile unsigned char U0RXBUF __asm ("0x0076");
/* #line 275 */
volatile unsigned char U1CTL __asm ("0x0078");

volatile unsigned char U1TCTL __asm ("0x0079");



volatile unsigned char U1MCTL __asm ("0x007B");

volatile unsigned char U1BR0 __asm ("0x007C");

volatile unsigned char U1BR1 __asm ("0x007D");

volatile unsigned char U1RXBUF __asm ("0x007E");
/* # 27 "/opt/local/msp430/include/msp430/timera.h" 3 */
volatile unsigned int TA0CTL __asm ("0x0160");

volatile unsigned int TA0R __asm ("0x0170");


volatile unsigned int TA0CCTL0 __asm ("0x0162");

volatile unsigned int TA0CCTL1 __asm ("0x0164");
/* #line 70 */
volatile unsigned int TA0CCTL2 __asm ("0x0166");
/* #line 127 */
/* #line 118 */
typedef struct __nesc_unnamed4250 {
  volatile unsigned 
  taifg : 1, 
  taie : 1, 
  taclr : 1, 
  dummy : 1, 
  tamc : 2, 
  taid : 2, 
  tassel : 2;
} __attribute_packed  tactl_t;
/* #line 143 */
/* #line 129 */
typedef struct __nesc_unnamed4251 {
  volatile unsigned 
  ccifg : 1, 
  cov : 1, 
  out : 1, 
  cci : 1, 
  ccie : 1, 
  outmod : 3, 
  cap : 1, 
  dummy : 1, 
  scci : 1, 
  scs : 1, 
  ccis : 2, 
  cm : 2;
} __attribute_packed  tacctl_t;


struct timera_t {
  tactl_t ctl;
  tacctl_t cctl0;
  tacctl_t cctl1;
  tacctl_t cctl2;
  volatile unsigned dummy[4];
  volatile unsigned tar;
  volatile unsigned taccr0;
  volatile unsigned taccr1;
  volatile unsigned taccr2;
};



struct timera_t;
/* # 26 "/opt/local/msp430/include/msp430/timerb.h" 3 */
volatile unsigned int TBR __asm ("0x0190");


volatile unsigned int TBCCTL0 __asm ("0x0182");





volatile unsigned int TBCCR0 __asm ("0x0192");
/* #line 76 */
/* #line 64 */
typedef struct __nesc_unnamed4252 {
  volatile unsigned 
  tbifg : 1, 
  tbie : 1, 
  tbclr : 1, 
  dummy1 : 1, 
  tbmc : 2, 
  tbid : 2, 
  tbssel : 2, 
  dummy2 : 1, 
  tbcntl : 2, 
  tbclgrp : 2;
} __attribute_packed  tbctl_t;
/* #line 91 */
/* #line 78 */
typedef struct __nesc_unnamed4253 {
  volatile unsigned 
  ccifg : 1, 
  cov : 1, 
  out : 1, 
  cci : 1, 
  ccie : 1, 
  outmod : 3, 
  cap : 1, 
  clld : 2, 
  scs : 1, 
  ccis : 2, 
  cm : 2;
} __attribute_packed  tbcctl_t;


struct timerb_t {
  tbctl_t ctl;
  tbcctl_t cctl0;
  tbcctl_t cctl1;
  tbcctl_t cctl2;

  tbcctl_t cctl3;
  tbcctl_t cctl4;
  tbcctl_t cctl5;
  tbcctl_t cctl6;



  volatile unsigned tbr;
  volatile unsigned tbccr0;
  volatile unsigned tbccr1;
  volatile unsigned tbccr2;

  volatile unsigned tbccr3;
  volatile unsigned tbccr4;
  volatile unsigned tbccr5;
  volatile unsigned tbccr6;
};





struct timerb_t;
/* # 20 "/opt/local/msp430/include/msp430/basic_clock.h" 3 */
volatile unsigned char DCOCTL __asm ("0x0056");

volatile unsigned char BCSCTL1 __asm ("0x0057");

volatile unsigned char BCSCTL2 __asm ("0x0058");
/* # 18 "/opt/local/msp430/include/msp430/adc12.h" 3 */
volatile unsigned int ADC12CTL0 __asm ("0x01A0");

volatile unsigned int ADC12CTL1 __asm ("0x01A2");
/* #line 42 */
/* #line 30 */
typedef struct __nesc_unnamed4254 {
  volatile unsigned 
  adc12sc : 1, 
  enc : 1, 
  adc12tovie : 1, 
  adc12ovie : 1, 
  adc12on : 1, 
  refon : 1, 
  r2_5v : 1, 
  msc : 1, 
  sht0 : 4, 
  sht1 : 4;
} __attribute_packed  adc12ctl0_t;
/* #line 54 */
/* #line 44 */
typedef struct __nesc_unnamed4255 {
  volatile unsigned 
  adc12busy : 1, 
  conseq : 2, 
  adc12ssel : 2, 
  adc12div : 3, 
  issh : 1, 
  shp : 1, 
  shs : 2, 
  cstartadd : 4;
} __attribute_packed  adc12ctl1_t;
/* #line 74 */
/* #line 56 */
typedef struct __nesc_unnamed4256 {
  volatile unsigned 
  bit0 : 1, 
  bit1 : 1, 
  bit2 : 1, 
  bit3 : 1, 
  bit4 : 1, 
  bit5 : 1, 
  bit6 : 1, 
  bit7 : 1, 
  bit8 : 1, 
  bit9 : 1, 
  bit10 : 1, 
  bit11 : 1, 
  bit12 : 1, 
  bit13 : 1, 
  bit14 : 1, 
  bit15 : 1;
} __attribute_packed  adc12xflg_t;


struct adc12_t {
  adc12ctl0_t ctl0;
  adc12ctl1_t ctl1;
  adc12xflg_t ifg;
  adc12xflg_t ie;
  adc12xflg_t iv;
};




struct adc12_t;
/* # 83 "/opt/local/msp430/include/msp430x16x.h" 3 */
volatile unsigned char ME1 __asm ("0x0004");





volatile unsigned char ME2 __asm ("0x0005");
/* # 169 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/msp430hardware.h" */
static volatile uint8_t U0CTLnr __asm ("0x0070");
static volatile uint8_t I2CTCTLnr __asm ("0x0071");
static volatile uint8_t I2CDCTLnr __asm ("0x0072");
/* #line 204 */
typedef uint8_t mcu_power_t  ;
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;


enum __nesc_unnamed4257 {
  MSP430_POWER_ACTIVE = 0, 
  MSP430_POWER_LPM0 = 1, 
  MSP430_POWER_LPM1 = 2, 
  MSP430_POWER_LPM2 = 3, 
  MSP430_POWER_LPM3 = 4, 
  MSP430_POWER_LPM4 = 5
};

static inline void __nesc_disable_interrupt(void )  ;





static inline void __nesc_enable_interrupt(void )  ;




typedef bool __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts);






__nesc_atomic_t __nesc_atomic_start(void )   ;







void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)   ;
/* #line 259 */
typedef struct { unsigned char nxdata[4]; }  nx_float;typedef float __nesc_nxbase_nx_float  ;
/* # 8 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosb/hardware.h" */
enum __nesc_unnamed4258 {
  TOS_SLEEP_NONE = MSP430_POWER_ACTIVE
};
/* #line 36 */
static inline void TOSH_SET_SIMO0_PIN()  ;
/* #line 36 */
static inline void TOSH_CLR_SIMO0_PIN()  ;
/* #line 36 */
static inline void TOSH_MAKE_SIMO0_OUTPUT()  ;
static inline void TOSH_SET_UCLK0_PIN()  ;
/* #line 37 */
static inline void TOSH_CLR_UCLK0_PIN()  ;
/* #line 37 */
static inline void TOSH_MAKE_UCLK0_OUTPUT()  ;
/* #line 79 */
enum __nesc_unnamed4259 {

  TOSH_HUMIDITY_ADDR = 5, 
  TOSH_HUMIDTEMP_ADDR = 3, 
  TOSH_HUMIDITY_RESET = 0x1E
};



static inline void TOSH_SET_FLASH_CS_PIN()  ;
/* #line 88 */
static inline void TOSH_CLR_FLASH_CS_PIN()  ;
/* #line 88 */
static inline void TOSH_MAKE_FLASH_CS_OUTPUT()  ;
static inline void TOSH_SET_FLASH_HOLD_PIN()  ;
/* #line 89 */
static inline void TOSH_MAKE_FLASH_HOLD_OUTPUT()  ;
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/Storage.h" */
typedef uint8_t volume_id_t;
typedef uint32_t storage_addr_t;
typedef uint32_t storage_len_t;
typedef uint32_t storage_cookie_t;

enum __nesc_unnamed4260 {
  SEEK_BEGINNING = 0
};
/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/stm25p/Stm25p.h" */
typedef storage_addr_t stm25p_addr_t;
typedef storage_len_t stm25p_len_t;

enum __nesc_unnamed4261 {
  STM25P_NUM_SECTORS = 16, 
  STM25P_SECTOR_SIZE_LOG2 = 16, 
  STM25P_SECTOR_SIZE = 1L << STM25P_SECTOR_SIZE_LOG2, 
  STM25P_SECTOR_MASK = 0xffff, 
  STM25P_PAGE_SIZE_LOG2 = 8, 
  STM25P_PAGE_SIZE = 1 << STM25P_PAGE_SIZE_LOG2, 
  STM25P_PAGE_MASK = STM25P_PAGE_SIZE - 1, 
  STM25P_INVALID_ADDRESS = 0xffffffff
};




/* #line 54 */
typedef struct stm25p_volume_info_t {
  uint8_t base;
  uint8_t size;
} stm25p_volume_info_t;
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420.h" */
typedef uint8_t cc2420_status_t;
/* #line 93 */
/* #line 87 */
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
}  security_header_t;
/* #line 113 */
/* #line 95 */
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
}  cc2420_header_t;





/* #line 118 */
typedef nx_struct cc2420_footer_t {
}  cc2420_footer_t;
/* #line 143 */
/* #line 128 */
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
}  





cc2420_metadata_t;





/* #line 146 */
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
}  cc2420_packet_t;
/* #line 179 */
enum __nesc_unnamed4262 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4263 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
/* # 6 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/AM.h" */
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4264 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4265 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
/* # 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/Serial.h" */
typedef uint8_t uart_id_t;



enum __nesc_unnamed4266 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4267 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4268 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
/* #line 121 */
/* #line 109 */
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







/* #line 123 */
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
}  serial_header_t;




/* #line 131 */
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
}  serial_packet_t;



/* #line 136 */
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
}  serial_metadata_t;
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosa/platform_message.h" */
/* #line 56 */
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



/* #line 61 */
typedef union TOSRadioFooter {
  cc2420_footer_t cc2420;
} message_footer_t;




/* #line 65 */
typedef union TOSRadioMetadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
/* # 19 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/message.h" */
/* #line 14 */
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
}  message_t;
/* # 43 "../universal_sensors/SensorSample.h" */
/* #line 40 */
typedef struct sensor_sample {
  uint32_t sample_num;
  uint16_t sin_value;
} sensor_sample_t;




/* #line 45 */
typedef nx_struct nx_sensor_sample {
  nx_uint32_t sample_num;
  nx_uint16_t sin_value;
}  nx_sensor_sample_t;
/* # 43 "../LowPowerSensingMsgs.h" */
enum __nesc_unnamed4269 {
  AM_SERIAL_REQUEST_SAMPLES_MSG = 0x92, 
  AM_REQUEST_SAMPLES_MSG = 0x93, 

  AM_SAMPLE_MSG = 0x98, 
  AM_SERIAL_SAMPLE_MSG = 0x99
};




/* #line 51 */
typedef nx_struct serial_request_samples_msg {
  nx_am_addr_t addr;
  nx_uint32_t sample_num;
}  serial_request_samples_msg_t;


/* #line 56 */
typedef nx_struct request_samples_msg {
}  request_samples_msg_t;



/* #line 59 */
typedef nx_struct sample_msg {
  nx_sensor_sample_t sample;
}  sample_msg_t;




/* #line 63 */
typedef nx_struct serial_sample_msg {
  nx_am_addr_t src_addr;
  nx_sensor_sample_t sample;
}  serial_sample_msg_t;
/* # 45 "../LowPowerSensingConstants.h" */
enum __nesc_unnamed4270 {
  LPL_INTERVAL = 2000, 
  SAMPLING_INTERVAL = 3000, 
  MSG_QUEUE_SIZE = 50, 
  BASE_STATION_ADDR = 0
};
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.h" */
enum __nesc_unnamed4271 {
  MSP430TIMER_CM_NONE = 0, 
  MSP430TIMER_CM_RISING = 1, 
  MSP430TIMER_CM_FALLING = 2, 
  MSP430TIMER_CM_BOTH = 3, 

  MSP430TIMER_STOP_MODE = 0, 
  MSP430TIMER_UP_MODE = 1, 
  MSP430TIMER_CONTINUOUS_MODE = 2, 
  MSP430TIMER_UPDOWN_MODE = 3, 

  MSP430TIMER_TACLK = 0, 
  MSP430TIMER_TBCLK = 0, 
  MSP430TIMER_ACLK = 1, 
  MSP430TIMER_SMCLK = 2, 
  MSP430TIMER_INCLK = 3, 

  MSP430TIMER_CLOCKDIV_1 = 0, 
  MSP430TIMER_CLOCKDIV_2 = 1, 
  MSP430TIMER_CLOCKDIV_4 = 2, 
  MSP430TIMER_CLOCKDIV_8 = 3
};
/* #line 75 */
/* #line 62 */
typedef struct __nesc_unnamed4272 {

  int ccifg : 1;
  int cov : 1;
  int out : 1;
  int cci : 1;
  int ccie : 1;
  int outmod : 3;
  int cap : 1;
  int clld : 2;
  int scs : 1;
  int ccis : 2;
  int cm : 2;
} msp430_compare_control_t;
/* #line 87 */
/* #line 77 */
typedef struct __nesc_unnamed4273 {

  int taifg : 1;
  int taie : 1;
  int taclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tassel : 2;
  int _unused1 : 6;
} msp430_timer_a_control_t;
/* #line 102 */
/* #line 89 */
typedef struct __nesc_unnamed4274 {

  int tbifg : 1;
  int tbie : 1;
  int tbclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tbssel : 2;
  int _unused1 : 1;
  int cntl : 2;
  int tbclgrp : 2;
  int _unused2 : 1;
} msp430_timer_b_control_t;
/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/Leds.h" */
enum __nesc_unnamed4275 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
/* # 91 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/crc.h" */
static uint16_t crcByte(uint16_t crc, uint8_t b);
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/msp430usart.h" */
/* #line 48 */
typedef enum __nesc_unnamed4276 {

  USART_NONE = 0, 
  USART_UART = 1, 
  USART_UART_TX = 2, 
  USART_UART_RX = 3, 
  USART_SPI = 4, 
  USART_I2C = 5
} msp430_usartmode_t;










/* #line 58 */
typedef struct __nesc_unnamed4277 {
  unsigned int swrst : 1;
  unsigned int mm : 1;
  unsigned int sync : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
} __attribute_packed  msp430_uctl_t;









/* #line 69 */
typedef struct __nesc_unnamed4278 {
  unsigned int txept : 1;
  unsigned int stc : 1;
  unsigned int txwake : 1;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
} __attribute_packed  msp430_utctl_t;










/* #line 79 */
typedef struct __nesc_unnamed4279 {
  unsigned int rxerr : 1;
  unsigned int rxwake : 1;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int brk : 1;
  unsigned int oe : 1;
  unsigned int pe : 1;
  unsigned int fe : 1;
} __attribute_packed  msp430_urctl_t;
/* #line 116 */
/* #line 99 */
typedef struct __nesc_unnamed4280 {
  unsigned int ubr : 16;

  unsigned int  xwasu : 1 ;
  unsigned int mm : 1;
  unsigned int  udcef : 1 ;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int  rreqy : 3 ;

  unsigned int  qzmrr : 1 ;
  unsigned int stc : 1;
  unsigned int  tcsox : 2 ;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
  unsigned int  iumuv : 0 ;
} msp430_spi_config_t;





/* #line 118 */
typedef struct __nesc_unnamed4281 {
  uint16_t ubr;
  uint8_t uctl;
  uint8_t utctl;
} msp430_spi_registers_t;




/* #line 124 */
typedef union __nesc_unnamed4282 {
  msp430_spi_config_t spiConfig;
  msp430_spi_registers_t spiRegisters;
} msp430_spi_union_config_t;

msp430_spi_union_config_t msp430_spi_default_config = { 
{ 
.ubr = 0x0002, 
.ssel = 0x02, 
.clen = 1, 
.listen = 0, 
.mm = 1, 
.ckph = 1, 
.ckpl = 0, 
.stc = 1 } };
/* #line 169 */
/* #line 150 */
typedef enum __nesc_unnamed4283 {

  UBR_32KHZ_1200 = 0x001B, UMCTL_32KHZ_1200 = 0x94, 
  UBR_32KHZ_1800 = 0x0012, UMCTL_32KHZ_1800 = 0x84, 
  UBR_32KHZ_2400 = 0x000D, UMCTL_32KHZ_2400 = 0x6D, 
  UBR_32KHZ_4800 = 0x0006, UMCTL_32KHZ_4800 = 0x77, 
  UBR_32KHZ_9600 = 0x0003, UMCTL_32KHZ_9600 = 0x29, 

  UBR_1MHZ_1200 = 0x0369, UMCTL_1MHZ_1200 = 0x7B, 
  UBR_1MHZ_1800 = 0x0246, UMCTL_1MHZ_1800 = 0x55, 
  UBR_1MHZ_2400 = 0x01B4, UMCTL_1MHZ_2400 = 0xDF, 
  UBR_1MHZ_4800 = 0x00DA, UMCTL_1MHZ_4800 = 0xAA, 
  UBR_1MHZ_9600 = 0x006D, UMCTL_1MHZ_9600 = 0x44, 
  UBR_1MHZ_19200 = 0x0036, UMCTL_1MHZ_19200 = 0xB5, 
  UBR_1MHZ_38400 = 0x001B, UMCTL_1MHZ_38400 = 0x94, 
  UBR_1MHZ_57600 = 0x0012, UMCTL_1MHZ_57600 = 0x84, 
  UBR_1MHZ_76800 = 0x000D, UMCTL_1MHZ_76800 = 0x6D, 
  UBR_1MHZ_115200 = 0x0009, UMCTL_1MHZ_115200 = 0x10, 
  UBR_1MHZ_230400 = 0x0004, UMCTL_1MHZ_230400 = 0x55
} msp430_uart_rate_t;
/* #line 200 */
/* #line 171 */
typedef struct __nesc_unnamed4284 {
  unsigned int ubr : 16;

  unsigned int umctl : 8;

  unsigned int  axlwe : 1 ;
  unsigned int mm : 1;
  unsigned int  wmvxd : 1 ;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
  unsigned int  tflid : 0 ;

  unsigned int  edbho : 3 ;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int  dweup : 1 ;

  unsigned int  tleax : 2 ;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int  edwaj : 4 ;
  unsigned int  phxwu : 0 ;

  unsigned int utxe : 1;
  unsigned int urxe : 1;
} msp430_uart_config_t;








/* #line 202 */
typedef struct __nesc_unnamed4285 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl;
  uint8_t utctl;
  uint8_t urctl;
  uint8_t ume;
} msp430_uart_registers_t;




/* #line 211 */
typedef union __nesc_unnamed4286 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;

msp430_uart_union_config_t msp430_uart_default_config = { 
{ 
.utxe = 1, 
.urxe = 1, 
.ubr = UBR_1MHZ_57600, 
.umctl = UMCTL_1MHZ_57600, 
.ssel = 0x02, 
.pena = 0, 
.pev = 0, 
.spb = 0, 
.clen = 1, 
.listen = 0, 
.mm = 0, 
.ckpl = 0, 
.urxse = 0, 
.urxeie = 1, 
.urxwie = 0, 
.utxe = 1, 
.urxe = 1 } };
/* #line 248 */
/* #line 240 */
typedef struct __nesc_unnamed4287 {
  unsigned int i2cstt : 1;
  unsigned int i2cstp : 1;
  unsigned int i2cstb : 1;
  unsigned int i2cctrx : 1;
  unsigned int i2cssel : 2;
  unsigned int i2ccrm : 1;
  unsigned int i2cword : 1;
} __attribute_packed  msp430_i2ctctl_t;
/* #line 276 */
/* #line 253 */
typedef struct __nesc_unnamed4288 {
  unsigned int  xngmy : 1 ;
  unsigned int mst : 1;
  unsigned int  mjpvi : 1 ;
  unsigned int listen : 1;
  unsigned int xa : 1;
  unsigned int  aaslo : 1 ;
  unsigned int txdmaen : 1;
  unsigned int rxdmaen : 1;

  unsigned int  uflim : 4 ;
  unsigned int i2cssel : 2;
  unsigned int i2crm : 1;
  unsigned int i2cword : 1;

  unsigned int i2cpsc : 8;

  unsigned int i2csclh : 8;

  unsigned int i2cscll : 8;

  unsigned int i2coa : 10;
  unsigned int  fmknu : 6 ;
} msp430_i2c_config_t;








/* #line 278 */
typedef struct __nesc_unnamed4289 {
  uint8_t uctl;
  uint8_t i2ctctl;
  uint8_t i2cpsc;
  uint8_t i2csclh;
  uint8_t i2cscll;
  uint16_t i2coa;
} msp430_i2c_registers_t;




/* #line 287 */
typedef union __nesc_unnamed4290 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
/* #line 309 */
typedef uint8_t uart_speed_t;
typedef uint8_t uart_parity_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4291 {
  TOS_UART_1200 = 0, 
  TOS_UART_1800 = 1, 
  TOS_UART_2400 = 2, 
  TOS_UART_4800 = 3, 
  TOS_UART_9600 = 4, 
  TOS_UART_19200 = 5, 
  TOS_UART_38400 = 6, 
  TOS_UART_57600 = 7, 
  TOS_UART_76800 = 8, 
  TOS_UART_115200 = 9, 
  TOS_UART_230400 = 10
};

enum __nesc_unnamed4292 {
  TOS_UART_OFF, 
  TOS_UART_RONLY, 
  TOS_UART_TONLY, 
  TOS_UART_DUPLEX
};

enum __nesc_unnamed4293 {
  TOS_UART_PARITY_NONE, 
  TOS_UART_PARITY_EVEN, 
  TOS_UART_PARITY_ODD
};
/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.h" */
typedef struct __nesc_unnamed4294 {
/* #line 40 */
  int notUsed;
} 
/* #line 40 */
TMilli;
typedef struct __nesc_unnamed4295 {
/* #line 41 */
  int notUsed;
} 
/* #line 41 */
T32khz;
typedef struct __nesc_unnamed4296 {
/* #line 42 */
  int notUsed;
} 
/* #line 42 */
TMicro;
/* # 33 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/Resource.h" */
typedef uint8_t resource_client_id_t;
/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/IeeeEui64.h" */
enum __nesc_unnamed4297 {
/* #line 40 */
  IEEE_EUI64_LENGTH = 8
};


/* #line 42 */
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
/* # 35 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/Ieee154.h" */
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







/* #line 39 */
typedef struct __nesc_unnamed4298 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4299 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4300 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4301 {
  IEEE154_MIN_HDR_SZ = 6
};
/* #line 74 */
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
/* # 12 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/DallasId48.h" */
enum __nesc_unnamed4302 {
  DALLASID48_SERIAL_LENGTH = 6, 
  DALLASID48_DATA_LENGTH = 8
};








/* #line 17 */
typedef union dallasid48_serial_t {
  uint8_t data[DALLASID48_DATA_LENGTH];
  struct  {
    uint8_t family_code;
    uint8_t serial[DALLASID48_SERIAL_LENGTH];
    uint8_t crc;
  } temp ;
} dallasid48_serial_t;




static inline bool dallasid48checkCrc(const dallasid48_serial_t *id);
/* # 29 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/PlatformIeeeEui64.h" */
enum __nesc_unnamed4303 {
  IEEE_EUI64_COMPANY_ID_0 = 0x00, 
  IEEE_EUI64_COMPANY_ID_1 = 0x12, 
  IEEE_EUI64_COMPANY_ID_2 = 0x6d, 
  IEEE_EUI64_SERIAL_ID_0 = 'E', 
  IEEE_EUI64_SERIAL_ID_1 = 'P'
};
/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420TimeSyncMessage.h" */
typedef nx_uint32_t timesync_radio_t;





/* #line 45 */
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  timesync_radio_t timestamp;
}  timesync_footer_t;
/* # 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLpl.h" */
/* #line 42 */
typedef enum __nesc_unnamed4304 {
  S_LPL_NOT_SENDING, 
  S_LPL_FIRST_MESSAGE, 
  S_LPL_SENDING, 
  S_LPL_CLEAN_UP
} lpl_sendstate_t;
typedef message_t LowPowerSensingBaseC__MsgQueue__t;
typedef message_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__queue_t;
typedef /*LowPowerSensingBaseAppC.Queue*/QueueC__0__queue_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__t;
enum /*PlatformSerialC.UartC*/Msp430Uart1C__0____nesc_unnamed4305 {
  Msp430Uart1C__0__CLIENT_ID = 0U
};
typedef T32khz /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__precision_tag;
typedef uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type;
enum /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0____nesc_unnamed4306 {
  Msp430Usart1C__0__CLIENT_ID = 0U
};
enum CC2420ActiveMessageC____nesc_unnamed4307 {
  CC2420ActiveMessageC__CC2420_AM_SEND_ID = 0U
};
typedef T32khz CC2420ControlP__StartupTimer__precision_tag;
typedef uint32_t CC2420ControlP__StartupTimer__size_type;
typedef uint16_t CC2420ControlP__ReadRssi__val_t;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4308 {
  Msp430Timer32khzC__0__ALARM_ID = 0U
};
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__frequency_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__from_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__to_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC__0____nesc_unnamed4309 {
  CC2420SpiC__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0____nesc_unnamed4310 {
  Msp430Spi0C__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0____nesc_unnamed4311 {
  Msp430Usart0C__0__CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1____nesc_unnamed4312 {
  CC2420SpiC__1__CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC__2____nesc_unnamed4313 {
  CC2420SpiC__2__CLIENT_ID = 2U
};
typedef TMicro OneWireMasterC__BusyWait__precision_tag;
typedef uint16_t OneWireMasterC__BusyWait__size_type;
typedef TMicro /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag;
typedef uint16_t /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__precision_tag;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__size_type;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__precision_tag /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__precision_tag;
typedef /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__size_type;
typedef TMicro /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__frequency_tag;
typedef /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__frequency_tag /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__precision_tag;
typedef uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__size_type;
typedef T32khz CC2420TransmitP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420TransmitP__PacketTimeStamp__size_type;
typedef T32khz CC2420TransmitP__BackoffTimer__precision_tag;
typedef uint32_t CC2420TransmitP__BackoffTimer__size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC__3____nesc_unnamed4314 {
  CC2420SpiC__3__CLIENT_ID = 3U
};
typedef T32khz CC2420ReceiveP__PacketTimeStamp__precision_tag;
typedef uint32_t CC2420ReceiveP__PacketTimeStamp__size_type;
typedef T32khz CC2420PacketP__PacketTimeStamp32khz__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStamp32khz__size_type;
typedef T32khz CC2420PacketP__LocalTime32khz__precision_tag;
typedef TMilli CC2420PacketP__LocalTimeMilli__precision_tag;
typedef TMilli CC2420PacketP__PacketTimeStampMilli__precision_tag;
typedef uint32_t CC2420PacketP__PacketTimeStampMilli__size_type;
typedef T32khz /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
enum /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Timer*/Msp430Timer32khzC__1____nesc_unnamed4315 {
  Msp430Timer32khzC__1__ALARM_ID = 1U
};
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__frequency_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__frequency_tag /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type;
typedef TMilli /*CounterMilli32C.Transform*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type;
typedef T32khz /*CounterMilli32C.Transform*/TransformCounterC__1__from_precision_tag;
typedef uint16_t /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type;
typedef uint32_t /*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__from_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__to_precision_tag /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__precision_tag;
typedef /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type;
typedef T32khz /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_precision_tag;
typedef uint16_t /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_precision_tag /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__precision_tag;
typedef /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC__4____nesc_unnamed4316 {
  CC2420SpiC__4__CLIENT_ID = 4U
};
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum CC2420TinyosNetworkC____nesc_unnamed4317 {
  CC2420TinyosNetworkC__TINYOS_N_NETWORKS = 1U
};
typedef TMilli DefaultLplP__OffTimer__precision_tag;
typedef TMilli DefaultLplP__SendDoneTimer__precision_tag;
typedef TMilli PowerCycleP__OnTimer__precision_tag;
enum AMQueueP____nesc_unnamed4318 {
  AMQueueP__NUM_CLIENTS = 1U
};
enum SerialAMQueueP____nesc_unnamed4319 {
  SerialAMQueueP__NUM_CLIENTS = 1U
};
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t PlatformP__Init__init(void );
/* #line 62 */
static error_t MotePlatformC__Init__init(void );
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc" */
static void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
/* #line 43 */
static void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );



static void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
/* #line 42 */
static void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );





static void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
/* #line 45 */
static void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
/* #line 40 */
static void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__default__initClocks(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/McuPowerOverride.nc" */
static mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t Msp430ClockP__Init__init(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );
/* #line 39 */
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );
/* #line 39 */
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );
/* #line 39 */
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
uint8_t arg_0x1015d0de0);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__get(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
/* #line 39 */
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
/* #line 39 */
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
/* #line 39 */
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
uint8_t arg_0x1015d0de0);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
/* #line 86 */
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
/* #line 86 */
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
/* #line 86 */
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t time);
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );
/* #line 86 */
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t time);
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );
/* #line 57 */
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );
/* #line 47 */
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
/* #line 44 */
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );
/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t delta);
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
/* #line 68 */
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
/* #line 42 */
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );
/* #line 57 */
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
/* #line 44 */
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
/* #line 86 */
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t time);
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
/* #line 57 */
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );
/* #line 47 */
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
/* #line 44 */
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );
/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t delta);
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
/* #line 86 */
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t time);
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
/* #line 86 */
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t time);
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
/* #line 86 */
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t time);
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
/* #line 86 */
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t time);
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
/* # 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/McuSleep.nc" */
static void McuSleepC__McuSleep__sleep(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t SchedulerBasicP__TaskBasic__postTask(
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/SchedulerBasicP.nc" */
uint8_t arg_0x101487d50);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void SchedulerBasicP__TaskBasic__default__runTask(
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/SchedulerBasicP.nc" */
uint8_t arg_0x101487d50);
/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Scheduler.nc" */
static void SchedulerBasicP__Scheduler__init(void );
/* #line 72 */
static void SchedulerBasicP__Scheduler__taskLoop(void );
/* #line 65 */
static bool SchedulerBasicP__Scheduler__runNextTask(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



LowPowerSensingBaseC__SerialRequestSampleMsgsReceive__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Boot.nc" */
static void LowPowerSensingBaseC__Boot__booted(void );
/* # 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
static void LowPowerSensingBaseC__RadioAMControl__startDone(error_t error);
/* #line 138 */
static void LowPowerSensingBaseC__RadioAMControl__stopDone(error_t error);
/* #line 113 */
static void LowPowerSensingBaseC__SerialAMControl__startDone(error_t error);
/* #line 138 */
static void LowPowerSensingBaseC__SerialAMControl__stopDone(error_t error);
/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static void LowPowerSensingBaseC__SerialSampleMsgSend__sendDone(
/* #line 103 */
message_t * msg, 






error_t error);
/* #line 110 */
static void LowPowerSensingBaseC__RadioRequestSampleMsgsSend__sendDone(
/* #line 103 */
message_t * msg, 






error_t error);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



LowPowerSensingBaseC__RadioSampleMsgReceive__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc" */
static 
/* #line 71 */
/*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__t  

/*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__head(void );
/* #line 90 */
static error_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__enqueue(
/* #line 86 */
/*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__t  newVal);
/* #line 65 */
static uint8_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__maxSize(void );
/* #line 81 */
static 
/* #line 79 */
/*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__t  

/*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__dequeue(void );
/* #line 50 */
static bool /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__empty(void );







static uint8_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__size(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t LedsP__Init__init(void );
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Leds.nc" */
static void LedsP__Leds__led0Off(void );
/* #line 100 */
static void LedsP__Leds__led2Toggle(void );
/* #line 56 */
static void LedsP__Leds__led0On(void );
/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void );
/* #line 63 */
static uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void );






static bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void );
/* #line 63 */
static uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void );
/* #line 75 */
static void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void );
/* #line 70 */
static bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void );
/* #line 63 */
static uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void );
/* #line 75 */
static void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeInput(void );






static void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeOutput(void );
/* #line 70 */
static bool /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__get(void );
/* #line 63 */
static uint8_t /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__getRaw(void );
/* #line 50 */
static void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__clr(void );
/* #line 96 */
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
/* #line 89 */
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
/* #line 89 */
static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
/* #line 89 */
static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
/* #line 96 */
static void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
/* #line 96 */
static void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void );
/* #line 89 */
static void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void );
/* #line 89 */
static void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void );
/* #line 75 */
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void );
/* #line 70 */
static bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void );
/* #line 96 */
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void );
/* #line 63 */
static uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void );
/* #line 89 */
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void );
/* #line 82 */
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
/* #line 45 */
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );




static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );
/* #line 82 */
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void );
/* #line 45 */
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void );




static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void );
/* #line 82 */
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void );
/* #line 45 */
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void );




static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void );
/* #line 96 */
static void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void );
/* #line 96 */
static void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void );
/* #line 96 */
static void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void );
/* #line 82 */
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
/* #line 45 */
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );




static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr(void );
/* #line 82 */
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
/* #line 45 */
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );









static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void );
/* #line 82 */
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
/* #line 45 */
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
/* #line 40 */
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void );




static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
/* #line 40 */
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );

static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void );



static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
/* #line 40 */
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
/* #line 96 */
message_t * msg, 



error_t error);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
/* # 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
am_id_t arg_0x10199d020, 
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
am_addr_t addr, 
/* #line 71 */
message_t * msg, 








uint8_t len);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc" */
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(
/* #line 74 */
message_t * msg);
/* #line 126 */
static 
/* #line 123 */
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
/* #line 121 */
message_t * msg, 




uint8_t len);
/* #line 106 */
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
/* #line 94 */
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(
/* #line 90 */
message_t * msg, 



uint8_t len);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
am_id_t arg_0x10199c158, 
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
static am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(
/* #line 74 */
message_t * amsg);
/* #line 103 */
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(
/* #line 99 */
message_t * amsg, 



am_addr_t addr);
/* #line 147 */
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
/* #line 143 */
message_t * amsg);
/* #line 162 */
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(
/* #line 158 */
message_t * amsg, 



am_id_t t);
/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
static error_t SerialP__SplitControl__start(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void SerialP__stopDoneTask__runTask(void );
/* #line 75 */
static void SerialP__RunTx__runTask(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t SerialP__Init__init(void );
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialFlush.nc" */
static void SerialP__SerialFlush__flushDone(void );
/* #line 49 */
static void SerialP__SerialFlush__default__flush(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void SerialP__startDoneTask__runTask(void );
/* # 94 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc" */
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
/* #line 85 */
static void SerialP__SerialFrameComm__delimiterReceived(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void SerialP__defaultSerialFlushTask__runTask(void );
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SendBytePacket.nc" */
static error_t SerialP__SendBytePacket__completeSend(void );
/* #line 62 */
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
uart_id_t arg_0x101ace748, 
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
message_t * msg, 







uint8_t len);
/* #line 100 */
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
uart_id_t arg_0x101ace748, 
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
message_t * msg, 



error_t error);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
uart_id_t arg_0x101ad1c50, 
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 31 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc" */
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
uart_id_t arg_0x101acdaa8, 
/* # 31 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc" */
message_t *msg, uint8_t dataLinkLen);
/* #line 15 */
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
uart_id_t arg_0x101acdaa8);
/* # 23 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc" */
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
uart_id_t arg_0x101acdaa8, 
/* # 23 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc" */
message_t *msg, uint8_t upperLen);
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SendBytePacket.nc" */
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc" */
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
/* #line 99 */
static void HdlcTranslateC__UartStream__receiveDone(
/* #line 95 */
uint8_t * buf, 



uint16_t len, error_t error);
/* #line 57 */
static void HdlcTranslateC__UartStream__sendDone(
/* #line 53 */
uint8_t * buf, 



uint16_t len, error_t error);
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc" */
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
/* #line 79 */
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
/* #line 65 */
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfe2f0);
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfe2f0);
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartConfigure.nc" */
static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bf94c8);
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfd020, 
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
uint8_t * buf, 



uint16_t len);
/* #line 79 */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfd020, 
/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
uint8_t byte);
/* #line 99 */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfd020, 
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
uint8_t * buf, 



uint16_t len, error_t error);
/* #line 57 */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfd020, 
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
uint8_t * buf, 



uint16_t len, error_t error);
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow(void );
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfa258);
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfa258);
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfa258);
/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfa258);
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(
/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bc50c8);
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(
/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bc50c8);
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(
/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bc50c8);
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101c132f0, 
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
uint8_t data);
/* #line 49 */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101c132f0);
/* # 143 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
static void HplMsp430Usart1P__Usart__enableUartRx(void );
/* #line 123 */
static void HplMsp430Usart1P__Usart__enableUart(void );
/* #line 97 */
static void HplMsp430Usart1P__Usart__resetUsart(bool reset);
/* #line 179 */
static void HplMsp430Usart1P__Usart__disableIntr(void );
/* #line 90 */
static void HplMsp430Usart1P__Usart__setUmctl(uint8_t umctl);
/* #line 133 */
static void HplMsp430Usart1P__Usart__enableUartTx(void );
/* #line 148 */
static void HplMsp430Usart1P__Usart__disableUartRx(void );
/* #line 182 */
static void HplMsp430Usart1P__Usart__enableIntr(void );
/* #line 207 */
static void HplMsp430Usart1P__Usart__clrIntr(void );
/* #line 80 */
static void HplMsp430Usart1P__Usart__setUbr(uint16_t ubr);
/* #line 224 */
static void HplMsp430Usart1P__Usart__tx(uint8_t data);
/* #line 128 */
static void HplMsp430Usart1P__Usart__disableUart(void );
/* #line 174 */
static void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config);
/* #line 158 */
static void HplMsp430Usart1P__Usart__disableSpi(void );
/* #line 138 */
static void HplMsp430Usart1P__Usart__disableUartTx(void );
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AsyncStdControl.nc" */
static error_t HplMsp430Usart1P__AsyncStdControl__start(void );









static error_t HplMsp430Usart1P__AsyncStdControl__stop(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
uint8_t arg_0x101d3f220, 
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
uint8_t data);
/* #line 49 */
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
uint8_t arg_0x101d3f220);
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);
/* #line 49 */
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void );
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
static bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );
/* #line 70 */
static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceRequested.nc" */
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d807e8);
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d7d9b8);
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d7d9b8);
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc" */
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d81658);
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d81658);
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d81658);
/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d81658);
/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ArbiterInfo.nc" */
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc" */
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc" */
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
/* #line 81 */
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartConfigure.nc" */
static msp430_uart_union_config_t *TelosSerialP__Msp430UartConfigure__getConfig(void );
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void TelosSerialP__Resource__granted(void );
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc" */
static error_t TelosSerialP__StdControl__start(void );









static error_t TelosSerialP__StdControl__stop(void );
/* # 31 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc" */
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
/* #line 15 */
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
static error_t CC2420CsmaP__SplitControl__start(void );
/* #line 130 */
static error_t CC2420CsmaP__SplitControl__stop(void );
/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
static void CC2420CsmaP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
/* #line 60 */
static void CC2420CsmaP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);
/* #line 81 */
static void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t * msg);
/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc" */
static void CC2420CsmaP__CC2420Transmit__sendDone(message_t * p_msg, error_t error);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static error_t CC2420CsmaP__Send__send(
/* #line 67 */
message_t * msg, 







uint8_t len);
/* #line 112 */
static uint8_t CC2420CsmaP__Send__maxPayloadLength(void );
/* # 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc" */
static void CC2420CsmaP__CC2420Power__startOscillatorDone(void );
/* #line 56 */
static void CC2420CsmaP__CC2420Power__startVRegDone(void );
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void CC2420CsmaP__Resource__granted(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void CC2420CsmaP__sendDone_task__runTask(void );
/* #line 75 */
static void CC2420CsmaP__stopDone_task__runTask(void );
/* #line 75 */
static void CC2420CsmaP__startDone_task__runTask(void );
/* # 91 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc" */
static bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
/* #line 115 */
static bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );
/* #line 110 */
static bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );
/* #line 64 */
static ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void );




static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );
/* #line 52 */
static error_t CC2420ControlP__CC2420Config__sync(void );
/* #line 75 */
static uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static void CC2420ControlP__StartupTimer__fired(void );
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Read.nc" */
static void CC2420ControlP__ReadRssi__default__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void CC2420ControlP__syncDone__runTask(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t CC2420ControlP__Init__init(void );
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void CC2420ControlP__SpiResource__granted(void );
/* #line 102 */
static void CC2420ControlP__SyncResource__granted(void );
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc" */
static error_t CC2420ControlP__CC2420Power__startOscillator(void );
/* #line 90 */
static error_t CC2420ControlP__CC2420Power__rxOn(void );
/* #line 51 */
static error_t CC2420ControlP__CC2420Power__startVReg(void );
/* #line 63 */
static error_t CC2420ControlP__CC2420Power__stopVReg(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void CC2420ControlP__sync__runTask(void );
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420ControlP__Resource__release(void );
/* #line 88 */
static error_t CC2420ControlP__Resource__request(void );
/* # 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
static void CC2420ControlP__InterruptCCA__fired(void );
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void CC2420ControlP__RssiResource__granted(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type dt);
/* #line 73 */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
/* #line 64 */
static /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void );
/* # 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
/* #line 103 */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);
/* #line 66 */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);






static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void );
/* #line 43 */
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void );


static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
/* #line 40 */
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void );
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void );

static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void );
/* #line 43 */
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void );


static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void );
/* #line 40 */
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void );
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void );


static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void );
/* #line 43 */
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void );


static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
/* #line 40 */
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void );
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void );
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioCapture.nc" */
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );
/* #line 66 */
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );
/* #line 53 */
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
static void HplMsp430InterruptP__Port14__clear(void );
/* #line 47 */
static void HplMsp430InterruptP__Port14__disable(void );
/* #line 67 */
static void HplMsp430InterruptP__Port14__edge(bool low_to_high);
/* #line 42 */
static void HplMsp430InterruptP__Port14__enable(void );









static void HplMsp430InterruptP__Port26__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port26__default__fired(void );
/* #line 52 */
static void HplMsp430InterruptP__Port17__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port17__default__fired(void );
/* #line 52 */
static void HplMsp430InterruptP__Port21__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port21__default__fired(void );
/* #line 52 */
static void HplMsp430InterruptP__Port12__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port12__default__fired(void );
/* #line 52 */
static void HplMsp430InterruptP__Port24__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port24__default__fired(void );
/* #line 52 */
static void HplMsp430InterruptP__Port15__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port15__default__fired(void );
/* #line 52 */
static void HplMsp430InterruptP__Port27__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port27__default__fired(void );
/* #line 52 */
static void HplMsp430InterruptP__Port10__clear(void );
/* #line 47 */
static void HplMsp430InterruptP__Port10__disable(void );
/* #line 67 */
static void HplMsp430InterruptP__Port10__edge(bool low_to_high);
/* #line 42 */
static void HplMsp430InterruptP__Port10__enable(void );









static void HplMsp430InterruptP__Port22__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port22__default__fired(void );
/* #line 52 */
static void HplMsp430InterruptP__Port13__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port13__default__fired(void );
/* #line 52 */
static void HplMsp430InterruptP__Port25__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port25__default__fired(void );
/* #line 52 */
static void HplMsp430InterruptP__Port16__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port16__default__fired(void );
/* #line 52 */
static void HplMsp430InterruptP__Port20__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port20__default__fired(void );
/* #line 52 */
static void HplMsp430InterruptP__Port11__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port11__default__fired(void );
/* #line 52 */
static void HplMsp430InterruptP__Port23__clear(void );
/* #line 72 */
static void HplMsp430InterruptP__Port23__default__fired(void );
/* #line 72 */
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );
/* #line 53 */
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );
/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );
/* #line 54 */
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SpiPacket.nc" */
static void CC2420SpiP__SpiPacket__sendDone(
/* #line 75 */
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
static error_t CC2420SpiP__Fifo__continueRead(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102200328, 
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
uint8_t * data, uint8_t length);
/* #line 91 */
static void CC2420SpiP__Fifo__default__writeDone(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102200328, 
/* # 91 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
uint8_t * data, uint8_t length, error_t error);
/* #line 82 */
static cc2420_status_t CC2420SpiP__Fifo__write(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102200328, 
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
uint8_t * data, uint8_t length);
/* #line 51 */
static cc2420_status_t CC2420SpiP__Fifo__beginRead(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102200328, 
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
uint8_t * data, uint8_t length);
/* #line 71 */
static void CC2420SpiP__Fifo__default__readDone(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102200328, 
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
uint8_t * data, uint8_t length, error_t error);
/* # 31 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc" */
static void CC2420SpiP__ChipSpiResource__abortRelease(void );







static error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void CC2420SpiP__SpiResource__granted(void );
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc" */
static cc2420_status_t CC2420SpiP__Ram__write(
/* # 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint16_t arg_0x1021ff4d8, 
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc" */
uint8_t offset, uint8_t * data, uint8_t length);
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc" */
static cc2420_status_t CC2420SpiP__Reg__read(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x1021fe220, 
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc" */
uint16_t *data);







static cc2420_status_t CC2420SpiP__Reg__write(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x1021fe220, 
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc" */
uint16_t data);
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420SpiP__Resource__release(
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102202158);
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420SpiP__Resource__immediateRequest(
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102202158);
/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420SpiP__Resource__request(
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102202158);
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void CC2420SpiP__Resource__default__granted(
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102202158);
/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static bool CC2420SpiP__Resource__isOwner(
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102202158);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void CC2420SpiP__grant__runTask(void );
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
static cc2420_status_t CC2420SpiP__Strobe__strobe(
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102250020);
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t StateImplP__Init__init(void );
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static uint8_t StateImplP__State__getState(
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
uint8_t arg_0x102287020);
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static void StateImplP__State__toIdle(
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
uint8_t arg_0x102287020);
/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static bool StateImplP__State__isState(
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
uint8_t arg_0x102287020, 
/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
uint8_t myState);
/* #line 61 */
static bool StateImplP__State__isIdle(
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
uint8_t arg_0x102287020);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static error_t StateImplP__State__requestState(
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
uint8_t arg_0x102287020, 
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
uint8_t reqState);





static void StateImplP__State__forceState(
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
uint8_t arg_0x102287020, 
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
uint8_t reqState);
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(
/* # 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022a74b8);
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(
/* # 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022a74b8);
/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SpiPacket.nc" */
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(
/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022a52f0, 
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SpiPacket.nc" */
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
/* #line 82 */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(
/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022a52f0, 
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SpiPacket.nc" */
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc" */
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022f92f0);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SpiByte.nc" */
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022fa0c8);
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022fa0c8);
/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022fa0c8);
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022fa0c8);
/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022fa0c8);
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022a92f0);
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022a92f0);
/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022a92f0);
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022a92f0);
/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022a92f0);
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data);
/* #line 49 */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void );
/* # 180 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
static void HplMsp430Usart0P__Usart__enableRxIntr(void );
/* #line 197 */
static void HplMsp430Usart0P__Usart__clrRxIntr(void );
/* #line 97 */
static void HplMsp430Usart0P__Usart__resetUsart(bool reset);
/* #line 179 */
static void HplMsp430Usart0P__Usart__disableIntr(void );
/* #line 90 */
static void HplMsp430Usart0P__Usart__setUmctl(uint8_t umctl);
/* #line 177 */
static void HplMsp430Usart0P__Usart__disableRxIntr(void );
/* #line 207 */
static void HplMsp430Usart0P__Usart__clrIntr(void );
/* #line 80 */
static void HplMsp430Usart0P__Usart__setUbr(uint16_t ubr);
/* #line 224 */
static void HplMsp430Usart0P__Usart__tx(uint8_t data);
/* #line 128 */
static void HplMsp430Usart0P__Usart__disableUart(void );
/* #line 153 */
static void HplMsp430Usart0P__Usart__enableSpi(void );
/* #line 168 */
static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config);
/* #line 231 */
static uint8_t HplMsp430Usart0P__Usart__rx(void );
/* #line 192 */
static bool HplMsp430Usart0P__Usart__isRxIntrPending(void );
/* #line 158 */
static void HplMsp430Usart0P__Usart__disableSpi(void );
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
uint8_t arg_0x101d3f220, 
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
uint8_t data);
/* #line 49 */
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
uint8_t arg_0x101d3f220);
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc" */
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawI2CInterrupts__fired(void );
/* #line 39 */
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__default__fired(
/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
uint8_t arg_0x101d3bc58);
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(uint8_t data);
/* #line 49 */
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init(void );
/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id);
/* #line 53 */
static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );








static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceRequested.nc" */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d807e8);
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceRequested.nc" */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d807e8);
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(
/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d7d9b8);
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(
/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d7d9b8);
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc" */
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
/* #line 73 */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested(void );
/* #line 46 */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void );
/* #line 81 */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__immediateRequested(void );
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d81658);
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d81658);
/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__request(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d81658);
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d81658);
/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d81658);
/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ArbiterInfo.nc" */
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
/* # 7 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc" */
static void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
/* #line 6 */
static bool HplMsp430I2C0P__HplI2C__isI2C(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ActiveMessageAddressC.nc" */
static am_addr_t ActiveMessageAddressC__amAddress(void );
/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc" */
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
/* # 12 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/ReadId48.nc" */
static error_t Ds2411P__ReadId48__read(uint8_t *id);
/* # 10 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/OneWireStream.nc" */
static error_t OneWireMasterC__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len);
/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/BusyWait.nc" */
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__size_type dt);
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__overflow(void );
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__size_type /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__get(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
static void /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__makeInput(void );
/* #line 43 */
static bool /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__get(void );


static void /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__makeOutput(void );
/* #line 41 */
static void /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__clr(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/LocalIeeeEui64.nc" */
static ieee_eui64_t DallasId48ToIeeeEui64C__LocalIeeeEui64__getId(void );
/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
static void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
/* #line 60 */
static void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);
/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/ReceiveIndicator.nc" */
static bool CC2420TransmitP__EnergyIndicator__isReceiving(void );
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioCapture.nc" */
static void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static void CC2420TransmitP__BackoffTimer__fired(void );
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc" */
static void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t * message);
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc" */
static error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);






static error_t CC2420TransmitP__Send__resend(bool useCca);
/* # 24 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc" */
static void CC2420TransmitP__ChipSpiResource__releasing(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t CC2420TransmitP__Init__init(void );
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void CC2420TransmitP__SpiResource__granted(void );
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc" */
static error_t CC2420TransmitP__StdControl__start(void );









static error_t CC2420TransmitP__StdControl__stop(void );
/* # 91 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
static void CC2420TransmitP__TXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
/* #line 71 */
static void CC2420TransmitP__TXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc" */
static void CC2420ReceiveP__CC2420Config__syncDone(error_t error);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void CC2420ReceiveP__receiveDone_task__runTask(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc" */
static void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
/* #line 49 */
static void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t CC2420ReceiveP__Init__init(void );
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void CC2420ReceiveP__SpiResource__granted(void );
/* # 91 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
static void CC2420ReceiveP__RXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
/* #line 71 */
static void CC2420ReceiveP__RXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/ReceiveIndicator.nc" */
static bool CC2420ReceiveP__PacketIndicator__isReceiving(void );
/* # 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
static void CC2420ReceiveP__InterruptFIFOP__fired(void );
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc" */
static error_t CC2420ReceiveP__StdControl__start(void );









static error_t CC2420ReceiveP__StdControl__stop(void );
/* # 77 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc" */
static void CC2420PacketP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId);
/* #line 75 */
static uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t *p_msg);
/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc" */
static void CC2420PacketP__PacketTimeStamp32khz__clear(
/* #line 66 */
message_t * msg);
/* #line 78 */
static void CC2420PacketP__PacketTimeStamp32khz__set(
/* #line 73 */
message_t * msg, 




CC2420PacketP__PacketTimeStamp32khz__size_type value);
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
static cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420PacketP__CC2420PacketBody__getMetadata(message_t * msg);
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc" */
static uint8_t CC2420PacketP__PacketTimeSyncOffset__get(
/* #line 53 */
message_t * msg);
/* #line 50 */
static bool CC2420PacketP__PacketTimeSyncOffset__isSet(
/* #line 46 */
message_t * msg);
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc" */
static error_t CC2420PacketP__Acks__requestAck(
/* #line 53 */
message_t * msg);
/* #line 71 */
static error_t CC2420PacketP__Acks__noAck(
/* #line 65 */
message_t * msg);
/* #line 85 */
static bool CC2420PacketP__Acks__wasAcked(
/* #line 80 */
message_t * msg);
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type dt);
/* #line 73 */
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
/* #line 64 */
static /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void );
/* # 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );
/* #line 103 */
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type dt);
/* #line 116 */
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm(void );
/* #line 73 */
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
/* # 136 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
/* #line 129 */
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
/* #line 78 */
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
/* # 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
/* #line 83 */
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc" */
uint8_t arg_0x1028742f8);
/* # 92 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc" */
uint8_t arg_0x1028742f8);
/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc" */
uint8_t arg_0x1028742f8, 
/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc" */
uint8_t arg_0x1028742f8);
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc" */
static uint16_t RandomMlcgC__Random__rand16(void );
/* #line 46 */
static uint32_t RandomMlcgC__Random__rand32(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t RandomMlcgC__Init__init(void );
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void UniqueSendP__SubSend__sendDone(
/* #line 96 */
message_t * msg, 



error_t error);
/* #line 75 */
static error_t UniqueSendP__Send__send(
/* #line 67 */
message_t * msg, 







uint8_t len);
/* #line 112 */
static uint8_t UniqueSendP__Send__maxPayloadLength(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t UniqueSendP__Init__init(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



UniqueReceiveP__SubReceive__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t UniqueReceiveP__Init__init(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



UniqueReceiveP__DuplicateReceive__default__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void CC2420TinyosNetworkP__SubSend__sendDone(
/* #line 96 */
message_t * msg, 



error_t error);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



CC2420TinyosNetworkP__SubReceive__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void CC2420TinyosNetworkP__grantTask__runTask(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static error_t CC2420TinyosNetworkP__ActiveSend__send(
/* #line 67 */
message_t * msg, 







uint8_t len);
/* #line 112 */
static uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



CC2420TinyosNetworkP__BareReceive__default__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420TinyosNetworkP__Resource__release(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
uint8_t arg_0x10297f060);
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420TinyosNetworkP__Resource__immediateRequest(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
uint8_t arg_0x10297f060);
/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420TinyosNetworkP__Resource__request(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
uint8_t arg_0x10297f060);
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void CC2420TinyosNetworkP__Resource__default__granted(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
uint8_t arg_0x10297f060);
/* # 125 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static 
/* #line 123 */
void * 

CC2420TinyosNetworkP__BareSend__getPayload(
/* #line 122 */
message_t * msg, 


uint8_t len);
/* #line 100 */
static void CC2420TinyosNetworkP__BareSend__default__sendDone(
/* #line 96 */
message_t * msg, 



error_t error);
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );
/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
static error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
/* #line 53 */
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



DefaultLplP__SubReceive__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void DefaultLplP__SubSend__sendDone(
/* #line 96 */
message_t * msg, 



error_t error);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void DefaultLplP__send__runTask(void );
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
static void DefaultLplP__RadioBackoff__requestCca(message_t * msg);
/* #line 81 */
static void DefaultLplP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void DefaultLplP__RadioBackoff__requestCongestionBackoff(message_t * msg);
/* # 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static void DefaultLplP__OffTimer__fired(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static error_t DefaultLplP__Send__send(
/* #line 67 */
message_t * msg, 







uint8_t len);
/* #line 112 */
static uint8_t DefaultLplP__Send__maxPayloadLength(void );
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/LowPowerListening.nc" */
static void DefaultLplP__LowPowerListening__setRemoteWakeupInterval(
/* #line 62 */
message_t * msg, 


uint16_t intervalMs);





static uint16_t DefaultLplP__LowPowerListening__getRemoteWakeupInterval(
/* #line 68 */
message_t * msg);
/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc" */
static void DefaultLplP__Resend__sendDone(message_t * p_msg, error_t error);
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t DefaultLplP__Init__init(void );
/* # 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
static void DefaultLplP__SubControl__startDone(error_t error);
/* #line 138 */
static void DefaultLplP__SubControl__stopDone(error_t error);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void DefaultLplP__startRadio__runTask(void );
/* # 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static void DefaultLplP__SendDoneTimer__fired(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void DefaultLplP__resend__runTask(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/PowerCycle.nc" */
static void DefaultLplP__PowerCycle__detected(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void DefaultLplP__stopRadio__runTask(void );
/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
static error_t PowerCycleP__SplitControl__start(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void PowerCycleP__startRadio__runTask(void );
/* # 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
static void PowerCycleP__SubControl__startDone(error_t error);
/* #line 138 */
static void PowerCycleP__SubControl__stopDone(error_t error);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void PowerCycleP__getCca__runTask(void );
/* # 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static void PowerCycleP__OnTimer__fired(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/PowerCycle.nc" */
static uint16_t PowerCycleP__PowerCycle__getSleepInterval(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void PowerCycleP__stopRadio__runTask(void );
/* # 6 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SystemLowPowerListening.nc" */
static uint16_t SystemLowPowerListeningP__SystemLowPowerListening__getDefaultRemoteWakeupInterval(void );
static uint16_t SystemLowPowerListeningP__SystemLowPowerListening__getDelayAfterReceive(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



CC2420ActiveMessageP__SubReceive__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void CC2420ActiveMessageP__SubSend__sendDone(
/* #line 96 */
message_t * msg, 



error_t error);
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc" */
static void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
static void CC2420ActiveMessageP__RadioBackoff__default__requestCca(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b20d60, 
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
message_t * msg);
/* #line 81 */
static void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b20d60, 
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b20d60, 
/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
message_t * msg);
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SendNotifier.nc" */
static void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b20258, 
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SendNotifier.nc" */
am_addr_t dest, 
/* #line 57 */
message_t * msg);
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
static void CC2420ActiveMessageP__SubBackoff__requestCca(message_t * msg);
/* #line 81 */
static void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t * msg);






static void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t * msg);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc" */
static uint8_t CC2420ActiveMessageP__Packet__payloadLength(
/* #line 74 */
message_t * msg);
/* #line 106 */
static uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );
/* #line 94 */
static void CC2420ActiveMessageP__Packet__setPayloadLength(
/* #line 90 */
message_t * msg, 



uint8_t len);
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static error_t CC2420ActiveMessageP__AMSend__send(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b257d8, 
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
am_addr_t addr, 
/* #line 71 */
message_t * msg, 








uint8_t len);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



CC2420ActiveMessageP__Snoop__default__receive(
/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b23480, 
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
message_t * msg, 
void * payload, 





uint8_t len);
/* #line 78 */
static 
/* #line 74 */
message_t * 



CC2420ActiveMessageP__Receive__default__receive(
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b24908, 
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
static am_addr_t CC2420ActiveMessageP__AMPacket__source(
/* #line 84 */
message_t * amsg);
/* #line 68 */
static am_addr_t CC2420ActiveMessageP__AMPacket__address(void );









static am_addr_t CC2420ActiveMessageP__AMPacket__destination(
/* #line 74 */
message_t * amsg);
/* #line 103 */
static void CC2420ActiveMessageP__AMPacket__setDestination(
/* #line 99 */
message_t * amsg, 



am_addr_t addr);
/* #line 147 */
static am_id_t CC2420ActiveMessageP__AMPacket__type(
/* #line 143 */
message_t * amsg);
/* #line 162 */
static void CC2420ActiveMessageP__AMPacket__setType(
/* #line 158 */
message_t * amsg, 



am_id_t t);
/* #line 136 */
static bool CC2420ActiveMessageP__AMPacket__isForMe(
/* #line 133 */
message_t * amsg);
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void CC2420ActiveMessageP__RadioResource__granted(void );
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static error_t /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
/* #line 71 */
message_t * msg, 








uint8_t len);
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
/* #line 96 */
message_t * msg, 



error_t error);
/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
am_id_t arg_0x102bbe020, 
/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
message_t * msg, 






error_t error);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
uint8_t arg_0x102bc1e18, 
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
message_t * msg, 







uint8_t len);
/* #line 100 */
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
uint8_t arg_0x102bc1e18, 
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
message_t * msg, 



error_t error);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
/* #line 75 */
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__sendDone(
/* #line 103 */
message_t * msg, 






error_t error);
/* #line 80 */
static error_t /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__send(am_addr_t addr, 
/* #line 71 */
message_t * msg, 








uint8_t len);
/* #line 80 */
static error_t /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t addr, 
/* #line 71 */
message_t * msg, 








uint8_t len);
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(
/* #line 96 */
message_t * msg, 



error_t error);
/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
am_id_t arg_0x102bbe020, 
/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
message_t * msg, 






error_t error);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
uint8_t arg_0x102bc1e18, 
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
message_t * msg, 







uint8_t len);
/* #line 100 */
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
uint8_t arg_0x102bc1e18, 
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
message_t * msg, 



error_t error);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );
/* #line 75 */
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t PlatformP__MoteInit__init(void );
/* #line 62 */
static error_t PlatformP__MoteClockInit__init(void );
/* #line 62 */
static error_t PlatformP__LedsInit__init(void );
/* # 10 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosa/PlatformP.nc" */
static inline error_t PlatformP__Init__init(void );
/* # 6 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc" */
static __inline void MotePlatformC__uwait(uint16_t u);




static __inline void MotePlatformC__TOSH_wait(void );




static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set);










static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void );
/* #line 56 */
static inline error_t MotePlatformC__Init__init(void );
/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc" */
static void Msp430ClockP__Msp430ClockInit__initTimerB(void );
/* #line 42 */
static void Msp430ClockP__Msp430ClockInit__initTimerA(void );
/* #line 40 */
static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__initClocks(void );
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc" */
static volatile uint8_t Msp430ClockP__IE1 __asm ("0x0000");
static volatile uint16_t Msp430ClockP__TA0CTL __asm ("0x0160");
static volatile uint16_t Msp430ClockP__TA0IV __asm ("0x012E");
static volatile uint16_t Msp430ClockP__TBCTL __asm ("0x0180");
static volatile uint16_t Msp430ClockP__TBIV __asm ("0x011E");

enum Msp430ClockP____nesc_unnamed4320 {

  Msp430ClockP__ACLK_CALIB_PERIOD = 8, 
  Msp430ClockP__TARGET_DCO_DELTA = 4096 / 32 * Msp430ClockP__ACLK_CALIB_PERIOD
};

static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );



static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
/* #line 79 */
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
/* #line 100 */
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
/* #line 115 */
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
/* #line 130 */
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );





static inline void Msp430ClockP__startTimerA(void );
/* #line 163 */
static inline void Msp430ClockP__startTimerB(void );
/* #line 175 */
static void Msp430ClockP__set_dco_calib(int calib);





static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib);
/* #line 204 */
static inline void Msp430ClockP__busyCalibrateDco(void );
/* #line 229 */
static inline error_t Msp430ClockP__Init__init(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
uint8_t arg_0x1015d0de0);
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
static inline uint16_t /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__get(void );
/* #line 126 */
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n);
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
uint8_t arg_0x1015d0de0);
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
/* #line 81 */
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
/* #line 126 */
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );








static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n);
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t;


static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)  ;
/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
/* #line 150 */
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
/* #line 180 */
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t;


static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)  ;
/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
/* #line 150 */
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
/* #line 180 */
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t;


static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)  ;
/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
/* #line 150 */
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
/* #line 180 */
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void );
/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );
/* #line 130 */
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
/* #line 150 */
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x);
/* #line 180 */
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)  ;
/* #line 72 */
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm);
/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
/* #line 110 */
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
/* #line 130 */
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
/* #line 150 */
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
/* #line 175 */
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
/* #line 192 */
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void );
/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );
/* #line 130 */
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
/* #line 150 */
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x);
/* #line 180 */
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t;


static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)  ;
/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
/* #line 150 */
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
/* #line 180 */
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t;


static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)  ;
/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
/* #line 150 */
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
/* #line 180 */
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t;


static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)  ;
/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
/* #line 150 */
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
/* #line 180 */
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t;


static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)  ;
/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
/* #line 150 */
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
/* #line 180 */
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void Msp430TimerCommonP__VectorTimerB1__fired(void );
/* #line 39 */
static void Msp430TimerCommonP__VectorTimerA0__fired(void );
/* #line 39 */
static void Msp430TimerCommonP__VectorTimerA1__fired(void );
/* #line 39 */
static void Msp430TimerCommonP__VectorTimerB0__fired(void );
/* # 11 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc" */
void sig_TIMERA0_VECTOR(void ) /*__attribute_interrupt_12*/  ;
void sig_TIMERA1_VECTOR(void ) /*__attribute_interrupt_10*/  ;
void sig_TIMERB0_VECTOR(void ) /*__attribute_interrupt_26*/  ;
void sig_TIMERB1_VECTOR(void ) /*__attribute_interrupt_24*/  ;
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/McuPowerOverride.nc" */
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/McuSleepC.nc" */
bool McuSleepC__dirty = TRUE;
mcu_power_t McuSleepC__powerState = MSP430_POWER_ACTIVE;




const uint16_t McuSleepC__msp430PowerBits[MSP430_POWER_LPM4 + 1] = { 
0, 
0x0010, 
0x0040 + 0x0010, 
0x0080 + 0x0010, 
0x0080 + 0x0040 + 0x0010, 
0x0080 + 0x0040 + 0x0020 + 0x0010 };


static inline mcu_power_t McuSleepC__getPowerState(void );
/* #line 112 */
static inline void McuSleepC__computePowerState(void );




static inline void McuSleepC__McuSleep__sleep(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t RealMainP__SoftwareInit__init(void );
/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Boot.nc" */
static void RealMainP__Boot__booted(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
static error_t RealMainP__PlatformInit__init(void );
/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Scheduler.nc" */
static void RealMainP__Scheduler__init(void );
/* #line 72 */
static void RealMainP__Scheduler__taskLoop(void );
/* #line 65 */
static bool RealMainP__Scheduler__runNextTask(void );
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/RealMainP.nc" */
int main(void )   ;
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void SchedulerBasicP__TaskBasic__runTask(
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/SchedulerBasicP.nc" */
uint8_t arg_0x101487d50);
/* # 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/McuSleep.nc" */
static void SchedulerBasicP__McuSleep__sleep(void );
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/SchedulerBasicP.nc" */
enum SchedulerBasicP____nesc_unnamed4321 {

  SchedulerBasicP__NUM_TASKS = 30U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
/* #line 97 */
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
/* #line 124 */
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
/* #line 149 */
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
/* #line 170 */
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/LowPowerListening.nc" */
static void LowPowerSensingBaseC__LPL__setRemoteWakeupInterval(
/* #line 62 */
message_t * msg, 


uint16_t intervalMs);
/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
static am_addr_t LowPowerSensingBaseC__RadioAMPacket__source(
/* #line 84 */
message_t * amsg);
/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
static error_t LowPowerSensingBaseC__RadioAMControl__start(void );
/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc" */
static error_t LowPowerSensingBaseC__MsgQueue__enqueue(
/* #line 86 */
LowPowerSensingBaseC__MsgQueue__t  newVal);
/* #line 81 */
static 
/* #line 79 */
LowPowerSensingBaseC__MsgQueue__t  

LowPowerSensingBaseC__MsgQueue__dequeue(void );
/* #line 50 */
static bool LowPowerSensingBaseC__MsgQueue__empty(void );
/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
static error_t LowPowerSensingBaseC__SerialAMControl__start(void );
/* # 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc" */
static 
/* #line 123 */
void * 


LowPowerSensingBaseC__SerialPacket__getPayload(
/* #line 121 */
message_t * msg, 




uint8_t len);
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static error_t LowPowerSensingBaseC__SerialSampleMsgSend__send(am_addr_t addr, 
/* #line 71 */
message_t * msg, 








uint8_t len);
/* #line 80 */
static error_t LowPowerSensingBaseC__RadioRequestSampleMsgsSend__send(am_addr_t addr, 
/* #line 71 */
message_t * msg, 








uint8_t len);
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Leds.nc" */
static void LowPowerSensingBaseC__Leds__led0Off(void );
/* #line 100 */
static void LowPowerSensingBaseC__Leds__led2Toggle(void );
/* #line 56 */
static void LowPowerSensingBaseC__Leds__led0On(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
static am_addr_t LowPowerSensingBaseC__SerialAMPacket__destination(
/* #line 74 */
message_t * amsg);
/* # 60 "LowPowerSensingBaseC.nc" */
bool LowPowerSensingBaseC__serialSending;
am_addr_t LowPowerSensingBaseC__dest_addr;
message_t LowPowerSensingBaseC__request_samples_msg;
message_t LowPowerSensingBaseC__sample_msg;
serial_sample_msg_t *LowPowerSensingBaseC__sample_msg_payload;

static inline void LowPowerSensingBaseC__Boot__booted(void );





static inline void LowPowerSensingBaseC__RadioAMControl__startDone(error_t error);



static inline void LowPowerSensingBaseC__SerialAMControl__startDone(error_t error);


static inline void LowPowerSensingBaseC__RadioAMControl__stopDone(error_t error);


static inline void LowPowerSensingBaseC__SerialAMControl__stopDone(error_t error);


static inline message_t *LowPowerSensingBaseC__SerialRequestSampleMsgsReceive__receive(message_t *msg, void *payload, uint8_t len);







static inline void LowPowerSensingBaseC__RadioRequestSampleMsgsSend__sendDone(message_t *msg, error_t error);




static inline message_t *LowPowerSensingBaseC__RadioSampleMsgReceive__receive(message_t *msg, void *payload, uint8_t len);
/* #line 112 */
static void LowPowerSensingBaseC__SerialSampleMsgSend__sendDone(message_t *msg, error_t error);
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc" */
/*LowPowerSensingBaseAppC.Queue*/QueueC__0__queue_t  /*LowPowerSensingBaseAppC.Queue*/QueueC__0__queue[50];
uint8_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__head = 0;
uint8_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__tail = 0;
uint8_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__size = 0;

static inline bool /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__empty(void );



static inline uint8_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__size(void );



static inline uint8_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__maxSize(void );



static inline /*LowPowerSensingBaseAppC.Queue*/QueueC__0__queue_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__head(void );



static inline void /*LowPowerSensingBaseAppC.Queue*/QueueC__0__printQueue(void );
/* #line 85 */
static inline /*LowPowerSensingBaseAppC.Queue*/QueueC__0__queue_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__dequeue(void );
/* #line 97 */
static inline error_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__enqueue(/*LowPowerSensingBaseAppC.Queue*/QueueC__0__queue_t newVal);
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
static void LedsP__Led0__makeOutput(void );
/* #line 40 */
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );




static void LedsP__Led1__makeOutput(void );
/* #line 40 */
static void LedsP__Led1__set(void );

static void LedsP__Led2__toggle(void );



static void LedsP__Led2__makeOutput(void );
/* #line 40 */
static void LedsP__Led2__set(void );
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LedsP.nc" */
static inline error_t LedsP__Init__init(void );
/* #line 74 */
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );
/* #line 114 */
static inline void LedsP__Leds__led2Toggle(void );
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void );
/* #line 59 */
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void );
/* #line 59 */
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void );
/* #line 57 */
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__clr(void );

static inline uint8_t /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeInput(void );

static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeOutput(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
/* #line 65 */
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
/* #line 65 */
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
/* #line 67 */
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
/* #line 67 */
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
/* #line 65 */
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void );
/* #line 65 */
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void );
/* #line 59 */
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void );
/* #line 56 */
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
/* #line 56 */
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void );
/* #line 56 */
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void );
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void );



static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void );
/* #line 67 */
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void );
/* #line 67 */
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void );
/* #line 56 */
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
/* #line 56 */
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );






static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
/* #line 56 */
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );

static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void );




static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void );
/* #line 45 */
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void );
/* #line 45 */
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );





static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle(void );
/* #line 82 */
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void );
/* #line 45 */
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );

static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void );



static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
/* #line 67 */
message_t * msg, 







uint8_t len);
/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
/* # 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
am_id_t arg_0x10199d020, 
/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
message_t * msg, 






error_t error);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
am_id_t arg_0x10199c158, 
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
/* #line 101 */
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
/* #line 148 */
static inline am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg);









static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr);
/* #line 172 */
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);




static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type);
/* # 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
static void SerialP__SplitControl__startDone(error_t error);
/* #line 138 */
static void SerialP__SplitControl__stopDone(error_t error);
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t SerialP__stopDoneTask__postTask(void );
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc" */
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t SerialP__RunTx__postTask(void );
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialFlush.nc" */
static void SerialP__SerialFlush__flush(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t SerialP__startDoneTask__postTask(void );
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc" */
static error_t SerialP__SerialFrameComm__putDelimiter(void );
/* #line 79 */
static void SerialP__SerialFrameComm__resetReceive(void );
/* #line 65 */
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t SerialP__defaultSerialFlushTask__postTask(void );
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SendBytePacket.nc" */
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc" */
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
/* # 191 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
enum SerialP____nesc_unnamed4322 {
/* #line 191 */
  SerialP__RunTx = 0U
};
/* #line 191 */
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
/* #line 322 */
enum SerialP____nesc_unnamed4323 {
/* #line 322 */
  SerialP__startDoneTask = 1U
};
/* #line 322 */
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];





enum SerialP____nesc_unnamed4324 {
/* #line 328 */
  SerialP__stopDoneTask = 2U
};
/* #line 328 */
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4325 {
/* #line 337 */
  SerialP__defaultSerialFlushTask = 3U
};
/* #line 337 */
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
/* #line 81 */
enum SerialP____nesc_unnamed4326 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4327 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4328 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





/* #line 111 */
typedef enum SerialP____nesc_unnamed4329 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4330 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






/* #line 124 */
typedef struct SerialP____nesc_unnamed4331 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




/* #line 130 */
typedef struct SerialP____nesc_unnamed4332 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





/* #line 135 */
typedef struct SerialP____nesc_unnamed4333 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
/* #line 207 */
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
/* #line 234 */
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
/* #line 297 */
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );





static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );




static void SerialP__testOff(void );
/* #line 386 */
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
/* #line 510 */
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
/* #line 547 */
static inline void SerialP__RunTx__runTask(void );
/* #line 656 */
static inline void SerialP__SerialFrameComm__putDone(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
uart_id_t arg_0x101ace748, 
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
message_t * msg, 



error_t error);
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
uart_id_t arg_0x101ad1c50, 
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 31 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc" */
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
uart_id_t arg_0x101acdaa8, 
/* # 31 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc" */
message_t *msg, uint8_t dataLinkLen);
/* #line 15 */
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
uart_id_t arg_0x101acdaa8);
/* # 23 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc" */
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
uart_id_t arg_0x101acdaa8, 
/* # 23 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc" */
message_t *msg, uint8_t upperLen);
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SendBytePacket.nc" */
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
/* #line 62 */
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
/* # 158 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4334 {
/* #line 158 */
  SerialDispatcherP__0__signalSendDone = 4U
};
/* #line 158 */
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
/* #line 275 */
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4335 {
/* #line 275 */
  SerialDispatcherP__0__receiveTask = 5U
};
/* #line 275 */
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
/* #line 66 */
/* #line 62 */
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4336 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4337 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






/* #line 74 */
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4338 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
/* #line 158 */
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
/* #line 178 */
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
/* #line 194 */
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
/* #line 244 */
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
/* #line 275 */
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
/* #line 296 */
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
/* #line 358 */
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
static error_t HdlcTranslateC__UartStream__send(
/* #line 44 */
uint8_t * buf, 



uint16_t len);
/* # 94 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc" */
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
/* #line 85 */
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc" */
/* #line 56 */
typedef struct HdlcTranslateC____nesc_unnamed4339 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
/* #line 98 */
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
/* #line 118 */
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
/* #line 132 */
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartConfigure.nc" */
static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bf94c8);
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__resetUsart(bool reset);
/* #line 179 */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableIntr(void );


static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__enableIntr(void );
/* #line 224 */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(uint8_t data);
/* #line 128 */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableUart(void );
/* #line 174 */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__setModeUart(msp430_uart_union_config_t *config);
/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receivedByte(
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfd020, 
/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
uint8_t byte);
/* #line 99 */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receiveDone(
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfd020, 
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
uint8_t * buf, 



uint16_t len, error_t error);
/* #line 57 */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfd020, 
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
uint8_t * buf, 



uint16_t len, error_t error);
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__release(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfa258);
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfa258);
/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bfa258);
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__granted(
/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
uint8_t arg_0x101bc50c8);
/* #line 59 */
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len;
/* #line 59 */
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_len;
uint8_t * /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf;
/* #line 60 */
uint8_t * /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf;
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos;
/* #line 61 */
uint16_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_pos;
uint8_t /*Msp430Uart1P.UartP*/Msp430UartP__0__m_byte_time;
uint8_t /*Msp430Uart1P.UartP*/Msp430UartP__0__current_owner;

static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(uint8_t id);
/* #line 77 */
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(uint8_t id);







static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(uint8_t id);






static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(uint8_t id);








static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(uint8_t id);
/* #line 134 */
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(uint8_t id, uint8_t data);
/* #line 147 */
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(uint8_t id, uint8_t *buf, uint16_t len);
/* #line 162 */
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(uint8_t id);
/* #line 208 */
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow(void );

static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(uint8_t id);

static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(uint8_t id);
static inline msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(uint8_t id);



static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte);
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void HplMsp430Usart1P__UCLK__selectIOFunc(void );
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
static void HplMsp430Usart1P__Interrupts__rxDone(uint8_t data);
/* #line 49 */
static void HplMsp430Usart1P__Interrupts__txDone(void );
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void HplMsp430Usart1P__URXD__selectIOFunc(void );
/* #line 89 */
static void HplMsp430Usart1P__URXD__selectModuleFunc(void );






static void HplMsp430Usart1P__UTXD__selectIOFunc(void );
/* #line 89 */
static void HplMsp430Usart1P__UTXD__selectModuleFunc(void );






static void HplMsp430Usart1P__SOMI__selectIOFunc(void );
/* #line 96 */
static void HplMsp430Usart1P__SIMO__selectIOFunc(void );
/* # 87 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc" */
static volatile uint8_t HplMsp430Usart1P__IE2 __asm ("0x0001");
static volatile uint8_t HplMsp430Usart1P__ME2 __asm ("0x0005");
static volatile uint8_t HplMsp430Usart1P__IFG2 __asm ("0x0003");
static volatile uint8_t HplMsp430Usart1P__U1TCTL __asm ("0x0079");
static volatile uint8_t HplMsp430Usart1P__U1RCTL __asm ("0x007A");
static volatile uint8_t HplMsp430Usart1P__U1TXBUF __asm ("0x007F");



void sig_UART1RX_VECTOR(void ) /*__attribute_interrupt_6*/  ;




void sig_UART1TX_VECTOR(void ) /*__attribute_interrupt_4*/  ;



static inline error_t HplMsp430Usart1P__AsyncStdControl__start(void );



static inline error_t HplMsp430Usart1P__AsyncStdControl__stop(void );
/* #line 140 */
static inline void HplMsp430Usart1P__Usart__setUbr(uint16_t control);










static inline void HplMsp430Usart1P__Usart__setUmctl(uint8_t control);







static inline void HplMsp430Usart1P__Usart__resetUsart(bool reset);
/* #line 203 */
static inline void HplMsp430Usart1P__Usart__enableUart(void );







static void HplMsp430Usart1P__Usart__disableUart(void );








static inline void HplMsp430Usart1P__Usart__enableUartTx(void );




static inline void HplMsp430Usart1P__Usart__disableUartTx(void );





static inline void HplMsp430Usart1P__Usart__enableUartRx(void );




static inline void HplMsp430Usart1P__Usart__disableUartRx(void );
/* #line 251 */
static void HplMsp430Usart1P__Usart__disableSpi(void );
/* #line 283 */
static inline void HplMsp430Usart1P__configUart(msp430_uart_union_config_t *config);









static inline void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config);
/* #line 347 */
static inline void HplMsp430Usart1P__Usart__clrIntr(void );
/* #line 359 */
static inline void HplMsp430Usart1P__Usart__disableIntr(void );
/* #line 377 */
static inline void HplMsp430Usart1P__Usart__enableIntr(void );






static inline void HplMsp430Usart1P__Usart__tx(uint8_t data);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void );
static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void );
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void );
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc" */
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );




static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );









static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ArbiterInfo.nc" */
static bool /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void );
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
uint8_t arg_0x101d3f220, 
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
uint8_t data);
/* #line 49 */
static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
uint8_t arg_0x101d3f220);









static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);









static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data);
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
enum /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1____nesc_unnamed4340 {
/* #line 49 */
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );







static inline resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceRequested.nc" */
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d807e8);
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d7d9b8);
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d7d9b8);
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
/* #line 70 */
static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void );
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc" */
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
/* #line 81 */
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void );
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d81658);
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4341 {
/* #line 75 */
  ArbiterP__0__grantedTask = 6U
};
/* #line 75 */
typedef int /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask];
/* #line 67 */
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4342 {
/* #line 67 */
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
/* #line 68 */
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4343 {
/* #line 68 */
  ArbiterP__0__default_owner_id = 1U
};
/* #line 69 */
enum /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4344 {
/* #line 69 */
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
/* #line 93 */
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id);
/* #line 111 */
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
/* #line 133 */
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
/* #line 153 */
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );
/* #line 166 */
static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );










static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id);
/* #line 190 */
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
/* #line 202 */
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);



static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);









static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc" */
static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc" */
static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AsyncStdControl.nc" */
static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
/* # 74 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc" */
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void );




static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t TelosSerialP__Resource__release(void );
/* #line 97 */
static error_t TelosSerialP__Resource__immediateRequest(void );
/* # 8 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosa/TelosSerialP.nc" */
msp430_uart_union_config_t TelosSerialP__msp430_uart_telos_config = { { .ubr = UBR_1MHZ_115200, .umctl = UMCTL_1MHZ_115200, .ssel = 0x02, .pena = 0, .pev = 0, .spb = 0, .clen = 1, .listen = 0, .mm = 0, .ckpl = 0, .urxse = 0, .urxeie = 1, .urxwie = 0, .utxe = 1, .urxe = 1 } };

static inline error_t TelosSerialP__StdControl__start(void );


static inline error_t TelosSerialP__StdControl__stop(void );



static inline void TelosSerialP__Resource__granted(void );

static inline msp430_uart_union_config_t *TelosSerialP__Msp430UartConfigure__getConfig(void );
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc" */
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
/* # 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
static void CC2420CsmaP__SplitControl__startDone(error_t error);
/* #line 138 */
static void CC2420CsmaP__SplitControl__stopDone(error_t error);
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg);
/* #line 81 */
static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg);
/* #line 66 */
static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime);
/* #line 60 */
static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime);
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc" */
static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca);
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void CC2420CsmaP__Send__sendDone(
/* #line 96 */
message_t * msg, 



error_t error);
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc" */
static uint16_t CC2420CsmaP__Random__rand16(void );
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc" */
static error_t CC2420CsmaP__SubControl__start(void );









static error_t CC2420CsmaP__SubControl__stop(void );
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg);
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc" */
static error_t CC2420CsmaP__CC2420Power__startOscillator(void );
/* #line 90 */
static error_t CC2420CsmaP__CC2420Power__rxOn(void );
/* #line 51 */
static error_t CC2420CsmaP__CC2420Power__startVReg(void );
/* #line 63 */
static error_t CC2420CsmaP__CC2420Power__stopVReg(void );
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420CsmaP__Resource__release(void );
/* #line 88 */
static error_t CC2420CsmaP__Resource__request(void );
/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState);
/* #line 45 */
static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState);





static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState);
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t CC2420CsmaP__sendDone_task__postTask(void );
/* #line 67 */
static error_t CC2420CsmaP__stopDone_task__postTask(void );
/* #line 67 */
static error_t CC2420CsmaP__startDone_task__postTask(void );
/* # 74 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
enum CC2420CsmaP____nesc_unnamed4345 {
/* #line 74 */
  CC2420CsmaP__startDone_task = 7U
};
/* #line 74 */
typedef int CC2420CsmaP____nesc_sillytask_startDone_task[CC2420CsmaP__startDone_task];
enum CC2420CsmaP____nesc_unnamed4346 {
/* #line 75 */
  CC2420CsmaP__stopDone_task = 8U
};
/* #line 75 */
typedef int CC2420CsmaP____nesc_sillytask_stopDone_task[CC2420CsmaP__stopDone_task];
enum CC2420CsmaP____nesc_unnamed4347 {
/* #line 76 */
  CC2420CsmaP__sendDone_task = 9U
};
/* #line 76 */
typedef int CC2420CsmaP____nesc_sillytask_sendDone_task[CC2420CsmaP__sendDone_task];
/* #line 58 */
enum CC2420CsmaP____nesc_unnamed4348 {
  CC2420CsmaP__S_STOPPED, 
  CC2420CsmaP__S_STARTING, 
  CC2420CsmaP__S_STARTED, 
  CC2420CsmaP__S_STOPPING, 
  CC2420CsmaP__S_TRANSMITTING
};

message_t * CC2420CsmaP__m_msg;

error_t CC2420CsmaP__sendErr = SUCCESS;


bool CC2420CsmaP__ccaOn;






static inline void CC2420CsmaP__shutdown(void );


static error_t CC2420CsmaP__SplitControl__start(void );
/* #line 96 */
static error_t CC2420CsmaP__SplitControl__stop(void );
/* #line 122 */
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len);
/* #line 173 */
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void );








static inline void CC2420CsmaP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);







static inline void CC2420CsmaP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
/* #line 205 */
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err);




static inline void CC2420CsmaP__CC2420Power__startVRegDone(void );



static inline void CC2420CsmaP__Resource__granted(void );



static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void );




static void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg);






static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg);
/* #line 244 */
static inline void CC2420CsmaP__sendDone_task__runTask(void );
/* #line 257 */
static inline void CC2420CsmaP__startDone_task__runTask(void );







static inline void CC2420CsmaP__stopDone_task__runTask(void );









static inline void CC2420CsmaP__shutdown(void );
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc" */
static void CC2420ControlP__CC2420Config__syncDone(error_t error);
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc" */
static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data);
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/LocalIeeeEui64.nc" */
static ieee_eui64_t CC2420ControlP__LocalIeeeEui64__getId(void );
/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt);
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc" */
static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data);
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
static void CC2420ControlP__RSTN__makeOutput(void );
/* #line 40 */
static void CC2420ControlP__RSTN__set(void );
static void CC2420ControlP__RSTN__clr(void );
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Read.nc" */
static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val);
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t CC2420ControlP__syncDone__postTask(void );
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc" */
static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data);







static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data);
/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc" */
static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void );




static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void );
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
static void CC2420ControlP__CSN__makeOutput(void );
/* #line 40 */
static void CC2420ControlP__CSN__set(void );
static void CC2420ControlP__CSN__clr(void );




static void CC2420ControlP__VREN__makeOutput(void );
/* #line 40 */
static void CC2420ControlP__VREN__set(void );
static void CC2420ControlP__VREN__clr(void );
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void );
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420ControlP__SpiResource__release(void );
/* #line 88 */
static error_t CC2420ControlP__SpiResource__request(void );
/* #line 120 */
static error_t CC2420ControlP__SyncResource__release(void );
/* #line 88 */
static error_t CC2420ControlP__SyncResource__request(void );
/* # 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc" */
static void CC2420ControlP__CC2420Power__startOscillatorDone(void );
/* #line 56 */
static void CC2420ControlP__CC2420Power__startVRegDone(void );
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc" */
static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data);
/* #line 63 */
static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data);
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
static cc2420_status_t CC2420ControlP__SRXON__strobe(void );
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void CC2420ControlP__Resource__granted(void );
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc" */
static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length);
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
static error_t CC2420ControlP__InterruptCCA__disable(void );
/* #line 53 */
static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void );
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420ControlP__RssiResource__release(void );
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void );
/* # 123 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
enum CC2420ControlP____nesc_unnamed4349 {
/* #line 123 */
  CC2420ControlP__sync = 10U
};
/* #line 123 */
typedef int CC2420ControlP____nesc_sillytask_sync[CC2420ControlP__sync];
enum CC2420ControlP____nesc_unnamed4350 {
/* #line 124 */
  CC2420ControlP__syncDone = 11U
};
/* #line 124 */
typedef int CC2420ControlP____nesc_sillytask_syncDone[CC2420ControlP__syncDone];
/* #line 89 */
/* #line 83 */
typedef enum CC2420ControlP____nesc_unnamed4351 {
  CC2420ControlP__S_VREG_STOPPED, 
  CC2420ControlP__S_VREG_STARTING, 
  CC2420ControlP__S_VREG_STARTED, 
  CC2420ControlP__S_XOSC_STARTING, 
  CC2420ControlP__S_XOSC_STARTED
} CC2420ControlP__cc2420_control_state_t;

uint8_t CC2420ControlP__m_channel;

uint8_t CC2420ControlP__m_tx_power;

uint16_t CC2420ControlP__m_pan;

uint16_t CC2420ControlP__m_short_addr;

ieee_eui64_t CC2420ControlP__m_ext_addr;

bool CC2420ControlP__m_sync_busy;


bool CC2420ControlP__autoAckEnabled;


bool CC2420ControlP__hwAutoAckDefault;


bool CC2420ControlP__addressRecognition;


bool CC2420ControlP__hwAddressRecognition;

CC2420ControlP__cc2420_control_state_t CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;



static void CC2420ControlP__writeFsctrl(void );
static void CC2420ControlP__writeMdmctrl0(void );
static void CC2420ControlP__writeId(void );





static inline error_t CC2420ControlP__Init__init(void );
/* #line 178 */
static inline error_t CC2420ControlP__Resource__request(void );







static inline error_t CC2420ControlP__Resource__release(void );







static inline error_t CC2420ControlP__CC2420Power__startVReg(void );
/* #line 206 */
static error_t CC2420ControlP__CC2420Power__stopVReg(void );







static inline error_t CC2420ControlP__CC2420Power__startOscillator(void );
/* #line 256 */
static inline error_t CC2420ControlP__CC2420Power__rxOn(void );
/* #line 286 */
static inline ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void );



static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void );







static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void );
/* #line 311 */
static inline error_t CC2420ControlP__CC2420Config__sync(void );
/* #line 343 */
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void );
/* #line 370 */
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void );






static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void );









static inline void CC2420ControlP__SyncResource__granted(void );
/* #line 401 */
static inline void CC2420ControlP__SpiResource__granted(void );




static inline void CC2420ControlP__RssiResource__granted(void );
/* #line 419 */
static inline void CC2420ControlP__StartupTimer__fired(void );









static inline void CC2420ControlP__InterruptCCA__fired(void );
/* #line 453 */
static inline void CC2420ControlP__sync__runTask(void );



static inline void CC2420ControlP__syncDone__runTask(void );









static void CC2420ControlP__writeFsctrl(void );
/* #line 484 */
static void CC2420ControlP__writeMdmctrl0(void );
/* #line 503 */
static void CC2420ControlP__writeId(void );
/* #line 521 */
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data);
/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time);

static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void );
/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void );
/* #line 47 */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void );










static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void );
/* #line 44 */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void );
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc" */
static inline error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
/* #line 65 */
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );










static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt);
/* #line 114 */
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformCounterC.nc" */
/*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper;

enum /*Counter32khz32C.Transform*/TransformCounterC__0____nesc_unnamed4352 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type ) - /*Counter32khz32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void );
/* #line 133 */
static inline void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired(void );
/* #line 103 */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt);
/* #line 73 */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void );
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get(void );
/* # 77 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0____nesc_unnamed4353 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type ) - 1 - 0, 
  TransformAlarmC__0__MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
/* #line 102 */
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm(void );
/* #line 147 */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt);









static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt);




static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
/* #line 177 */
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput(void );
/* #line 70 */
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get(void );
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void );
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void );
/* #line 45 */
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get(void );
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void );
/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get(void );
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void );
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput(void );
/* #line 45 */
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput(void );
/* #line 70 */
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get(void );
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void );
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void );
/* #line 45 */
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
/* # 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void );
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioCapture.nc" */
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time);
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm);

static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void );
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void );
/* #line 44 */
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void );
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void );
/* #line 89 */
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void );
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc" */
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode);
/* #line 61 */
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );






static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
static void HplMsp430InterruptP__Port14__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port26__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port17__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port21__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port12__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port24__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port15__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port27__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port10__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port22__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port13__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port25__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port16__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port20__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port11__fired(void );
/* #line 72 */
static void HplMsp430InterruptP__Port23__fired(void );
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
void sig_PORT1_VECTOR(void ) /*__attribute_interrupt_8*/  ;
/* #line 79 */
static inline void HplMsp430InterruptP__Port11__default__fired(void );
static inline void HplMsp430InterruptP__Port12__default__fired(void );
static inline void HplMsp430InterruptP__Port13__default__fired(void );

static inline void HplMsp430InterruptP__Port15__default__fired(void );
static inline void HplMsp430InterruptP__Port16__default__fired(void );
static inline void HplMsp430InterruptP__Port17__default__fired(void );
static inline void HplMsp430InterruptP__Port10__enable(void );



static inline void HplMsp430InterruptP__Port14__enable(void );



static inline void HplMsp430InterruptP__Port10__disable(void );



static inline void HplMsp430InterruptP__Port14__disable(void );



static inline void HplMsp430InterruptP__Port10__clear(void );
static inline void HplMsp430InterruptP__Port11__clear(void );
static inline void HplMsp430InterruptP__Port12__clear(void );
static inline void HplMsp430InterruptP__Port13__clear(void );
static inline void HplMsp430InterruptP__Port14__clear(void );
static inline void HplMsp430InterruptP__Port15__clear(void );
static inline void HplMsp430InterruptP__Port16__clear(void );
static inline void HplMsp430InterruptP__Port17__clear(void );








static inline void HplMsp430InterruptP__Port10__edge(bool l2h);
/* #line 142 */
static inline void HplMsp430InterruptP__Port14__edge(bool l2h);
/* #line 169 */
void sig_PORT2_VECTOR(void ) /*__attribute_interrupt_2*/  ;
/* #line 182 */
static inline void HplMsp430InterruptP__Port20__default__fired(void );
static inline void HplMsp430InterruptP__Port21__default__fired(void );
static inline void HplMsp430InterruptP__Port22__default__fired(void );
static inline void HplMsp430InterruptP__Port23__default__fired(void );
static inline void HplMsp430InterruptP__Port24__default__fired(void );
static inline void HplMsp430InterruptP__Port25__default__fired(void );
static inline void HplMsp430InterruptP__Port26__default__fired(void );
static inline void HplMsp430InterruptP__Port27__default__fired(void );
/* #line 206 */
static inline void HplMsp430InterruptP__Port20__clear(void );
static inline void HplMsp430InterruptP__Port21__clear(void );
static inline void HplMsp430InterruptP__Port22__clear(void );
static inline void HplMsp430InterruptP__Port23__clear(void );
static inline void HplMsp430InterruptP__Port24__clear(void );
static inline void HplMsp430InterruptP__Port25__clear(void );
static inline void HplMsp430InterruptP__Port26__clear(void );
static inline void HplMsp430InterruptP__Port27__clear(void );
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void );
/* #line 47 */
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void );
/* #line 67 */
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high);
/* #line 42 */
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void );
/* # 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void );
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc" */
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising);








static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );







static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void );
/* #line 47 */
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void );
/* #line 67 */
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high);
/* #line 42 */
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void );
/* # 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void );
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc" */
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising);
/* #line 65 */
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SpiPacket.nc" */
static error_t CC2420SpiP__SpiPacket__send(
/* #line 59 */
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
/* # 91 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
static void CC2420SpiP__Fifo__writeDone(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102200328, 
/* # 91 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
uint8_t * data, uint8_t length, error_t error);
/* #line 71 */
static void CC2420SpiP__Fifo__readDone(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102200328, 
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
uint8_t * data, uint8_t length, error_t error);
/* # 24 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc" */
static void CC2420SpiP__ChipSpiResource__releasing(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SpiByte.nc" */
static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx);
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static void CC2420SpiP__WorkingState__toIdle(void );




static bool CC2420SpiP__WorkingState__isIdle(void );
/* #line 45 */
static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState);
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420SpiP__SpiResource__release(void );
/* #line 97 */
static error_t CC2420SpiP__SpiResource__immediateRequest(void );
/* #line 88 */
static error_t CC2420SpiP__SpiResource__request(void );
/* #line 128 */
static bool CC2420SpiP__SpiResource__isOwner(void );
/* #line 102 */
static void CC2420SpiP__Resource__granted(
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
uint8_t arg_0x102202158);
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t CC2420SpiP__grant__postTask(void );
/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
enum CC2420SpiP____nesc_unnamed4354 {
/* #line 88 */
  CC2420SpiP__grant = 12U
};
/* #line 88 */
typedef int CC2420SpiP____nesc_sillytask_grant[CC2420SpiP__grant];
/* #line 63 */
enum CC2420SpiP____nesc_unnamed4355 {
  CC2420SpiP__RESOURCE_COUNT = 5U, 
  CC2420SpiP__NO_HOLDER = 0xFF
};


enum CC2420SpiP____nesc_unnamed4356 {
  CC2420SpiP__S_IDLE, 
  CC2420SpiP__S_BUSY
};


uint16_t CC2420SpiP__m_addr;


uint8_t CC2420SpiP__m_requests = 0;


uint8_t CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;


bool CC2420SpiP__release;


static error_t CC2420SpiP__attemptRelease(void );







static inline void CC2420SpiP__ChipSpiResource__abortRelease(void );






static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );




static error_t CC2420SpiP__Resource__request(uint8_t id);
/* #line 126 */
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id);
/* #line 149 */
static error_t CC2420SpiP__Resource__release(uint8_t id);
/* #line 178 */
static inline uint8_t CC2420SpiP__Resource__isOwner(uint8_t id);





static inline void CC2420SpiP__SpiResource__granted(void );




static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
/* #line 209 */
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len);
/* #line 260 */
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
/* #line 287 */
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data);
/* #line 305 */
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data);
/* #line 318 */
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr);










static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP__attemptRelease(void );
/* #line 358 */
static inline void CC2420SpiP__grant__runTask(void );








static inline void CC2420SpiP__Resource__default__granted(uint8_t id);


static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
/* # 74 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
uint8_t StateImplP__state[6U];

enum StateImplP____nesc_unnamed4357 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
/* #line 96 */
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
/* #line 111 */
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState);






static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static bool StateImplP__State__isState(uint8_t id, uint8_t myState);









static uint8_t StateImplP__State__getState(uint8_t id);
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SpiPacket.nc" */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(
/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022a52f0, 
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SpiPacket.nc" */
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc" */
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022f92f0);
/* # 180 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr(void );
/* #line 197 */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr(void );
/* #line 97 */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(bool reset);
/* #line 177 */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr(void );
/* #line 224 */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(uint8_t data);
/* #line 168 */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(msp430_spi_union_config_t *config);
/* #line 231 */
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx(void );
/* #line 192 */
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending(void );
/* #line 158 */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi(void );
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022fa0c8);
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022fa0c8);
/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022fa0c8);
/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022fa0c8);
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
uint8_t arg_0x1022a92f0);
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask(void );
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4358 {
/* #line 102 */
  Msp430SpiNoDmaP__0__signalDone_task = 13U
};
/* #line 102 */
typedef int /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_sillytask_signalDone_task[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task];
/* #line 91 */
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4359 {
  Msp430SpiNoDmaP__0__SPI_ATOMIC_SIZE = 2
};

uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf;
uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos;
uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client;

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void );


static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id);



static inline uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id);





static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id);



static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
/* #line 173 */
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(uint8_t id);
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(uint8_t id);

static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp(void );
/* #line 206 */
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len);
/* #line 228 */
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void );



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data);
/* #line 245 */
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void );




static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void );

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error);
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void HplMsp430Usart0P__UCLK__selectIOFunc(void );
/* #line 89 */
static void HplMsp430Usart0P__UCLK__selectModuleFunc(void );
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data);
/* #line 49 */
static void HplMsp430Usart0P__Interrupts__txDone(void );
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void HplMsp430Usart0P__URXD__selectIOFunc(void );
/* #line 96 */
static void HplMsp430Usart0P__UTXD__selectIOFunc(void );
/* # 7 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc" */
static void HplMsp430Usart0P__HplI2C__clearModeI2C(void );
/* #line 6 */
static bool HplMsp430Usart0P__HplI2C__isI2C(void );
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void HplMsp430Usart0P__SOMI__selectIOFunc(void );
/* #line 89 */
static void HplMsp430Usart0P__SOMI__selectModuleFunc(void );
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc" */
static void HplMsp430Usart0P__I2CInterrupts__fired(void );
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void HplMsp430Usart0P__SIMO__selectIOFunc(void );
/* #line 89 */
static void HplMsp430Usart0P__SIMO__selectModuleFunc(void );
/* # 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
static volatile uint8_t HplMsp430Usart0P__IE1 __asm ("0x0000");
static volatile uint8_t HplMsp430Usart0P__ME1 __asm ("0x0004");
static volatile uint8_t HplMsp430Usart0P__IFG1 __asm ("0x0002");
static volatile uint8_t HplMsp430Usart0P__U0TCTL __asm ("0x0071");

static volatile uint8_t HplMsp430Usart0P__U0TXBUF __asm ("0x0077");

void sig_UART0RX_VECTOR(void ) /*__attribute_interrupt_18*/  ;




void sig_UART0TX_VECTOR(void ) /*__attribute_interrupt_16*/  ;
/* #line 132 */
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control);










static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control);







static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset);
/* #line 207 */
static inline void HplMsp430Usart0P__Usart__disableUart(void );
/* #line 238 */
static inline void HplMsp430Usart0P__Usart__enableSpi(void );








static void HplMsp430Usart0P__Usart__disableSpi(void );








static inline void HplMsp430Usart0P__configSpi(msp430_spi_union_config_t *config);








static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config);
/* #line 330 */
static inline bool HplMsp430Usart0P__Usart__isRxIntrPending(void );










static inline void HplMsp430Usart0P__Usart__clrRxIntr(void );



static inline void HplMsp430Usart0P__Usart__clrIntr(void );



static inline void HplMsp430Usart0P__Usart__disableRxIntr(void );







static inline void HplMsp430Usart0P__Usart__disableIntr(void );



static inline void HplMsp430Usart0P__Usart__enableRxIntr(void );
/* #line 382 */
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data);



static inline uint8_t HplMsp430Usart0P__Usart__rx(void );
/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ArbiterInfo.nc" */
static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId(void );
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__rxDone(
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
uint8_t arg_0x101d3f220, 
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
uint8_t data);
/* #line 49 */
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__txDone(
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
uint8_t arg_0x101d3f220);
/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc" */
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__fired(
/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
uint8_t arg_0x101d3bc58);








static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(uint8_t data);




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawI2CInterrupts__fired(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(uint8_t id, uint8_t data);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__default__fired(uint8_t id);
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
enum /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2____nesc_unnamed4360 {
/* #line 49 */
  FcfsResourceQueueC__2__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[1U];
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init(void );




static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );



static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
/* #line 82 */
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id);
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceRequested.nc" */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__requested(
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d807e8);
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceRequested.nc" */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__immediateRequested(
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d807e8);
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(
/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d7d9b8);
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(
/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d7d9b8);
/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id);
/* #line 53 */
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty(void );
/* #line 70 */
static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue(void );
/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc" */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void );
/* #line 46 */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void );
/* #line 81 */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__immediateRequested(void );
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
uint8_t arg_0x101d81658);
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4361 {
/* #line 75 */
  ArbiterP__1__grantedTask = 14U
};
/* #line 75 */
typedef int /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_sillytask_grantedTask[/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask];
/* #line 67 */
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4362 {
/* #line 67 */
  ArbiterP__1__RES_CONTROLLED, ArbiterP__1__RES_GRANTING, ArbiterP__1__RES_IMM_GRANTING, ArbiterP__1__RES_BUSY
};
/* #line 68 */
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4363 {
/* #line 68 */
  ArbiterP__1__default_owner_id = 1U
};
/* #line 69 */
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1____nesc_unnamed4364 {
/* #line 69 */
  ArbiterP__1__NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;



static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__request(uint8_t id);
/* #line 93 */
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(uint8_t id);
/* #line 111 */
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(uint8_t id);
/* #line 133 */
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
/* #line 153 */
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void );
/* #line 166 */
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void );










static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(uint8_t id);
/* #line 190 */
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
/* #line 202 */
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void );

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__immediateRequested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id);
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset);
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C0P.nc" */
static volatile uint8_t HplMsp430I2C0P__U0CTL __asm ("0x0070");





static inline bool HplMsp430I2C0P__HplI2C__isI2C(void );



static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ActiveMessageAddressC.nc" */
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
/* #line 93 */
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
/* #line 106 */
static am_addr_t ActiveMessageAddressC__amAddress(void );
/* # 10 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/OneWireStream.nc" */
static error_t Ds2411P__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len);
/* # 20 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/Ds2411P.nc" */
bool Ds2411P__haveId = FALSE;
dallasid48_serial_t Ds2411P__ds2411id;

static inline error_t Ds2411P__readId(void );
/* #line 36 */
static inline error_t Ds2411P__ReadId48__read(uint8_t *id);
/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/BusyWait.nc" */
static void OneWireMasterC__BusyWait__wait(OneWireMasterC__BusyWait__size_type dt);
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
static void OneWireMasterC__Pin__makeInput(void );
/* #line 43 */
static bool OneWireMasterC__Pin__get(void );


static void OneWireMasterC__Pin__makeOutput(void );
/* #line 41 */
static void OneWireMasterC__Pin__clr(void );
/* # 25 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/OneWireMasterC.nc" */
/* #line 18 */
typedef enum OneWireMasterC____nesc_unnamed4365 {
  OneWireMasterC__DELAY_5US = 5, 
  OneWireMasterC__RESET_LOW_TIME = 560, 
  OneWireMasterC__DELAY_60US = 60, 
  OneWireMasterC__PRESENCE_DETECT_LOW_TIME = 240, 
  OneWireMasterC__PRESENCE_RESET_HIGH_TIME = 480, 
  OneWireMasterC__SLOT_TIME = 65
} OneWireMasterC__onewiretimes_t;

static inline bool OneWireMasterC__reset(void );
/* #line 42 */
static inline void OneWireMasterC__writeOne(void );






static inline void OneWireMasterC__writeZero(void );






static inline bool OneWireMasterC__readBit(void );










static inline void OneWireMasterC__writeByte(uint8_t c);
/* #line 80 */
static inline uint8_t OneWireMasterC__readByte(void );










static inline error_t OneWireMasterC__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len);
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get(void );
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/BusyWaitCounterC.nc" */
enum /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0____nesc_unnamed4366 {

  BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE = (/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type )1 << (8 * sizeof(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type ) - 1)
};

static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type dt);
/* #line 83 */
static inline void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void );
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__get(void );
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__overflow(void );
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc" */
static inline uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__get(void );
/* #line 64 */
static inline void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__overflow(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
static void /*Ds2411C.Gpio*/Msp430GpioC__11__HplGeneralIO__makeInput(void );






static void /*Ds2411C.Gpio*/Msp430GpioC__11__HplGeneralIO__makeOutput(void );
/* #line 70 */
static bool /*Ds2411C.Gpio*/Msp430GpioC__11__HplGeneralIO__get(void );
/* #line 50 */
static void /*Ds2411C.Gpio*/Msp430GpioC__11__HplGeneralIO__clr(void );
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__clr(void );

static inline bool /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__get(void );
static inline void /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__makeInput(void );

static inline void /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__makeOutput(void );
/* # 12 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/ReadId48.nc" */
static error_t DallasId48ToIeeeEui64C__ReadId48__read(uint8_t *id);
/* # 8 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/DallasId48ToIeeeEui64C.nc" */
static ieee_eui64_t DallasId48ToIeeeEui64C__LocalIeeeEui64__getId(void );
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg);






static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg);
/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc" */
static void CC2420TransmitP__PacketTimeStamp__clear(
/* #line 66 */
message_t * msg);
/* #line 78 */
static void CC2420TransmitP__PacketTimeStamp__set(
/* #line 73 */
message_t * msg, 




CC2420TransmitP__PacketTimeStamp__size_type value);
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void );
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioCapture.nc" */
static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void );
/* #line 66 */
static void CC2420TransmitP__CaptureSFD__disable(void );
/* #line 53 */
static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void );
/* # 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void );
/* #line 66 */
static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt);






static void CC2420TransmitP__BackoffTimer__stop(void );
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc" */
static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length);
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc" */
static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data);
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc" */
static void CC2420TransmitP__CC2420Receive__sfd_dropped(void );
/* #line 49 */
static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time);
/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc" */
static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error);
/* # 31 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc" */
static void CC2420TransmitP__ChipSpiResource__abortRelease(void );







static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void );
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void );
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
static void CC2420TransmitP__CSN__makeOutput(void );
/* #line 40 */
static void CC2420TransmitP__CSN__set(void );
static void CC2420TransmitP__CSN__clr(void );
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg);
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc" */
static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(
/* #line 53 */
message_t * msg);
/* #line 50 */
static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(
/* #line 46 */
message_t * msg);
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420TransmitP__SpiResource__release(void );
/* #line 97 */
static error_t CC2420TransmitP__SpiResource__immediateRequest(void );
/* #line 88 */
static error_t CC2420TransmitP__SpiResource__request(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
static void CC2420TransmitP__CCA__makeInput(void );
/* #line 43 */
static bool CC2420TransmitP__CCA__get(void );
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
static cc2420_status_t CC2420TransmitP__SNOP__strobe(void );
/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
static void CC2420TransmitP__SFD__makeInput(void );
/* #line 43 */
static bool CC2420TransmitP__SFD__get(void );
/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length);
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
static cc2420_status_t CC2420TransmitP__STXON__strobe(void );
/* # 99 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
/* #line 89 */
typedef enum CC2420TransmitP____nesc_unnamed4367 {
  CC2420TransmitP__S_STOPPED, 
  CC2420TransmitP__S_STARTED, 
  CC2420TransmitP__S_LOAD, 
  CC2420TransmitP__S_SAMPLE_CCA, 
  CC2420TransmitP__S_BEGIN_TRANSMIT, 
  CC2420TransmitP__S_SFD, 
  CC2420TransmitP__S_EFD, 
  CC2420TransmitP__S_ACK_WAIT, 
  CC2420TransmitP__S_CANCEL
} CC2420TransmitP__cc2420_transmit_state_t;





enum CC2420TransmitP____nesc_unnamed4368 {
  CC2420TransmitP__CC2420_ABORT_PERIOD = 320
};
/* #line 120 */
message_t * CC2420TransmitP__m_msg;

bool CC2420TransmitP__m_cca;

uint8_t CC2420TransmitP__m_tx_power;

CC2420TransmitP__cc2420_transmit_state_t CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;

bool CC2420TransmitP__m_receiving = FALSE;

uint16_t CC2420TransmitP__m_prev_time;


bool CC2420TransmitP__sfdHigh;


bool CC2420TransmitP__abortSpiRelease;


int8_t CC2420TransmitP__totalCcaChecks;


uint16_t CC2420TransmitP__myInitialBackoff;


uint16_t CC2420TransmitP__myCongestionBackoff;



static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);
static inline error_t CC2420TransmitP__resend(bool cca);
static void CC2420TransmitP__loadTXFIFO(void );
static void CC2420TransmitP__attemptSend(void );
static void CC2420TransmitP__congestionBackoff(void );
static error_t CC2420TransmitP__acquireSpiResource(void );
static inline error_t CC2420TransmitP__releaseSpiResource(void );
static void CC2420TransmitP__signalDone(error_t err);



static inline error_t CC2420TransmitP__Init__init(void );







static inline error_t CC2420TransmitP__StdControl__start(void );










static error_t CC2420TransmitP__StdControl__stop(void );
/* #line 192 */
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca);



static inline error_t CC2420TransmitP__Send__resend(bool useCca);
/* #line 227 */
static inline bool CC2420TransmitP__EnergyIndicator__isReceiving(void );
/* #line 243 */
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);







static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);







static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time);
/* #line 280 */
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
/* #line 377 */
static inline void CC2420TransmitP__ChipSpiResource__releasing(void );
/* #line 389 */
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg);
/* #line 416 */
static inline void CC2420TransmitP__SpiResource__granted(void );
/* #line 454 */
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
/* #line 486 */
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline void CC2420TransmitP__BackoffTimer__fired(void );
/* #line 547 */
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca);
/* #line 578 */
static inline error_t CC2420TransmitP__resend(bool cca);
/* #line 737 */
static void CC2420TransmitP__attemptSend(void );
/* #line 782 */
static void CC2420TransmitP__congestionBackoff(void );






static error_t CC2420TransmitP__acquireSpiResource(void );







static inline error_t CC2420TransmitP__releaseSpiResource(void );
/* #line 819 */
static void CC2420TransmitP__loadTXFIFO(void );
/* #line 844 */
static void CC2420TransmitP__signalDone(error_t err);
/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
static bool CC2420ReceiveP__FIFO__get(void );
/* # 91 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc" */
static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void );
/* #line 115 */
static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void );
/* #line 110 */
static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void );
/* #line 64 */
static ieee_eui64_t CC2420ReceiveP__CC2420Config__getExtAddr(void );




static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t CC2420ReceiveP__receiveDone_task__postTask(void );
/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc" */
static void CC2420ReceiveP__PacketTimeStamp__clear(
/* #line 66 */
message_t * msg);
/* #line 78 */
static void CC2420ReceiveP__PacketTimeStamp__set(
/* #line 73 */
message_t * msg, 




CC2420ReceiveP__PacketTimeStamp__size_type value);
/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
static bool CC2420ReceiveP__FIFOP__get(void );
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc" */
static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message);
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
static cc2420_status_t CC2420ReceiveP__SACK__strobe(void );
/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
static void CC2420ReceiveP__CSN__set(void );
static void CC2420ReceiveP__CSN__clr(void );
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



CC2420ReceiveP__Receive__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420ReceiveP__SpiResource__release(void );
/* #line 97 */
static error_t CC2420ReceiveP__SpiResource__immediateRequest(void );
/* #line 88 */
static error_t CC2420ReceiveP__SpiResource__request(void );
/* #line 128 */
static bool CC2420ReceiveP__SpiResource__isOwner(void );
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length);
/* #line 51 */
static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length);
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
static error_t CC2420ReceiveP__InterruptFIFOP__disable(void );
/* #line 54 */
static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void );
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void );
/* # 148 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
enum CC2420ReceiveP____nesc_unnamed4369 {
/* #line 148 */
  CC2420ReceiveP__receiveDone_task = 15U
};
/* #line 148 */
typedef int CC2420ReceiveP____nesc_sillytask_receiveDone_task[CC2420ReceiveP__receiveDone_task];
/* #line 89 */
/* #line 81 */
typedef enum CC2420ReceiveP____nesc_unnamed4370 {
  CC2420ReceiveP__S_STOPPED, 
  CC2420ReceiveP__S_STARTED, 
  CC2420ReceiveP__S_RX_LENGTH, 
  CC2420ReceiveP__S_RX_DEC, 
  CC2420ReceiveP__S_RX_DEC_WAIT, 
  CC2420ReceiveP__S_RX_FCF, 
  CC2420ReceiveP__S_RX_PAYLOAD
} CC2420ReceiveP__cc2420_receive_state_t;

enum CC2420ReceiveP____nesc_unnamed4371 {
  CC2420ReceiveP__RXFIFO_SIZE = 128, 
  CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP__SACK_HEADER_LENGTH = 7
};

uint32_t CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP__m_timestamp_head;

uint8_t CC2420ReceiveP__m_timestamp_size;





uint8_t CC2420ReceiveP__m_missed_packets;



bool CC2420ReceiveP__receivingPacket;


uint8_t CC2420ReceiveP__rxFrameLength;

uint8_t CC2420ReceiveP__m_bytes_left;

message_t * CC2420ReceiveP__m_p_rx_buf;

message_t CC2420ReceiveP__m_rx_buf;
/* #line 137 */
CC2420ReceiveP__cc2420_receive_state_t CC2420ReceiveP__m_state;



static void CC2420ReceiveP__reset_state(void );
static void CC2420ReceiveP__beginReceive(void );
static void CC2420ReceiveP__receive(void );
static void CC2420ReceiveP__waitForNextPacket(void );
static void CC2420ReceiveP__flush(void );
static inline bool CC2420ReceiveP__passesAddressCheck(message_t * msg);




static inline error_t CC2420ReceiveP__Init__init(void );





static inline error_t CC2420ReceiveP__StdControl__start(void );
/* #line 171 */
static error_t CC2420ReceiveP__StdControl__stop(void );
/* #line 186 */
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);








static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );






static inline bool CC2420ReceiveP__PacketIndicator__isReceiving(void );









static inline void CC2420ReceiveP__InterruptFIFOP__fired(void );
/* #line 508 */
static inline void CC2420ReceiveP__SpiResource__granted(void );
/* #line 525 */
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
/* #line 663 */
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP__receiveDone_task__runTask(void );
/* #line 704 */
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error);






static void CC2420ReceiveP__beginReceive(void );
/* #line 728 */
static void CC2420ReceiveP__flush(void );
/* #line 754 */
static void CC2420ReceiveP__receive(void );









static void CC2420ReceiveP__waitForNextPacket(void );
/* #line 808 */
static void CC2420ReceiveP__reset_state(void );










static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg);
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static inline error_t CC2420PacketP__Acks__requestAck(message_t *p_msg);




static inline error_t CC2420PacketP__Acks__noAck(message_t *p_msg);




static inline bool CC2420PacketP__Acks__wasAcked(message_t *p_msg);





static inline int CC2420PacketP__getAddressLength(int type);








static uint8_t *CC2420PacketP__getNetwork(message_t *msg);
/* #line 119 */
static inline uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t *p_msg);








static inline void CC2420PacketP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId);








static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg);
/* #line 152 */
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg);
/* #line 171 */
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg);





static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value);
/* #line 210 */
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg);








static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg);
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc" */
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time);

static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta);
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void );
/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void );
/* #line 47 */
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void );










static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void );
/* #line 44 */
static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void );
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc" */
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
/* #line 65 */
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );




static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt);
/* #line 114 */
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get(void );






static bool /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformCounterC.nc" */
/*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper;

enum /*CounterMilli32C.Transform*/TransformCounterC__1____nesc_unnamed4372 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 5, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type ) - /*CounterMilli32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type ) + 5, 



  TransformCounterC__1__OVERFLOW_MASK = /*CounterMilli32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type )2 << (/*CounterMilli32C.Transform*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void );
/* #line 133 */
static inline void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__fired(void );
/* #line 103 */
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt);
/* #line 73 */
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void );
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get(void );
/* # 77 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0;
/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;

enum /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1____nesc_unnamed4373 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type ) - 1 - 5, 
  TransformAlarmC__1__MAX_DELAY = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type )1 << /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );




static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm(void );










static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm(void );
/* #line 147 */
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type dt);
/* #line 162 */
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
/* #line 177 */
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
/* # 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
/* #line 103 */
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
/* #line 116 */
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
/* #line 73 */
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
/* # 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
/* # 74 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc" */
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4374 {
/* #line 74 */
  AlarmToTimerC__0__fired = 16U
};
/* #line 74 */
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
/* #line 55 */
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
/* #line 71 */
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
/* #line 93 */
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
/* # 136 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
/* #line 129 */
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
/* #line 78 */
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc" */
uint8_t arg_0x1028742f8);
/* #line 71 */
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4375 {
/* #line 71 */
  VirtualizeTimerC__0__updateFromTimer = 17U
};
/* #line 71 */
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
/* #line 53 */
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4376 {

  VirtualizeTimerC__0__NUM_TIMERS = 5U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








/* #line 59 */
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4377 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
/* #line 100 */
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
/* #line 139 */
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
/* #line 159 */
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
/* #line 204 */
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc" */
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/RandomMlcgC.nc" */
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
/* #line 69 */
static uint32_t RandomMlcgC__Random__rand32(void );
/* #line 89 */
static inline uint16_t RandomMlcgC__Random__rand16(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static error_t UniqueSendP__SubSend__send(
/* #line 67 */
message_t * msg, 







uint8_t len);
/* #line 112 */
static uint8_t UniqueSendP__SubSend__maxPayloadLength(void );
/* #line 100 */
static void UniqueSendP__Send__sendDone(
/* #line 96 */
message_t * msg, 



error_t error);
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc" */
static uint16_t UniqueSendP__Random__rand16(void );
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg);
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static void UniqueSendP__State__toIdle(void );
/* #line 45 */
static error_t UniqueSendP__State__requestState(uint8_t reqState);
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc" */
uint8_t UniqueSendP__localSendId;

enum UniqueSendP____nesc_unnamed4378 {
  UniqueSendP__S_IDLE, 
  UniqueSendP__S_SENDING
};


static inline error_t UniqueSendP__Init__init(void );
/* #line 75 */
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len);
/* #line 95 */
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void );








static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



UniqueReceiveP__Receive__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



UniqueReceiveP__DuplicateReceive__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc" */
/* #line 56 */
struct UniqueReceiveP____nesc_unnamed4379 {
  uint16_t source;
  uint8_t dsn;
} UniqueReceiveP__receivedMessages[4];

uint8_t UniqueReceiveP__writeIndex = 0;


uint8_t UniqueReceiveP__recycleSourceElement;

enum UniqueReceiveP____nesc_unnamed4380 {
  UniqueReceiveP__INVALID_ELEMENT = 0xFF
};


static inline error_t UniqueReceiveP__Init__init(void );









static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
static inline uint16_t UniqueReceiveP__getSourceKey(message_t *msg);


static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len);
/* #line 112 */
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn);
/* #line 138 */
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn);
/* #line 165 */
static inline uint16_t UniqueReceiveP__getSourceKey(message_t *msg);
/* #line 192 */
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static error_t CC2420TinyosNetworkP__SubSend__send(
/* #line 67 */
message_t * msg, 







uint8_t len);
/* #line 112 */
static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t CC2420TinyosNetworkP__grantTask__postTask(void );
/* # 77 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc" */
static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId);
/* #line 75 */
static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t *p_msg);
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void CC2420TinyosNetworkP__ActiveSend__sendDone(
/* #line 96 */
message_t * msg, 



error_t error);
/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id);
/* #line 53 */
static bool CC2420TinyosNetworkP__Queue__isEmpty(void );
/* #line 70 */
static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void );
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



CC2420TinyosNetworkP__BareReceive__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static void CC2420TinyosNetworkP__Resource__granted(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
uint8_t arg_0x10297f060);
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void CC2420TinyosNetworkP__BareSend__sendDone(
/* #line 96 */
message_t * msg, 



error_t error);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



CC2420TinyosNetworkP__ActiveReceive__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 180 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
enum CC2420TinyosNetworkP____nesc_unnamed4381 {
/* #line 180 */
  CC2420TinyosNetworkP__grantTask = 18U
};
/* #line 180 */
typedef int CC2420TinyosNetworkP____nesc_sillytask_grantTask[CC2420TinyosNetworkP__grantTask];
/* #line 68 */
enum CC2420TinyosNetworkP____nesc_unnamed4382 {
  CC2420TinyosNetworkP__OWNER_NONE = 0xff, 
  CC2420TinyosNetworkP__TINYOS_N_NETWORKS = 1U
};




/* #line 73 */
enum CC2420TinyosNetworkP____nesc_unnamed4383 {
  CC2420TinyosNetworkP__CLIENT_AM, 
  CC2420TinyosNetworkP__CLIENT_BARE
} CC2420TinyosNetworkP__m_busy_client;

uint8_t CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
/* #line 78 */
uint8_t CC2420TinyosNetworkP__next_owner;

static error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len);









static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void );
/* #line 138 */
static inline void *CC2420TinyosNetworkP__BareSend__getPayload(message_t *msg, uint8_t len);









static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error);








static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
/* #line 180 */
static inline void CC2420TinyosNetworkP__grantTask__runTask(void );
/* #line 199 */
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id);
/* #line 215 */
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id);
/* #line 229 */
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id);
/* #line 241 */
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len);


static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error);








static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client);
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
enum /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0____nesc_unnamed4384 {
/* #line 49 */
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[1];
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void );




static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
/* #line 82 */
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static error_t DefaultLplP__SubSend__send(
/* #line 67 */
message_t * msg, 







uint8_t len);
/* #line 112 */
static uint8_t DefaultLplP__SubSend__maxPayloadLength(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t DefaultLplP__send__postTask(void );
/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
static void DefaultLplP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime);
/* #line 60 */
static void DefaultLplP__RadioBackoff__setInitialBackoff(uint16_t backoffTime);
/* # 7 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SystemLowPowerListening.nc" */
static uint16_t DefaultLplP__SystemLowPowerListening__getDelayAfterReceive(void );
/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static void DefaultLplP__OffTimer__startOneShot(uint32_t dt);




static void DefaultLplP__OffTimer__stop(void );
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void DefaultLplP__Send__sendDone(
/* #line 96 */
message_t * msg, 



error_t error);
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static uint8_t DefaultLplP__SendState__getState(void );
/* #line 56 */
static void DefaultLplP__SendState__toIdle(void );
/* #line 45 */
static error_t DefaultLplP__SendState__requestState(uint8_t reqState);





static void DefaultLplP__SendState__forceState(uint8_t reqState);
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc" */
static uint16_t DefaultLplP__Random__rand16(void );
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc" */
static error_t DefaultLplP__Resend__resend(bool useCca);
/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
static error_t DefaultLplP__SubControl__start(void );
/* #line 130 */
static error_t DefaultLplP__SubControl__stop(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



DefaultLplP__Receive__receive(
/* #line 71 */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
static cc2420_header_t * DefaultLplP__CC2420PacketBody__getHeader(message_t * msg);










static cc2420_metadata_t * DefaultLplP__CC2420PacketBody__getMetadata(message_t * msg);
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static uint8_t DefaultLplP__RadioPowerState__getState(void );
/* #line 51 */
static void DefaultLplP__RadioPowerState__forceState(uint8_t reqState);
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t DefaultLplP__startRadio__postTask(void );
/* # 92 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static bool DefaultLplP__SendDoneTimer__isRunning(void );
/* #line 73 */
static void DefaultLplP__SendDoneTimer__startOneShot(uint32_t dt);




static void DefaultLplP__SendDoneTimer__stop(void );
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc" */
static error_t DefaultLplP__PacketAcknowledgements__requestAck(
/* #line 53 */
message_t * msg);
/* #line 71 */
static error_t DefaultLplP__PacketAcknowledgements__noAck(
/* #line 65 */
message_t * msg);
/* #line 85 */
static bool DefaultLplP__PacketAcknowledgements__wasAcked(
/* #line 80 */
message_t * msg);
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static uint8_t DefaultLplP__SplitControlState__getState(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t DefaultLplP__resend__postTask(void );
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/PowerCycle.nc" */
static uint16_t DefaultLplP__PowerCycle__getSleepInterval(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t DefaultLplP__stopRadio__postTask(void );
/* # 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
enum DefaultLplP____nesc_unnamed4385 {
/* #line 109 */
  DefaultLplP__send = 19U
};
/* #line 109 */
typedef int DefaultLplP____nesc_sillytask_send[DefaultLplP__send];
enum DefaultLplP____nesc_unnamed4386 {
/* #line 110 */
  DefaultLplP__resend = 20U
};
/* #line 110 */
typedef int DefaultLplP____nesc_sillytask_resend[DefaultLplP__resend];
enum DefaultLplP____nesc_unnamed4387 {
/* #line 111 */
  DefaultLplP__startRadio = 21U
};
/* #line 111 */
typedef int DefaultLplP____nesc_sillytask_startRadio[DefaultLplP__startRadio];
enum DefaultLplP____nesc_unnamed4388 {
/* #line 112 */
  DefaultLplP__stopRadio = 22U
};
/* #line 112 */
typedef int DefaultLplP____nesc_sillytask_stopRadio[DefaultLplP__stopRadio];
/* #line 78 */
message_t *DefaultLplP__currentSendMsg;


uint8_t DefaultLplP__currentSendLen;


bool DefaultLplP__dutyCycling;




enum DefaultLplP____nesc_unnamed4389 {
  DefaultLplP__S_OFF, 
  DefaultLplP__S_TURNING_ON, 
  DefaultLplP__S_ON, 
  DefaultLplP__S_TURNING_OFF
};




enum DefaultLplP____nesc_unnamed4390 {
  DefaultLplP__S_IDLE, 
  DefaultLplP__S_SENDING
};

enum DefaultLplP____nesc_unnamed4391 {
  DefaultLplP__ONE_MESSAGE = 0
};







static void DefaultLplP__initializeSend(void );
static inline void DefaultLplP__startOffTimer(void );


static inline error_t DefaultLplP__Init__init(void );
/* #line 149 */
static inline void DefaultLplP__LowPowerListening__setRemoteWakeupInterval(message_t *msg, 
uint16_t intervalMs);






static inline uint16_t DefaultLplP__LowPowerListening__getRemoteWakeupInterval(message_t *msg);
/* #line 169 */
static inline error_t DefaultLplP__Send__send(message_t *msg, uint8_t len);
/* #line 209 */
static inline uint8_t DefaultLplP__Send__maxPayloadLength(void );









static inline void DefaultLplP__RadioBackoff__requestInitialBackoff(message_t *msg);







static inline void DefaultLplP__RadioBackoff__requestCongestionBackoff(message_t *msg);







static inline void DefaultLplP__RadioBackoff__requestCca(message_t *msg);








static inline void DefaultLplP__PowerCycle__detected(void );
/* #line 256 */
static inline void DefaultLplP__SubControl__startDone(error_t error);










static inline void DefaultLplP__SubControl__stopDone(error_t error);
/* #line 283 */
static inline void DefaultLplP__SubSend__sendDone(message_t *msg, error_t error);
/* #line 320 */
static inline message_t *DefaultLplP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len);





static inline void DefaultLplP__OffTimer__fired(void );
/* #line 344 */
static inline void DefaultLplP__SendDoneTimer__fired(void );
/* #line 358 */
static inline void DefaultLplP__Resend__sendDone(message_t *p_msg, error_t error);





static inline void DefaultLplP__send__runTask(void );





static inline void DefaultLplP__resend__runTask(void );





static inline void DefaultLplP__startRadio__runTask(void );





static inline void DefaultLplP__stopRadio__runTask(void );








static void DefaultLplP__initializeSend(void );
/* #line 410 */
static inline void DefaultLplP__startOffTimer(void );
/* # 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
static void PowerCycleP__SplitControl__startDone(error_t error);
/* #line 138 */
static void PowerCycleP__SplitControl__stopDone(error_t error);
/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/ReceiveIndicator.nc" */
static bool PowerCycleP__EnergyIndicator__isReceiving(void );
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static bool PowerCycleP__SendState__isIdle(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t PowerCycleP__startRadio__postTask(void );
/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
static error_t PowerCycleP__SubControl__start(void );
/* #line 130 */
static error_t PowerCycleP__SubControl__stop(void );
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static uint8_t PowerCycleP__RadioPowerState__getState(void );
/* #line 51 */
static void PowerCycleP__RadioPowerState__forceState(uint8_t reqState);
/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/ReceiveIndicator.nc" */
static bool PowerCycleP__PacketIndicator__isReceiving(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t PowerCycleP__getCca__postTask(void );
/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static bool PowerCycleP__SplitControlState__isState(uint8_t myState);
/* #line 51 */
static void PowerCycleP__SplitControlState__forceState(uint8_t reqState);
/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static void PowerCycleP__OnTimer__startOneShot(uint32_t dt);
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/PowerCycle.nc" */
static void PowerCycleP__PowerCycle__detected(void );
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t PowerCycleP__stopRadio__postTask(void );
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc" */
enum PowerCycleP____nesc_unnamed4392 {
/* #line 95 */
  PowerCycleP__stopRadio = 23U
};
/* #line 95 */
typedef int PowerCycleP____nesc_sillytask_stopRadio[PowerCycleP__stopRadio];
enum PowerCycleP____nesc_unnamed4393 {
/* #line 96 */
  PowerCycleP__startRadio = 24U
};
/* #line 96 */
typedef int PowerCycleP____nesc_sillytask_startRadio[PowerCycleP__startRadio];
enum PowerCycleP____nesc_unnamed4394 {
/* #line 97 */
  PowerCycleP__getCca = 25U
};
/* #line 97 */
typedef int PowerCycleP____nesc_sillytask_getCca[PowerCycleP__getCca];
/* #line 78 */
uint16_t PowerCycleP__sleepInterval = 0;


uint16_t PowerCycleP__ccaChecks;




enum PowerCycleP____nesc_unnamed4395 {
  PowerCycleP__S_OFF, 
  PowerCycleP__S_TURNING_ON, 
  PowerCycleP__S_ON, 
  PowerCycleP__S_TURNING_OFF
};







static bool PowerCycleP__finishSplitControlRequests(void );
static inline bool PowerCycleP__isDutyCycling(void );
/* #line 129 */
static inline uint16_t PowerCycleP__PowerCycle__getSleepInterval(void );





static inline error_t PowerCycleP__SplitControl__start(void );
/* #line 177 */
static inline void PowerCycleP__OnTimer__fired(void );
/* #line 196 */
static inline void PowerCycleP__SubControl__startDone(error_t error);
/* #line 208 */
static inline void PowerCycleP__SubControl__stopDone(error_t error);
/* #line 223 */
static inline void PowerCycleP__stopRadio__runTask(void );








static inline void PowerCycleP__startRadio__runTask(void );





static inline void PowerCycleP__getCca__runTask(void );
/* #line 276 */
static inline bool PowerCycleP__isDutyCycling(void );







static bool PowerCycleP__finishSplitControlRequests(void );
/* # 10 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/SystemLowPowerListeningP.nc" */
uint16_t SystemLowPowerListeningP__remoteWakeup = 0;
uint16_t SystemLowPowerListeningP__delayAfterReceive = 100;




static inline uint16_t SystemLowPowerListeningP__SystemLowPowerListening__getDefaultRemoteWakeupInterval(void );
static inline uint16_t SystemLowPowerListeningP__SystemLowPowerListening__getDelayAfterReceive(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static error_t CC2420ActiveMessageP__SubSend__send(
/* #line 67 */
message_t * msg, 







uint8_t len);
/* #line 112 */
static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void );
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc" */
static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void );
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
static void CC2420ActiveMessageP__RadioBackoff__requestCca(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b20d60, 
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
message_t * msg);
/* #line 81 */
static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b20d60, 
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
message_t * msg);






static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b20d60, 
/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
message_t * msg);
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SendNotifier.nc" */
static void CC2420ActiveMessageP__SendNotifier__aboutToSend(
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b20258, 
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SendNotifier.nc" */
am_addr_t dest, 
/* #line 57 */
message_t * msg);
/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static void CC2420ActiveMessageP__AMSend__sendDone(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b257d8, 
/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
message_t * msg, 






error_t error);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



CC2420ActiveMessageP__Snoop__receive(
/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b23480, 
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc" */
static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void );
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
static 
/* #line 74 */
message_t * 



CC2420ActiveMessageP__Receive__receive(
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
am_id_t arg_0x102b24908, 
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
message_t * msg, 
void * payload, 





uint8_t len);
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
static error_t CC2420ActiveMessageP__RadioResource__release(void );
/* #line 97 */
static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void );
/* #line 88 */
static error_t CC2420ActiveMessageP__RadioResource__request(void );
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
uint16_t CC2420ActiveMessageP__pending_length;
message_t *CC2420ActiveMessageP__pending_message = (void *)0;

static void CC2420ActiveMessageP__RadioResource__granted(void );
/* #line 87 */
static error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
/* #line 135 */
static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void );



static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg);




static inline am_addr_t CC2420ActiveMessageP__AMPacket__source(message_t *amsg);




static inline void CC2420ActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr);









static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg);




static inline am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg);




static inline void CC2420ActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t type);
/* #line 194 */
static inline uint8_t CC2420ActiveMessageP__Packet__payloadLength(message_t *msg);



static inline void CC2420ActiveMessageP__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void );









static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result);






static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
/* #line 235 */
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error);





static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg);




static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg);



static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg);
/* #line 279 */
static inline message_t *CC2420ActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *CC2420ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);







static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg);

static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg);


static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg);
/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
/* #line 103 */
message_t * msg, 






error_t error);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static error_t /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
/* #line 67 */
message_t * msg, 







uint8_t len);
/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
static void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
/* #line 99 */
message_t * amsg, 



am_addr_t addr);
/* #line 162 */
static void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
/* #line 158 */
message_t * amsg, 



am_id_t t);
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc" */
static inline error_t /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
am_id_t arg_0x102bbe020, 
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
am_addr_t addr, 
/* #line 71 */
message_t * msg, 








uint8_t len);
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
uint8_t arg_0x102bc1e18, 
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
message_t * msg, 



error_t error);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc" */
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
/* #line 74 */
message_t * msg);
/* #line 94 */
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
/* #line 90 */
message_t * msg, 



uint8_t len);
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
/* #line 74 */
message_t * amsg);
/* #line 147 */
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
/* #line 143 */
message_t * amsg);
/* # 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4396 {
/* #line 126 */
  AMQueueImplP__0__CancelTask = 26U
};
/* #line 126 */
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
/* #line 169 */
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4397 {
/* #line 169 */
  AMQueueImplP__0__errorTask = 27U
};
/* #line 169 */
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
/* #line 57 */
/* #line 55 */
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4398 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
/* #line 90 */
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
/* #line 126 */
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
/* #line 163 */
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
/* #line 189 */
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
/* #line 215 */
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static error_t /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__send(am_addr_t addr, 
/* #line 71 */
message_t * msg, 








uint8_t len);
/* # 6 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SystemLowPowerListening.nc" */
static uint16_t /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__SystemLowPowerListening__getDefaultRemoteWakeupInterval(void );
/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__sendDone(
/* #line 103 */
message_t * msg, 






error_t error);
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/LowPowerListening.nc" */
static void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__Lpl__setRemoteWakeupInterval(
/* #line 62 */
message_t * msg, 


uint16_t intervalMs);
/* # 13 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LplAMSenderP.nc" */
static inline error_t /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len);





static inline void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__sendDone(message_t *msg, error_t error);
/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static void /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(
/* #line 103 */
message_t * msg, 






error_t error);
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static error_t /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__Send__send(
/* #line 67 */
message_t * msg, 







uint8_t len);
/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
static void /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(
/* #line 99 */
message_t * amsg, 



am_addr_t addr);
/* #line 162 */
static void /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(
/* #line 158 */
message_t * amsg, 



am_id_t t);
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc" */
static error_t /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err);
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
am_id_t arg_0x102bbe020, 
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
am_addr_t addr, 
/* #line 71 */
message_t * msg, 








uint8_t len);
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(
/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
uint8_t arg_0x102bc1e18, 
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
message_t * msg, 



error_t error);
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc" */
static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(
/* #line 74 */
message_t * msg);
/* #line 94 */
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(
/* #line 90 */
message_t * msg, 



uint8_t len);
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void );
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(
/* #line 74 */
message_t * amsg);
/* #line 147 */
static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(
/* #line 143 */
message_t * amsg);
/* # 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4399 {
/* #line 126 */
  AMQueueImplP__1__CancelTask = 28U
};
/* #line 126 */
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_CancelTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask];
/* #line 169 */
enum /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4400 {
/* #line 169 */
  AMQueueImplP__1__errorTask = 29U
};
/* #line 169 */
typedef int /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_sillytask_errorTask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask];
/* #line 57 */
/* #line 55 */
typedef struct /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1____nesc_unnamed4401 {
  message_t * msg;
} /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t;

uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue_entry_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[1];
uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[1 / 8 + 1];

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );

static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void );
/* #line 90 */
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
/* #line 126 */
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void );
/* #line 163 */
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void );




static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void );
/* #line 189 */
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
/* #line 215 */
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
/* # 223 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/msp430hardware.h" */
static inline  void __nesc_enable_interrupt(void )
{
_R2 |= 0x0008;}

/* # 196 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void )
{
}

/* #line 196 */
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void )
{
}

/* #line 196 */
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void )
{
}

/* # 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/BusyWaitCounterC.nc" */
static inline void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow(void )
{
}

/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
inline static void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__overflow(void ){
/* #line 82 */
  /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__overflow();
/* #line 82 */
}
/* #line 82 */
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc" */
static inline void /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__overflow(void )
{
  /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__overflow();
}

/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void ){
/* #line 48 */
  /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__overflow();
/* #line 48 */
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow();
/* #line 48 */
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow();
/* #line 48 */
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow();
/* #line 48 */
}
/* #line 48 */
/* # 137 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow();
}





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n)
{
}

/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x1015d0de0){
/* #line 39 */
  switch (arg_0x1015d0de0) {
/* #line 39 */
    case 0:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired();
/* #line 39 */
      break;
/* #line 39 */
    case 1:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired();
/* #line 39 */
      break;
/* #line 39 */
    case 2:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired();
/* #line 39 */
      break;
/* #line 39 */
    case 5:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired();
/* #line 39 */
      break;
/* #line 39 */
    default:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x1015d0de0);
/* #line 39 */
      break;
/* #line 39 */
    }
/* #line 39 */
}
/* #line 39 */
/* # 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(0);
}

/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
inline static void Msp430TimerCommonP__VectorTimerA0__fired(void ){
/* #line 39 */
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired();
/* #line 39 */
}
/* #line 39 */
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)
/* #line 58 */
{
/* #line 58 */
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4402 {
/* #line 58 */
    uint16_t f;
/* #line 58 */
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t t;
  } 
/* #line 58 */
  c = { .f = x };

/* #line 58 */
  return c.t;
}

/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(* (volatile uint16_t * )354U);
}

/* #line 188 */
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n)
{
}

/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time){
/* #line 86 */
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(time);
/* #line 86 */
}
/* #line 86 */
/* # 150 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void )
{
  return * (volatile uint16_t * )370U;
}

/* #line 192 */
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void )
{
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void ){
/* #line 45 */
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired();
/* #line 45 */
}
/* #line 45 */
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)
/* #line 58 */
{
/* #line 58 */
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4403 {
/* #line 58 */
    uint16_t f;
/* #line 58 */
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t t;
  } 
/* #line 58 */
  c = { .f = x };

/* #line 58 */
  return c.t;
}

/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(* (volatile uint16_t * )356U);
}

/* #line 188 */
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n)
{
}

/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time){
/* #line 86 */
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(time);
/* #line 86 */
}
/* #line 86 */
/* # 150 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void )
{
  return * (volatile uint16_t * )372U;
}

/* #line 192 */
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void )
{
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void ){
/* #line 45 */
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired();
/* #line 45 */
}
/* #line 45 */
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)
/* #line 58 */
{
/* #line 58 */
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2____nesc_unnamed4404 {
/* #line 58 */
    uint16_t f;
/* #line 58 */
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t t;
  } 
/* #line 58 */
  c = { .f = x };

/* #line 58 */
  return c.t;
}

/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(* (volatile uint16_t * )358U);
}

/* #line 188 */
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n)
{
}

/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time){
/* #line 86 */
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(time);
/* #line 86 */
}
/* #line 86 */
/* # 150 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void )
{
  return * (volatile uint16_t * )374U;
}

/* #line 192 */
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void )
{
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void ){
/* #line 45 */
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired();
/* #line 45 */
}
/* #line 45 */
/* # 131 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )302U;

/* #line 134 */
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(n >> 1);
}

/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
inline static void Msp430TimerCommonP__VectorTimerA1__fired(void ){
/* #line 39 */
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired();
/* #line 39 */
}
/* #line 39 */
/* # 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(0);
}

/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
inline static void Msp430TimerCommonP__VectorTimerB0__fired(void ){
/* #line 39 */
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired();
/* #line 39 */
}
/* #line 39 */
/* # 196 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void )
{
}

/* #line 196 */
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void )
{
}

/* #line 196 */
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void )
{
}

/* #line 196 */
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void )
{
}

/* #line 196 */
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void )
{
}

/* #line 196 */
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void )
{
}

/* #line 196 */
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void )
{
}

/* # 208 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow(void )
/* #line 208 */
{
}

/* # 177 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void )
{
}

/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc" */
static inline void /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
inline static void /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow(void ){
/* #line 82 */
  /*CC2420PacketC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
/* #line 82 */
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow();
/* #line 82 */
}
/* #line 82 */
/* # 133 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformCounterC.nc" */
static inline void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper++;
    if ((/*Counter32khz32C.Transform*/TransformCounterC__0__m_upper & /*Counter32khz32C.Transform*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow();
      }
  }
}

/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc" */
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

/* # 177 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow(void )
{
}

/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
inline static void /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow(void ){
/* #line 82 */
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__overflow();
/* #line 82 */
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
/* #line 82 */
}
/* #line 82 */
/* # 133 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformCounterC.nc" */
static inline void /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper++;
    if ((/*CounterMilli32C.Transform*/TransformCounterC__1__m_upper & /*CounterMilli32C.Transform*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__overflow();
      }
  }
}

/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void ){
/* #line 82 */
  /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__overflow();
/* #line 82 */
  /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow();
/* #line 82 */
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Counter__overflow();
/* #line 82 */
}
/* #line 82 */
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc" */
static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void )
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow();
}

/* # 114 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc" */
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void )
{
}

/* #line 114 */
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}

/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void ){
/* #line 48 */
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow();
/* #line 48 */
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow();
/* #line 48 */
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow();
/* #line 48 */
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow();
/* #line 48 */
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow();
/* #line 48 */
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow();
/* #line 48 */
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow();
/* #line 48 */
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow();
/* #line 48 */
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow();
/* #line 48 */
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow();
/* #line 48 */
}
/* #line 48 */
/* # 137 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow();
}

/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420ControlP__SpiResource__request(void ){
/* #line 88 */
  unsigned char __nesc_result;
/* #line 88 */

/* #line 88 */
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
/* #line 88 */

/* #line 88 */
  return __nesc_result;
/* #line 88 */
}
/* #line 88 */
/* # 178 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline error_t CC2420ControlP__Resource__request(void )
/* #line 178 */
{
  return CC2420ControlP__SpiResource__request();
}

/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420CsmaP__Resource__request(void ){
/* #line 88 */
  unsigned char __nesc_result;
/* #line 88 */

/* #line 88 */
  __nesc_result = CC2420ControlP__Resource__request();
/* #line 88 */

/* #line 88 */
  return __nesc_result;
/* #line 88 */
}
/* #line 88 */
/* # 210 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static inline void CC2420CsmaP__CC2420Power__startVRegDone(void )
/* #line 210 */
{
  CC2420CsmaP__Resource__request();
}

/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc" */
inline static void CC2420ControlP__CC2420Power__startVRegDone(void ){
/* #line 56 */
  CC2420CsmaP__CC2420Power__startVRegDone();
/* #line 56 */
}
/* #line 56 */
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set(void ){
/* #line 45 */
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set();
/* #line 45 */
}
/* #line 45 */
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void )
/* #line 48 */
{
/* #line 48 */
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set();
}

/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420ControlP__RSTN__set(void ){
/* #line 40 */
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set();
/* #line 40 */
}
/* #line 40 */
/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr(void ){
/* #line 50 */
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr();
/* #line 50 */
}
/* #line 50 */
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void )
/* #line 49 */
{
/* #line 49 */
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr();
}

/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420ControlP__RSTN__clr(void ){
/* #line 41 */
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr();
/* #line 41 */
}
/* #line 41 */
/* # 419 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline void CC2420ControlP__StartupTimer__fired(void )
/* #line 419 */
{
  if (CC2420ControlP__m_state == CC2420ControlP__S_VREG_STARTING) {
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__RSTN__clr();
      CC2420ControlP__RSTN__set();
      CC2420ControlP__CC2420Power__startVRegDone();
    }
}

/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420TransmitP__SpiResource__release(void ){
/* #line 120 */
  unsigned char __nesc_result;
/* #line 120 */

/* #line 120 */
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
/* #line 120 */

/* #line 120 */
  return __nesc_result;
/* #line 120 */
}
/* #line 120 */
/* # 797 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline error_t CC2420TransmitP__releaseSpiResource(void )
/* #line 797 */
{
  CC2420TransmitP__SpiResource__release();
  return SUCCESS;
}

/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc" */
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void )
/* #line 61 */
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_RISING);
}

/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioCapture.nc" */
inline static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge();
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
inline static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHTX);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
inline static /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get(void ){
/* #line 64 */
  unsigned long __nesc_result;
/* #line 64 */

/* #line 64 */
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get();
/* #line 64 */

/* #line 64 */
  return __nesc_result;
/* #line 64 */
}
/* #line 64 */
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
static inline /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get();
}

/* #line 157 */
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(), dt);
}

/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static void CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__BackoffTimer__size_type dt){
/* #line 66 */
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(dt);
/* #line 66 */
}
/* #line 66 */
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void )
/* #line 59 */
{
/* #line 59 */
  return * (volatile uint8_t * )32U & (0x01 << 4);
}

/* #line 60 */
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void )
/* #line 60 */
{
/* #line 60 */
  return /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw() != 0;
}

/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get(void ){
/* #line 70 */
  unsigned char __nesc_result;
/* #line 70 */

/* #line 70 */
  __nesc_result = /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get();
/* #line 70 */

/* #line 70 */
  return __nesc_result;
/* #line 70 */
}
/* #line 70 */
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void )
/* #line 51 */
{
/* #line 51 */
  return /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get();
}

/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static bool CC2420TransmitP__CCA__get(void ){
/* #line 43 */
  unsigned char __nesc_result;
/* #line 43 */

/* #line 43 */
  __nesc_result = /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get();
/* #line 43 */

/* #line 43 */
  return __nesc_result;
/* #line 43 */
}
/* #line 43 */
/* # 498 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline void CC2420TransmitP__BackoffTimer__fired(void )
/* #line 498 */
{
  /* atomic removed: atomic calls only */
/* #line 499 */
  {
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SAMPLE_CCA: 


          if (CC2420TransmitP__CCA__get()) {
              CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
              CC2420TransmitP__BackoffTimer__start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP__congestionBackoff();
            }
        break;

        case CC2420TransmitP__S_BEGIN_TRANSMIT: 
          case CC2420TransmitP__S_CANCEL: 
            if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
                CC2420TransmitP__attemptSend();
              }
        break;

        case CC2420TransmitP__S_ACK_WAIT: 
          CC2420TransmitP__signalDone(SUCCESS);
        break;

        case CC2420TransmitP__S_SFD: 


          CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CaptureSFD__captureRisingEdge();
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired(void ){
/* #line 78 */
  CC2420TransmitP__BackoffTimer__fired();
/* #line 78 */
  CC2420ControlP__StartupTimer__fired();
/* #line 78 */
}
/* #line 78 */
/* # 162 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt == 0) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm();
      }
  }
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void ){
/* #line 78 */
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired();
/* #line 78 */
}
/* #line 78 */
/* # 135 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}

/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void ){
/* #line 58 */
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents();
/* #line 58 */
}
/* #line 58 */
/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc" */
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired();
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void ){
/* #line 45 */
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired();
/* #line 45 */
}
/* #line 45 */
/* # 150 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void )
{
  return * (volatile uint16_t * )402U;
}

/* #line 188 */
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n)
{
}

/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time){
/* #line 86 */
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(time);
/* #line 86 */
}
/* #line 86 */
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)
/* #line 58 */
{
/* #line 58 */
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4405 {
/* #line 58 */
    uint16_t f;
/* #line 58 */
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t t;
  } 
/* #line 58 */
  c = { .f = x };

/* #line 58 */
  return c.t;
}

/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(* (volatile uint16_t * )386U);
}

/* #line 180 */
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent());
    }
  else {
/* #line 185 */
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired();
    }
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
inline static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void ){
/* #line 45 */
  unsigned int __nesc_result;
/* #line 45 */

/* #line 45 */
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
/* #line 45 */

/* #line 45 */
  return __nesc_result;
/* #line 45 */
}
/* #line 45 */
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc" */
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get();
}

/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
inline static /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get(void ){
/* #line 64 */
  unsigned int __nesc_result;
/* #line 64 */

/* #line 64 */
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
/* #line 64 */

/* #line 64 */
  return __nesc_result;
/* #line 64 */
}
/* #line 64 */
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void )
{
  return * (volatile uint16_t * )384U & 1U;
}

/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
inline static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void ){
/* #line 46 */
  unsigned char __nesc_result;
/* #line 46 */

/* #line 46 */
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending();
/* #line 46 */

/* #line 46 */
  return __nesc_result;
/* #line 46 */
}
/* #line 46 */
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc" */
static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending();
}

/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
inline static bool /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
/* #line 71 */
  unsigned char __nesc_result;
/* #line 71 */

/* #line 71 */
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
/* #line 71 */

/* #line 71 */
  return __nesc_result;
/* #line 71 */
}
/* #line 71 */
/* # 130 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}

/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void ){
/* #line 57 */
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents();
/* #line 57 */
}
/* #line 57 */
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )386U &= ~0x0001;
}

/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void ){
/* #line 44 */
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt();
/* #line 44 */
}
/* #line 44 */
/* # 155 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )402U = x;
}

/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time){
/* #line 41 */
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(time);
/* #line 41 */
}
/* #line 41 */
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
inline static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void ){
/* #line 45 */
  unsigned int __nesc_result;
/* #line 45 */

/* #line 45 */
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
/* #line 45 */

/* #line 45 */
  return __nesc_result;
/* #line 45 */
}
/* #line 45 */
/* # 165 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )402U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get() + x;
}

/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta){
/* #line 43 */
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(delta);
/* #line 43 */
}
/* #line 43 */
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
inline static uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void ){
/* #line 45 */
  unsigned int __nesc_result;
/* #line 45 */

/* #line 45 */
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
/* #line 45 */

/* #line 45 */
  return __nesc_result;
/* #line 45 */
}
/* #line 45 */
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc" */
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get();
    uint16_t elapsed = now - t0;

/* #line 87 */
    if (elapsed >= dt) 
      {
        /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

/* #line 94 */
        if (remaining <= 2) {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
          }
        else {
/* #line 97 */
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(now + remaining);
          }
      }
/* #line 99 */
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents();
  }
}

/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt){
/* #line 103 */
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(t0, dt);
/* #line 103 */
}
/* #line 103 */
/* # 292 "/opt/local/lib/ncc/nesc_nx.h" */
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
/* #line 292 */
{
  const uint8_t *base = source;

/* #line 294 */
  return base[0];
}

/* # 297 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(am_id_t id, 
message_t *msg)
/* #line 298 */
{
}

/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
inline static void CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(am_id_t arg_0x102b20d60, message_t * msg){
/* #line 88 */
    CC2420ActiveMessageP__RadioBackoff__default__requestCongestionBackoff(arg_0x102b20d60, msg);
/* #line 88 */
}
/* #line 88 */
/* # 246 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline void CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(message_t *msg)
/* #line 246 */
{
  CC2420ActiveMessageP__RadioBackoff__requestCongestionBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

/* # 310 "/opt/local/lib/ncc/nesc_nx.h" */
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
/* #line 310 */
{
  const uint8_t *base = source;

/* #line 312 */
  return ((uint16_t )base[0] << 8) | base[1];
}

/* # 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/RandomMlcgC.nc" */
static inline uint16_t RandomMlcgC__Random__rand16(void )
/* #line 89 */
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc" */
inline static uint16_t DefaultLplP__Random__rand16(void ){
/* #line 52 */
  unsigned int __nesc_result;
/* #line 52 */

/* #line 52 */
  __nesc_result = RandomMlcgC__Random__rand16();
/* #line 52 */

/* #line 52 */
  return __nesc_result;
/* #line 52 */
}
/* #line 52 */
/* # 251 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline void CC2420TransmitP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime)
/* #line 251 */
{
  CC2420TransmitP__myCongestionBackoff = backoffTime + 1;
}

/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
inline static void CC2420CsmaP__SubBackoff__setCongestionBackoff(uint16_t backoffTime){
/* #line 66 */
  CC2420TransmitP__RadioBackoff__setCongestionBackoff(backoffTime);
/* #line 66 */
}
/* #line 66 */
/* # 190 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static inline void CC2420CsmaP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime)
/* #line 190 */
{
  CC2420CsmaP__SubBackoff__setCongestionBackoff(backoffTime);
}

/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
inline static void DefaultLplP__RadioBackoff__setCongestionBackoff(uint16_t backoffTime){
/* #line 66 */
  CC2420CsmaP__RadioBackoff__setCongestionBackoff(backoffTime);
/* #line 66 */
}
/* #line 66 */
/* # 152 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static inline cc2420_metadata_t *CC2420PacketP__CC2420PacketBody__getMetadata(message_t *msg)
/* #line 152 */
{
  return (cc2420_metadata_t *)msg->metadata;
}

/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
inline static cc2420_metadata_t * DefaultLplP__CC2420PacketBody__getMetadata(message_t * msg){
/* #line 53 */
  nx_struct cc2420_metadata_t *__nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 227 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__RadioBackoff__requestCongestionBackoff(message_t *msg)
/* #line 227 */
{

  if (__nesc_ntoh_uint16(
/* #line 228 */
  DefaultLplP__CC2420PacketBody__getMetadata(msg)->rxInterval.nxdata)
   > DefaultLplP__ONE_MESSAGE) {
      DefaultLplP__RadioBackoff__setCongestionBackoff(DefaultLplP__Random__rand16()
       % (0x3 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);
    }
}

/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
inline static void CC2420CsmaP__RadioBackoff__requestCongestionBackoff(message_t * msg){
/* #line 88 */
  DefaultLplP__RadioBackoff__requestCongestionBackoff(msg);
/* #line 88 */
  CC2420ActiveMessageP__SubBackoff__requestCongestionBackoff(msg);
/* #line 88 */
}
/* #line 88 */
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc" */
inline static uint16_t CC2420CsmaP__Random__rand16(void ){
/* #line 52 */
  unsigned int __nesc_result;
/* #line 52 */

/* #line 52 */
  __nesc_result = RandomMlcgC__Random__rand16();
/* #line 52 */

/* #line 52 */
  return __nesc_result;
/* #line 52 */
}
/* #line 52 */
/* # 230 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static inline void CC2420CsmaP__SubBackoff__requestCongestionBackoff(message_t *msg)
/* #line 230 */
{
  CC2420CsmaP__SubBackoff__setCongestionBackoff(CC2420CsmaP__Random__rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestCongestionBackoff(msg);
}

/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
inline static void CC2420TransmitP__RadioBackoff__requestCongestionBackoff(message_t * msg){
/* #line 88 */
  CC2420CsmaP__SubBackoff__requestCongestionBackoff(msg);
/* #line 88 */
}
/* #line 88 */
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420TransmitP__SpiResource__immediateRequest(void ){
/* #line 97 */
  unsigned char __nesc_result;
/* #line 97 */

/* #line 97 */
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
/* #line 97 */

/* #line 97 */
  return __nesc_result;
/* #line 97 */
}
/* #line 97 */
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState){
/* #line 45 */
  unsigned char __nesc_result;
/* #line 45 */

/* #line 45 */
  __nesc_result = StateImplP__State__requestState(0U, reqState);
/* #line 45 */

/* #line 45 */
  return __nesc_result;
/* #line 45 */
}
/* #line 45 */
/* # 173 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(uint8_t id)
/* #line 173 */
{
/* #line 173 */
  return FAIL;
}

/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(uint8_t arg_0x1022fa0c8){
/* #line 128 */
  unsigned char __nesc_result;
/* #line 128 */

/* #line 128 */
  switch (arg_0x1022fa0c8) {
/* #line 128 */
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
/* #line 128 */
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
/* #line 128 */
      break;
/* #line 128 */
    default:
/* #line 128 */
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(arg_0x1022fa0c8);
/* #line 128 */
      break;
/* #line 128 */
    }
/* #line 128 */

/* #line 128 */
  return __nesc_result;
/* #line 128 */
}
/* #line 128 */
/* # 112 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(uint8_t id)
/* #line 112 */
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(id);
}

/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static bool CC2420SpiP__SpiResource__isOwner(void ){
/* #line 128 */
  unsigned char __nesc_result;
/* #line 128 */

/* #line 128 */
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
/* #line 128 */

/* #line 128 */
  return __nesc_result;
/* #line 128 */
}
/* #line 128 */
/* # 177 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(uint8_t id)
/* #line 177 */
{
  return &msp430_spi_default_config;
}

/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiConfigure.nc" */
inline static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(uint8_t arg_0x1022f92f0){
/* #line 39 */
  union __nesc_unnamed4282 *__nesc_result;
/* #line 39 */

/* #line 39 */
    __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(arg_0x1022f92f0);
/* #line 39 */

/* #line 39 */
  return __nesc_result;
/* #line 39 */
}
/* #line 39 */
/* # 168 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(msp430_spi_union_config_t *config){
/* #line 168 */
  HplMsp430Usart0P__Usart__setModeSpi(config);
/* #line 168 */
}
/* #line 168 */
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id)
/* #line 120 */
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(id));
}

/* # 216 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
/* #line 216 */
{
}

/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x101d7d9b8){
/* #line 59 */
  switch (arg_0x101d7d9b8) {
/* #line 59 */
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
/* #line 59 */
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
/* #line 59 */
      break;
/* #line 59 */
    default:
/* #line 59 */
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(arg_0x101d7d9b8);
/* #line 59 */
      break;
/* #line 59 */
    }
/* #line 59 */
}
/* #line 59 */
/* # 213 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__immediateRequested(void )
/* #line 213 */
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release();
}

/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc" */
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__immediateRequested(void ){
/* #line 81 */
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__immediateRequested();
/* #line 81 */
}
/* #line 81 */
/* # 206 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id)
/* #line 206 */
{
}

/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceRequested.nc" */
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__immediateRequested(uint8_t arg_0x101d807e8){
/* #line 61 */
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__immediateRequested(arg_0x101d807e8);
/* #line 61 */
}
/* #line 61 */
/* # 93 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(uint8_t id)
/* #line 93 */
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__immediateRequested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
  /* atomic removed: atomic calls only */
/* #line 95 */
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_IMM_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
/* #line 100 */
        FAIL;

/* #line 100 */
        return __nesc_temp;
      }
  }
/* #line 102 */
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId == id) {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
/* #line 107 */
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
  return FAIL;
}

/* # 175 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(uint8_t id)
/* #line 175 */
{
/* #line 175 */
  return FAIL;
}

/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(uint8_t arg_0x1022fa0c8){
/* #line 97 */
  unsigned char __nesc_result;
/* #line 97 */

/* #line 97 */
  switch (arg_0x1022fa0c8) {
/* #line 97 */
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
/* #line 97 */
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
/* #line 97 */
      break;
/* #line 97 */
    default:
/* #line 97 */
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(arg_0x1022fa0c8);
/* #line 97 */
      break;
/* #line 97 */
    }
/* #line 97 */

/* #line 97 */
  return __nesc_result;
/* #line 97 */
}
/* #line 97 */
/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(uint8_t id)
/* #line 104 */
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(id);
}

/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420SpiP__SpiResource__immediateRequest(void ){
/* #line 97 */
  unsigned char __nesc_result;
/* #line 97 */

/* #line 97 */
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
/* #line 97 */

/* #line 97 */
  return __nesc_result;
/* #line 97 */
}
/* #line 97 */
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/SchedulerBasicP.nc" */
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

/* # 151 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset)
/* #line 151 */
{
  if (reset) {
      U0CTL = 0x01;
    }
  else {
      U0CTL &= ~0x01;
    }
}

/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
inline static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset){
/* #line 97 */
  HplMsp430Usart0P__Usart__resetUsart(reset);
/* #line 97 */
}
/* #line 97 */
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C0P.nc" */
static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void )
/* #line 59 */
{
  /* atomic removed: atomic calls only */
/* #line 60 */
  {
    HplMsp430I2C0P__U0CTL &= ~((0x20 | 0x04) | 0x01);
    HplMsp430I2C0P__HplUsart__resetUsart(TRUE);
  }
}

/* # 7 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc" */
inline static void HplMsp430Usart0P__HplI2C__clearModeI2C(void ){
/* #line 7 */
  HplMsp430I2C0P__HplI2C__clearModeI2C();
/* #line 7 */
}
/* #line 7 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void )
/* #line 67 */
{
  /* atomic removed: atomic calls only */
/* #line 67 */
  * (volatile uint8_t * )27U &= ~(0x01 << 5);
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart0P__URXD__selectIOFunc(void ){
/* #line 96 */
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc();
/* #line 96 */
}
/* #line 96 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void )
/* #line 67 */
{
  /* atomic removed: atomic calls only */
/* #line 67 */
  * (volatile uint8_t * )27U &= ~(0x01 << 4);
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart0P__UTXD__selectIOFunc(void ){
/* #line 96 */
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc();
/* #line 96 */
}
/* #line 96 */
/* # 207 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
static inline void HplMsp430Usart0P__Usart__disableUart(void )
/* #line 207 */
{
  /* atomic removed: atomic calls only */
/* #line 208 */
  {
    HplMsp430Usart0P__ME1 &= ~((1 << 7) | (1 << 6));
    HplMsp430Usart0P__UTXD__selectIOFunc();
    HplMsp430Usart0P__URXD__selectIOFunc();
  }
}

/* #line 143 */
static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control)
/* #line 143 */
{
  U0MCTL = control;
}

/* #line 132 */
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control)
/* #line 132 */
{
  /* atomic removed: atomic calls only */
/* #line 133 */
  {
    U0BR0 = control & 0x00FF;
    U0BR1 = (control >> 8) & 0x00FF;
  }
}

/* #line 256 */
static inline void HplMsp430Usart0P__configSpi(msp430_spi_union_config_t *config)
/* #line 256 */
{

  U0CTL = (config->spiRegisters.uctl | 0x04) | 0x01;
  HplMsp430Usart0P__U0TCTL = config->spiRegisters.utctl;

  HplMsp430Usart0P__Usart__setUbr(config->spiRegisters.ubr);
  HplMsp430Usart0P__Usart__setUmctl(0x00);
}

/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void )
/* #line 65 */
{
  /* atomic removed: atomic calls only */
/* #line 65 */
  * (volatile uint8_t * )27U |= 0x01 << 3;
}

/* # 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart0P__UCLK__selectModuleFunc(void ){
/* #line 89 */
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc();
/* #line 89 */
}
/* #line 89 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void )
/* #line 65 */
{
  /* atomic removed: atomic calls only */
/* #line 65 */
  * (volatile uint8_t * )27U |= 0x01 << 2;
}

/* # 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart0P__SOMI__selectModuleFunc(void ){
/* #line 89 */
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc();
/* #line 89 */
}
/* #line 89 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void )
/* #line 65 */
{
  /* atomic removed: atomic calls only */
/* #line 65 */
  * (volatile uint8_t * )27U |= 0x01 << 1;
}

/* # 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart0P__SIMO__selectModuleFunc(void ){
/* #line 89 */
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc();
/* #line 89 */
}
/* #line 89 */
/* # 238 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
static inline void HplMsp430Usart0P__Usart__enableSpi(void )
/* #line 238 */
{
  /* atomic removed: atomic calls only */
/* #line 239 */
  {
    HplMsp430Usart0P__SIMO__selectModuleFunc();
    HplMsp430Usart0P__SOMI__selectModuleFunc();
    HplMsp430Usart0P__UCLK__selectModuleFunc();
  }
  HplMsp430Usart0P__ME1 |= 1 << 6;
}

/* #line 345 */
static inline void HplMsp430Usart0P__Usart__clrIntr(void )
/* #line 345 */
{
  HplMsp430Usart0P__IFG1 &= ~((1 << 7) | (1 << 6));
}









static inline void HplMsp430Usart0P__Usart__disableIntr(void )
/* #line 357 */
{
  HplMsp430Usart0P__IE1 &= ~((1 << 7) | (1 << 6));
}

/* # 118 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
static inline void StateImplP__State__toIdle(uint8_t id)
/* #line 118 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 119 */
    StateImplP__state[id] = StateImplP__S_IDLE;
/* #line 119 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static void CC2420SpiP__WorkingState__toIdle(void ){
/* #line 56 */
  StateImplP__State__toIdle(0U);
/* #line 56 */
}
/* #line 56 */
/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420TransmitP__SpiResource__request(void ){
/* #line 88 */
  unsigned char __nesc_result;
/* #line 88 */

/* #line 88 */
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID);
/* #line 88 */

/* #line 88 */
  return __nesc_result;
/* #line 88 */
}
/* #line 88 */
/* # 210 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested(void )
/* #line 210 */
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release();
}

/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc" */
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void ){
/* #line 73 */
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__requested();
/* #line 73 */
}
/* #line 73 */
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id)
/* #line 64 */
{
  /* atomic removed: atomic calls only */
/* #line 65 */
  {
    unsigned char __nesc_temp = 
/* #line 65 */
    /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[id] != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY || /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail == id;

/* #line 65 */
    return __nesc_temp;
  }
}

/* #line 82 */
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id)
/* #line 82 */
{
  /* atomic removed: atomic calls only */
/* #line 83 */
  {
    if (!/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(id)) {
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead = id;
          }
        else {
/* #line 88 */
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail] = id;
          }
/* #line 89 */
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail = id;
        {
          unsigned char __nesc_temp = 
/* #line 90 */
          SUCCESS;

/* #line 90 */
          return __nesc_temp;
        }
      }
/* #line 92 */
    {
      unsigned char __nesc_temp = 
/* #line 92 */
      EBUSY;

/* #line 92 */
      return __nesc_temp;
    }
  }
}

/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id){
/* #line 79 */
  unsigned char __nesc_result;
/* #line 79 */

/* #line 79 */
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(id);
/* #line 79 */

/* #line 79 */
  return __nesc_result;
/* #line 79 */
}
/* #line 79 */
/* # 204 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id)
/* #line 204 */
{
}

/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceRequested.nc" */
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__requested(uint8_t arg_0x101d807e8){
/* #line 53 */
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(arg_0x101d807e8);
/* #line 53 */
}
/* #line 53 */
/* # 77 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__request(uint8_t id)
/* #line 77 */
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceRequested__requested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
  /* atomic removed: atomic calls only */
/* #line 79 */
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId = id;
      }
    else {
/* #line 84 */
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId == id) {
          {
            unsigned char __nesc_temp = 
/* #line 85 */
            SUCCESS;

/* #line 85 */
            return __nesc_temp;
          }
        }
      else 
/* #line 87 */
        {
          unsigned char __nesc_temp = 
/* #line 87 */
          /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__enqueue(id);

/* #line 87 */
          return __nesc_temp;
        }
      }
  }
/* #line 89 */
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested();
  return SUCCESS;
}

/* # 174 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id)
/* #line 174 */
{
/* #line 174 */
  return FAIL;
}

/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(uint8_t arg_0x1022fa0c8){
/* #line 88 */
  unsigned char __nesc_result;
/* #line 88 */

/* #line 88 */
  switch (arg_0x1022fa0c8) {
/* #line 88 */
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
/* #line 88 */
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
/* #line 88 */
      break;
/* #line 88 */
    default:
/* #line 88 */
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(arg_0x1022fa0c8);
/* #line 88 */
      break;
/* #line 88 */
    }
/* #line 88 */

/* #line 88 */
  return __nesc_result;
/* #line 88 */
}
/* #line 88 */
/* # 108 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id)
/* #line 108 */
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(id);
}

/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420SpiP__SpiResource__request(void ){
/* #line 88 */
  unsigned char __nesc_result;
/* #line 88 */

/* #line 88 */
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
/* #line 88 */

/* #line 88 */
  return __nesc_result;
/* #line 88 */
}
/* #line 88 */
/* # 382 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data)
/* #line 382 */
{
  HplMsp430Usart0P__U0TXBUF = data;
}

/* # 224 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(uint8_t data){
/* #line 224 */
  HplMsp430Usart0P__Usart__tx(data);
/* #line 224 */
}
/* #line 224 */
/* # 330 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
static inline bool HplMsp430Usart0P__Usart__isRxIntrPending(void )
/* #line 330 */
{
  if (HplMsp430Usart0P__IFG1 & (1 << 6)) {
      return TRUE;
    }
  return FALSE;
}

/* # 192 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending(void ){
/* #line 192 */
  unsigned char __nesc_result;
/* #line 192 */

/* #line 192 */
  __nesc_result = HplMsp430Usart0P__Usart__isRxIntrPending();
/* #line 192 */

/* #line 192 */
  return __nesc_result;
/* #line 192 */
}
/* #line 192 */
/* # 341 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
static inline void HplMsp430Usart0P__Usart__clrRxIntr(void )
/* #line 341 */
{
  HplMsp430Usart0P__IFG1 &= ~(1 << 6);
}

/* # 197 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr(void ){
/* #line 197 */
  HplMsp430Usart0P__Usart__clrRxIntr();
/* #line 197 */
}
/* #line 197 */
/* # 386 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
static inline uint8_t HplMsp430Usart0P__Usart__rx(void )
/* #line 386 */
{
  return U0RXBUF;
}

/* # 231 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
inline static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx(void ){
/* #line 231 */
  unsigned char __nesc_result;
/* #line 231 */

/* #line 231 */
  __nesc_result = HplMsp430Usart0P__Usart__rx();
/* #line 231 */

/* #line 231 */
  return __nesc_result;
/* #line 231 */
}
/* #line 231 */
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static inline void CC2420SpiP__ChipSpiResource__abortRelease(void )
/* #line 95 */
{
  /* atomic removed: atomic calls only */
/* #line 96 */
  CC2420SpiP__release = FALSE;
}

/* # 31 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc" */
inline static void CC2420TransmitP__ChipSpiResource__abortRelease(void ){
/* #line 31 */
  CC2420SpiP__ChipSpiResource__abortRelease();
/* #line 31 */
}
/* #line 31 */
/* # 377 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline void CC2420TransmitP__ChipSpiResource__releasing(void )
/* #line 377 */
{
  if (CC2420TransmitP__abortSpiRelease) {
      CC2420TransmitP__ChipSpiResource__abortRelease();
    }
}

/* # 24 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc" */
inline static void CC2420SpiP__ChipSpiResource__releasing(void ){
/* #line 24 */
  CC2420TransmitP__ChipSpiResource__releasing();
/* #line 24 */
}
/* #line 24 */
/* # 208 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted(void )
/* #line 208 */
{
}

/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc" */
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void ){
/* #line 46 */
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__default__granted();
/* #line 46 */
}
/* #line 46 */
/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(bool reset){
/* #line 97 */
  HplMsp430Usart0P__Usart__resetUsart(reset);
/* #line 97 */
}
/* #line 97 */
/* #line 158 */
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi(void ){
/* #line 158 */
  HplMsp430Usart0P__Usart__disableSpi();
/* #line 158 */
}
/* #line 158 */
/* # 124 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id)
/* #line 124 */
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(TRUE);
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi();
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(FALSE);
}

/* # 218 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id)
/* #line 218 */
{
}

/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x101d7d9b8){
/* #line 65 */
  switch (arg_0x101d7d9b8) {
/* #line 65 */
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
/* #line 65 */
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
/* #line 65 */
      break;
/* #line 65 */
    default:
/* #line 65 */
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(arg_0x101d7d9b8);
/* #line 65 */
      break;
/* #line 65 */
    }
/* #line 65 */
}
/* #line 65 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void )
/* #line 68 */
{
  /* atomic removed: atomic calls only */
/* #line 69 */
  {
    if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead;

/* #line 72 */
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead];
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
          }
/* #line 75 */
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ[id] = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
/* #line 76 */
          id;

/* #line 76 */
          return __nesc_temp;
        }
      }
/* #line 78 */
    {
      unsigned char __nesc_temp = 
/* #line 78 */
      /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

/* #line 78 */
      return __nesc_temp;
    }
  }
}

/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
inline static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue(void ){
/* #line 70 */
  unsigned char __nesc_result;
/* #line 70 */

/* #line 70 */
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue();
/* #line 70 */

/* #line 70 */
  return __nesc_result;
/* #line 70 */
}
/* #line 70 */
/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void )
/* #line 60 */
{
  /* atomic removed: atomic calls only */
/* #line 61 */
  {
    unsigned char __nesc_temp = 
/* #line 61 */
    /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

/* #line 61 */
    return __nesc_temp;
  }
}

/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
inline static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty();
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 111 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(uint8_t id)
/* #line 111 */
{
  /* atomic removed: atomic calls only */
/* #line 112 */
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId == id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__isEmpty() == FALSE) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Queue__dequeue();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__NO_RES;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
          }
        else {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted();
          }
        {
          unsigned char __nesc_temp = 
/* #line 127 */
          SUCCESS;

/* #line 127 */
          return __nesc_temp;
        }
      }
  }
/* #line 130 */
  return FAIL;
}

/* # 176 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(uint8_t id)
/* #line 176 */
{
/* #line 176 */
  return FAIL;
}

/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(uint8_t arg_0x1022fa0c8){
/* #line 120 */
  unsigned char __nesc_result;
/* #line 120 */

/* #line 120 */
  switch (arg_0x1022fa0c8) {
/* #line 120 */
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
/* #line 120 */
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
/* #line 120 */
      break;
/* #line 120 */
    default:
/* #line 120 */
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(arg_0x1022fa0c8);
/* #line 120 */
      break;
/* #line 120 */
    }
/* #line 120 */

/* #line 120 */
  return __nesc_result;
/* #line 120 */
}
/* #line 120 */
/* # 116 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id)
/* #line 116 */
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(id);
}

/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420SpiP__SpiResource__release(void ){
/* #line 120 */
  unsigned char __nesc_result;
/* #line 120 */

/* #line 120 */
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
/* #line 120 */

/* #line 120 */
  return __nesc_result;
/* #line 120 */
}
/* #line 120 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void )
/* #line 67 */
{
  /* atomic removed: atomic calls only */
/* #line 67 */
  * (volatile uint8_t * )27U &= ~(0x01 << 1);
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart0P__SIMO__selectIOFunc(void ){
/* #line 96 */
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc();
/* #line 96 */
}
/* #line 96 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void )
/* #line 67 */
{
  /* atomic removed: atomic calls only */
/* #line 67 */
  * (volatile uint8_t * )27U &= ~(0x01 << 2);
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart0P__SOMI__selectIOFunc(void ){
/* #line 96 */
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc();
/* #line 96 */
}
/* #line 96 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void )
/* #line 67 */
{
  /* atomic removed: atomic calls only */
/* #line 67 */
  * (volatile uint8_t * )27U &= ~(0x01 << 3);
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart0P__UCLK__selectIOFunc(void ){
/* #line 96 */
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc();
/* #line 96 */
}
/* #line 96 */
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
inline static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXONCCA);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
inline static cc2420_status_t CC2420TransmitP__STXON__strobe(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXON);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
inline static cc2420_status_t CC2420TransmitP__SNOP__strobe(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SNOP);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void )
/* #line 102 */
{
  return CC2420SpiP__attemptRelease();
}

/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc" */
inline static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void ){
/* #line 39 */
  unsigned char __nesc_result;
/* #line 39 */

/* #line 39 */
  __nesc_result = CC2420SpiP__ChipSpiResource__attemptRelease();
/* #line 39 */

/* #line 39 */
  return __nesc_result;
/* #line 39 */
}
/* #line 39 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void )
/* #line 65 */
{
  /* atomic removed: atomic calls only */
/* #line 65 */
  * (volatile uint8_t * )31U |= 0x01 << 1;
}

/* # 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void ){
/* #line 89 */
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc();
/* #line 89 */
}
/* #line 89 */
/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline  uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)
/* #line 57 */
{
/* #line 57 */
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4406 {
/* #line 57 */
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t f;
/* #line 57 */
    uint16_t t;
  } 
/* #line 57 */
  c = { .f = x };

/* #line 57 */
  return c.t;
}

/* #line 72 */
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm)
{
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x = { 
  .cm = l_cm & 0x03, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 1, 
  .scs = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(x);
}

/* #line 110 */
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm)
{
  * (volatile uint16_t * )388U = /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(cm);
}

/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm){
/* #line 55 */
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(cm);
/* #line 55 */
}
/* #line 55 */
/* # 130 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void )
{
  * (volatile uint16_t * )388U |= 0x0010;
}

/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void ){
/* #line 57 */
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents();
/* #line 57 */
}
/* #line 57 */
/* # 192 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void )
{
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void ){
/* #line 45 */
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired();
/* #line 45 */
}
/* #line 45 */
/* # 150 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void )
{
  return * (volatile uint16_t * )404U;
}

/* # 322 "/opt/local/lib/ncc/nesc_nx.h" */
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
/* #line 322 */
{
  const uint8_t *base = source;

/* #line 324 */
  return ((uint16_t )base[1] << 8) | base[0];
}

/* #line 347 */
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
/* #line 347 */
{
  uint8_t *base = target;

/* #line 349 */
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

/* #line 340 */
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
/* #line 340 */
{
  const uint8_t *base = source;

/* #line 342 */
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc" */
inline static void CC2420TransmitP__PacketTimeStamp__clear(message_t * msg){
/* #line 70 */
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
/* #line 70 */
}
/* #line 70 */
/* # 195 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void )
/* #line 195 */
{
  if (CC2420ReceiveP__m_timestamp_size) {
      CC2420ReceiveP__m_timestamp_size--;
    }
}

/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc" */
inline static void CC2420TransmitP__CC2420Receive__sfd_dropped(void ){
/* #line 55 */
  CC2420ReceiveP__CC2420Receive__sfd_dropped();
/* #line 55 */
}
/* #line 55 */
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void )
/* #line 59 */
{
/* #line 59 */
  return * (volatile uint8_t * )28U & (0x01 << 1);
}

/* #line 60 */
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void )
/* #line 60 */
{
/* #line 60 */
  return /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw() != 0;
}

/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get(void ){
/* #line 70 */
  unsigned char __nesc_result;
/* #line 70 */

/* #line 70 */
  __nesc_result = /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get();
/* #line 70 */

/* #line 70 */
  return __nesc_result;
/* #line 70 */
}
/* #line 70 */
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void )
/* #line 51 */
{
/* #line 51 */
  return /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get();
}

/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static bool CC2420TransmitP__SFD__get(void ){
/* #line 43 */
  unsigned char __nesc_result;
/* #line 43 */

/* #line 43 */
  __nesc_result = /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get();
/* #line 43 */

/* #line 43 */
  return __nesc_result;
/* #line 43 */
}
/* #line 43 */
/* # 186 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time)
/* #line 186 */
{
  if (CC2420ReceiveP__m_timestamp_size < CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP__m_timestamp_head + CC2420ReceiveP__m_timestamp_size) % 
      CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;

/* #line 190 */
      CC2420ReceiveP__m_timestamp_queue[tail] = time;
      CC2420ReceiveP__m_timestamp_size++;
    }
}

/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc" */
inline static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time){
/* #line 49 */
  CC2420ReceiveP__CC2420Receive__sfd(time);
/* #line 49 */
}
/* #line 49 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc" */
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void )
/* #line 65 */
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_FALLING);
}

/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioCapture.nc" */
inline static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void ){
/* #line 54 */
  unsigned char __nesc_result;
/* #line 54 */

/* #line 54 */
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge();
/* #line 54 */

/* #line 54 */
  return __nesc_result;
/* #line 54 */
}
/* #line 54 */
/* # 137 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static inline cc2420_header_t * CC2420PacketP__CC2420PacketBody__getHeader(message_t * msg)
/* #line 137 */
{
  return (cc2420_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
}

/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
inline static cc2420_header_t * CC2420TransmitP__CC2420PacketBody__getHeader(message_t * msg){
/* #line 42 */
  nx_struct cc2420_header_t *__nesc_result;
/* #line 42 */

/* #line 42 */
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
/* #line 42 */

/* #line 42 */
  return __nesc_result;
/* #line 42 */
}
/* #line 42 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc" */
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
}

/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void ){
/* #line 73 */
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop();
/* #line 73 */
}
/* #line 73 */
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
static inline void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop();
}

/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static void CC2420TransmitP__BackoffTimer__stop(void ){
/* #line 73 */
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop();
/* #line 73 */
}
/* #line 73 */
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set(void ){
/* #line 45 */
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set();
/* #line 45 */
}
/* #line 45 */
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void )
/* #line 48 */
{
/* #line 48 */
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set();
}

/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420TransmitP__CSN__set(void ){
/* #line 40 */
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
/* #line 40 */
}
/* #line 40 */
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc" */
inline static cc2420_status_t CC2420TransmitP__TXFIFO_RAM__write(uint8_t offset, uint8_t * data, uint8_t length){
/* #line 63 */
  unsigned char __nesc_result;
/* #line 63 */

/* #line 63 */
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_TXFIFO, offset, data, length);
/* #line 63 */

/* #line 63 */
  return __nesc_result;
/* #line 63 */
}
/* #line 63 */
/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr(void ){
/* #line 50 */
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr();
/* #line 50 */
}
/* #line 50 */
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void )
/* #line 49 */
{
/* #line 49 */
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr();
}

/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420TransmitP__CSN__clr(void ){
/* #line 41 */
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
/* #line 41 */
}
/* #line 41 */
/* # 219 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static inline uint8_t CC2420PacketP__PacketTimeSyncOffset__get(message_t *msg)
{
  return __nesc_ntoh_leuint8(CC2420PacketP__CC2420PacketBody__getHeader(msg)->length.nxdata)
   + (sizeof(cc2420_header_t ) - MAC_HEADER_SIZE)
   - MAC_FOOTER_SIZE
   - sizeof(timesync_radio_t );
}

/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc" */
inline static uint8_t CC2420TransmitP__PacketTimeSyncOffset__get(message_t * msg){
/* #line 58 */
  unsigned char __nesc_result;
/* #line 58 */

/* #line 58 */
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__get(msg);
/* #line 58 */

/* #line 58 */
  return __nesc_result;
/* #line 58 */
}
/* #line 58 */
/* # 281 "/opt/local/lib/ncc/nesc_nx.h" */
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
/* #line 281 */
{
  const uint8_t *base = source;

/* #line 283 */
  return base[0];
}

/* #line 303 */
static __inline  int8_t __nesc_ntoh_int8(const void * source)
/* #line 303 */
{
/* #line 303 */
  return __nesc_ntoh_uint8(source);
}

/* # 210 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static inline bool CC2420PacketP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata);
}

/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/PacketTimeSyncOffset.nc" */
inline static bool CC2420TransmitP__PacketTimeSyncOffset__isSet(message_t * msg){
/* #line 50 */
  unsigned char __nesc_result;
/* #line 50 */

/* #line 50 */
  __nesc_result = CC2420PacketP__PacketTimeSyncOffset__isSet(msg);
/* #line 50 */

/* #line 50 */
  return __nesc_result;
/* #line 50 */
}
/* #line 50 */
/* # 177 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static inline void CC2420PacketP__PacketTimeStamp32khz__set(message_t *msg, uint32_t value)
{
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, value);
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc" */
inline static void CC2420TransmitP__PacketTimeStamp__set(message_t * msg, CC2420TransmitP__PacketTimeStamp__size_type value){
/* #line 78 */
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
/* #line 78 */
}
/* #line 78 */
/* # 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static CC2420TransmitP__BackoffTimer__size_type CC2420TransmitP__BackoffTimer__getNow(void ){
/* #line 109 */
  unsigned long __nesc_result;
/* #line 109 */

/* #line 109 */
  __nesc_result = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow();
/* #line 109 */

/* #line 109 */
  return __nesc_result;
/* #line 109 */
}
/* #line 109 */
/* # 259 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static __inline uint32_t CC2420TransmitP__getTime32(uint16_t captured_time)
{
  uint32_t now = CC2420TransmitP__BackoffTimer__getNow();


  return now - (uint16_t )(now - captured_time);
}

/* #line 280 */
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time)
/* #line 280 */
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;
/* #line 281 */
  uint32_t time32;
  uint8_t sfd_state = 0;

  /* atomic removed: atomic calls only */
/* #line 283 */
  {
    time32 = CC2420TransmitP__getTime32(time);
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SFD: 
          CC2420TransmitP__m_state = CC2420TransmitP__S_EFD;
        CC2420TransmitP__sfdHigh = TRUE;


        CC2420TransmitP__m_receiving = FALSE;
        CC2420TransmitP__CaptureSFD__captureFallingEdge();
        CC2420TransmitP__PacketTimeStamp__set(CC2420TransmitP__m_msg, time32);
        if (CC2420TransmitP__PacketTimeSyncOffset__isSet(CC2420TransmitP__m_msg)) {
            uint8_t absOffset = sizeof(message_header_t ) - sizeof(cc2420_header_t ) + CC2420TransmitP__PacketTimeSyncOffset__get(CC2420TransmitP__m_msg);
            timesync_radio_t *timesync = (timesync_radio_t *)((nx_uint8_t *)CC2420TransmitP__m_msg + absOffset);

            (__nesc_temp44 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp44, __nesc_ntoh_uint32(__nesc_temp44) - time32));
            CC2420TransmitP__CSN__clr();
            CC2420TransmitP__TXFIFO_RAM__write(absOffset, (uint8_t *)timesync, sizeof(timesync_radio_t ));
            CC2420TransmitP__CSN__set();

            (__nesc_temp45 = (*timesync).nxdata, __nesc_hton_uint32(__nesc_temp45, __nesc_ntoh_uint32(__nesc_temp45) + time32));
          }

        if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {

            CC2420TransmitP__abortSpiRelease = TRUE;
          }
        CC2420TransmitP__releaseSpiResource();
        CC2420TransmitP__BackoffTimer__stop();

        if (CC2420TransmitP__SFD__get()) {
            break;
          }


        case CC2420TransmitP__S_EFD: 
          CC2420TransmitP__sfdHigh = FALSE;
        CC2420TransmitP__CaptureSFD__captureRisingEdge();

        if (__nesc_ntoh_leuint16(CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ)) {
            CC2420TransmitP__m_state = CC2420TransmitP__S_ACK_WAIT;
            CC2420TransmitP__BackoffTimer__start(CC2420_ACK_WAIT_DELAY);
          }
        else 
/* #line 326 */
          {
            CC2420TransmitP__signalDone(SUCCESS);
          }

        if (!CC2420TransmitP__SFD__get()) {
            break;
          }


        default: 

          if (!CC2420TransmitP__m_receiving && CC2420TransmitP__sfdHigh == FALSE) {
              CC2420TransmitP__sfdHigh = TRUE;
              CC2420TransmitP__CaptureSFD__captureFallingEdge();

              sfd_state = CC2420TransmitP__SFD__get();
              CC2420TransmitP__CC2420Receive__sfd(time32);
              CC2420TransmitP__m_receiving = TRUE;
              CC2420TransmitP__m_prev_time = time;
              if (CC2420TransmitP__SFD__get()) {

                  return;
                }
            }



        if (CC2420TransmitP__sfdHigh == TRUE) {
            CC2420TransmitP__sfdHigh = FALSE;
            CC2420TransmitP__CaptureSFD__captureRisingEdge();
            CC2420TransmitP__m_receiving = FALSE;








            if (sfd_state == 0 && time - CC2420TransmitP__m_prev_time < 10) {
                CC2420TransmitP__CC2420Receive__sfd_dropped();
                if (CC2420TransmitP__m_msg) {
                  CC2420TransmitP__PacketTimeStamp__clear(CC2420TransmitP__m_msg);
                  }
              }
/* #line 370 */
            break;
          }
      }
  }
}

/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioCapture.nc" */
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time){
/* #line 61 */
  CC2420TransmitP__CaptureSFD__captured(time);
/* #line 61 */
}
/* #line 61 */
/* # 175 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void )
{
  * (volatile uint16_t * )388U &= ~0x0002;
}

/* # 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void ){
/* #line 68 */
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow();
/* #line 68 */
}
/* #line 68 */
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )388U &= ~0x0001;
}

/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void ){
/* #line 44 */
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt();
/* #line 44 */
}
/* #line 44 */
/* # 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc" */
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time)
/* #line 76 */
{
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(time);
}

/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time){
/* #line 86 */
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(time);
/* #line 86 */
}
/* #line 86 */
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)
/* #line 58 */
{
/* #line 58 */
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4407 {
/* #line 58 */
    uint16_t f;
/* #line 58 */
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t t;
  } 
/* #line 58 */
  c = { .f = x };

/* #line 58 */
  return c.t;
}

/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(* (volatile uint16_t * )388U);
}

/* #line 180 */
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent());
    }
  else {
/* #line 185 */
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired();
    }
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc" */
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
/* #line 82 */
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__fired(void ){
/* #line 78 */
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
/* #line 78 */
}
/* #line 78 */
/* # 162 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt == 0) 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__fired();
      }
    else 
      {
        /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm();
      }
  }
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void ){
/* #line 78 */
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__fired();
/* #line 78 */
}
/* #line 78 */
/* # 135 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void )
{
  * (volatile uint16_t * )390U &= ~0x0010;
}

/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void ){
/* #line 58 */
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents();
/* #line 58 */
}
/* #line 58 */
/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc" */
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired();
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void ){
/* #line 45 */
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired();
/* #line 45 */
}
/* #line 45 */
/* # 150 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void )
{
  return * (volatile uint16_t * )406U;
}

/* #line 188 */
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n)
{
}

/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time){
/* #line 86 */
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(time);
/* #line 86 */
}
/* #line 86 */
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)
/* #line 58 */
{
/* #line 58 */
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4408 {
/* #line 58 */
    uint16_t f;
/* #line 58 */
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t t;
  } 
/* #line 58 */
  c = { .f = x };

/* #line 58 */
  return c.t;
}

/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(* (volatile uint16_t * )390U);
}

/* #line 180 */
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent());
    }
  else {
/* #line 185 */
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired();
    }
}

/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
inline static /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__size_type /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get(void ){
/* #line 64 */
  unsigned int __nesc_result;
/* #line 64 */

/* #line 64 */
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
/* #line 64 */

/* #line 64 */
  return __nesc_result;
/* #line 64 */
}
/* #line 64 */







inline static bool /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending(void ){
/* #line 71 */
  unsigned char __nesc_result;
/* #line 71 */

/* #line 71 */
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
/* #line 71 */

/* #line 71 */
  return __nesc_result;
/* #line 71 */
}
/* #line 71 */
/* # 130 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void )
{
  * (volatile uint16_t * )390U |= 0x0010;
}

/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void ){
/* #line 57 */
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents();
/* #line 57 */
}
/* #line 57 */
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )390U &= ~0x0001;
}

/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void ){
/* #line 44 */
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt();
/* #line 44 */
}
/* #line 44 */
/* # 155 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )406U = x;
}

/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time){
/* #line 41 */
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(time);
/* #line 41 */
}
/* #line 41 */
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
inline static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void ){
/* #line 45 */
  unsigned int __nesc_result;
/* #line 45 */

/* #line 45 */
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
/* #line 45 */

/* #line 45 */
  return __nesc_result;
/* #line 45 */
}
/* #line 45 */
/* # 165 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )406U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get() + x;
}

/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta){
/* #line 43 */
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(delta);
/* #line 43 */
}
/* #line 43 */
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
inline static uint16_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void ){
/* #line 45 */
  unsigned int __nesc_result;
/* #line 45 */

/* #line 45 */
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
/* #line 45 */

/* #line 45 */
  return __nesc_result;
/* #line 45 */
}
/* #line 45 */
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc" */
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get();
    uint16_t elapsed = now - t0;

/* #line 87 */
    if (elapsed >= dt) 
      {
        /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

/* #line 94 */
        if (remaining <= 2) {
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
          }
        else {
/* #line 97 */
          /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(now + remaining);
          }
      }
/* #line 99 */
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt();
    /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents();
  }
}

/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt){
/* #line 103 */
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(t0, dt);
/* #line 103 */
}
/* #line 103 */
/* # 192 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired(void )
{
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void ){
/* #line 45 */
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__default__fired();
/* #line 45 */
}
/* #line 45 */
/* # 150 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void )
{
  return * (volatile uint16_t * )408U;
}

/* #line 188 */
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n)
{
}

/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time){
/* #line 86 */
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(time);
/* #line 86 */
}
/* #line 86 */
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)
/* #line 58 */
{
/* #line 58 */
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4409 {
/* #line 58 */
    uint16_t f;
/* #line 58 */
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t t;
  } 
/* #line 58 */
  c = { .f = x };

/* #line 58 */
  return c.t;
}

/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(* (volatile uint16_t * )392U);
}

/* #line 180 */
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent());
    }
  else {
/* #line 185 */
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void )
{
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void ){
/* #line 45 */
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired();
/* #line 45 */
}
/* #line 45 */
/* # 150 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void )
{
  return * (volatile uint16_t * )410U;
}

/* #line 188 */
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n)
{
}

/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time){
/* #line 86 */
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(time);
/* #line 86 */
}
/* #line 86 */
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)
/* #line 58 */
{
/* #line 58 */
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4410 {
/* #line 58 */
    uint16_t f;
/* #line 58 */
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t t;
  } 
/* #line 58 */
  c = { .f = x };

/* #line 58 */
  return c.t;
}

/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(* (volatile uint16_t * )394U);
}

/* #line 180 */
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent());
    }
  else {
/* #line 185 */
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void )
{
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void ){
/* #line 45 */
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired();
/* #line 45 */
}
/* #line 45 */
/* # 150 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void )
{
  return * (volatile uint16_t * )412U;
}

/* #line 188 */
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n)
{
}

/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time){
/* #line 86 */
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(time);
/* #line 86 */
}
/* #line 86 */
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)
/* #line 58 */
{
/* #line 58 */
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4411 {
/* #line 58 */
    uint16_t f;
/* #line 58 */
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t t;
  } 
/* #line 58 */
  c = { .f = x };

/* #line 58 */
  return c.t;
}

/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(* (volatile uint16_t * )396U);
}

/* #line 180 */
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent());
    }
  else {
/* #line 185 */
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void )
{
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Compare.nc" */
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void ){
/* #line 45 */
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired();
/* #line 45 */
}
/* #line 45 */
/* # 150 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void )
{
  return * (volatile uint16_t * )414U;
}

/* #line 188 */
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n)
{
}

/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Capture.nc" */
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time){
/* #line 86 */
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(time);
/* #line 86 */
}
/* #line 86 */
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)
/* #line 58 */
{
/* #line 58 */
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4412 {
/* #line 58 */
    uint16_t f;
/* #line 58 */
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t t;
  } 
/* #line 58 */
  c = { .f = x };

/* #line 58 */
  return c.t;
}

/* #line 85 */
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(* (volatile uint16_t * )398U);
}

/* #line 180 */
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent());
    }
  else {
/* #line 185 */
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired();
    }
}

/* # 131 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )286U;

/* #line 134 */
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(n >> 1);
}

/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
inline static void Msp430TimerCommonP__VectorTimerB1__fired(void ){
/* #line 39 */
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired();
/* #line 39 */
}
/* #line 39 */
/* # 124 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/SchedulerBasicP.nc" */
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Scheduler.nc" */
inline static void RealMainP__Scheduler__init(void ){
/* #line 57 */
  SchedulerBasicP__Scheduler__init();
/* #line 57 */
}
/* #line 57 */
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void )
/* #line 56 */
{
  /* atomic removed: atomic calls only */
/* #line 56 */
  * (volatile uint8_t * )49U |= 0x01 << 6;
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void ){
/* #line 45 */
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set();
/* #line 45 */
}
/* #line 45 */
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void )
/* #line 48 */
{
/* #line 48 */
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set();
}

/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void LedsP__Led2__set(void ){
/* #line 40 */
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set();
/* #line 40 */
}
/* #line 40 */
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void )
/* #line 56 */
{
  /* atomic removed: atomic calls only */
/* #line 56 */
  * (volatile uint8_t * )49U |= 0x01 << 5;
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void ){
/* #line 45 */
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set();
/* #line 45 */
}
/* #line 45 */
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void )
/* #line 48 */
{
/* #line 48 */
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set();
}

/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void LedsP__Led1__set(void ){
/* #line 40 */
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set();
/* #line 40 */
}
/* #line 40 */
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void ){
/* #line 45 */
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set();
/* #line 45 */
}
/* #line 45 */
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void )
/* #line 48 */
{
/* #line 48 */
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set();
}

/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void LedsP__Led0__set(void ){
/* #line 40 */
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set();
/* #line 40 */
}
/* #line 40 */
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void )
/* #line 63 */
{
  /* atomic removed: atomic calls only */
/* #line 63 */
  * (volatile uint8_t * )50U |= 0x01 << 6;
}

/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void ){
/* #line 82 */
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput();
/* #line 82 */
}
/* #line 82 */
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void )
/* #line 54 */
{
/* #line 54 */
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput();
}

/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void LedsP__Led2__makeOutput(void ){
/* #line 46 */
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput();
/* #line 46 */
}
/* #line 46 */
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void )
/* #line 63 */
{
  /* atomic removed: atomic calls only */
/* #line 63 */
  * (volatile uint8_t * )50U |= 0x01 << 5;
}

/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void ){
/* #line 82 */
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput();
/* #line 82 */
}
/* #line 82 */
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void )
/* #line 54 */
{
/* #line 54 */
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput();
}

/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void LedsP__Led1__makeOutput(void ){
/* #line 46 */
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput();
/* #line 46 */
}
/* #line 46 */
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void )
/* #line 63 */
{
  /* atomic removed: atomic calls only */
/* #line 63 */
  * (volatile uint8_t * )50U |= 0x01 << 4;
}

/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void ){
/* #line 82 */
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput();
/* #line 82 */
}
/* #line 82 */
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void )
/* #line 54 */
{
/* #line 54 */
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput();
}

/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void LedsP__Led0__makeOutput(void ){
/* #line 46 */
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput();
/* #line 46 */
}
/* #line 46 */
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LedsP.nc" */
static inline error_t LedsP__Init__init(void )
/* #line 56 */
{
  /* atomic removed: atomic calls only */
/* #line 57 */
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
inline static error_t PlatformP__LedsInit__init(void ){
/* #line 62 */
  unsigned char __nesc_result;
/* #line 62 */

/* #line 62 */
  __nesc_result = LedsP__Init__init();
/* #line 62 */

/* #line 62 */
  return __nesc_result;
/* #line 62 */
}
/* #line 62 */
/* # 36 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosb/hardware.h" */
static inline  void TOSH_SET_SIMO0_PIN()
/* #line 36 */
{
/* #line 36 */
  static volatile uint8_t r __asm ("0x0019");

/* #line 36 */
  r |= 1 << 1;
}

/* #line 37 */
static inline  void TOSH_SET_UCLK0_PIN()
/* #line 37 */
{
/* #line 37 */
  static volatile uint8_t r __asm ("0x0019");

/* #line 37 */
  r |= 1 << 3;
}

/* #line 88 */
static inline  void TOSH_SET_FLASH_CS_PIN()
/* #line 88 */
{
/* #line 88 */
  static volatile uint8_t r __asm ("0x001D");

/* #line 88 */
  r |= 1 << 4;
}

/* #line 37 */
static inline  void TOSH_CLR_UCLK0_PIN()
/* #line 37 */
{
/* #line 37 */
  static volatile uint8_t r __asm ("0x0019");

/* #line 37 */
  r &= ~(1 << 3);
}

/* #line 88 */
static inline  void TOSH_CLR_FLASH_CS_PIN()
/* #line 88 */
{
/* #line 88 */
  static volatile uint8_t r __asm ("0x001D");

/* #line 88 */
  r &= ~(1 << 4);
}

/* # 11 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc" */
static __inline void MotePlatformC__TOSH_wait(void )
/* #line 11 */
{
;;}

/* # 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosb/hardware.h" */
static inline  void TOSH_SET_FLASH_HOLD_PIN()
/* #line 89 */
{
/* #line 89 */
  static volatile uint8_t r __asm ("0x001D");

/* #line 89 */
  r |= 1 << 7;
}

/* #line 88 */
static inline  void TOSH_MAKE_FLASH_CS_OUTPUT()
/* #line 88 */
{
/* #line 88 */
  static volatile uint8_t r __asm ("0x001E");

/* #line 88 */
  r |= 1 << 4;
}

/* #line 89 */
static inline  void TOSH_MAKE_FLASH_HOLD_OUTPUT()
/* #line 89 */
{
/* #line 89 */
  static volatile uint8_t r __asm ("0x001E");

/* #line 89 */
  r |= 1 << 7;
}

/* #line 37 */
static inline  void TOSH_MAKE_UCLK0_OUTPUT()
/* #line 37 */
{
/* #line 37 */
  static volatile uint8_t r __asm ("0x001A");

/* #line 37 */
  r |= 1 << 3;
}

/* #line 36 */
static inline  void TOSH_MAKE_SIMO0_OUTPUT()
/* #line 36 */
{
/* #line 36 */
  static volatile uint8_t r __asm ("0x001A");

/* #line 36 */
  r |= 1 << 1;
}

/* # 27 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc" */
static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void )
/* #line 27 */
{

  TOSH_MAKE_SIMO0_OUTPUT();
  TOSH_MAKE_UCLK0_OUTPUT();
  TOSH_MAKE_FLASH_HOLD_OUTPUT();
  TOSH_MAKE_FLASH_CS_OUTPUT();
  TOSH_SET_FLASH_HOLD_PIN();
  TOSH_SET_FLASH_CS_PIN();

  MotePlatformC__TOSH_wait();


  TOSH_CLR_FLASH_CS_PIN();
  TOSH_CLR_UCLK0_PIN();

  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);

  TOSH_SET_FLASH_CS_PIN();
  TOSH_SET_UCLK0_PIN();
  TOSH_SET_SIMO0_PIN();
}

/* #line 6 */
static __inline void MotePlatformC__uwait(uint16_t u)
/* #line 6 */
{
  uint16_t t0 = TA0R;

/* #line 8 */
  while (TA0R - t0 <= u) ;
}

/* #line 56 */
static inline error_t MotePlatformC__Init__init(void )
/* #line 56 */
{
  /* atomic removed: atomic calls only */

  {
    P1SEL = 0;
    P2SEL = 0;
    P3SEL = 0;
    P4SEL = 0;
    P5SEL = 0;
    P6SEL = 0;

    P1OUT = 0x00;
    P1DIR = 0xe0;

    P2OUT = 0x30;
    P2DIR = 0x7b;

    P3OUT = 0x00;
    P3DIR = 0xf1;

    P4OUT = 0xdd;
    P4DIR = 0xfd;

    P5OUT = 0xff;
    P5DIR = 0xff;

    P6OUT = 0x00;
    P6DIR = 0xff;

    P1IE = 0;
    P2IE = 0;






    MotePlatformC__uwait(1024 * 10);

    MotePlatformC__TOSH_FLASH_M25P_DP();
  }

  return SUCCESS;
}

/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
inline static error_t PlatformP__MoteInit__init(void ){
/* #line 62 */
  unsigned char __nesc_result;
/* #line 62 */

/* #line 62 */
  __nesc_result = MotePlatformC__Init__init();
/* #line 62 */

/* #line 62 */
  return __nesc_result;
/* #line 62 */
}
/* #line 62 */
/* # 163 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc" */
static inline void Msp430ClockP__startTimerB(void )
{

  Msp430ClockP__TBCTL = 0x0020 | (Msp430ClockP__TBCTL & ~(0x0020 | 0x0010));
}

/* #line 151 */
static inline void Msp430ClockP__startTimerA(void )
{

  Msp430ClockP__TA0CTL = 0x0020 | (Msp430ClockP__TA0CTL & ~(0x0020 | 0x0010));
}

/* #line 115 */
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void )
{
  TBR = 0;









  Msp430ClockP__TBCTL = 0x0100 | 0x0002;
}

/* #line 145 */
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerB();
}

/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc" */
inline static void Msp430ClockP__Msp430ClockInit__initTimerB(void ){
/* #line 43 */
  Msp430ClockP__Msp430ClockInit__default__initTimerB();
/* #line 43 */
}
/* #line 43 */
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc" */
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void )
{
  TA0R = 0;









  Msp430ClockP__TA0CTL = 0x0200 | 0x0002;
}

/* #line 140 */
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerA();
}

/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc" */
inline static void Msp430ClockP__Msp430ClockInit__initTimerA(void ){
/* #line 42 */
  Msp430ClockP__Msp430ClockInit__default__initTimerA();
/* #line 42 */
}
/* #line 42 */
/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc" */
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void )
{





  BCSCTL1 = 0x80 | (BCSCTL1 & ((0x04 | 0x02) | 0x01));







  BCSCTL2 = 0x04;


  Msp430ClockP__IE1 &= ~(1 << 1);
}

/* #line 135 */
static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitClocks();
}

/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc" */
inline static void Msp430ClockP__Msp430ClockInit__initClocks(void ){
/* #line 41 */
  Msp430ClockP__Msp430ClockInit__default__initClocks();
/* #line 41 */
}
/* #line 41 */
/* # 181 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc" */
static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib)
{
  int8_t aclk_count = 2;
  uint16_t dco_prev = 0;
  uint16_t dco_curr = 0;

  Msp430ClockP__set_dco_calib(calib);

  while (aclk_count-- > 0) 
    {
      TBCCR0 = TBR + Msp430ClockP__ACLK_CALIB_PERIOD;
      TBCCTL0 &= ~0x0001;
      while ((TBCCTL0 & 0x0001) == 0) ;
      dco_prev = dco_curr;
      dco_curr = TA0R;
    }

  return dco_curr - dco_prev;
}




static inline void Msp430ClockP__busyCalibrateDco(void )
{

  int calib;
  int step;






  for (calib = 0, step = 0x800; step != 0; step >>= 1) 
    {

      if (Msp430ClockP__test_calib_busywait_delta(calib | step) <= Msp430ClockP__TARGET_DCO_DELTA) {
        calib |= step;
        }
    }

  if ((calib & 0x0e0) == 0x0e0) {
    calib &= ~0x01f;
    }
  Msp430ClockP__set_dco_calib(calib);
}

/* #line 67 */
static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void )
{



  Msp430ClockP__TA0CTL = 0x0200 | 0x0020;
  Msp430ClockP__TBCTL = 0x0100 | 0x0020;
  BCSCTL1 = 0x80 | 0x04;
  BCSCTL2 = 0;
  TBCCTL0 = 0x4000;
}

/* #line 130 */
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void )
{
  Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate();
}

/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockInit.nc" */
inline static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void ){
/* #line 40 */
  Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate();
/* #line 40 */
}
/* #line 40 */
/* # 229 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc" */
static inline error_t Msp430ClockP__Init__init(void )
{

  Msp430ClockP__TA0CTL = 0x0004;
  Msp430ClockP__TA0IV = 0;
  Msp430ClockP__TBCTL = 0x0004;
  Msp430ClockP__TBIV = 0;
  /* atomic removed: atomic calls only */

  {
    Msp430ClockP__Msp430ClockInit__setupDcoCalibrate();
    Msp430ClockP__busyCalibrateDco();
    Msp430ClockP__Msp430ClockInit__initClocks();
    Msp430ClockP__Msp430ClockInit__initTimerA();
    Msp430ClockP__Msp430ClockInit__initTimerB();
    Msp430ClockP__startTimerA();
    Msp430ClockP__startTimerB();
  }

  return SUCCESS;
}

/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
inline static error_t PlatformP__MoteClockInit__init(void ){
/* #line 62 */
  unsigned char __nesc_result;
/* #line 62 */

/* #line 62 */
  __nesc_result = Msp430ClockP__Init__init();
/* #line 62 */

/* #line 62 */
  return __nesc_result;
/* #line 62 */
}
/* #line 62 */
/* # 10 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosa/PlatformP.nc" */
static inline error_t PlatformP__Init__init(void )
/* #line 10 */
{
  PlatformP__MoteClockInit__init();
  PlatformP__MoteInit__init();
  PlatformP__LedsInit__init();
  return SUCCESS;
}

/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
inline static error_t RealMainP__PlatformInit__init(void ){
/* #line 62 */
  unsigned char __nesc_result;
/* #line 62 */

/* #line 62 */
  __nesc_result = PlatformP__Init__init();
/* #line 62 */

/* #line 62 */
  return __nesc_result;
/* #line 62 */
}
/* #line 62 */
/* # 36 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosb/hardware.h" */
static inline  void TOSH_CLR_SIMO0_PIN()
/* #line 36 */
{
/* #line 36 */
  static volatile uint8_t r __asm ("0x0019");

/* #line 36 */
  r &= ~(1 << 1);
}

/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Scheduler.nc" */
inline static bool RealMainP__Scheduler__runNextTask(void ){
/* #line 65 */
  unsigned char __nesc_result;
/* #line 65 */

/* #line 65 */
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
/* #line 65 */

/* #line 65 */
  return __nesc_result;
/* #line 65 */
}
/* #line 65 */
/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
inline static void /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(message_t * msg, error_t error){
/* #line 110 */
  LowPowerSensingBaseC__SerialSampleMsgSend__sendDone(msg, error);
/* #line 110 */
}
/* #line 110 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc" */
static inline void /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err)
/* #line 65 */
{
  /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(m, err);
}

/* # 215 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
/* #line 215 */
{
}

/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(uint8_t arg_0x102bc1e18, message_t * msg, error_t error){
/* #line 100 */
  switch (arg_0x102bc1e18) {
/* #line 100 */
    case 0U:
/* #line 100 */
      /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(msg, error);
/* #line 100 */
      break;
/* #line 100 */
    default:
/* #line 100 */
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__default__sendDone(arg_0x102bc1e18, msg, error);
/* #line 100 */
      break;
/* #line 100 */
    }
/* #line 100 */
}
/* #line 100 */
/* # 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask(void )
/* #line 126 */
{
  uint8_t i;
/* #line 127 */
  uint8_t j;
/* #line 127 */
  uint8_t mask;
/* #line 127 */
  uint8_t last;
  message_t *msg;

/* #line 129 */
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[i] &= ~mask;
                  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

/* # 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc" */
static inline void /*LowPowerSensingBaseAppC.Queue*/QueueC__0__printQueue(void )
/* #line 69 */
{
}

/* #line 53 */
static inline bool /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__empty(void )
/* #line 53 */
{
  return /*LowPowerSensingBaseAppC.Queue*/QueueC__0__size == 0;
}









static inline /*LowPowerSensingBaseAppC.Queue*/QueueC__0__queue_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__head(void )
/* #line 65 */
{
  return /*LowPowerSensingBaseAppC.Queue*/QueueC__0__queue[/*LowPowerSensingBaseAppC.Queue*/QueueC__0__head];
}

/* #line 85 */
static inline /*LowPowerSensingBaseAppC.Queue*/QueueC__0__queue_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__dequeue(void )
/* #line 85 */
{
  /*LowPowerSensingBaseAppC.Queue*/QueueC__0__queue_t t = /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__head();

/* #line 87 */
  ;
  if (!/*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__empty()) {
      /*LowPowerSensingBaseAppC.Queue*/QueueC__0__head++;
      if (/*LowPowerSensingBaseAppC.Queue*/QueueC__0__head == 50) {
/* #line 90 */
        /*LowPowerSensingBaseAppC.Queue*/QueueC__0__head = 0;
        }
/* #line 91 */
      /*LowPowerSensingBaseAppC.Queue*/QueueC__0__size--;
      /*LowPowerSensingBaseAppC.Queue*/QueueC__0__printQueue();
    }
  return t;
}

/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc" */
inline static LowPowerSensingBaseC__MsgQueue__t  LowPowerSensingBaseC__MsgQueue__dequeue(void ){
/* #line 81 */
  nx_struct message_t __nesc_result;
/* #line 81 */

/* #line 81 */
  __nesc_result = /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__dequeue();
/* #line 81 */

/* #line 81 */
  return __nesc_result;
/* #line 81 */
}
/* #line 81 */
/* # 315 "/opt/local/lib/ncc/nesc_nx.h" */
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
/* #line 315 */
{
  uint8_t *base = target;

/* #line 317 */
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
/* #line 60 */
{
  return (serial_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(serial_header_t ));
}

/* #line 158 */
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
/* #line 158 */
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

/* #line 160 */
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
inline static void /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
/* #line 103 */
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setDestination(amsg, addr);
/* #line 103 */
}
/* #line 103 */
/* # 286 "/opt/local/lib/ncc/nesc_nx.h" */
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
/* #line 286 */
{
  uint8_t *base = target;

/* #line 288 */
  base[0] = value;
  return value;
}

/* # 177 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(message_t *amsg, am_id_t type)
/* #line 177 */
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

/* #line 179 */
  __nesc_hton_uint8(header->type.nxdata, type);
}

/* # 162 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
inline static void /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(message_t * amsg, am_id_t t){
/* #line 162 */
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__setType(amsg, t);
/* #line 162 */
}
/* #line 162 */
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(am_id_t arg_0x102bbe020, am_addr_t addr, message_t * msg, uint8_t len){
/* #line 80 */
  unsigned char __nesc_result;
/* #line 80 */

/* #line 80 */
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(arg_0x102bbe020, addr, msg, len);
/* #line 80 */

/* #line 80 */
  return __nesc_result;
/* #line 80 */
}
/* #line 80 */
/* # 147 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
inline static am_id_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(message_t * amsg){
/* #line 147 */
  unsigned char __nesc_result;
/* #line 147 */

/* #line 147 */
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(amsg);
/* #line 147 */

/* #line 147 */
  return __nesc_result;
/* #line 147 */
}
/* #line 147 */
/* # 127 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
/* #line 127 */
{
  __nesc_hton_uint8(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg)->length.nxdata, len);
}

/* # 94 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc" */
inline static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(message_t * msg, uint8_t len){
/* #line 94 */
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__setPayloadLength(msg, len);
/* #line 94 */
}
/* #line 94 */
/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
static inline error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
/* #line 91 */
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg = msg;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__setPayloadLength(msg, len);

  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current >= 1) {
      error_t err;
      am_id_t amId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(msg);
      am_addr_t dest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(msg);

      ;
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = clientId;

      err = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static error_t /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__Send__send(message_t * msg, uint8_t len){
/* #line 75 */
  unsigned char __nesc_result;
/* #line 75 */

/* #line 75 */
  __nesc_result = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__send(0U, msg, len);
/* #line 75 */

/* #line 75 */
  return __nesc_result;
/* #line 75 */
}
/* #line 75 */
/* # 131 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
/* #line 131 */
{
  return 28;
}

/* # 530 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
/* #line 530 */
{
  bool not_busy = FALSE;

/* #line 532 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 532 */
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
/* #line 538 */
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SendBytePacket.nc" */
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
/* #line 62 */
  unsigned char __nesc_result;
/* #line 62 */

/* #line 62 */
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
/* #line 62 */

/* #line 62 */
  return __nesc_result;
/* #line 62 */
}
/* #line 62 */
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc" */
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
/* #line 54 */
{
  return upperLen + sizeof(serial_header_t );
}

/* # 361 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
/* #line 362 */
{
  return 0;
}

/* # 23 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc" */
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x101acdaa8, message_t *msg, uint8_t upperLen){
/* #line 23 */
  unsigned char __nesc_result;
/* #line 23 */

/* #line 23 */
  switch (arg_0x101acdaa8) {
/* #line 23 */
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
/* #line 23 */
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
/* #line 23 */
      break;
/* #line 23 */
    default:
/* #line 23 */
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x101acdaa8, msg, upperLen);
/* #line 23 */
      break;
/* #line 23 */
    }
/* #line 23 */

/* #line 23 */
  return __nesc_result;
/* #line 23 */
}
/* #line 23 */
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc" */
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
/* #line 51 */
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

/* # 358 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
/* #line 358 */
{
  return 0;
}

/* # 15 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc" */
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x101acdaa8){
/* #line 15 */
  unsigned char __nesc_result;
/* #line 15 */

/* #line 15 */
  switch (arg_0x101acdaa8) {
/* #line 15 */
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
/* #line 15 */
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
/* #line 15 */
      break;
/* #line 15 */
    default:
/* #line 15 */
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x101acdaa8);
/* #line 15 */
      break;
/* #line 15 */
    }
/* #line 15 */

/* #line 15 */
  return __nesc_result;
/* #line 15 */
}
/* #line 15 */
/* # 111 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
/* #line 111 */
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 116 */
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
/* #line 119 */
            ESIZE;

            {
/* #line 119 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 119 */
              return __nesc_temp;
            }
          }
        }
/* #line 122 */
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
/* #line 134 */
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
/* #line 75 */
  unsigned char __nesc_result;
/* #line 75 */

/* #line 75 */
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
/* #line 75 */

/* #line 75 */
  return __nesc_result;
/* #line 75 */
}
/* #line 75 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t SerialP__RunTx__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 169 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask(void )
/* #line 169 */
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current, /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg, FAIL);
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 122 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(message_t *msg)
/* #line 122 */
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

/* #line 124 */
  return __nesc_ntoh_uint8(header->length.nxdata);
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc" */
inline static uint8_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(message_t * msg){
/* #line 78 */
  unsigned char __nesc_result;
/* #line 78 */

/* #line 78 */
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__payloadLength(msg);
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket(void )
/* #line 65 */
{
  uint8_t i;

/* #line 67 */
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == (void *)0 || 
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__cancelMask[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current / 8] & (1 << /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current % 8)) 
        {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
/* #line 78 */
    /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current = 1;
    }
}

/* #line 174 */
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend(void )
/* #line 174 */
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__nextPacket();
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg;
      am_id_t nextId = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(nextMsg);
      uint8_t len = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Packet__payloadLength(nextMsg);

/* #line 182 */
      nextErr = /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__postTask();
        }
    }
}

/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LedsP.nc" */
static inline void LedsP__Leds__led0Off(void )
/* #line 79 */
{
  LedsP__Led0__set();
  ;
/* #line 81 */
  ;
}

/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Leds.nc" */
inline static void LowPowerSensingBaseC__Leds__led0Off(void ){
/* #line 61 */
  LedsP__Leds__led0Off();
/* #line 61 */
}
/* #line 61 */
/* # 93 "LowPowerSensingBaseC.nc" */
static inline void LowPowerSensingBaseC__RadioRequestSampleMsgsSend__sendDone(message_t *msg, error_t error)
/* #line 93 */
{
  if (error == SUCCESS) {
    LowPowerSensingBaseC__Leds__led0Off();
    }
}

/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
inline static void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__sendDone(message_t * msg, error_t error){
/* #line 110 */
  LowPowerSensingBaseC__RadioRequestSampleMsgsSend__sendDone(msg, error);
/* #line 110 */
}
/* #line 110 */
/* # 19 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LplAMSenderP.nc" */
static inline void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__sendDone(message_t *msg, error_t error)
/* #line 19 */
{
/* #line 19 */
  /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__sendDone(msg, error);
}

/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
inline static void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
/* #line 110 */
  /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__sendDone(msg, error);
/* #line 110 */
}
/* #line 110 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc" */
static inline void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
/* #line 65 */
{
  /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

/* # 215 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
/* #line 215 */
{
}

/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x102bc1e18, message_t * msg, error_t error){
/* #line 100 */
  switch (arg_0x102bc1e18) {
/* #line 100 */
    case 0U:
/* #line 100 */
      /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
/* #line 100 */
      break;
/* #line 100 */
    default:
/* #line 100 */
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x102bc1e18, msg, error);
/* #line 100 */
      break;
/* #line 100 */
    }
/* #line 100 */
}
/* #line 100 */
/* # 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
/* #line 126 */
{
  uint8_t i;
/* #line 127 */
  uint8_t j;
/* #line 127 */
  uint8_t mask;
/* #line 127 */
  uint8_t last;
  message_t *msg;

/* #line 129 */
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

/* #line 169 */
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
/* #line 169 */
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x102bbe020, am_addr_t addr, message_t * msg, uint8_t len){
/* #line 80 */
  unsigned char __nesc_result;
/* #line 80 */

/* #line 80 */
  __nesc_result = CC2420ActiveMessageP__AMSend__send(arg_0x102bbe020, addr, msg, len);
/* #line 80 */

/* #line 80 */
  return __nesc_result;
/* #line 80 */
}
/* #line 80 */
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
inline static cc2420_header_t * CC2420ActiveMessageP__CC2420PacketBody__getHeader(message_t * msg){
/* #line 42 */
  nx_struct cc2420_header_t *__nesc_result;
/* #line 42 */

/* #line 42 */
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
/* #line 42 */

/* #line 42 */
  return __nesc_result;
/* #line 42 */
}
/* #line 42 */
/* # 194 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline uint8_t CC2420ActiveMessageP__Packet__payloadLength(message_t *msg)
/* #line 194 */
{
  return __nesc_ntoh_leuint8(CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg)->length.nxdata) - CC2420_SIZE;
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc" */
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
/* #line 78 */
  unsigned char __nesc_result;
/* #line 78 */

/* #line 78 */
  __nesc_result = CC2420ActiveMessageP__Packet__payloadLength(msg);
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
/* #line 78 */
  unsigned int __nesc_result;
/* #line 78 */

/* #line 78 */
  __nesc_result = CC2420ActiveMessageP__AMPacket__destination(amsg);
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 164 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline am_id_t CC2420ActiveMessageP__AMPacket__type(message_t *amsg)
/* #line 164 */
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

/* #line 166 */
  return __nesc_ntoh_leuint8(header->type.nxdata);
}

/* # 147 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
/* #line 147 */
  unsigned char __nesc_result;
/* #line 147 */

/* #line 147 */
  __nesc_result = CC2420ActiveMessageP__AMPacket__type(amsg);
/* #line 147 */

/* #line 147 */
  return __nesc_result;
/* #line 147 */
}
/* #line 147 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
/* #line 65 */
{
  uint8_t i;

/* #line 67 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
/* #line 78 */
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
    }
}

/* #line 174 */
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
/* #line 174 */
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

/* #line 182 */
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

/* # 173 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static inline uint8_t CC2420CsmaP__Send__maxPayloadLength(void )
/* #line 173 */
{
  return 28;
}

/* # 112 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static uint8_t DefaultLplP__SubSend__maxPayloadLength(void ){
/* #line 112 */
  unsigned char __nesc_result;
/* #line 112 */

/* #line 112 */
  __nesc_result = CC2420CsmaP__Send__maxPayloadLength();
/* #line 112 */

/* #line 112 */
  return __nesc_result;
/* #line 112 */
}
/* #line 112 */
/* # 209 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline uint8_t DefaultLplP__Send__maxPayloadLength(void )
/* #line 209 */
{
  return DefaultLplP__SubSend__maxPayloadLength();
}

/* # 112 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static uint8_t UniqueSendP__SubSend__maxPayloadLength(void ){
/* #line 112 */
  unsigned char __nesc_result;
/* #line 112 */

/* #line 112 */
  __nesc_result = DefaultLplP__Send__maxPayloadLength();
/* #line 112 */

/* #line 112 */
  return __nesc_result;
/* #line 112 */
}
/* #line 112 */
/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc" */
static inline uint8_t UniqueSendP__Send__maxPayloadLength(void )
/* #line 95 */
{
  return UniqueSendP__SubSend__maxPayloadLength();
}

/* # 112 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static uint8_t CC2420TinyosNetworkP__SubSend__maxPayloadLength(void ){
/* #line 112 */
  unsigned char __nesc_result;
/* #line 112 */

/* #line 112 */
  __nesc_result = UniqueSendP__Send__maxPayloadLength();
/* #line 112 */

/* #line 112 */
  return __nesc_result;
/* #line 112 */
}
/* #line 112 */
/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
static inline uint8_t CC2420TinyosNetworkP__ActiveSend__maxPayloadLength(void )
/* #line 90 */
{
  return CC2420TinyosNetworkP__SubSend__maxPayloadLength();
}

/* # 112 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static uint8_t CC2420ActiveMessageP__SubSend__maxPayloadLength(void ){
/* #line 112 */
  unsigned char __nesc_result;
/* #line 112 */

/* #line 112 */
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__maxPayloadLength();
/* #line 112 */

/* #line 112 */
  return __nesc_result;
/* #line 112 */
}
/* #line 112 */
/* # 202 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline uint8_t CC2420ActiveMessageP__Packet__maxPayloadLength(void )
/* #line 202 */
{
  return CC2420ActiveMessageP__SubSend__maxPayloadLength();
}

/* # 298 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline uint16_t CC2420ControlP__CC2420Config__getPanAddr(void )
/* #line 298 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 299 */
    {
      unsigned int __nesc_temp = 
/* #line 299 */
      CC2420ControlP__m_pan;

      {
/* #line 299 */
        __nesc_atomic_end(__nesc_atomic); 
/* #line 299 */
        return __nesc_temp;
      }
    }
/* #line 301 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc" */
inline static uint16_t CC2420ActiveMessageP__CC2420Config__getPanAddr(void ){
/* #line 75 */
  unsigned int __nesc_result;
/* #line 75 */

/* #line 75 */
  __nesc_result = CC2420ControlP__CC2420Config__getPanAddr();
/* #line 75 */

/* #line 75 */
  return __nesc_result;
/* #line 75 */
}
/* #line 75 */
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
inline static bool CC2420TinyosNetworkP__Queue__isEmpty(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 215 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
static inline error_t CC2420TinyosNetworkP__Resource__immediateRequest(uint8_t id)
/* #line 215 */
{
  if (CC2420TinyosNetworkP__resource_owner == id) {
/* #line 216 */
    return EALREADY;
    }
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = id;
          return SUCCESS;
        }
      return FAIL;
    }
  else 
/* #line 224 */
    {
      CC2420TinyosNetworkP__resource_owner = id;
      return SUCCESS;
    }
}

/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420ActiveMessageP__RadioResource__immediateRequest(void ){
/* #line 97 */
  unsigned char __nesc_result;
/* #line 97 */

/* #line 97 */
  __nesc_result = CC2420TinyosNetworkP__Resource__immediateRequest(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
/* #line 97 */

/* #line 97 */
  return __nesc_result;
/* #line 97 */
}
/* #line 97 */
/* # 291 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline void CC2420ActiveMessageP__SendNotifier__default__aboutToSend(am_id_t amId, am_addr_t addr, message_t *msg)
/* #line 291 */
{
}

/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SendNotifier.nc" */
inline static void CC2420ActiveMessageP__SendNotifier__aboutToSend(am_id_t arg_0x102b20258, am_addr_t dest, message_t * msg){
/* #line 59 */
    CC2420ActiveMessageP__SendNotifier__default__aboutToSend(arg_0x102b20258, dest, msg);
/* #line 59 */
}
/* #line 59 */
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static error_t CC2420ActiveMessageP__SubSend__send(message_t * msg, uint8_t len){
/* #line 75 */
  unsigned char __nesc_result;
/* #line 75 */

/* #line 75 */
  __nesc_result = CC2420TinyosNetworkP__ActiveSend__send(msg, len);
/* #line 75 */

/* #line 75 */
  return __nesc_result;
/* #line 75 */
}
/* #line 75 */
/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static inline void CC2420PacketP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId)
/* #line 128 */
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    *CC2420PacketP__getNetwork(p_msg) = networkId;
/* #line 131 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 77 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc" */
inline static void CC2420TinyosNetworkP__CC2420Packet__setNetwork(message_t *p_msg, uint8_t networkId){
/* #line 77 */
  CC2420PacketP__CC2420Packet__setNetwork(p_msg, networkId);
/* #line 77 */
}
/* #line 77 */
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static inline int CC2420PacketP__getAddressLength(int type)
/* #line 81 */
{
  switch (type) {
      case IEEE154_ADDR_SHORT: return 2;
      case IEEE154_ADDR_EXT: return 8;
      case IEEE154_ADDR_NONE: return 0;
      default: return -100;
    }
}

/* # 297 "/opt/local/lib/ncc/nesc_nx.h" */
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
/* #line 297 */
{
  uint8_t *base = target;

/* #line 299 */
  base[0] = value;
  return value;
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t DefaultLplP__startRadio__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DefaultLplP__startRadio);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static uint8_t DefaultLplP__RadioPowerState__getState(void ){
/* #line 71 */
  unsigned char __nesc_result;
/* #line 71 */

/* #line 71 */
  __nesc_result = StateImplP__State__getState(3U);
/* #line 71 */

/* #line 71 */
  return __nesc_result;
/* #line 71 */
}
/* #line 71 */
/* # 164 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc" */
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
inline static void DefaultLplP__SendDoneTimer__stop(void ){
/* #line 78 */
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(4U);
/* #line 78 */
}
/* #line 78 */
inline static void DefaultLplP__OffTimer__stop(void ){
/* #line 78 */
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(3U);
/* #line 78 */
}
/* #line 78 */
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static error_t DefaultLplP__SendState__requestState(uint8_t reqState){
/* #line 45 */
  unsigned char __nesc_result;
/* #line 45 */

/* #line 45 */
  __nesc_result = StateImplP__State__requestState(5U, reqState);
/* #line 45 */

/* #line 45 */
  return __nesc_result;
/* #line 45 */
}
/* #line 45 */
/* #line 71 */
inline static uint8_t DefaultLplP__SplitControlState__getState(void ){
/* #line 71 */
  unsigned char __nesc_result;
/* #line 71 */

/* #line 71 */
  __nesc_result = StateImplP__State__getState(4U);
/* #line 71 */

/* #line 71 */
  return __nesc_result;
/* #line 71 */
}
/* #line 71 */
/* # 169 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline error_t DefaultLplP__Send__send(message_t *msg, uint8_t len)
/* #line 169 */
{
  if (DefaultLplP__SplitControlState__getState() == DefaultLplP__S_OFF) {

      return EOFF;
    }

  if (DefaultLplP__SendState__requestState(S_LPL_SENDING) == SUCCESS) {
      DefaultLplP__currentSendMsg = msg;
      DefaultLplP__currentSendLen = len;


      DefaultLplP__OffTimer__stop();
      DefaultLplP__SendDoneTimer__stop();

      if (DefaultLplP__RadioPowerState__getState() == DefaultLplP__S_ON) {
          DefaultLplP__initializeSend();
          return SUCCESS;
        }
      else {
          DefaultLplP__startRadio__postTask();
        }

      return SUCCESS;
    }

  return EBUSY;
}

/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static error_t UniqueSendP__SubSend__send(message_t * msg, uint8_t len){
/* #line 75 */
  unsigned char __nesc_result;
/* #line 75 */

/* #line 75 */
  __nesc_result = DefaultLplP__Send__send(msg, len);
/* #line 75 */

/* #line 75 */
  return __nesc_result;
/* #line 75 */
}
/* #line 75 */
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
inline static cc2420_header_t * UniqueSendP__CC2420PacketBody__getHeader(message_t * msg){
/* #line 42 */
  nx_struct cc2420_header_t *__nesc_result;
/* #line 42 */

/* #line 42 */
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
/* #line 42 */

/* #line 42 */
  return __nesc_result;
/* #line 42 */
}
/* #line 42 */
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static error_t UniqueSendP__State__requestState(uint8_t reqState){
/* #line 45 */
  unsigned char __nesc_result;
/* #line 45 */

/* #line 45 */
  __nesc_result = StateImplP__State__requestState(2U, reqState);
/* #line 45 */

/* #line 45 */
  return __nesc_result;
/* #line 45 */
}
/* #line 45 */
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc" */
static inline error_t UniqueSendP__Send__send(message_t *msg, uint8_t len)
/* #line 75 */
{
  error_t error;

/* #line 77 */
  if (UniqueSendP__State__requestState(UniqueSendP__S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8(UniqueSendP__CC2420PacketBody__getHeader(msg)->dsn.nxdata, UniqueSendP__localSendId++);

      if ((error = UniqueSendP__SubSend__send(msg, len)) != SUCCESS) {
          UniqueSendP__State__toIdle();
        }

      return error;
    }

  return EBUSY;
}

/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static error_t CC2420TinyosNetworkP__SubSend__send(message_t * msg, uint8_t len){
/* #line 75 */
  unsigned char __nesc_result;
/* #line 75 */

/* #line 75 */
  __nesc_result = UniqueSendP__Send__send(msg, len);
/* #line 75 */

/* #line 75 */
  return __nesc_result;
/* #line 75 */
}
/* #line 75 */
/* # 157 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline uint16_t DefaultLplP__LowPowerListening__getRemoteWakeupInterval(message_t *msg)
/* #line 157 */
{
  return __nesc_ntoh_uint16(DefaultLplP__CC2420PacketBody__getMetadata(msg)->rxInterval.nxdata);
}

/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
inline static cc2420_header_t * DefaultLplP__CC2420PacketBody__getHeader(message_t * msg){
/* #line 42 */
  nx_struct cc2420_header_t *__nesc_result;
/* #line 42 */

/* #line 42 */
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
/* #line 42 */

/* #line 42 */
  return __nesc_result;
/* #line 42 */
}
/* #line 42 */
/* # 327 "/opt/local/lib/ncc/nesc_nx.h" */
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
/* #line 327 */
{
  uint8_t *base = target;

/* #line 329 */
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static inline error_t CC2420PacketP__Acks__noAck(message_t *p_msg)
/* #line 70 */
{
  unsigned char *__nesc_temp47;

/* #line 71 */
  (__nesc_temp47 = CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp47, __nesc_ntoh_leuint16(__nesc_temp47) & ~(1 << IEEE154_FCF_ACK_REQ)));
  return SUCCESS;
}

/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc" */
inline static error_t DefaultLplP__PacketAcknowledgements__noAck(message_t * msg){
/* #line 71 */
  unsigned char __nesc_result;
/* #line 71 */

/* #line 71 */
  __nesc_result = CC2420PacketP__Acks__noAck(msg);
/* #line 71 */

/* #line 71 */
  return __nesc_result;
/* #line 71 */
}
/* #line 71 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static inline error_t CC2420PacketP__Acks__requestAck(message_t *p_msg)
/* #line 65 */
{
  unsigned char *__nesc_temp46;

/* #line 66 */
  (__nesc_temp46 = CC2420PacketP__CC2420PacketBody__getHeader(p_msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp46, __nesc_ntoh_leuint16(__nesc_temp46) | (1 << IEEE154_FCF_ACK_REQ)));
  return SUCCESS;
}

/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc" */
inline static error_t DefaultLplP__PacketAcknowledgements__requestAck(message_t * msg){
/* #line 59 */
  unsigned char __nesc_result;
/* #line 59 */

/* #line 59 */
  __nesc_result = CC2420PacketP__Acks__requestAck(msg);
/* #line 59 */

/* #line 59 */
  return __nesc_result;
/* #line 59 */
}
/* #line 59 */
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
inline static /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get(void ){
/* #line 64 */
  unsigned long __nesc_result;
/* #line 64 */

/* #line 64 */
  __nesc_result = /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get();
/* #line 64 */

/* #line 64 */
  return __nesc_result;
/* #line 64 */
}
/* #line 64 */
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow(void )
{
  return /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get();
}

/* # 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
/* #line 109 */
  unsigned long __nesc_result;
/* #line 109 */

/* #line 109 */
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getNow();
/* #line 109 */

/* #line 109 */
  return __nesc_result;
/* #line 109 */
}
/* #line 109 */
/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc" */
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
/* #line 97 */
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

/* # 136 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
/* #line 136 */
  unsigned long __nesc_result;
/* #line 136 */

/* #line 136 */
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
/* #line 136 */

/* #line 136 */
  return __nesc_result;
/* #line 136 */
}
/* #line 136 */
/* # 159 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc" */
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
inline static void DefaultLplP__SendDoneTimer__startOneShot(uint32_t dt){
/* #line 73 */
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
/* #line 73 */
}
/* #line 73 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
static inline bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
/* #line 64 */
{
  /* atomic removed: atomic calls only */
/* #line 65 */
  {
    unsigned char __nesc_temp = 
/* #line 65 */
    /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY || /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail == id;

/* #line 65 */
    return __nesc_temp;
  }
}

/* #line 82 */
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
/* #line 82 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 83 */
    {
      if (!/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = id;
            }
          else {
/* #line 88 */
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail] = id;
            }
/* #line 89 */
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = id;
          {
            unsigned char __nesc_temp = 
/* #line 90 */
            SUCCESS;

            {
/* #line 90 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 90 */
              return __nesc_temp;
            }
          }
        }
/* #line 92 */
      {
        unsigned char __nesc_temp = 
/* #line 92 */
        EBUSY;

        {
/* #line 92 */
          __nesc_atomic_end(__nesc_atomic); 
/* #line 92 */
          return __nesc_temp;
        }
      }
    }
/* #line 95 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
inline static error_t CC2420TinyosNetworkP__Queue__enqueue(resource_client_id_t id){
/* #line 79 */
  unsigned char __nesc_result;
/* #line 79 */

/* #line 79 */
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
/* #line 79 */

/* #line 79 */
  return __nesc_result;
/* #line 79 */
}
/* #line 79 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t CC2420TinyosNetworkP__grantTask__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TinyosNetworkP__grantTask);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 199 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
static inline error_t CC2420TinyosNetworkP__Resource__request(uint8_t id)
/* #line 199 */
{

  CC2420TinyosNetworkP__grantTask__postTask();

  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      return CC2420TinyosNetworkP__Queue__enqueue(id);
    }
  else 
/* #line 205 */
    {
      if (id == CC2420TinyosNetworkP__resource_owner) {
          return EALREADY;
        }
      else 
/* #line 208 */
        {
          CC2420TinyosNetworkP__next_owner = id;
          return SUCCESS;
        }
    }
}

/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420ActiveMessageP__RadioResource__request(void ){
/* #line 88 */
  unsigned char __nesc_result;
/* #line 88 */

/* #line 88 */
  __nesc_result = CC2420TinyosNetworkP__Resource__request(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
/* #line 88 */

/* #line 88 */
  return __nesc_result;
/* #line 88 */
}
/* #line 88 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t PowerCycleP__stopRadio__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PowerCycleP__stopRadio);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
static inline bool StateImplP__State__isIdle(uint8_t id)
/* #line 126 */
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static bool PowerCycleP__SendState__isIdle(void ){
/* #line 61 */
  unsigned char __nesc_result;
/* #line 61 */

/* #line 61 */
  __nesc_result = StateImplP__State__isIdle(5U);
/* #line 61 */

/* #line 61 */
  return __nesc_result;
/* #line 61 */
}
/* #line 61 */
/* # 17 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/SystemLowPowerListeningP.nc" */
static inline uint16_t SystemLowPowerListeningP__SystemLowPowerListening__getDelayAfterReceive(void )
/* #line 17 */
{
/* #line 17 */
  return SystemLowPowerListeningP__delayAfterReceive;
}

/* # 7 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SystemLowPowerListening.nc" */
inline static uint16_t DefaultLplP__SystemLowPowerListening__getDelayAfterReceive(void ){
/* #line 7 */
  unsigned int __nesc_result;
/* #line 7 */

/* #line 7 */
  __nesc_result = SystemLowPowerListeningP__SystemLowPowerListening__getDelayAfterReceive();
/* #line 7 */

/* #line 7 */
  return __nesc_result;
/* #line 7 */
}
/* #line 7 */
/* # 410 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__startOffTimer(void )
/* #line 410 */
{
  DefaultLplP__OffTimer__startOneShot(DefaultLplP__SystemLowPowerListening__getDelayAfterReceive());
}

/* #line 244 */
static inline void DefaultLplP__PowerCycle__detected(void )
/* #line 244 */
{






  DefaultLplP__startOffTimer();
}

/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/PowerCycle.nc" */
inline static void PowerCycleP__PowerCycle__detected(void ){
/* #line 55 */
  DefaultLplP__PowerCycle__detected();
/* #line 55 */
}
/* #line 55 */
/* # 227 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline bool CC2420TransmitP__EnergyIndicator__isReceiving(void )
/* #line 227 */
{
  return !CC2420TransmitP__CCA__get();
}

/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/ReceiveIndicator.nc" */
inline static bool PowerCycleP__EnergyIndicator__isReceiving(void ){
/* #line 43 */
  unsigned char __nesc_result;
/* #line 43 */

/* #line 43 */
  __nesc_result = CC2420TransmitP__EnergyIndicator__isReceiving();
/* #line 43 */

/* #line 43 */
  return __nesc_result;
/* #line 43 */
}
/* #line 43 */
/* # 202 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static inline bool CC2420ReceiveP__PacketIndicator__isReceiving(void )
/* #line 202 */
{
  bool receiving;

  /* atomic removed: atomic calls only */
/* #line 204 */
  {
    receiving = CC2420ReceiveP__receivingPacket;
  }
  return receiving;
}

/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/ReceiveIndicator.nc" */
inline static bool PowerCycleP__PacketIndicator__isReceiving(void ){
/* #line 43 */
  unsigned char __nesc_result;
/* #line 43 */

/* #line 43 */
  __nesc_result = CC2420ReceiveP__PacketIndicator__isReceiving();
/* #line 43 */

/* #line 43 */
  return __nesc_result;
/* #line 43 */
}
/* #line 43 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t PowerCycleP__startRadio__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PowerCycleP__startRadio);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static bool PowerCycleP__SplitControlState__isState(uint8_t myState){
/* #line 66 */
  unsigned char __nesc_result;
/* #line 66 */

/* #line 66 */
  __nesc_result = StateImplP__State__isState(4U, myState);
/* #line 66 */

/* #line 66 */
  return __nesc_result;
/* #line 66 */
}
/* #line 66 */
/* # 276 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc" */
static inline bool PowerCycleP__isDutyCycling(void )
/* #line 276 */
{
  return PowerCycleP__sleepInterval > 0 && PowerCycleP__SplitControlState__isState(PowerCycleP__S_ON);
}

/* #line 238 */
static inline void PowerCycleP__getCca__runTask(void )
/* #line 238 */
{
  uint8_t detects = 0;

/* #line 240 */
  if (PowerCycleP__isDutyCycling()) {

      PowerCycleP__ccaChecks++;
      if (PowerCycleP__ccaChecks == 1) {

          PowerCycleP__startRadio__postTask();
          return;
        }

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 249 */
        {
          for (; PowerCycleP__ccaChecks < 400 && PowerCycleP__SendState__isIdle(); PowerCycleP__ccaChecks++) {
              if (PowerCycleP__PacketIndicator__isReceiving()) {
                  PowerCycleP__PowerCycle__detected();
                  {
/* #line 253 */
                    __nesc_atomic_end(__nesc_atomic); 
/* #line 253 */
                    return;
                  }
                }
              if (PowerCycleP__EnergyIndicator__isReceiving()) {
                  detects++;
                  if (detects > 3) {
                      PowerCycleP__PowerCycle__detected();
                      {
/* #line 260 */
                        __nesc_atomic_end(__nesc_atomic); 
/* #line 260 */
                        return;
                      }
                    }
                }
            }
        }
/* #line 265 */
        __nesc_atomic_end(__nesc_atomic); }

      if (PowerCycleP__SendState__isIdle()) {
          PowerCycleP__stopRadio__postTask();
        }
    }
}

/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
inline static error_t PowerCycleP__SubControl__start(void ){
/* #line 104 */
  unsigned char __nesc_result;
/* #line 104 */

/* #line 104 */
  __nesc_result = CC2420CsmaP__SplitControl__start();
/* #line 104 */

/* #line 104 */
  return __nesc_result;
/* #line 104 */
}
/* #line 104 */
/* # 232 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc" */
static inline void PowerCycleP__startRadio__runTask(void )
/* #line 232 */
{
  if (PowerCycleP__SubControl__start() != SUCCESS) {
      PowerCycleP__startRadio__postTask();
    }
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static error_t CC2420CsmaP__SplitControlState__requestState(uint8_t reqState){
/* #line 45 */
  unsigned char __nesc_result;
/* #line 45 */

/* #line 45 */
  __nesc_result = StateImplP__State__requestState(1U, reqState);
/* #line 45 */

/* #line 45 */
  return __nesc_result;
/* #line 45 */
}
/* #line 45 */
/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static void CC2420ControlP__StartupTimer__start(CC2420ControlP__StartupTimer__size_type dt){
/* #line 66 */
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(dt);
/* #line 66 */
}
/* #line 66 */
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void )
/* #line 56 */
{
/* #line 56 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 56 */
    * (volatile uint8_t * )29U |= 0x01 << 5;
/* #line 56 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set(void ){
/* #line 45 */
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set();
/* #line 45 */
}
/* #line 45 */
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void )
/* #line 48 */
{
/* #line 48 */
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set();
}

/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420ControlP__VREN__set(void ){
/* #line 40 */
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set();
/* #line 40 */
}
/* #line 40 */
/* # 194 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline error_t CC2420ControlP__CC2420Power__startVReg(void )
/* #line 194 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 195 */
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
/* #line 197 */
            FAIL;

            {
/* #line 197 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 197 */
              return __nesc_temp;
            }
          }
        }
/* #line 199 */
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTING;
    }
/* #line 200 */
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__VREN__set();
  CC2420ControlP__StartupTimer__start(CC2420_TIME_VREN);
  return SUCCESS;
}

/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc" */
inline static error_t CC2420CsmaP__CC2420Power__startVReg(void ){
/* #line 51 */
  unsigned char __nesc_result;
/* #line 51 */

/* #line 51 */
  __nesc_result = CC2420ControlP__CC2420Power__startVReg();
/* #line 51 */

/* #line 51 */
  return __nesc_result;
/* #line 51 */
}
/* #line 51 */
/* # 130 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
inline static error_t PowerCycleP__SubControl__stop(void ){
/* #line 130 */
  unsigned char __nesc_result;
/* #line 130 */

/* #line 130 */
  __nesc_result = CC2420CsmaP__SplitControl__stop();
/* #line 130 */

/* #line 130 */
  return __nesc_result;
/* #line 130 */
}
/* #line 130 */
/* # 223 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc" */
static inline void PowerCycleP__stopRadio__runTask(void )
/* #line 223 */
{
  error_t error = PowerCycleP__SubControl__stop();

/* #line 225 */
  if (error != SUCCESS) {

      PowerCycleP__finishSplitControlRequests();
      PowerCycleP__OnTimer__startOneShot(PowerCycleP__sleepInterval);
    }
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void )
/* #line 67 */
{
  /* atomic removed: atomic calls only */
/* #line 67 */
  * (volatile uint8_t * )31U &= ~(0x01 << 1);
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void ){
/* #line 96 */
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc();
/* #line 96 */
}
/* #line 96 */
/* # 135 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void )
{
  * (volatile uint16_t * )388U &= ~0x0010;
}

/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void ){
/* #line 58 */
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents();
/* #line 58 */
}
/* #line 58 */
/* # 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc" */
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void )
/* #line 69 */
{
  /* atomic removed: atomic calls only */
/* #line 70 */
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc();
  }
}

/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioCapture.nc" */
inline static void CC2420TransmitP__CaptureSFD__disable(void ){
/* #line 66 */
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable();
/* #line 66 */
}
/* #line 66 */
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port10__clear(void )
/* #line 102 */
{
/* #line 102 */
  P1IFG &= ~(1 << 0);
}

/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void ){
/* #line 52 */
  HplMsp430InterruptP__Port10__clear();
/* #line 52 */
}
/* #line 52 */
/* # 94 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port10__disable(void )
/* #line 94 */
{
/* #line 94 */
  P1IE &= ~(1 << 0);
}

/* # 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void ){
/* #line 47 */
  HplMsp430InterruptP__Port10__disable();
/* #line 47 */
}
/* #line 47 */
/* # 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc" */
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void )
/* #line 69 */
{
  /* atomic removed: atomic calls only */
/* #line 70 */
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  }
  return SUCCESS;
}

/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
inline static error_t CC2420ReceiveP__InterruptFIFOP__disable(void ){
/* #line 61 */
  unsigned char __nesc_result;
/* #line 61 */

/* #line 61 */
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
/* #line 61 */

/* #line 61 */
  return __nesc_result;
/* #line 61 */
}
/* #line 61 */
/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void )
/* #line 57 */
{
/* #line 57 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 57 */
    * (volatile uint8_t * )29U &= ~(0x01 << 5);
/* #line 57 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr(void ){
/* #line 50 */
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr();
/* #line 50 */
}
/* #line 50 */
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void )
/* #line 49 */
{
/* #line 49 */
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr();
}

/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420ControlP__VREN__clr(void ){
/* #line 41 */
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr();
/* #line 41 */
}
/* #line 41 */
/* # 79 "LowPowerSensingBaseC.nc" */
static inline void LowPowerSensingBaseC__RadioAMControl__stopDone(error_t error)
/* #line 79 */
{
}

/* # 138 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
inline static void PowerCycleP__SplitControl__stopDone(error_t error){
/* #line 138 */
  LowPowerSensingBaseC__RadioAMControl__stopDone(error);
/* #line 138 */
}
/* #line 138 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t SerialP__startDoneTask__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 344 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static inline error_t SerialP__SplitControl__start(void )
/* #line 344 */
{
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
inline static error_t LowPowerSensingBaseC__SerialAMControl__start(void ){
/* #line 104 */
  unsigned char __nesc_result;
/* #line 104 */

/* #line 104 */
  __nesc_result = SerialP__SplitControl__start();
/* #line 104 */

/* #line 104 */
  return __nesc_result;
/* #line 104 */
}
/* #line 104 */
/* # 72 "LowPowerSensingBaseC.nc" */
static inline void LowPowerSensingBaseC__RadioAMControl__startDone(error_t error)
/* #line 72 */
{
  LowPowerSensingBaseC__SerialAMControl__start();
}

/* # 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
inline static void PowerCycleP__SplitControl__startDone(error_t error){
/* #line 113 */
  LowPowerSensingBaseC__RadioAMControl__startDone(error);
/* #line 113 */
}
/* #line 113 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t DefaultLplP__stopRadio__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DefaultLplP__stopRadio);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 130 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
inline static error_t DefaultLplP__SubControl__stop(void ){
/* #line 130 */
  unsigned char __nesc_result;
/* #line 130 */

/* #line 130 */
  __nesc_result = CC2420CsmaP__SplitControl__stop();
/* #line 130 */

/* #line 130 */
  return __nesc_result;
/* #line 130 */
}
/* #line 130 */
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static uint8_t DefaultLplP__SendState__getState(void ){
/* #line 71 */
  unsigned char __nesc_result;
/* #line 71 */

/* #line 71 */
  __nesc_result = StateImplP__State__getState(5U);
/* #line 71 */

/* #line 71 */
  return __nesc_result;
/* #line 71 */
}
/* #line 71 */
/* # 382 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__stopRadio__runTask(void )
/* #line 382 */
{
  if (DefaultLplP__SendState__getState() == S_LPL_NOT_SENDING) {
      if (DefaultLplP__SubControl__stop() != SUCCESS) {
          DefaultLplP__stopRadio__postTask();
        }
    }
}

/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
inline static error_t DefaultLplP__SubControl__start(void ){
/* #line 104 */
  unsigned char __nesc_result;
/* #line 104 */

/* #line 104 */
  __nesc_result = CC2420CsmaP__SplitControl__start();
/* #line 104 */

/* #line 104 */
  return __nesc_result;
/* #line 104 */
}
/* #line 104 */
/* # 376 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__startRadio__runTask(void )
/* #line 376 */
{
  if (DefaultLplP__SubControl__start() != SUCCESS) {
      DefaultLplP__startRadio__postTask();
    }
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t DefaultLplP__resend__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DefaultLplP__resend);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
inline static void CC2420TransmitP__RadioBackoff__requestInitialBackoff(message_t * msg){
/* #line 81 */
  CC2420CsmaP__SubBackoff__requestInitialBackoff(msg);
/* #line 81 */
}
/* #line 81 */
/* # 578 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline error_t CC2420TransmitP__resend(bool cca)
/* #line 578 */
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 580 */
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          {
            unsigned char __nesc_temp = 
/* #line 582 */
            ECANCEL;

            {
/* #line 582 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 582 */
              return __nesc_temp;
            }
          }
        }
/* #line 585 */
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) {
          {
            unsigned char __nesc_temp = 
/* #line 586 */
            FAIL;

            {
/* #line 586 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 586 */
              return __nesc_temp;
            }
          }
        }
/* #line 589 */
      CC2420TransmitP__m_cca = cca;
      CC2420TransmitP__m_state = cca ? CC2420TransmitP__S_SAMPLE_CCA : CC2420TransmitP__S_BEGIN_TRANSMIT;
      CC2420TransmitP__totalCcaChecks = 0;
    }
/* #line 592 */
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP__m_cca) {
      CC2420TransmitP__RadioBackoff__requestInitialBackoff(CC2420TransmitP__m_msg);
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myInitialBackoff);
    }
  else {
/* #line 598 */
    if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
        CC2420TransmitP__attemptSend();
      }
    }
  return SUCCESS;
}

/* #line 196 */
static inline error_t CC2420TransmitP__Send__resend(bool useCca)
/* #line 196 */
{
  return CC2420TransmitP__resend(useCca);
}

/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc" */
inline static error_t DefaultLplP__Resend__resend(bool useCca){
/* #line 58 */
  unsigned char __nesc_result;
/* #line 58 */

/* #line 58 */
  __nesc_result = CC2420TransmitP__Send__resend(useCca);
/* #line 58 */

/* #line 58 */
  return __nesc_result;
/* #line 58 */
}
/* #line 58 */
/* # 370 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__resend__runTask(void )
/* #line 370 */
{
  if (DefaultLplP__Resend__resend(TRUE) != SUCCESS) {
      DefaultLplP__resend__postTask();
    }
}

/* # 293 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(am_id_t id, 
message_t *msg)
/* #line 294 */
{
}

/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
inline static void CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(am_id_t arg_0x102b20d60, message_t * msg){
/* #line 81 */
    CC2420ActiveMessageP__RadioBackoff__default__requestInitialBackoff(arg_0x102b20d60, msg);
/* #line 81 */
}
/* #line 81 */
/* # 241 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline void CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(message_t *msg)
/* #line 241 */
{
  CC2420ActiveMessageP__RadioBackoff__requestInitialBackoff(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

/* # 243 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline void CC2420TransmitP__RadioBackoff__setInitialBackoff(uint16_t backoffTime)
/* #line 243 */
{
  CC2420TransmitP__myInitialBackoff = backoffTime + 1;
}

/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
inline static void CC2420CsmaP__SubBackoff__setInitialBackoff(uint16_t backoffTime){
/* #line 60 */
  CC2420TransmitP__RadioBackoff__setInitialBackoff(backoffTime);
/* #line 60 */
}
/* #line 60 */
/* # 182 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static inline void CC2420CsmaP__RadioBackoff__setInitialBackoff(uint16_t backoffTime)
/* #line 182 */
{
  CC2420CsmaP__SubBackoff__setInitialBackoff(backoffTime);
}

/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
inline static void DefaultLplP__RadioBackoff__setInitialBackoff(uint16_t backoffTime){
/* #line 60 */
  CC2420CsmaP__RadioBackoff__setInitialBackoff(backoffTime);
/* #line 60 */
}
/* #line 60 */
/* # 219 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__RadioBackoff__requestInitialBackoff(message_t *msg)
/* #line 219 */
{

  if (__nesc_ntoh_uint16(
/* #line 220 */
  DefaultLplP__CC2420PacketBody__getMetadata(msg)->rxInterval.nxdata)
   > DefaultLplP__ONE_MESSAGE) {
      DefaultLplP__RadioBackoff__setInitialBackoff(DefaultLplP__Random__rand16()
       % (0x4 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);
    }
}

/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
inline static void CC2420CsmaP__RadioBackoff__requestInitialBackoff(message_t * msg){
/* #line 81 */
  DefaultLplP__RadioBackoff__requestInitialBackoff(msg);
/* #line 81 */
  CC2420ActiveMessageP__SubBackoff__requestInitialBackoff(msg);
/* #line 81 */
}
/* #line 81 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t DefaultLplP__send__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DefaultLplP__send);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 303 "/opt/local/lib/ncc/nesc_nx.h" */
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
/* #line 303 */
{
/* #line 303 */
  __nesc_hton_uint8(target, value);
/* #line 303 */
  return value;
}

/* # 547 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline error_t CC2420TransmitP__send(message_t * p_msg, bool cca)
/* #line 547 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 548 */
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          {
            unsigned char __nesc_temp = 
/* #line 550 */
            ECANCEL;

            {
/* #line 550 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 550 */
              return __nesc_temp;
            }
          }
        }
/* #line 553 */
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) {
          {
            unsigned char __nesc_temp = 
/* #line 554 */
            FAIL;

            {
/* #line 554 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 554 */
              return __nesc_temp;
            }
          }
        }


      CC2420TransmitP__m_state = CC2420TransmitP__S_LOAD;
      CC2420TransmitP__m_cca = cca;
      CC2420TransmitP__m_msg = p_msg;
      CC2420TransmitP__totalCcaChecks = 0;
    }
/* #line 564 */
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP__acquireSpiResource() == SUCCESS) {
      CC2420TransmitP__loadTXFIFO();
    }

  return SUCCESS;
}

/* #line 192 */
static inline error_t CC2420TransmitP__Send__send(message_t * p_msg, bool useCca)
/* #line 192 */
{
  return CC2420TransmitP__send(p_msg, useCca);
}

/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc" */
inline static error_t CC2420CsmaP__CC2420Transmit__send(message_t * p_msg, bool useCca){
/* #line 51 */
  unsigned char __nesc_result;
/* #line 51 */

/* #line 51 */
  __nesc_result = CC2420TransmitP__Send__send(p_msg, useCca);
/* #line 51 */

/* #line 51 */
  return __nesc_result;
/* #line 51 */
}
/* #line 51 */
/* # 301 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline void CC2420ActiveMessageP__RadioBackoff__default__requestCca(am_id_t id, 
message_t *msg)
/* #line 302 */
{
}

/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
inline static void CC2420ActiveMessageP__RadioBackoff__requestCca(am_id_t arg_0x102b20d60, message_t * msg){
/* #line 95 */
    CC2420ActiveMessageP__RadioBackoff__default__requestCca(arg_0x102b20d60, msg);
/* #line 95 */
}
/* #line 95 */
/* # 250 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline void CC2420ActiveMessageP__SubBackoff__requestCca(message_t *msg)
/* #line 250 */
{

  CC2420ActiveMessageP__RadioBackoff__requestCca(__nesc_ntoh_leuint8(((cc2420_header_t * )((uint8_t *)msg + (size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t )))->type.nxdata), msg);
}

/* # 235 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__RadioBackoff__requestCca(message_t *msg)
/* #line 235 */
{
}

/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc" */
inline static void CC2420CsmaP__RadioBackoff__requestCca(message_t * msg){
/* #line 95 */
  DefaultLplP__RadioBackoff__requestCca(msg);
/* #line 95 */
  CC2420ActiveMessageP__SubBackoff__requestCca(msg);
/* #line 95 */
}
/* #line 95 */
/* # 111 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
static inline void StateImplP__State__forceState(uint8_t id, uint8_t reqState)
/* #line 111 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 112 */
    StateImplP__state[id] = reqState;
/* #line 112 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static void CC2420CsmaP__SplitControlState__forceState(uint8_t reqState){
/* #line 51 */
  StateImplP__State__forceState(1U, reqState);
/* #line 51 */
}
/* #line 51 */
/* #line 66 */
inline static bool CC2420CsmaP__SplitControlState__isState(uint8_t myState){
/* #line 66 */
  unsigned char __nesc_result;
/* #line 66 */

/* #line 66 */
  __nesc_result = StateImplP__State__isState(1U, myState);
/* #line 66 */

/* #line 66 */
  return __nesc_result;
/* #line 66 */
}
/* #line 66 */
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
inline static cc2420_metadata_t * CC2420CsmaP__CC2420PacketBody__getMetadata(message_t * msg){
/* #line 53 */
  nx_struct cc2420_metadata_t *__nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* #line 42 */
inline static cc2420_header_t * CC2420CsmaP__CC2420PacketBody__getHeader(message_t * msg){
/* #line 42 */
  nx_struct cc2420_header_t *__nesc_result;
/* #line 42 */

/* #line 42 */
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
/* #line 42 */

/* #line 42 */
  return __nesc_result;
/* #line 42 */
}
/* #line 42 */
/* # 122 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static inline error_t CC2420CsmaP__Send__send(message_t *p_msg, uint8_t len)
/* #line 122 */
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;
/* #line 124 */
  cc2420_header_t *header = CC2420CsmaP__CC2420PacketBody__getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP__CC2420PacketBody__getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 127 */
    {
      if (!CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
          {
            unsigned char __nesc_temp = 
/* #line 129 */
            FAIL;

            {
/* #line 129 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 129 */
              return __nesc_temp;
            }
          }
        }
/* #line 132 */
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_TRANSMITTING);
      CC2420CsmaP__m_msg = p_msg;
    }
/* #line 134 */
    __nesc_atomic_end(__nesc_atomic); }








  (__nesc_temp42 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) & (((1 << IEEE154_FCF_ACK_REQ) | (
  0x3 << IEEE154_FCF_SRC_ADDR_MODE)) | (
  0x3 << IEEE154_FCF_DEST_ADDR_MODE))));

  (__nesc_temp43 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) | ((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN))));

  __nesc_hton_int8(metadata->ack.nxdata, FALSE);
  __nesc_hton_uint8(metadata->rssi.nxdata, 0);
  __nesc_hton_uint8(metadata->lqi.nxdata, 0);

  __nesc_hton_uint32(metadata->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);

  CC2420CsmaP__ccaOn = TRUE;
  CC2420CsmaP__RadioBackoff__requestCca(CC2420CsmaP__m_msg);

  CC2420CsmaP__CC2420Transmit__send(CC2420CsmaP__m_msg, CC2420CsmaP__ccaOn);
  return SUCCESS;
}

/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static error_t DefaultLplP__SubSend__send(message_t * msg, uint8_t len){
/* #line 75 */
  unsigned char __nesc_result;
/* #line 75 */

/* #line 75 */
  __nesc_result = CC2420CsmaP__Send__send(msg, len);
/* #line 75 */

/* #line 75 */
  return __nesc_result;
/* #line 75 */
}
/* #line 75 */
/* # 364 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__send__runTask(void )
/* #line 364 */
{
  if (DefaultLplP__SubSend__send(DefaultLplP__currentSendMsg, DefaultLplP__currentSendLen) != SUCCESS) {
      DefaultLplP__send__postTask();
    }
}

/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc" */
inline static cc2420_status_t CC2420TransmitP__TXCTRL__write(uint16_t data){
/* #line 63 */
  unsigned char __nesc_result;
/* #line 63 */

/* #line 63 */
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
/* #line 63 */

/* #line 63 */
  return __nesc_result;
/* #line 63 */
}
/* #line 63 */
/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SpiPacket.nc" */
inline static error_t CC2420SpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
/* #line 70 */
  unsigned char __nesc_result;
/* #line 70 */

/* #line 70 */
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID, txBuf, rxBuf, len);
/* #line 70 */

/* #line 70 */
  return __nesc_result;
/* #line 70 */
}
/* #line 70 */
/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SpiByte.nc" */
inline static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx){
/* #line 45 */
  unsigned char __nesc_result;
/* #line 45 */

/* #line 45 */
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(tx);
/* #line 45 */

/* #line 45 */
  return __nesc_result;
/* #line 45 */
}
/* #line 45 */
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static bool CC2420SpiP__WorkingState__isIdle(void ){
/* #line 61 */
  unsigned char __nesc_result;
/* #line 61 */

/* #line 61 */
  __nesc_result = StateImplP__State__isIdle(0U);
/* #line 61 */

/* #line 61 */
  return __nesc_result;
/* #line 61 */
}
/* #line 61 */
/* # 214 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static inline cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len)
/* #line 215 */
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 219 */
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
/* #line 221 */
            status;

            {
/* #line 221 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 221 */
              return __nesc_temp;
            }
          }
        }
    }
/* #line 225 */
    __nesc_atomic_end(__nesc_atomic); }
/* #line 225 */
  CC2420SpiP__m_addr = addr;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__SpiPacket__send(data, (void *)0, len);

  return status;
}

/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
inline static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length){
/* #line 82 */
  unsigned char __nesc_result;
/* #line 82 */

/* #line 82 */
  __nesc_result = CC2420SpiP__Fifo__write(CC2420_TXFIFO, data, length);
/* #line 82 */

/* #line 82 */
  return __nesc_result;
/* #line 82 */
}
/* #line 82 */
/* # 361 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
static inline void HplMsp430Usart0P__Usart__enableRxIntr(void )
/* #line 361 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 362 */
    {
      HplMsp430Usart0P__IFG1 &= ~(1 << 6);
      HplMsp430Usart0P__IE1 |= 1 << 6;
    }
/* #line 365 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 180 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr(void ){
/* #line 180 */
  HplMsp430Usart0P__Usart__enableRxIntr();
/* #line 180 */
}
/* #line 180 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 229 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
static inline error_t CC2420TinyosNetworkP__Resource__release(uint8_t id)
/* #line 229 */
{
  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      CC2420TinyosNetworkP__grantTask__postTask();
    }
  CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__OWNER_NONE;
  return SUCCESS;
}

/* #line 253 */
static inline void CC2420TinyosNetworkP__Resource__default__granted(uint8_t client)
/* #line 253 */
{
  CC2420TinyosNetworkP__Resource__release(client);
}

/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static void CC2420TinyosNetworkP__Resource__granted(uint8_t arg_0x10297f060){
/* #line 102 */
  switch (arg_0x10297f060) {
/* #line 102 */
    case CC2420ActiveMessageC__CC2420_AM_SEND_ID:
/* #line 102 */
      CC2420ActiveMessageP__RadioResource__granted();
/* #line 102 */
      break;
/* #line 102 */
    default:
/* #line 102 */
      CC2420TinyosNetworkP__Resource__default__granted(arg_0x10297f060);
/* #line 102 */
      break;
/* #line 102 */
    }
/* #line 102 */
}
/* #line 102 */
/* # 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
static inline resource_client_id_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
/* #line 68 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 69 */
    {
      if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead != /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
          uint8_t id = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead;

/* #line 72 */
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead];
          if (/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY) {
            /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qTail = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
            }
/* #line 75 */
          /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ[id] = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;
          {
            unsigned char __nesc_temp = 
/* #line 76 */
            id;

            {
/* #line 76 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 76 */
              return __nesc_temp;
            }
          }
        }
/* #line 78 */
      {
        unsigned char __nesc_temp = 
/* #line 78 */
        /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

        {
/* #line 78 */
          __nesc_atomic_end(__nesc_atomic); 
/* #line 78 */
          return __nesc_temp;
        }
      }
    }
/* #line 81 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
inline static resource_client_id_t CC2420TinyosNetworkP__Queue__dequeue(void ){
/* #line 70 */
  unsigned char __nesc_result;
/* #line 70 */

/* #line 70 */
  __nesc_result = /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
/* #line 70 */

/* #line 70 */
  return __nesc_result;
/* #line 70 */
}
/* #line 70 */
/* # 180 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
static inline void CC2420TinyosNetworkP__grantTask__runTask(void )
/* #line 180 */
{


  if (CC2420TinyosNetworkP__TINYOS_N_NETWORKS > 1) {
      if (CC2420TinyosNetworkP__resource_owner == CC2420TinyosNetworkP__OWNER_NONE && !CC2420TinyosNetworkP__Queue__isEmpty()) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__Queue__dequeue();

          if (CC2420TinyosNetworkP__resource_owner != CC2420TinyosNetworkP__OWNER_NONE) {
              CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
            }
        }
    }
  else 
/* #line 191 */
    {
      if (CC2420TinyosNetworkP__next_owner != CC2420TinyosNetworkP__resource_owner) {
          CC2420TinyosNetworkP__resource_owner = CC2420TinyosNetworkP__next_owner;
          CC2420TinyosNetworkP__Resource__granted(CC2420TinyosNetworkP__resource_owner);
        }
    }
}

/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
/* #line 103 */
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(t0, dt);
/* #line 103 */
}
/* #line 103 */
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc" */
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

/* #line 93 */
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
/* #line 94 */
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

/* # 129 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
/* #line 129 */
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
/* #line 129 */
}
/* #line 129 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc" */
static inline void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
}

/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void ){
/* #line 73 */
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop();
/* #line 73 */
}
/* #line 73 */
/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
static inline void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__stop();
}

/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
/* #line 73 */
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__stop();
/* #line 73 */
}
/* #line 73 */
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc" */
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
/* #line 72 */
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
/* #line 78 */
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
/* #line 78 */
}
/* #line 78 */
/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc" */
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
/* #line 135 */
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t PowerCycleP__getCca__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PowerCycleP__getCca);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static uint8_t PowerCycleP__RadioPowerState__getState(void ){
/* #line 71 */
  unsigned char __nesc_result;
/* #line 71 */

/* #line 71 */
  __nesc_result = StateImplP__State__getState(3U);
/* #line 71 */

/* #line 71 */
  return __nesc_result;
/* #line 71 */
}
/* #line 71 */
/* # 177 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc" */
static inline void PowerCycleP__OnTimer__fired(void )
/* #line 177 */
{
  if (PowerCycleP__isDutyCycling()) {
      if (PowerCycleP__RadioPowerState__getState() == PowerCycleP__S_OFF) {
          PowerCycleP__ccaChecks = 0;





          PowerCycleP__getCca__postTask();
        }
      else {

          PowerCycleP__OnTimer__startOneShot(PowerCycleP__sleepInterval);
        }
    }
}

/* #line 129 */
static inline uint16_t PowerCycleP__PowerCycle__getSleepInterval(void )
/* #line 129 */
{
  return PowerCycleP__sleepInterval;
}

/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/PowerCycle.nc" */
inline static uint16_t DefaultLplP__PowerCycle__getSleepInterval(void ){
/* #line 48 */
  unsigned int __nesc_result;
/* #line 48 */

/* #line 48 */
  __nesc_result = PowerCycleP__PowerCycle__getSleepInterval();
/* #line 48 */

/* #line 48 */
  return __nesc_result;
/* #line 48 */
}
/* #line 48 */
/* # 327 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__OffTimer__fired(void )
/* #line 327 */
{





  if (
/* #line 332 */
  DefaultLplP__SplitControlState__getState() == DefaultLplP__S_OFF
   || (DefaultLplP__PowerCycle__getSleepInterval() > 0
   && DefaultLplP__SplitControlState__getState() != DefaultLplP__S_OFF
   && DefaultLplP__SendState__getState() == S_LPL_NOT_SENDING)) {
      DefaultLplP__stopRadio__postTask();
    }
}

/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static void DefaultLplP__SendState__forceState(uint8_t reqState){
/* #line 51 */
  StateImplP__State__forceState(5U, reqState);
/* #line 51 */
}
/* #line 51 */
/* # 344 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__SendDoneTimer__fired(void )
/* #line 344 */
{
  if (DefaultLplP__SendState__getState() == S_LPL_SENDING) {

      DefaultLplP__SendState__forceState(S_LPL_CLEAN_UP);
    }
}

/* # 204 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc" */
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

/* # 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x1028742f8){
/* #line 83 */
  switch (arg_0x1028742f8) {
/* #line 83 */
    case 1U:
/* #line 83 */
      PowerCycleP__OnTimer__fired();
/* #line 83 */
      break;
/* #line 83 */
    case 3U:
/* #line 83 */
      DefaultLplP__OffTimer__fired();
/* #line 83 */
      break;
/* #line 83 */
    case 4U:
/* #line 83 */
      DefaultLplP__SendDoneTimer__fired();
/* #line 83 */
      break;
/* #line 83 */
    default:
/* #line 83 */
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x1028742f8);
/* #line 83 */
      break;
/* #line 83 */
    }
/* #line 83 */
}
/* #line 83 */
/* # 139 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc" */
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

/* # 83 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
/* #line 83 */
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
/* #line 83 */
}
/* #line 83 */
/* # 91 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
static inline /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 93 */
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type __nesc_temp = 
/* #line 93 */
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;

      {
/* #line 93 */
        __nesc_atomic_end(__nesc_atomic); 
/* #line 93 */
        return __nesc_temp;
      }
    }
/* #line 95 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 116 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Alarm.nc" */
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
/* #line 116 */
  unsigned long __nesc_result;
/* #line 116 */

/* #line 116 */
  __nesc_result = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__getAlarm();
/* #line 116 */

/* #line 116 */
  return __nesc_result;
/* #line 116 */
}
/* #line 116 */
/* # 74 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc" */
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
/* #line 78 */
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
inline static cc2420_header_t * CC2420TinyosNetworkP__CC2420PacketBody__getHeader(message_t * msg){
/* #line 42 */
  nx_struct cc2420_header_t *__nesc_result;
/* #line 42 */

/* #line 42 */
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
/* #line 42 */

/* #line 42 */
  return __nesc_result;
/* #line 42 */
}
/* #line 42 */
/* # 138 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
static inline void *CC2420TinyosNetworkP__BareSend__getPayload(message_t *msg, uint8_t len)
/* #line 138 */
{

  cc2420_header_t *hdr = CC2420TinyosNetworkP__CC2420PacketBody__getHeader(msg);

/* #line 141 */
  return hdr;
}

/* #line 241 */
static inline message_t *CC2420TinyosNetworkP__BareReceive__default__receive(message_t *msg, void *payload, uint8_t len)
/* #line 241 */
{
  return msg;
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
inline static message_t * CC2420TinyosNetworkP__BareReceive__receive(message_t * msg, void * payload, uint8_t len){
/* #line 78 */
  nx_struct message_t *__nesc_result;
/* #line 78 */

/* #line 78 */
  __nesc_result = CC2420TinyosNetworkP__BareReceive__default__receive(msg, payload, len);
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 283 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline message_t *CC2420ActiveMessageP__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
/* #line 283 */
{
  return msg;
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
inline static message_t * CC2420ActiveMessageP__Snoop__receive(am_id_t arg_0x102b23480, message_t * msg, void * payload, uint8_t len){
/* #line 78 */
  nx_struct message_t *__nesc_result;
/* #line 78 */

/* #line 78 */
    __nesc_result = CC2420ActiveMessageP__Snoop__default__receive(arg_0x102b23480, msg, payload, len);
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
inline static error_t LowPowerSensingBaseC__SerialSampleMsgSend__send(am_addr_t addr, message_t * msg, uint8_t len){
/* #line 80 */
  unsigned char __nesc_result;
/* #line 80 */

/* #line 80 */
  __nesc_result = /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(addr, msg, len);
/* #line 80 */

/* #line 80 */
  return __nesc_result;
/* #line 80 */
}
/* #line 80 */
/* # 148 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
static inline am_addr_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(message_t *amsg)
/* #line 148 */
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

/* #line 150 */
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
inline static am_addr_t LowPowerSensingBaseC__SerialAMPacket__destination(message_t * amsg){
/* #line 78 */
  unsigned int __nesc_result;
/* #line 78 */

/* #line 78 */
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 144 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline am_addr_t CC2420ActiveMessageP__AMPacket__source(message_t *amsg)
/* #line 144 */
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

/* #line 146 */
  return __nesc_ntoh_leuint16(header->src.nxdata);
}

/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
inline static am_addr_t LowPowerSensingBaseC__RadioAMPacket__source(message_t * amsg){
/* #line 88 */
  unsigned int __nesc_result;
/* #line 88 */

/* #line 88 */
  __nesc_result = CC2420ActiveMessageP__AMPacket__source(amsg);
/* #line 88 */

/* #line 88 */
  return __nesc_result;
/* #line 88 */
}
/* #line 88 */
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/QueueC.nc" */
static inline uint8_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__maxSize(void )
/* #line 61 */
{
  return 50;
}

/* #line 57 */
static inline uint8_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__size(void )
/* #line 57 */
{
  return /*LowPowerSensingBaseAppC.Queue*/QueueC__0__size;
}

/* #line 97 */
static inline error_t /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__enqueue(/*LowPowerSensingBaseAppC.Queue*/QueueC__0__queue_t newVal)
/* #line 97 */
{
  if (/*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__size() < /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__maxSize()) {
      ;
      /*LowPowerSensingBaseAppC.Queue*/QueueC__0__queue[/*LowPowerSensingBaseAppC.Queue*/QueueC__0__tail] = newVal;
      /*LowPowerSensingBaseAppC.Queue*/QueueC__0__tail++;
      if (/*LowPowerSensingBaseAppC.Queue*/QueueC__0__tail == 50) {
/* #line 102 */
        /*LowPowerSensingBaseAppC.Queue*/QueueC__0__tail = 0;
        }
/* #line 103 */
      /*LowPowerSensingBaseAppC.Queue*/QueueC__0__size++;
      /*LowPowerSensingBaseAppC.Queue*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Queue.nc" */
inline static error_t LowPowerSensingBaseC__MsgQueue__enqueue(LowPowerSensingBaseC__MsgQueue__t  newVal){
/* #line 90 */
  unsigned char __nesc_result;
/* #line 90 */

/* #line 90 */
  __nesc_result = /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__enqueue(newVal);
/* #line 90 */

/* #line 90 */
  return __nesc_result;
/* #line 90 */
}
/* #line 90 */
/* #line 50 */
inline static bool LowPowerSensingBaseC__MsgQueue__empty(void ){
/* #line 50 */
  unsigned char __nesc_result;
/* #line 50 */

/* #line 50 */
  __nesc_result = /*LowPowerSensingBaseAppC.Queue*/QueueC__0__Queue__empty();
/* #line 50 */

/* #line 50 */
  return __nesc_result;
/* #line 50 */
}
/* #line 50 */
/* # 58 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle(void )
/* #line 58 */
{
/* #line 58 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 58 */
    * (volatile uint8_t * )49U ^= 0x01 << 6;
/* #line 58 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle(void ){
/* #line 55 */
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__toggle();
/* #line 55 */
}
/* #line 55 */
/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle(void )
/* #line 50 */
{
/* #line 50 */
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__toggle();
}

/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void LedsP__Led2__toggle(void ){
/* #line 42 */
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__toggle();
/* #line 42 */
}
/* #line 42 */
/* # 114 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LedsP.nc" */
static inline void LedsP__Leds__led2Toggle(void )
/* #line 114 */
{
  LedsP__Led2__toggle();
  ;
/* #line 116 */
  ;
}

/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Leds.nc" */
inline static void LowPowerSensingBaseC__Leds__led2Toggle(void ){
/* #line 100 */
  LedsP__Leds__led2Toggle();
/* #line 100 */
}
/* #line 100 */
/* # 98 "LowPowerSensingBaseC.nc" */
static inline message_t *LowPowerSensingBaseC__RadioSampleMsgReceive__receive(message_t *msg, void *payload, uint8_t len)
/* #line 98 */
{
  LowPowerSensingBaseC__Leds__led2Toggle();
  if (LowPowerSensingBaseC__MsgQueue__empty() == FALSE || LowPowerSensingBaseC__serialSending == TRUE) {
    LowPowerSensingBaseC__MsgQueue__enqueue(*msg);
    }
  else 
/* #line 102 */
    {
      __nesc_hton_uint16(LowPowerSensingBaseC__sample_msg_payload->src_addr.nxdata, LowPowerSensingBaseC__RadioAMPacket__source(msg));
      LowPowerSensingBaseC__sample_msg_payload->sample = * (nx_sensor_sample_t *)payload;
      LowPowerSensingBaseC__dest_addr = LowPowerSensingBaseC__SerialAMPacket__destination(msg);
      LowPowerSensingBaseC__serialSending = TRUE;
      LowPowerSensingBaseC__SerialSampleMsgSend__send(LowPowerSensingBaseC__dest_addr, &LowPowerSensingBaseC__sample_msg, sizeof  (*LowPowerSensingBaseC__sample_msg_payload));
    }
  return msg;
}

/* # 279 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline message_t *CC2420ActiveMessageP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
/* #line 279 */
{
  return msg;
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
inline static message_t * CC2420ActiveMessageP__Receive__receive(am_id_t arg_0x102b24908, message_t * msg, void * payload, uint8_t len){
/* #line 78 */
  nx_struct message_t *__nesc_result;
/* #line 78 */

/* #line 78 */
  switch (arg_0x102b24908) {
/* #line 78 */
    case 152:
/* #line 78 */
      __nesc_result = LowPowerSensingBaseC__RadioSampleMsgReceive__receive(msg, payload, len);
/* #line 78 */
      break;
/* #line 78 */
    default:
/* #line 78 */
      __nesc_result = CC2420ActiveMessageP__Receive__default__receive(arg_0x102b24908, msg, payload, len);
/* #line 78 */
      break;
/* #line 78 */
    }
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ActiveMessageAddressC.nc" */
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
/* #line 72 */
{
  return ActiveMessageAddressC__amAddress();
}

/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc" */
inline static am_addr_t CC2420ActiveMessageP__ActiveMessageAddress__amAddress(void ){
/* #line 50 */
  unsigned int __nesc_result;
/* #line 50 */

/* #line 50 */
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
/* #line 50 */

/* #line 50 */
  return __nesc_result;
/* #line 50 */
}
/* #line 50 */
/* # 135 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline am_addr_t CC2420ActiveMessageP__AMPacket__address(void )
/* #line 135 */
{
  return CC2420ActiveMessageP__ActiveMessageAddress__amAddress();
}

/* #line 159 */
static inline bool CC2420ActiveMessageP__AMPacket__isForMe(message_t *amsg)
/* #line 159 */
{
  return CC2420ActiveMessageP__AMPacket__destination(amsg) == CC2420ActiveMessageP__AMPacket__address() || 
  CC2420ActiveMessageP__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

/* #line 219 */
static inline message_t *CC2420ActiveMessageP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
/* #line 219 */
{

  if (CC2420ActiveMessageP__AMPacket__isForMe(msg)) {
      return CC2420ActiveMessageP__Receive__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
  else {
      return CC2420ActiveMessageP__Snoop__receive(CC2420ActiveMessageP__AMPacket__type(msg), msg, payload, len);
    }
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
inline static message_t * CC2420TinyosNetworkP__ActiveReceive__receive(message_t * msg, void * payload, uint8_t len){
/* #line 78 */
  nx_struct message_t *__nesc_result;
/* #line 78 */

/* #line 78 */
  __nesc_result = CC2420ActiveMessageP__SubReceive__receive(msg, payload, len);
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
inline static cc2420_metadata_t * CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(message_t * msg){
/* #line 53 */
  nx_struct cc2420_metadata_t *__nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 119 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static inline uint8_t CC2420PacketP__CC2420Packet__getNetwork(message_t *p_msg)
/* #line 119 */
{



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      unsigned char __nesc_temp = 
/* #line 124 */
      *CC2420PacketP__getNetwork(p_msg);

      {
/* #line 124 */
        __nesc_atomic_end(__nesc_atomic); 
/* #line 124 */
        return __nesc_temp;
      }
    }
/* #line 126 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Packet.nc" */
inline static uint8_t CC2420TinyosNetworkP__CC2420Packet__getNetwork(message_t *p_msg){
/* #line 75 */
  unsigned char __nesc_result;
/* #line 75 */

/* #line 75 */
  __nesc_result = CC2420PacketP__CC2420Packet__getNetwork(p_msg);
/* #line 75 */

/* #line 75 */
  return __nesc_result;
/* #line 75 */
}
/* #line 75 */
/* # 157 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
static inline message_t *CC2420TinyosNetworkP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
/* #line 157 */
{
  uint8_t network = CC2420TinyosNetworkP__CC2420Packet__getNetwork(msg);

  if (! __nesc_ntoh_int8(CC2420TinyosNetworkP__CC2420PacketBody__getMetadata(msg)->crc.nxdata)) {
      return msg;
    }

  if (network == 0x3f) {
      return CC2420TinyosNetworkP__ActiveReceive__receive(msg, payload, len);
    }
  else 
/* #line 166 */
    {
      return CC2420TinyosNetworkP__BareReceive__receive(msg, 
      CC2420TinyosNetworkP__BareSend__getPayload(msg, len), 
      len + sizeof(cc2420_header_t ));
    }
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
inline static message_t * DefaultLplP__Receive__receive(message_t * msg, void * payload, uint8_t len){
/* #line 78 */
  nx_struct message_t *__nesc_result;
/* #line 78 */

/* #line 78 */
  __nesc_result = CC2420TinyosNetworkP__SubReceive__receive(msg, payload, len);
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 320 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline message_t *DefaultLplP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len)
/* #line 321 */
{
  DefaultLplP__startOffTimer();
  return DefaultLplP__Receive__receive(msg, payload, len);
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
inline static message_t * UniqueReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
/* #line 78 */
  nx_struct message_t *__nesc_result;
/* #line 78 */

/* #line 78 */
  __nesc_result = DefaultLplP__SubReceive__receive(msg, payload, len);
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 138 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc" */
static inline void UniqueReceiveP__insert(uint16_t msgSource, uint8_t msgDsn)
/* #line 138 */
{
  uint8_t element = UniqueReceiveP__recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 142 */
    {
      if (element == UniqueReceiveP__INVALID_ELEMENT || UniqueReceiveP__writeIndex == element) {

          element = UniqueReceiveP__writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP__receivedMessages[element].source = msgSource;
      UniqueReceiveP__receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP__writeIndex++;
          UniqueReceiveP__writeIndex %= 4;
        }
    }
/* #line 155 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* #line 192 */
static inline message_t *UniqueReceiveP__DuplicateReceive__default__receive(message_t *msg, void *payload, uint8_t len)
/* #line 192 */
{
  return msg;
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
inline static message_t * UniqueReceiveP__DuplicateReceive__receive(message_t * msg, void * payload, uint8_t len){
/* #line 78 */
  nx_struct message_t *__nesc_result;
/* #line 78 */

/* #line 78 */
  __nesc_result = UniqueReceiveP__DuplicateReceive__default__receive(msg, payload, len);
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 112 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc" */
static inline bool UniqueReceiveP__hasSeen(uint16_t msgSource, uint8_t msgDsn)
/* #line 112 */
{
  int i;

/* #line 114 */
  UniqueReceiveP__recycleSourceElement = UniqueReceiveP__INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 116 */
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP__receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP__receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
/* #line 121 */
                    TRUE;

                    {
/* #line 121 */
                      __nesc_atomic_end(__nesc_atomic); 
/* #line 121 */
                      return __nesc_temp;
                    }
                  }
                }
/* #line 124 */
              UniqueReceiveP__recycleSourceElement = i;
            }
        }
    }
/* #line 127 */
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
inline static cc2420_header_t * UniqueReceiveP__CC2420PacketBody__getHeader(message_t * msg){
/* #line 42 */
  nx_struct cc2420_header_t *__nesc_result;
/* #line 42 */

/* #line 42 */
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
/* #line 42 */

/* #line 42 */
  return __nesc_result;
/* #line 42 */
}
/* #line 42 */
/* # 165 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc" */
static inline uint16_t UniqueReceiveP__getSourceKey(message_t *msg)
/* #line 165 */
{
  cc2420_header_t *hdr = UniqueReceiveP__CC2420PacketBody__getHeader(msg);
  int s_mode = (__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3;
  int d_mode = (__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3;
  int s_offset = 2;
/* #line 169 */
  int s_len = 2;
  uint16_t key = 0;
  uint8_t *current = (uint8_t *)& hdr->dest;
  int i;

  if (s_mode == IEEE154_ADDR_EXT) {
      s_len = 8;
    }
  if (d_mode == IEEE154_ADDR_EXT) {
      s_offset = 8;
    }

  current += s_offset;

  for (i = 0; i < s_len; i++) {
      key += current[i];
    }
  return key;
}

/* #line 86 */
static inline message_t *UniqueReceiveP__SubReceive__receive(message_t *msg, void *payload, 
uint8_t len)
/* #line 87 */
{

  uint16_t msgSource = UniqueReceiveP__getSourceKey(msg);
  uint8_t msgDsn = __nesc_ntoh_leuint8(UniqueReceiveP__CC2420PacketBody__getHeader(msg)->dsn.nxdata);

  if (UniqueReceiveP__hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP__DuplicateReceive__receive(msg, payload, len);
    }
  else 
/* #line 94 */
    {
      UniqueReceiveP__insert(msgSource, msgDsn);
      return UniqueReceiveP__Receive__receive(msg, payload, len);
    }
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
inline static message_t * CC2420ReceiveP__Receive__receive(message_t * msg, void * payload, uint8_t len){
/* #line 78 */
  nx_struct message_t *__nesc_result;
/* #line 78 */

/* #line 78 */
  __nesc_result = UniqueReceiveP__SubReceive__receive(msg, payload, len);
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/LocalIeeeEui64.nc" */
inline static ieee_eui64_t CC2420ControlP__LocalIeeeEui64__getId(void ){
/* #line 48 */
  struct ieee_eui64 __nesc_result;
/* #line 48 */

/* #line 48 */
  __nesc_result = DallasId48ToIeeeEui64C__LocalIeeeEui64__getId();
/* #line 48 */

/* #line 48 */
  return __nesc_result;
/* #line 48 */
}
/* #line 48 */
/* # 286 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline ieee_eui64_t CC2420ControlP__CC2420Config__getExtAddr(void )
/* #line 286 */
{
  return CC2420ControlP__LocalIeeeEui64__getId();
}

/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc" */
inline static ieee_eui64_t CC2420ReceiveP__CC2420Config__getExtAddr(void ){
/* #line 64 */
  struct ieee_eui64 __nesc_result;
/* #line 64 */

/* #line 64 */
  __nesc_result = CC2420ControlP__CC2420Config__getExtAddr();
/* #line 64 */

/* #line 64 */
  return __nesc_result;
/* #line 64 */
}
/* #line 64 */





inline static uint16_t CC2420ReceiveP__CC2420Config__getShortAddr(void ){
/* #line 69 */
  unsigned int __nesc_result;
/* #line 69 */

/* #line 69 */
  __nesc_result = CC2420ControlP__CC2420Config__getShortAddr();
/* #line 69 */

/* #line 69 */
  return __nesc_result;
/* #line 69 */
}
/* #line 69 */
/* # 343 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline bool CC2420ControlP__CC2420Config__isAddressRecognitionEnabled(void )
/* #line 343 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 344 */
    {
      unsigned char __nesc_temp = 
/* #line 344 */
      CC2420ControlP__addressRecognition;

      {
/* #line 344 */
        __nesc_atomic_end(__nesc_atomic); 
/* #line 344 */
        return __nesc_temp;
      }
    }
/* #line 346 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 91 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc" */
inline static bool CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled(void ){
/* #line 91 */
  unsigned char __nesc_result;
/* #line 91 */

/* #line 91 */
  __nesc_result = CC2420ControlP__CC2420Config__isAddressRecognitionEnabled();
/* #line 91 */

/* #line 91 */
  return __nesc_result;
/* #line 91 */
}
/* #line 91 */
/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
inline static cc2420_header_t * CC2420ReceiveP__CC2420PacketBody__getHeader(message_t * msg){
/* #line 42 */
  nx_struct cc2420_header_t *__nesc_result;
/* #line 42 */

/* #line 42 */
  __nesc_result = CC2420PacketP__CC2420PacketBody__getHeader(msg);
/* #line 42 */

/* #line 42 */
  return __nesc_result;
/* #line 42 */
}
/* #line 42 */
/* # 819 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static inline bool CC2420ReceiveP__passesAddressCheck(message_t *msg)
/* #line 819 */
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(msg);
  int mode = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 3;
  ieee_eui64_t *ext_addr;

  if (!CC2420ReceiveP__CC2420Config__isAddressRecognitionEnabled()) {
      return TRUE;
    }

  if (mode == IEEE154_ADDR_SHORT) {
      return __nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
       || __nesc_ntoh_leuint16(header->dest.nxdata) == IEEE154_BROADCAST_ADDR;
    }
  else {
/* #line 831 */
    if (mode == IEEE154_ADDR_EXT) {
        ieee_eui64_t local_addr = CC2420ReceiveP__CC2420Config__getExtAddr();

/* #line 833 */
        ext_addr = (ieee_eui64_t *)& header->dest;
        return memcmp(ext_addr->data, local_addr.data, IEEE_EUI64_LENGTH) == 0;
      }
    else 
/* #line 835 */
      {

        return FALSE;
      }
    }
}

/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
inline static cc2420_metadata_t * CC2420ReceiveP__CC2420PacketBody__getMetadata(message_t * msg){
/* #line 53 */
  nx_struct cc2420_metadata_t *__nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 671 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static inline void CC2420ReceiveP__receiveDone_task__runTask(void )
/* #line 671 */
{
  cc2420_metadata_t *metadata = CC2420ReceiveP__CC2420PacketBody__getMetadata(CC2420ReceiveP__m_p_rx_buf);
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t length = __nesc_ntoh_leuint8(header->length.nxdata);
  uint8_t tmpLen  = sizeof(message_t ) - ((size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

  __nesc_hton_int8(metadata->crc.nxdata, buf[length] >> 7);
  __nesc_hton_uint8(metadata->lqi.nxdata, buf[length] & 0x7f);
  __nesc_hton_uint8(metadata->rssi.nxdata, buf[length - 1]);

  if (CC2420ReceiveP__passesAddressCheck(CC2420ReceiveP__m_p_rx_buf) && length >= CC2420_SIZE) {
/* #line 696 */
      CC2420ReceiveP__m_p_rx_buf = CC2420ReceiveP__Receive__receive(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_p_rx_buf->data, 
      length - CC2420_SIZE);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 699 */
    CC2420ReceiveP__receivingPacket = FALSE;
/* #line 699 */
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__waitForNextPacket();
}

/* # 29 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/DallasId48.h" */
static inline bool dallasid48checkCrc(const dallasid48_serial_t *id)
/* #line 29 */
{
  uint8_t crc = 0;
  uint8_t idx;

/* #line 32 */
  for (idx = 0; idx < DALLASID48_DATA_LENGTH; idx++) {
      uint8_t i;

/* #line 34 */
      crc = crc ^ id->data[idx];
      for (i = 0; i < 8; i++) {
          if (crc & 0x01) {
              crc = (crc >> 1) ^ 0x8C;
            }
          else {
              crc >>= 1;
            }
        }
    }
  return crc == 0;
}

/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/BusyWait.nc" */
inline static void OneWireMasterC__BusyWait__wait(OneWireMasterC__BusyWait__size_type dt){
/* #line 66 */
  /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(dt);
/* #line 66 */
}
/* #line 66 */
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline uint8_t /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__getRaw(void )
/* #line 59 */
{
/* #line 59 */
  return * (volatile uint8_t * )40U & (0x01 << 4);
}

/* #line 60 */
static inline bool /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__get(void )
/* #line 60 */
{
/* #line 60 */
  return /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__getRaw() != 0;
}

/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static bool /*Ds2411C.Gpio*/Msp430GpioC__11__HplGeneralIO__get(void ){
/* #line 70 */
  unsigned char __nesc_result;
/* #line 70 */

/* #line 70 */
  __nesc_result = /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__get();
/* #line 70 */

/* #line 70 */
  return __nesc_result;
/* #line 70 */
}
/* #line 70 */
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline bool /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__get(void )
/* #line 51 */
{
/* #line 51 */
  return /*Ds2411C.Gpio*/Msp430GpioC__11__HplGeneralIO__get();
}

/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static bool OneWireMasterC__Pin__get(void ){
/* #line 43 */
  unsigned char __nesc_result;
/* #line 43 */

/* #line 43 */
  __nesc_result = /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__get();
/* #line 43 */

/* #line 43 */
  return __nesc_result;
/* #line 43 */
}
/* #line 43 */
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeInput(void )
/* #line 61 */
{
  /* atomic removed: atomic calls only */
/* #line 61 */
  * (volatile uint8_t * )42U &= ~(0x01 << 4);
}

/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*Ds2411C.Gpio*/Msp430GpioC__11__HplGeneralIO__makeInput(void ){
/* #line 75 */
  /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeInput();
/* #line 75 */
}
/* #line 75 */
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__makeInput(void )
/* #line 52 */
{
/* #line 52 */
  /*Ds2411C.Gpio*/Msp430GpioC__11__HplGeneralIO__makeInput();
}

/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void OneWireMasterC__Pin__makeInput(void ){
/* #line 44 */
  /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__makeInput();
/* #line 44 */
}
/* #line 44 */
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeOutput(void )
/* #line 63 */
{
  /* atomic removed: atomic calls only */
/* #line 63 */
  * (volatile uint8_t * )42U |= 0x01 << 4;
}

/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*Ds2411C.Gpio*/Msp430GpioC__11__HplGeneralIO__makeOutput(void ){
/* #line 82 */
  /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__makeOutput();
/* #line 82 */
}
/* #line 82 */
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__makeOutput(void )
/* #line 54 */
{
/* #line 54 */
  /*Ds2411C.Gpio*/Msp430GpioC__11__HplGeneralIO__makeOutput();
}

/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void OneWireMasterC__Pin__makeOutput(void ){
/* #line 46 */
  /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__makeOutput();
/* #line 46 */
}
/* #line 46 */
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/OneWireMasterC.nc" */
static inline bool OneWireMasterC__readBit(void )
/* #line 56 */
{
  bool bit;

/* #line 58 */
  OneWireMasterC__Pin__makeOutput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_5US);
  OneWireMasterC__Pin__makeInput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_5US);
  bit = OneWireMasterC__Pin__get();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__SLOT_TIME);
  return bit;
}

/* #line 80 */
static inline uint8_t OneWireMasterC__readByte(void )
/* #line 80 */
{
  uint8_t i;
/* #line 81 */
  uint8_t c = 0;

/* #line 82 */
  for (i = 0; i < 8; i++) {
      c >>= 1;
      if (OneWireMasterC__readBit()) {
          c |= 0x80;
        }
    }
  return c;
}

/* #line 49 */
static inline void OneWireMasterC__writeZero(void )
/* #line 49 */
{
  OneWireMasterC__Pin__makeOutput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_60US);
  OneWireMasterC__Pin__makeInput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_5US);
}

/* #line 42 */
static inline void OneWireMasterC__writeOne(void )
/* #line 42 */
{
  OneWireMasterC__Pin__makeOutput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_5US);
  OneWireMasterC__Pin__makeInput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__SLOT_TIME);
}

/* #line 67 */
static inline void OneWireMasterC__writeByte(uint8_t c)
/* #line 67 */
{
  uint8_t j;

/* #line 69 */
  for (j = 0; j < 8; j++) {
      if (c & 0x01) {
          OneWireMasterC__writeOne();
        }
      else {
          OneWireMasterC__writeZero();
        }
      c >>= 1;
    }
}

/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__clr(void )
/* #line 57 */
{
  /* atomic removed: atomic calls only */
/* #line 57 */
  * (volatile uint8_t * )41U &= ~(0x01 << 4);
}

/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*Ds2411C.Gpio*/Msp430GpioC__11__HplGeneralIO__clr(void ){
/* #line 50 */
  /*HplMsp430GeneralIOC.P24*/HplMsp430GeneralIOP__12__IO__clr();
/* #line 50 */
}
/* #line 50 */
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__clr(void )
/* #line 49 */
{
/* #line 49 */
  /*Ds2411C.Gpio*/Msp430GpioC__11__HplGeneralIO__clr();
}

/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void OneWireMasterC__Pin__clr(void ){
/* #line 41 */
  /*Ds2411C.Gpio*/Msp430GpioC__11__GeneralIO__clr();
/* #line 41 */
}
/* #line 41 */
/* # 27 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/OneWireMasterC.nc" */
static inline bool OneWireMasterC__reset(void )
/* #line 27 */
{
  uint16_t i;

/* #line 29 */
  OneWireMasterC__Pin__makeInput();
  OneWireMasterC__Pin__clr();
  OneWireMasterC__Pin__makeOutput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__RESET_LOW_TIME);
  OneWireMasterC__Pin__makeInput();
  OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_60US);

  for (i = 0; i < OneWireMasterC__PRESENCE_DETECT_LOW_TIME; i += OneWireMasterC__DELAY_5US, OneWireMasterC__BusyWait__wait(OneWireMasterC__DELAY_5US)) 
    if (!OneWireMasterC__Pin__get()) {
/* #line 37 */
      break;
      }
/* #line 38 */
  OneWireMasterC__BusyWait__wait(OneWireMasterC__PRESENCE_RESET_HIGH_TIME - OneWireMasterC__DELAY_60US);
  return i < OneWireMasterC__PRESENCE_DETECT_LOW_TIME;
}

/* #line 91 */
static inline error_t OneWireMasterC__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len)
/* #line 91 */
{
  error_t e = SUCCESS;

/* #line 93 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 93 */
    {
      if (OneWireMasterC__reset()) {
          uint8_t i;

/* #line 96 */
          OneWireMasterC__writeByte(cmd);
          for (i = 0; i < len; i++) {
              buf[i] = OneWireMasterC__readByte();
            }
        }
      else {
          e = EOFF;
        }
    }
/* #line 104 */
    __nesc_atomic_end(__nesc_atomic); }
  return e;
}

/* # 10 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/OneWireStream.nc" */
inline static error_t Ds2411P__OneWire__read(uint8_t cmd, uint8_t *buf, uint8_t len){
/* #line 10 */
  unsigned char __nesc_result;
/* #line 10 */

/* #line 10 */
  __nesc_result = OneWireMasterC__OneWire__read(cmd, buf, len);
/* #line 10 */

/* #line 10 */
  return __nesc_result;
/* #line 10 */
}
/* #line 10 */
/* # 23 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/Ds2411P.nc" */
static inline error_t Ds2411P__readId(void )
/* #line 23 */
{
  error_t e = Ds2411P__OneWire__read(0x33, Ds2411P__ds2411id.data, DALLASID48_DATA_LENGTH);

/* #line 25 */
  if (e == SUCCESS) {
      if (dallasid48checkCrc(&Ds2411P__ds2411id)) {
          Ds2411P__haveId = TRUE;
        }
      else {
          e = EINVAL;
        }
    }
  return e;
}

static inline error_t Ds2411P__ReadId48__read(uint8_t *id)
/* #line 36 */
{
  error_t e = SUCCESS;

/* #line 38 */
  if (!Ds2411P__haveId) {
      e = Ds2411P__readId();
    }
  if (Ds2411P__haveId) {
      uint8_t i;

/* #line 43 */
      for (i = 0; i < DALLASID48_SERIAL_LENGTH; i++) {
          id[i] = Ds2411P__ds2411id.serial[i];
        }
    }
  return e;
}

/* # 12 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/ReadId48.nc" */
inline static error_t DallasId48ToIeeeEui64C__ReadId48__read(uint8_t *id){
/* #line 12 */
  unsigned char __nesc_result;
/* #line 12 */

/* #line 12 */
  __nesc_result = Ds2411P__ReadId48__read(id);
/* #line 12 */

/* #line 12 */
  return __nesc_result;
/* #line 12 */
}
/* #line 12 */
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
static inline uint16_t /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__get(void )
{




  if (0) {
      /* atomic removed: atomic calls only */
/* #line 69 */
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )368U;

/* #line 72 */
        do {
/* #line 72 */
            t0 = t1;
/* #line 72 */
            t1 = * (volatile uint16_t * )368U;
          }
        while (
/* #line 72 */
        t0 != t1);
        {
          unsigned int __nesc_temp = 
/* #line 73 */
          t1;

/* #line 73 */
          return __nesc_temp;
        }
      }
    }
  else 
/* #line 76 */
    {
      return * (volatile uint16_t * )368U;
    }
}

/* # 45 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430Timer.nc" */
inline static uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__get(void ){
/* #line 45 */
  unsigned int __nesc_result;
/* #line 45 */

/* #line 45 */
  __nesc_result = /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__get();
/* #line 45 */

/* #line 45 */
  return __nesc_result;
/* #line 45 */
}
/* #line 45 */
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430CounterC.nc" */
static inline uint16_t /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__get(void )
{
  return /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Msp430Timer__get();
}

/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Counter.nc" */
inline static /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__size_type /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get(void ){
/* #line 64 */
  unsigned int __nesc_result;
/* #line 64 */

/* #line 64 */
  __nesc_result = /*Msp430CounterMicroC.Counter*/Msp430CounterC__1__Counter__get();
/* #line 64 */

/* #line 64 */
  return __nesc_result;
/* #line 64 */
}
/* #line 64 */
/* # 178 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static inline uint8_t CC2420SpiP__Resource__isOwner(uint8_t id)
/* #line 178 */
{
  /* atomic removed: atomic calls only */
/* #line 179 */
  {
    unsigned char __nesc_temp = 
/* #line 179 */
    CC2420SpiP__m_holder == id;

/* #line 179 */
    return __nesc_temp;
  }
}

/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static bool CC2420ReceiveP__SpiResource__isOwner(void ){
/* #line 128 */
  unsigned char __nesc_result;
/* #line 128 */

/* #line 128 */
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
/* #line 128 */

/* #line 128 */
  return __nesc_result;
/* #line 128 */
}
/* #line 128 */
/* #line 97 */
inline static error_t CC2420ReceiveP__SpiResource__immediateRequest(void ){
/* #line 97 */
  unsigned char __nesc_result;
/* #line 97 */

/* #line 97 */
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
/* #line 97 */

/* #line 97 */
  return __nesc_result;
/* #line 97 */
}
/* #line 97 */
/* #line 88 */
inline static error_t CC2420ReceiveP__SpiResource__request(void ){
/* #line 88 */
  unsigned char __nesc_result;
/* #line 88 */

/* #line 88 */
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
/* #line 88 */

/* #line 88 */
  return __nesc_result;
/* #line 88 */
}
/* #line 88 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t CC2420SpiP__grant__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420SpiP__grant);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 184 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static inline void CC2420SpiP__SpiResource__granted(void )
/* #line 184 */
{
  CC2420SpiP__grant__postTask();
}

/* # 181 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(uint8_t id)
/* #line 181 */
{
}

/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(uint8_t arg_0x1022a92f0){
/* #line 102 */
  switch (arg_0x1022a92f0) {
/* #line 102 */
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
/* #line 102 */
      CC2420SpiP__SpiResource__granted();
/* #line 102 */
      break;
/* #line 102 */
    default:
/* #line 102 */
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(arg_0x1022a92f0);
/* #line 102 */
      break;
/* #line 102 */
    }
/* #line 102 */
}
/* #line 102 */
/* # 130 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id)
/* #line 130 */
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(id);
}

/* # 202 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id)
/* #line 202 */
{
}

/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(uint8_t arg_0x101d81658){
/* #line 102 */
  switch (arg_0x101d81658) {
/* #line 102 */
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
/* #line 102 */
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
/* #line 102 */
      break;
/* #line 102 */
    default:
/* #line 102 */
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__default__granted(arg_0x101d81658);
/* #line 102 */
      break;
/* #line 102 */
    }
/* #line 102 */
}
/* #line 102 */
/* # 190 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask(void )
/* #line 190 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 191 */
    {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY;
    }
/* #line 194 */
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__granted(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId);
}

/* # 252 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error)
/* #line 252 */
{
}

/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SpiPacket.nc" */
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(uint8_t arg_0x1022a52f0, uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
/* #line 82 */
  switch (arg_0x1022a52f0) {
/* #line 82 */
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
/* #line 82 */
      CC2420SpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
/* #line 82 */
      break;
/* #line 82 */
    default:
/* #line 82 */
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(arg_0x1022a52f0, txBuf, rxBuf, len, error);
/* #line 82 */
      break;
/* #line 82 */
    }
/* #line 82 */
}
/* #line 82 */
/* # 245 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void )
/* #line 245 */
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len, 
  SUCCESS);
}

/* #line 228 */
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void )
/* #line 228 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 229 */
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone();
/* #line 229 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 486 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
/* #line 487 */
{
}

/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420ReceiveP__SpiResource__release(void ){
/* #line 120 */
  unsigned char __nesc_result;
/* #line 120 */

/* #line 120 */
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID);
/* #line 120 */

/* #line 120 */
  return __nesc_result;
/* #line 120 */
}
/* #line 120 */
/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420ReceiveP__CSN__set(void ){
/* #line 40 */
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
/* #line 40 */
}
/* #line 40 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t CC2420ReceiveP__receiveDone_task__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__receiveDone_task);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc" */
inline static cc2420_metadata_t * CC2420TransmitP__CC2420PacketBody__getMetadata(message_t * msg){
/* #line 53 */
  nx_struct cc2420_metadata_t *__nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420PacketP__CC2420PacketBody__getMetadata(msg);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 389 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ack_msg)
/* #line 389 */
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK && CC2420TransmitP__m_msg) {
      ack_header = CC2420TransmitP__CC2420PacketBody__getHeader(ack_msg);
      msg_header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);

      if (CC2420TransmitP__m_state == CC2420TransmitP__S_ACK_WAIT && __nesc_ntoh_leuint8(msg_header->dsn.nxdata) == __nesc_ntoh_leuint8(ack_header->dsn.nxdata)) {
          CC2420TransmitP__BackoffTimer__stop();

          msg_metadata = CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8(ack_header->length.nxdata);

          __nesc_hton_int8(msg_metadata->ack.nxdata, TRUE);
          __nesc_hton_uint8(msg_metadata->rssi.nxdata, ack_buf[length - 1]);
          __nesc_hton_uint8(msg_metadata->lqi.nxdata, ack_buf[length] & 0x7f);
          CC2420TransmitP__signalDone(SUCCESS);
        }
    }
}

/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc" */
inline static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message){
/* #line 63 */
  CC2420TransmitP__CC2420Receive__receive(type, message);
/* #line 63 */
}
/* #line 63 */
/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketTimeStamp.nc" */
inline static void CC2420ReceiveP__PacketTimeStamp__clear(message_t * msg){
/* #line 70 */
  CC2420PacketP__PacketTimeStamp32khz__clear(msg);
/* #line 70 */
}
/* #line 70 */








inline static void CC2420ReceiveP__PacketTimeStamp__set(message_t * msg, CC2420ReceiveP__PacketTimeStamp__size_type value){
/* #line 78 */
  CC2420PacketP__PacketTimeStamp32khz__set(msg, value);
/* #line 78 */
}
/* #line 78 */
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void )
/* #line 59 */
{
/* #line 59 */
  return * (volatile uint8_t * )32U & (0x01 << 0);
}

/* #line 60 */
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void )
/* #line 60 */
{
/* #line 60 */
  return /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw() != 0;
}

/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get(void ){
/* #line 70 */
  unsigned char __nesc_result;
/* #line 70 */

/* #line 70 */
  __nesc_result = /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get();
/* #line 70 */

/* #line 70 */
  return __nesc_result;
/* #line 70 */
}
/* #line 70 */
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void )
/* #line 51 */
{
/* #line 51 */
  return /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get();
}

/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static bool CC2420ReceiveP__FIFOP__get(void ){
/* #line 43 */
  unsigned char __nesc_result;
/* #line 43 */

/* #line 43 */
  __nesc_result = /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get();
/* #line 43 */

/* #line 43 */
  return __nesc_result;
/* #line 43 */
}
/* #line 43 */
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void )
/* #line 59 */
{
/* #line 59 */
  return * (volatile uint8_t * )32U & (0x01 << 3);
}

/* #line 60 */
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void )
/* #line 60 */
{
/* #line 60 */
  return /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw() != 0;
}

/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get(void ){
/* #line 70 */
  unsigned char __nesc_result;
/* #line 70 */

/* #line 70 */
  __nesc_result = /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get();
/* #line 70 */

/* #line 70 */
  return __nesc_result;
/* #line 70 */
}
/* #line 70 */
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void )
/* #line 51 */
{
/* #line 51 */
  return /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get();
}

/* # 43 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static bool CC2420ReceiveP__FIFO__get(void ){
/* #line 43 */
  unsigned char __nesc_result;
/* #line 43 */

/* #line 43 */
  __nesc_result = /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get();
/* #line 43 */

/* #line 43 */
  return __nesc_result;
/* #line 43 */
}
/* #line 43 */
/* # 209 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
/* #line 210 */
{
  return CC2420SpiP__SpiPacket__send((void *)0, data, len);
}

/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
inline static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length){
/* #line 62 */
  unsigned char __nesc_result;
/* #line 62 */

/* #line 62 */
  __nesc_result = CC2420SpiP__Fifo__continueRead(CC2420_RXFIFO, data, length);
/* #line 62 */

/* #line 62 */
  return __nesc_result;
/* #line 62 */
}
/* #line 62 */
/* #line 51 */
inline static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length){
/* #line 51 */
  unsigned char __nesc_result;
/* #line 51 */

/* #line 51 */
  __nesc_result = CC2420SpiP__Fifo__beginRead(CC2420_RXFIFO, data, length);
/* #line 51 */

/* #line 51 */
  return __nesc_result;
/* #line 51 */
}
/* #line 51 */
/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420ReceiveP__CSN__clr(void ){
/* #line 41 */
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
/* #line 41 */
}
/* #line 41 */
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
inline static cc2420_status_t CC2420ReceiveP__SACK__strobe(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SACK);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 370 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline bool CC2420ControlP__CC2420Config__isHwAutoAckDefault(void )
/* #line 370 */
{
  /* atomic removed: atomic calls only */
/* #line 371 */
  {
    unsigned char __nesc_temp = 
/* #line 371 */
    CC2420ControlP__hwAutoAckDefault;

/* #line 371 */
    return __nesc_temp;
  }
}

/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc" */
inline static bool CC2420ReceiveP__CC2420Config__isHwAutoAckDefault(void ){
/* #line 110 */
  unsigned char __nesc_result;
/* #line 110 */

/* #line 110 */
  __nesc_result = CC2420ControlP__CC2420Config__isHwAutoAckDefault();
/* #line 110 */

/* #line 110 */
  return __nesc_result;
/* #line 110 */
}
/* #line 110 */
/* # 377 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline bool CC2420ControlP__CC2420Config__isAutoAckEnabled(void )
/* #line 377 */
{
  /* atomic removed: atomic calls only */
/* #line 378 */
  {
    unsigned char __nesc_temp = 
/* #line 378 */
    CC2420ControlP__autoAckEnabled;

/* #line 378 */
    return __nesc_temp;
  }
}

/* # 115 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc" */
inline static bool CC2420ReceiveP__CC2420Config__isAutoAckEnabled(void ){
/* #line 115 */
  unsigned char __nesc_result;
/* #line 115 */

/* #line 115 */
  __nesc_result = CC2420ControlP__CC2420Config__isAutoAckEnabled();
/* #line 115 */

/* #line 115 */
  return __nesc_result;
/* #line 115 */
}
/* #line 115 */
/* # 525 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
/* #line 526 */
{
  cc2420_header_t *header = CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf);
  uint8_t tmpLen  = sizeof(message_t ) - ((size_t )& ((message_t *)0)->data - sizeof(cc2420_header_t ));
  uint8_t * buf = (uint8_t * )header;

/* #line 530 */
  CC2420ReceiveP__rxFrameLength = buf[0];

  switch (CC2420ReceiveP__m_state) {

      case CC2420ReceiveP__S_RX_LENGTH: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_FCF;



      if (CC2420ReceiveP__rxFrameLength + 1 > CC2420ReceiveP__m_bytes_left) 



        {

          CC2420ReceiveP__flush();
        }
      else {
          if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {
              CC2420ReceiveP__m_bytes_left -= CC2420ReceiveP__rxFrameLength + 1;
            }

          if (CC2420ReceiveP__rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP__rxFrameLength > 0) {
                  if (CC2420ReceiveP__rxFrameLength > CC2420ReceiveP__SACK_HEADER_LENGTH) {

                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;
                      CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP__receivingPacket = FALSE;
                  CC2420ReceiveP__CSN__set();
                  CC2420ReceiveP__SpiResource__release();
                  CC2420ReceiveP__waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP__flush();
            }
        }
      break;

      case CC2420ReceiveP__S_RX_FCF: 
        CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;










      if (CC2420ReceiveP__CC2420Config__isAutoAckEnabled() && !CC2420ReceiveP__CC2420Config__isHwAutoAckDefault()) {



          if (((__nesc_ntoh_leuint16(
/* #line 592 */
          header->fcf.nxdata) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16(header->dest.nxdata) == CC2420ReceiveP__CC2420Config__getShortAddr()
           || __nesc_ntoh_leuint16(header->dest.nxdata) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__SACK__strobe();
              CC2420ReceiveP__CSN__set();
              CC2420ReceiveP__CSN__clr();
              CC2420ReceiveP__RXFIFO__beginRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
              CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
              return;
            }
        }

      CC2420ReceiveP__RXFIFO__continueRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
      CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP__S_RX_PAYLOAD: 

        CC2420ReceiveP__CSN__set();
      if (!CC2420ReceiveP__m_missed_packets) {

          CC2420ReceiveP__SpiResource__release();
        }




      if ((((
/* #line 621 */
      CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get())
       || !CC2420ReceiveP__m_timestamp_size)
       || CC2420ReceiveP__rxFrameLength <= 10) {
          CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
        }
      else {
          if (CC2420ReceiveP__m_timestamp_size == 1) {
            CC2420ReceiveP__PacketTimeStamp__set(CC2420ReceiveP__m_p_rx_buf, CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__m_timestamp_head]);
            }
/* #line 629 */
          CC2420ReceiveP__m_timestamp_head = (CC2420ReceiveP__m_timestamp_head + 1) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;
          CC2420ReceiveP__m_timestamp_size--;

          if (CC2420ReceiveP__m_timestamp_size > 0) {
              CC2420ReceiveP__PacketTimeStamp__clear(CC2420ReceiveP__m_p_rx_buf);
              CC2420ReceiveP__m_timestamp_head = 0;
              CC2420ReceiveP__m_timestamp_size = 0;
            }
        }



      if (buf[CC2420ReceiveP__rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16(header->fcf.nxdata) >> IEEE154_FCF_FRAME_TYPE) & 7;

/* #line 643 */
          CC2420ReceiveP__CC2420Receive__receive(type, CC2420ReceiveP__m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP__receiveDone_task__postTask();
              return;
            }
        }

      CC2420ReceiveP__waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP__receivingPacket = FALSE;
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__SpiResource__release();
      break;
    }
}

/* # 370 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
/* #line 370 */
{
}

/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
inline static void CC2420SpiP__Fifo__readDone(uint8_t arg_0x102200328, uint8_t * data, uint8_t length, error_t error){
/* #line 71 */
  switch (arg_0x102200328) {
/* #line 71 */
    case CC2420_TXFIFO:
/* #line 71 */
      CC2420TransmitP__TXFIFO__readDone(data, length, error);
/* #line 71 */
      break;
/* #line 71 */
    case CC2420_RXFIFO:
/* #line 71 */
      CC2420ReceiveP__RXFIFO__readDone(data, length, error);
/* #line 71 */
      break;
/* #line 71 */
    default:
/* #line 71 */
      CC2420SpiP__Fifo__default__readDone(arg_0x102200328, data, length, error);
/* #line 71 */
      break;
/* #line 71 */
    }
/* #line 71 */
}
/* #line 71 */
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
inline static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t CC2420CsmaP__sendDone_task__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__sendDone_task);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 205 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static inline void CC2420CsmaP__CC2420Transmit__sendDone(message_t *p_msg, error_t err)
/* #line 205 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 206 */
    CC2420CsmaP__sendErr = err;
/* #line 206 */
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP__sendDone_task__postTask();
}

/* # 358 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__Resend__sendDone(message_t *p_msg, error_t error)
/* #line 358 */
{
}

/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc" */
inline static void CC2420TransmitP__Send__sendDone(message_t * p_msg, error_t error){
/* #line 73 */
  DefaultLplP__Resend__sendDone(p_msg, error);
/* #line 73 */
  CC2420CsmaP__CC2420Transmit__sendDone(p_msg, error);
/* #line 73 */
}
/* #line 73 */
/* # 454 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
/* #line 455 */
{

  CC2420TransmitP__CSN__set();
  if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
      /* atomic removed: atomic calls only */
/* #line 459 */
      {
        CC2420TransmitP__CSN__clr();
        CC2420TransmitP__SFLUSHTX__strobe();
        CC2420TransmitP__CSN__set();
      }
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
    }
  else {
/* #line 468 */
    if (!CC2420TransmitP__m_cca) {
        /* atomic removed: atomic calls only */
/* #line 469 */
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP__attemptSend();
      }
    else {
        CC2420TransmitP__releaseSpiResource();
        /* atomic removed: atomic calls only */
/* #line 476 */
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_SAMPLE_CCA;
        }

        CC2420TransmitP__RadioBackoff__requestInitialBackoff(CC2420TransmitP__m_msg);
        CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myInitialBackoff);
      }
    }
}

/* # 663 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
/* #line 663 */
{
}

/* # 373 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
/* #line 373 */
{
}

/* # 91 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc" */
inline static void CC2420SpiP__Fifo__writeDone(uint8_t arg_0x102200328, uint8_t * data, uint8_t length, error_t error){
/* #line 91 */
  switch (arg_0x102200328) {
/* #line 91 */
    case CC2420_TXFIFO:
/* #line 91 */
      CC2420TransmitP__TXFIFO__writeDone(data, length, error);
/* #line 91 */
      break;
/* #line 91 */
    case CC2420_RXFIFO:
/* #line 91 */
      CC2420ReceiveP__RXFIFO__writeDone(data, length, error);
/* #line 91 */
      break;
/* #line 91 */
    default:
/* #line 91 */
      CC2420SpiP__Fifo__default__writeDone(arg_0x102200328, data, length, error);
/* #line 91 */
      break;
/* #line 91 */
    }
/* #line 91 */
}
/* #line 91 */
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc" */
inline static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data){
/* #line 63 */
  unsigned char __nesc_result;
/* #line 63 */

/* #line 63 */
  __nesc_result = CC2420SpiP__Reg__write(CC2420_RXCTRL1, data);
/* #line 63 */

/* #line 63 */
  return __nesc_result;
/* #line 63 */
}
/* #line 63 */
inline static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data){
/* #line 63 */
  unsigned char __nesc_result;
/* #line 63 */

/* #line 63 */
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG0, data);
/* #line 63 */

/* #line 63 */
  return __nesc_result;
/* #line 63 */
}
/* #line 63 */
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
inline static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCON);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port14__enable(void )
/* #line 90 */
{
/* #line 90 */
  P1IE |= 1 << 4;
}

/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void ){
/* #line 42 */
  HplMsp430InterruptP__Port14__enable();
/* #line 42 */
}
/* #line 42 */
/* # 142 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port14__edge(bool l2h)
/* #line 142 */
{
  /* atomic removed: atomic calls only */
/* #line 143 */
  {
    if (l2h) {
/* #line 144 */
      P1IES &= ~(1 << 4);
      }
    else {
/* #line 145 */
      P1IES |= 1 << 4;
      }
  }
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high){
/* #line 67 */
  HplMsp430InterruptP__Port14__edge(low_to_high);
/* #line 67 */
}
/* #line 67 */
/* # 106 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port14__clear(void )
/* #line 106 */
{
/* #line 106 */
  P1IFG &= ~(1 << 4);
}

/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void ){
/* #line 52 */
  HplMsp430InterruptP__Port14__clear();
/* #line 52 */
}
/* #line 52 */
/* # 98 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port14__disable(void )
/* #line 98 */
{
/* #line 98 */
  P1IE &= ~(1 << 4);
}

/* # 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void ){
/* #line 47 */
  HplMsp430InterruptP__Port14__disable();
/* #line 47 */
}
/* #line 47 */
/* # 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc" */
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void )
/* #line 69 */
{
  /* atomic removed: atomic calls only */
/* #line 70 */
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  }
  return SUCCESS;
}

/* #line 52 */
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising)
/* #line 52 */
{
  /* atomic removed: atomic calls only */
/* #line 53 */
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable();
  }
  return SUCCESS;
}

static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void )
/* #line 61 */
{
  return /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(TRUE);
}

/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
inline static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge();
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc" */
inline static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data){
/* #line 63 */
  unsigned char __nesc_result;
/* #line 63 */

/* #line 63 */
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG1, data);
/* #line 63 */

/* #line 63 */
  return __nesc_result;
/* #line 63 */
}
/* #line 63 */
/* # 214 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void )
/* #line 214 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 215 */
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
/* #line 217 */
            FAIL;

            {
/* #line 217 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 217 */
              return __nesc_temp;
            }
          }
        }
/* #line 220 */
      CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTING;
      CC2420ControlP__IOCFG1__write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP__InterruptCCA__enableRisingEdge();
      CC2420ControlP__SXOSCON__strobe();

      CC2420ControlP__IOCFG0__write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP__writeFsctrl();
      CC2420ControlP__writeMdmctrl0();

      CC2420ControlP__RXCTRL1__write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));
    }
/* #line 240 */
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc" */
inline static error_t CC2420CsmaP__CC2420Power__startOscillator(void ){
/* #line 71 */
  unsigned char __nesc_result;
/* #line 71 */

/* #line 71 */
  __nesc_result = CC2420ControlP__CC2420Power__startOscillator();
/* #line 71 */

/* #line 71 */
  return __nesc_result;
/* #line 71 */
}
/* #line 71 */
/* # 214 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static inline void CC2420CsmaP__Resource__granted(void )
/* #line 214 */
{
  CC2420CsmaP__CC2420Power__startOscillator();
}

/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static void CC2420ControlP__Resource__granted(void ){
/* #line 102 */
  CC2420CsmaP__Resource__granted();
/* #line 102 */
}
/* #line 102 */
/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420ControlP__CSN__clr(void ){
/* #line 41 */
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
/* #line 41 */
}
/* #line 41 */
/* # 401 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline void CC2420ControlP__SpiResource__granted(void )
/* #line 401 */
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__Resource__granted();
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t CC2420ControlP__syncDone__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ControlP__syncDone);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420ControlP__SyncResource__release(void ){
/* #line 120 */
  unsigned char __nesc_result;
/* #line 120 */

/* #line 120 */
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
/* #line 120 */

/* #line 120 */
  return __nesc_result;
/* #line 120 */
}
/* #line 120 */
/* # 40 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420ControlP__CSN__set(void ){
/* #line 40 */
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
/* #line 40 */
}
/* #line 40 */
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc" */
inline static cc2420_status_t CC2420ControlP__SRXON__strobe(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRXON);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
inline static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRFOFF);
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 387 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline void CC2420ControlP__SyncResource__granted(void )
/* #line 387 */
{
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRFOFF__strobe();
  CC2420ControlP__writeFsctrl();
  CC2420ControlP__writeMdmctrl0();
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__SRXON__strobe();
  CC2420ControlP__CSN__set();
  CC2420ControlP__SyncResource__release();
  CC2420ControlP__syncDone__postTask();
}

/* #line 521 */
static inline void CC2420ControlP__ReadRssi__default__readDone(error_t error, uint16_t data)
/* #line 521 */
{
}

/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Read.nc" */
inline static void CC2420ControlP__ReadRssi__readDone(error_t result, CC2420ControlP__ReadRssi__val_t val){
/* #line 63 */
  CC2420ControlP__ReadRssi__default__readDone(result, val);
/* #line 63 */
}
/* #line 63 */
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420ControlP__RssiResource__release(void ){
/* #line 120 */
  unsigned char __nesc_result;
/* #line 120 */

/* #line 120 */
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID);
/* #line 120 */

/* #line 120 */
  return __nesc_result;
/* #line 120 */
}
/* #line 120 */
/* # 287 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static inline cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data)
/* #line 287 */
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 291 */
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
/* #line 293 */
            status;

            {
/* #line 293 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 293 */
              return __nesc_temp;
            }
          }
        }
    }
/* #line 297 */
    __nesc_atomic_end(__nesc_atomic); }
/* #line 297 */
  status = CC2420SpiP__SpiByte__write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP__SpiByte__write(0) << 8;
  *data |= CC2420SpiP__SpiByte__write(0);

  return status;
}

/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc" */
inline static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data){
/* #line 55 */
  unsigned char __nesc_result;
/* #line 55 */

/* #line 55 */
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RSSI, data);
/* #line 55 */

/* #line 55 */
  return __nesc_result;
/* #line 55 */
}
/* #line 55 */
/* # 406 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline void CC2420ControlP__RssiResource__granted(void )
/* #line 406 */
{
  uint16_t data = 0;

/* #line 408 */
  CC2420ControlP__CSN__clr();
  CC2420ControlP__RSSI__read(&data);
  CC2420ControlP__CSN__set();

  CC2420ControlP__RssiResource__release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP__ReadRssi__readDone(SUCCESS, data);
}

/* # 416 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline void CC2420TransmitP__SpiResource__granted(void )
/* #line 416 */
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 419 */
    {
      cur_state = CC2420TransmitP__m_state;
    }
/* #line 421 */
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP__S_LOAD: 
        CC2420TransmitP__loadTXFIFO();
      break;

      case CC2420TransmitP__S_BEGIN_TRANSMIT: 
        CC2420TransmitP__attemptSend();
      break;

      case CC2420TransmitP__S_CANCEL: 
        CC2420TransmitP__CSN__clr();
      CC2420TransmitP__SFLUSHTX__strobe();
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 437 */
        {
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
        }
/* #line 439 */
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP__releaseSpiResource();
      break;
    }
}

/* # 508 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static inline void CC2420ReceiveP__SpiResource__granted(void )
/* #line 508 */
{







  CC2420ReceiveP__receive();
}

/* # 367 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static inline void CC2420SpiP__Resource__default__granted(uint8_t id)
/* #line 367 */
{
}

/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static void CC2420SpiP__Resource__granted(uint8_t arg_0x102202158){
/* #line 102 */
  switch (arg_0x102202158) {
/* #line 102 */
    case /*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID:
/* #line 102 */
      CC2420ControlP__SpiResource__granted();
/* #line 102 */
      break;
/* #line 102 */
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID:
/* #line 102 */
      CC2420ControlP__SyncResource__granted();
/* #line 102 */
      break;
/* #line 102 */
    case /*CC2420ControlC.RssiResource*/CC2420SpiC__2__CLIENT_ID:
/* #line 102 */
      CC2420ControlP__RssiResource__granted();
/* #line 102 */
      break;
/* #line 102 */
    case /*CC2420TransmitC.Spi*/CC2420SpiC__3__CLIENT_ID:
/* #line 102 */
      CC2420TransmitP__SpiResource__granted();
/* #line 102 */
      break;
/* #line 102 */
    case /*CC2420ReceiveC.Spi*/CC2420SpiC__4__CLIENT_ID:
/* #line 102 */
      CC2420ReceiveP__SpiResource__granted();
/* #line 102 */
      break;
/* #line 102 */
    default:
/* #line 102 */
      CC2420SpiP__Resource__default__granted(arg_0x102202158);
/* #line 102 */
      break;
/* #line 102 */
    }
/* #line 102 */
}
/* #line 102 */
/* # 358 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static inline void CC2420SpiP__grant__runTask(void )
/* #line 358 */
{
  uint8_t holder;

/* #line 360 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 360 */
    {
      holder = CC2420SpiP__m_holder;
    }
/* #line 362 */
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__Resource__granted(holder);
}

/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc" */
inline static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data){
/* #line 63 */
  unsigned char __nesc_result;
/* #line 63 */

/* #line 63 */
  __nesc_result = CC2420SpiP__Reg__write(CC2420_FSCTRL, data);
/* #line 63 */

/* #line 63 */
  return __nesc_result;
/* #line 63 */
}
/* #line 63 */
inline static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data){
/* #line 63 */
  unsigned char __nesc_result;
/* #line 63 */

/* #line 63 */
  __nesc_result = CC2420SpiP__Reg__write(CC2420_MDMCTRL0, data);
/* #line 63 */

/* #line 63 */
  return __nesc_result;
/* #line 63 */
}
/* #line 63 */
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc" */
inline static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length){
/* #line 63 */
  unsigned char __nesc_result;
/* #line 63 */

/* #line 63 */
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_IEEEADR, offset, data, length);
/* #line 63 */

/* #line 63 */
  return __nesc_result;
/* #line 63 */
}
/* #line 63 */
/* # 235 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline void CC2420ActiveMessageP__CC2420Config__syncDone(error_t error)
/* #line 235 */
{
}

/* # 704 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static inline void CC2420ReceiveP__CC2420Config__syncDone(error_t error)
/* #line 704 */
{
}

/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc" */
inline static void CC2420ControlP__CC2420Config__syncDone(error_t error){
/* #line 53 */
  CC2420ReceiveP__CC2420Config__syncDone(error);
/* #line 53 */
  CC2420ActiveMessageP__CC2420Config__syncDone(error);
/* #line 53 */
}
/* #line 53 */
/* # 457 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline void CC2420ControlP__syncDone__runTask(void )
/* #line 457 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 458 */
    CC2420ControlP__m_sync_busy = FALSE;
/* #line 458 */
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__CC2420Config__syncDone(SUCCESS);
}

/* # 88 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420ControlP__SyncResource__request(void ){
/* #line 88 */
  unsigned char __nesc_result;
/* #line 88 */

/* #line 88 */
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC__1__CLIENT_ID);
/* #line 88 */

/* #line 88 */
  return __nesc_result;
/* #line 88 */
}
/* #line 88 */
/* # 311 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline error_t CC2420ControlP__CC2420Config__sync(void )
/* #line 311 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 312 */
    {
      if (CC2420ControlP__m_sync_busy) {
          {
            unsigned char __nesc_temp = 
/* #line 314 */
            FAIL;

            {
/* #line 314 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 314 */
              return __nesc_temp;
            }
          }
        }
/* #line 317 */
      CC2420ControlP__m_sync_busy = TRUE;
      if (CC2420ControlP__m_state == CC2420ControlP__S_XOSC_STARTED) {
          CC2420ControlP__SyncResource__request();
        }
      else 
/* #line 320 */
        {
          CC2420ControlP__syncDone__postTask();
        }
    }
/* #line 323 */
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

/* #line 453 */
static inline void CC2420ControlP__sync__runTask(void )
/* #line 453 */
{
  CC2420ControlP__CC2420Config__sync();
}

/* # 244 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
static inline void CC2420TinyosNetworkP__BareSend__default__sendDone(message_t *msg, error_t error)
/* #line 244 */
{
}

/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static void CC2420TinyosNetworkP__BareSend__sendDone(message_t * msg, error_t error){
/* #line 100 */
  CC2420TinyosNetworkP__BareSend__default__sendDone(msg, error);
/* #line 100 */
}
/* #line 100 */
/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
inline static void CC2420ActiveMessageP__AMSend__sendDone(am_id_t arg_0x102b257d8, message_t * msg, error_t error){
/* #line 110 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x102b257d8, msg, error);
/* #line 110 */
}
/* #line 110 */
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420ActiveMessageP__RadioResource__release(void ){
/* #line 120 */
  unsigned char __nesc_result;
/* #line 120 */

/* #line 120 */
  __nesc_result = CC2420TinyosNetworkP__Resource__release(CC2420ActiveMessageC__CC2420_AM_SEND_ID);
/* #line 120 */

/* #line 120 */
  return __nesc_result;
/* #line 120 */
}
/* #line 120 */
/* # 212 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline void CC2420ActiveMessageP__SubSend__sendDone(message_t *msg, error_t result)
/* #line 212 */
{
  CC2420ActiveMessageP__RadioResource__release();
  CC2420ActiveMessageP__AMSend__sendDone(CC2420ActiveMessageP__AMPacket__type(msg), msg, result);
}

/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static void CC2420TinyosNetworkP__ActiveSend__sendDone(message_t * msg, error_t error){
/* #line 100 */
  CC2420ActiveMessageP__SubSend__sendDone(msg, error);
/* #line 100 */
}
/* #line 100 */
/* # 148 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
static inline void CC2420TinyosNetworkP__SubSend__sendDone(message_t *msg, error_t error)
/* #line 148 */
{
  if (CC2420TinyosNetworkP__m_busy_client == CC2420TinyosNetworkP__CLIENT_AM) {
      CC2420TinyosNetworkP__ActiveSend__sendDone(msg, error);
    }
  else 
/* #line 151 */
    {
      CC2420TinyosNetworkP__BareSend__sendDone(msg, error);
    }
}

/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static void UniqueSendP__Send__sendDone(message_t * msg, error_t error){
/* #line 100 */
  CC2420TinyosNetworkP__SubSend__sendDone(msg, error);
/* #line 100 */
}
/* #line 100 */
/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc" */
static inline void UniqueSendP__SubSend__sendDone(message_t *msg, error_t error)
/* #line 104 */
{
  UniqueSendP__State__toIdle();
  UniqueSendP__Send__sendDone(msg, error);
}

/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static void DefaultLplP__Send__sendDone(message_t * msg, error_t error){
/* #line 100 */
  UniqueSendP__SubSend__sendDone(msg, error);
/* #line 100 */
}
/* #line 100 */
/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static void DefaultLplP__SendState__toIdle(void ){
/* #line 56 */
  StateImplP__State__toIdle(5U);
/* #line 56 */
}
/* #line 56 */
/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static inline bool CC2420PacketP__Acks__wasAcked(message_t *p_msg)
/* #line 75 */
{
  return __nesc_ntoh_int8(CC2420PacketP__CC2420PacketBody__getMetadata(p_msg)->ack.nxdata);
}

/* # 85 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc" */
inline static bool DefaultLplP__PacketAcknowledgements__wasAcked(message_t * msg){
/* #line 85 */
  unsigned char __nesc_result;
/* #line 85 */

/* #line 85 */
  __nesc_result = CC2420PacketP__Acks__wasAcked(msg);
/* #line 85 */

/* #line 85 */
  return __nesc_result;
/* #line 85 */
}
/* #line 85 */
/* # 169 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc" */
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

/* # 92 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
inline static bool DefaultLplP__SendDoneTimer__isRunning(void ){
/* #line 92 */
  unsigned char __nesc_result;
/* #line 92 */

/* #line 92 */
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(4U);
/* #line 92 */

/* #line 92 */
  return __nesc_result;
/* #line 92 */
}
/* #line 92 */
/* # 283 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__SubSend__sendDone(message_t *msg, error_t error)
/* #line 283 */
{

  switch (DefaultLplP__SendState__getState()) {
      case S_LPL_SENDING: 
        if (DefaultLplP__SendDoneTimer__isRunning()) {
            if (!DefaultLplP__PacketAcknowledgements__wasAcked(msg)) {
                DefaultLplP__resend__postTask();
                return;
              }
          }
      break;

      case S_LPL_CLEAN_UP: 




        break;

      default: 
        break;
    }

  DefaultLplP__SendState__toIdle();
  DefaultLplP__SendDoneTimer__stop();
  DefaultLplP__startOffTimer();
  DefaultLplP__Send__sendDone(msg, error);
}

/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static void CC2420CsmaP__Send__sendDone(message_t * msg, error_t error){
/* #line 100 */
  DefaultLplP__SubSend__sendDone(msg, error);
/* #line 100 */
}
/* #line 100 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t CC2420CsmaP__stopDone_task__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__stopDone_task);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc" */
inline static error_t CC2420CsmaP__CC2420Power__stopVReg(void ){
/* #line 63 */
  unsigned char __nesc_result;
/* #line 63 */

/* #line 63 */
  __nesc_result = CC2420ControlP__CC2420Power__stopVReg();
/* #line 63 */

/* #line 63 */
  return __nesc_result;
/* #line 63 */
}
/* #line 63 */
/* # 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/types/TinyError.h" */
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

/* # 105 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc" */
inline static error_t CC2420CsmaP__SubControl__stop(void ){
/* #line 105 */
  unsigned char __nesc_result;
/* #line 105 */

/* #line 105 */
  __nesc_result = CC2420TransmitP__StdControl__stop();
/* #line 105 */
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__stop());
/* #line 105 */

/* #line 105 */
  return __nesc_result;
/* #line 105 */
}
/* #line 105 */
/* # 275 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static inline void CC2420CsmaP__shutdown(void )
/* #line 275 */
{
  CC2420CsmaP__SubControl__stop();
  CC2420CsmaP__CC2420Power__stopVReg();
  CC2420CsmaP__stopDone_task__postTask();
}

/* #line 244 */
static inline void CC2420CsmaP__sendDone_task__runTask(void )
/* #line 244 */
{
  error_t packetErr;

/* #line 246 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 246 */
    packetErr = CC2420CsmaP__sendErr;
/* #line 246 */
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPING)) {
      CC2420CsmaP__shutdown();
    }
  else {
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
    }

  CC2420CsmaP__Send__sendDone(CC2420CsmaP__m_msg, packetErr);
}

/* # 267 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__SubControl__stopDone(error_t error)
/* #line 267 */
{
  if (!error) {


      if (
/* #line 270 */
      DefaultLplP__SendState__getState() == S_LPL_FIRST_MESSAGE
       || DefaultLplP__SendState__getState() == S_LPL_SENDING) {

          DefaultLplP__startRadio__postTask();
        }
      else {
          DefaultLplP__OffTimer__stop();
          DefaultLplP__SendDoneTimer__stop();
        }
    }
}

/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static void PowerCycleP__RadioPowerState__forceState(uint8_t reqState){
/* #line 51 */
  StateImplP__State__forceState(3U, reqState);
/* #line 51 */
}
/* #line 51 */
/* # 208 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc" */
static inline void PowerCycleP__SubControl__stopDone(error_t error)
/* #line 208 */
{
  PowerCycleP__RadioPowerState__forceState(PowerCycleP__S_OFF);


  if (PowerCycleP__finishSplitControlRequests()) {
      return;
    }
  else {
/* #line 215 */
    if (PowerCycleP__isDutyCycling()) {
        PowerCycleP__OnTimer__startOneShot(PowerCycleP__sleepInterval);
      }
    }
}

/* # 138 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
inline static void CC2420CsmaP__SplitControl__stopDone(error_t error){
/* #line 138 */
  PowerCycleP__SubControl__stopDone(error);
/* #line 138 */
  DefaultLplP__SubControl__stopDone(error);
/* #line 138 */
}
/* #line 138 */
/* # 265 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static inline void CC2420CsmaP__stopDone_task__runTask(void )
/* #line 265 */
{
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPED);
  CC2420CsmaP__SplitControl__stopDone(SUCCESS);
}

/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static void DefaultLplP__RadioPowerState__forceState(uint8_t reqState){
/* #line 51 */
  StateImplP__State__forceState(3U, reqState);
/* #line 51 */
}
/* #line 51 */
/* # 256 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__SubControl__startDone(error_t error)
/* #line 256 */
{
  if (!error) {
      DefaultLplP__RadioPowerState__forceState(DefaultLplP__S_ON);


      if (
/* #line 260 */
      DefaultLplP__SendState__getState() == S_LPL_FIRST_MESSAGE
       || DefaultLplP__SendState__getState() == S_LPL_SENDING) {
          DefaultLplP__initializeSend();
        }
    }
}

/* # 196 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc" */
static inline void PowerCycleP__SubControl__startDone(error_t error)
/* #line 196 */
{
  PowerCycleP__RadioPowerState__forceState(PowerCycleP__S_ON);


  if (PowerCycleP__finishSplitControlRequests()) {
      return;
    }
  else {
/* #line 203 */
    if (PowerCycleP__isDutyCycling()) {
        PowerCycleP__getCca__postTask();
      }
    }
}

/* # 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
inline static void CC2420CsmaP__SplitControl__startDone(error_t error){
/* #line 113 */
  PowerCycleP__SubControl__startDone(error);
/* #line 113 */
  DefaultLplP__SubControl__startDone(error);
/* #line 113 */
}
/* #line 113 */
/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420ControlP__SpiResource__release(void ){
/* #line 120 */
  unsigned char __nesc_result;
/* #line 120 */

/* #line 120 */
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlC.Spi*/CC2420SpiC__0__CLIENT_ID);
/* #line 120 */

/* #line 120 */
  return __nesc_result;
/* #line 120 */
}
/* #line 120 */
/* # 186 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline error_t CC2420ControlP__Resource__release(void )
/* #line 186 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 187 */
    {
      CC2420ControlP__CSN__set();
      {
        unsigned char __nesc_temp = 
/* #line 189 */
        CC2420ControlP__SpiResource__release();

        {
/* #line 189 */
          __nesc_atomic_end(__nesc_atomic); 
/* #line 189 */
          return __nesc_temp;
        }
      }
    }
/* #line 192 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t CC2420CsmaP__Resource__release(void ){
/* #line 120 */
  unsigned char __nesc_result;
/* #line 120 */

/* #line 120 */
  __nesc_result = CC2420ControlP__Resource__release();
/* #line 120 */

/* #line 120 */
  return __nesc_result;
/* #line 120 */
}
/* #line 120 */
/* # 256 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline error_t CC2420ControlP__CC2420Power__rxOn(void )
/* #line 256 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 257 */
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
/* #line 259 */
            FAIL;

            {
/* #line 259 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 259 */
              return __nesc_temp;
            }
          }
        }
/* #line 261 */
      CC2420ControlP__SRXON__strobe();
    }
/* #line 262 */
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc" */
inline static error_t CC2420CsmaP__CC2420Power__rxOn(void ){
/* #line 90 */
  unsigned char __nesc_result;
/* #line 90 */

/* #line 90 */
  __nesc_result = CC2420ControlP__CC2420Power__rxOn();
/* #line 90 */

/* #line 90 */
  return __nesc_result;
/* #line 90 */
}
/* #line 90 */
/* # 86 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port10__enable(void )
/* #line 86 */
{
/* #line 86 */
  P1IE |= 1 << 0;
}

/* # 42 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void ){
/* #line 42 */
  HplMsp430InterruptP__Port10__enable();
/* #line 42 */
}
/* #line 42 */
/* # 118 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port10__edge(bool l2h)
/* #line 118 */
{
  /* atomic removed: atomic calls only */
/* #line 119 */
  {
    if (l2h) {
/* #line 120 */
      P1IES &= ~(1 << 0);
      }
    else {
/* #line 121 */
      P1IES |= 1 << 0;
      }
  }
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high){
/* #line 67 */
  HplMsp430InterruptP__Port10__edge(low_to_high);
/* #line 67 */
}
/* #line 67 */
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc" */
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising)
/* #line 52 */
{
  /* atomic removed: atomic calls only */
/* #line 53 */
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void )
/* #line 65 */
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(FALSE);
}

/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
inline static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void ){
/* #line 54 */
  unsigned char __nesc_result;
/* #line 54 */

/* #line 54 */
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge();
/* #line 54 */

/* #line 54 */
  return __nesc_result;
/* #line 54 */
}
/* #line 54 */
/* # 157 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static inline error_t CC2420ReceiveP__StdControl__start(void )
/* #line 157 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 158 */
    {
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
      CC2420ReceiveP__receivingPacket = FALSE;




      CC2420ReceiveP__InterruptFIFOP__enableFallingEdge();
    }
/* #line 167 */
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

/* # 168 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline error_t CC2420TransmitP__StdControl__start(void )
/* #line 168 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 169 */
    {
      CC2420TransmitP__CaptureSFD__captureRisingEdge();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__m_receiving = FALSE;
      CC2420TransmitP__abortSpiRelease = FALSE;
      CC2420TransmitP__m_tx_power = 0;
    }
/* #line 175 */
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc" */
inline static error_t CC2420CsmaP__SubControl__start(void ){
/* #line 95 */
  unsigned char __nesc_result;
/* #line 95 */

/* #line 95 */
  __nesc_result = CC2420TransmitP__StdControl__start();
/* #line 95 */
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__StdControl__start());
/* #line 95 */

/* #line 95 */
  return __nesc_result;
/* #line 95 */
}
/* #line 95 */
/* # 257 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static inline void CC2420CsmaP__startDone_task__runTask(void )
/* #line 257 */
{
  CC2420CsmaP__SubControl__start();
  CC2420CsmaP__CC2420Power__rxOn();
  CC2420CsmaP__Resource__release();
  CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STARTED);
  CC2420CsmaP__SplitControl__startDone(SUCCESS);
}

/* # 17 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosa/TelosSerialP.nc" */
static inline void TelosSerialP__Resource__granted(void )
/* #line 17 */
{
}

/* # 218 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(uint8_t id)
/* #line 218 */
{
}

/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__granted(uint8_t arg_0x101bc50c8){
/* #line 102 */
  switch (arg_0x101bc50c8) {
/* #line 102 */
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
/* #line 102 */
      TelosSerialP__Resource__granted();
/* #line 102 */
      break;
/* #line 102 */
    default:
/* #line 102 */
      /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__default__granted(arg_0x101bc50c8);
/* #line 102 */
      break;
/* #line 102 */
    }
/* #line 102 */
}
/* #line 102 */
/* # 101 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(uint8_t id)
/* #line 101 */
{
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__granted(id);
}

/* # 202 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
/* #line 202 */
{
}

/* # 102 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x101d81658){
/* #line 102 */
  switch (arg_0x101d81658) {
/* #line 102 */
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
/* #line 102 */
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__granted(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
/* #line 102 */
      break;
/* #line 102 */
    default:
/* #line 102 */
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x101d81658);
/* #line 102 */
      break;
/* #line 102 */
    }
/* #line 102 */
}
/* #line 102 */
/* # 216 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
/* #line 216 */
{
}

/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x101d7d9b8){
/* #line 59 */
  switch (arg_0x101d7d9b8) {
/* #line 59 */
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
/* #line 59 */
      /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
/* #line 59 */
      break;
/* #line 59 */
    default:
/* #line 59 */
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x101d7d9b8);
/* #line 59 */
      break;
/* #line 59 */
    }
/* #line 59 */
}
/* #line 59 */
/* # 190 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
/* #line 190 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 191 */
    {
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
    }
/* #line 194 */
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId);
}

/* # 19 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosa/TelosSerialP.nc" */
static inline msp430_uart_union_config_t *TelosSerialP__Msp430UartConfigure__getConfig(void )
/* #line 19 */
{
  return &TelosSerialP__msp430_uart_telos_config;
}

/* # 214 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(uint8_t id)
/* #line 214 */
{
  return &msp430_uart_default_config;
}

/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartConfigure.nc" */
inline static msp430_uart_union_config_t */*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(uint8_t arg_0x101bf94c8){
/* #line 39 */
  union __nesc_unnamed4286 *__nesc_result;
/* #line 39 */

/* #line 39 */
  switch (arg_0x101bf94c8) {
/* #line 39 */
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
/* #line 39 */
      __nesc_result = TelosSerialP__Msp430UartConfigure__getConfig();
/* #line 39 */
      break;
/* #line 39 */
    default:
/* #line 39 */
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__default__getConfig(arg_0x101bf94c8);
/* #line 39 */
      break;
/* #line 39 */
    }
/* #line 39 */

/* #line 39 */
  return __nesc_result;
/* #line 39 */
}
/* #line 39 */
/* # 359 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc" */
static inline void HplMsp430Usart1P__Usart__disableIntr(void )
/* #line 359 */
{
  HplMsp430Usart1P__IE2 &= ~((1 << 5) | (1 << 4));
}

/* #line 347 */
static inline void HplMsp430Usart1P__Usart__clrIntr(void )
/* #line 347 */
{
  HplMsp430Usart1P__IFG2 &= ~((1 << 5) | (1 << 4));
}

/* #line 159 */
static inline void HplMsp430Usart1P__Usart__resetUsart(bool reset)
/* #line 159 */
{
  if (reset) {
    U1CTL = 0x01;
    }
  else {
/* #line 163 */
    U1CTL &= ~0x01;
    }
}

/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc(void )
/* #line 65 */
{
  /* atomic removed: atomic calls only */
/* #line 65 */
  * (volatile uint8_t * )27U |= 0x01 << 6;
}

/* # 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart1P__UTXD__selectModuleFunc(void ){
/* #line 89 */
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectModuleFunc();
/* #line 89 */
}
/* #line 89 */
/* # 220 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc" */
static inline void HplMsp430Usart1P__Usart__enableUartTx(void )
/* #line 220 */
{
  HplMsp430Usart1P__UTXD__selectModuleFunc();
  HplMsp430Usart1P__ME2 |= 1 << 5;
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc(void )
/* #line 67 */
{
  /* atomic removed: atomic calls only */
/* #line 67 */
  * (volatile uint8_t * )27U &= ~(0x01 << 7);
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart1P__URXD__selectIOFunc(void ){
/* #line 96 */
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectIOFunc();
/* #line 96 */
}
/* #line 96 */
/* # 236 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc" */
static inline void HplMsp430Usart1P__Usart__disableUartRx(void )
/* #line 236 */
{
  HplMsp430Usart1P__ME2 &= ~(1 << 4);
  HplMsp430Usart1P__URXD__selectIOFunc();
}

/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc(void )
/* #line 65 */
{
  /* atomic removed: atomic calls only */
/* #line 65 */
  * (volatile uint8_t * )27U |= 0x01 << 7;
}

/* # 89 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart1P__URXD__selectModuleFunc(void ){
/* #line 89 */
  /*HplMsp430GeneralIOC.P37*/HplMsp430GeneralIOP__23__IO__selectModuleFunc();
/* #line 89 */
}
/* #line 89 */
/* # 231 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc" */
static inline void HplMsp430Usart1P__Usart__enableUartRx(void )
/* #line 231 */
{
  HplMsp430Usart1P__URXD__selectModuleFunc();
  HplMsp430Usart1P__ME2 |= 1 << 4;
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc(void )
/* #line 67 */
{
  /* atomic removed: atomic calls only */
/* #line 67 */
  * (volatile uint8_t * )27U &= ~(0x01 << 6);
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart1P__UTXD__selectIOFunc(void ){
/* #line 96 */
  /*HplMsp430GeneralIOC.P36*/HplMsp430GeneralIOP__22__IO__selectIOFunc();
/* #line 96 */
}
/* #line 96 */
/* # 225 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc" */
static inline void HplMsp430Usart1P__Usart__disableUartTx(void )
/* #line 225 */
{
  HplMsp430Usart1P__ME2 &= ~(1 << 5);
  HplMsp430Usart1P__UTXD__selectIOFunc();
}

/* #line 203 */
static inline void HplMsp430Usart1P__Usart__enableUart(void )
/* #line 203 */
{
  /* atomic removed: atomic calls only */
/* #line 204 */
  {
    HplMsp430Usart1P__UTXD__selectModuleFunc();
    HplMsp430Usart1P__URXD__selectModuleFunc();
  }
  HplMsp430Usart1P__ME2 |= (1 << 5) | (1 << 4);
}

/* #line 151 */
static inline void HplMsp430Usart1P__Usart__setUmctl(uint8_t control)
/* #line 151 */
{
  U1MCTL = control;
}

/* #line 140 */
static inline void HplMsp430Usart1P__Usart__setUbr(uint16_t control)
/* #line 140 */
{
  /* atomic removed: atomic calls only */
/* #line 141 */
  {
    U1BR0 = control & 0x00FF;
    U1BR1 = (control >> 8) & 0x00FF;
  }
}

/* #line 283 */
static inline void HplMsp430Usart1P__configUart(msp430_uart_union_config_t *config)
/* #line 283 */
{

  U1CTL = (config->uartRegisters.uctl & ~0x04) | 0x01;
  HplMsp430Usart1P__U1TCTL = config->uartRegisters.utctl;
  HplMsp430Usart1P__U1RCTL = config->uartRegisters.urctl;

  HplMsp430Usart1P__Usart__setUbr(config->uartRegisters.ubr);
  HplMsp430Usart1P__Usart__setUmctl(config->uartRegisters.umctl);
}

static inline void HplMsp430Usart1P__Usart__setModeUart(msp430_uart_union_config_t *config)
/* #line 293 */
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 295 */
    {
      HplMsp430Usart1P__Usart__resetUsart(TRUE);
      HplMsp430Usart1P__Usart__disableSpi();
      HplMsp430Usart1P__configUart(config);
      if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 1) {
          HplMsp430Usart1P__Usart__enableUart();
        }
      else {
/* #line 301 */
        if (config->uartConfig.utxe == 0 && config->uartConfig.urxe == 1) {
            HplMsp430Usart1P__Usart__disableUartTx();
            HplMsp430Usart1P__Usart__enableUartRx();
          }
        else {
/* #line 304 */
          if (config->uartConfig.utxe == 1 && config->uartConfig.urxe == 0) {
              HplMsp430Usart1P__Usart__disableUartRx();
              HplMsp430Usart1P__Usart__enableUartTx();
            }
          else 
/* #line 307 */
            {
              HplMsp430Usart1P__Usart__disableUart();
            }
          }
        }
/* #line 310 */
      HplMsp430Usart1P__Usart__resetUsart(FALSE);
      HplMsp430Usart1P__Usart__clrIntr();
      HplMsp430Usart1P__Usart__disableIntr();
    }
/* #line 313 */
    __nesc_atomic_end(__nesc_atomic); }

  return;
}

/* # 174 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__setModeUart(msp430_uart_union_config_t *config){
/* #line 174 */
  HplMsp430Usart1P__Usart__setModeUart(config);
/* #line 174 */
}
/* #line 174 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc(void )
/* #line 67 */
{
  /* atomic removed: atomic calls only */
/* #line 67 */
  * (volatile uint8_t * )51U &= ~(0x01 << 1);
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart1P__SIMO__selectIOFunc(void ){
/* #line 96 */
  /*HplMsp430GeneralIOC.P51*/HplMsp430GeneralIOP__33__IO__selectIOFunc();
/* #line 96 */
}
/* #line 96 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc(void )
/* #line 67 */
{
  /* atomic removed: atomic calls only */
/* #line 67 */
  * (volatile uint8_t * )51U &= ~(0x01 << 2);
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart1P__SOMI__selectIOFunc(void ){
/* #line 96 */
  /*HplMsp430GeneralIOC.P52*/HplMsp430GeneralIOP__34__IO__selectIOFunc();
/* #line 96 */
}
/* #line 96 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc(void )
/* #line 67 */
{
  /* atomic removed: atomic calls only */
/* #line 67 */
  * (volatile uint8_t * )51U &= ~(0x01 << 3);
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void HplMsp430Usart1P__UCLK__selectIOFunc(void ){
/* #line 96 */
  /*HplMsp430GeneralIOC.P53*/HplMsp430GeneralIOP__35__IO__selectIOFunc();
/* #line 96 */
}
/* #line 96 */
/* # 377 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc" */
static inline void HplMsp430Usart1P__Usart__enableIntr(void )
/* #line 377 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 378 */
    {
      HplMsp430Usart1P__IFG2 &= ~((1 << 5) | (1 << 4));
      HplMsp430Usart1P__IE2 |= (1 << 5) | (1 << 4);
    }
/* #line 381 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 182 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__enableIntr(void ){
/* #line 182 */
  HplMsp430Usart1P__Usart__enableIntr();
/* #line 182 */
}
/* #line 182 */
/* # 189 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
static inline void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
/* #line 189 */
{





  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current >= 1) {
      return;
    }
  if (/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current].msg == msg) {
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(/*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__current, msg, err);
    }
  else {
      ;
    }
}

/* # 110 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x10199d020, message_t * msg, error_t error){
/* #line 110 */
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMSend__sendDone(arg_0x10199d020, msg, error);
/* #line 110 */
}
/* #line 110 */
/* # 101 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
/* #line 101 */
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

/* # 376 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
/* #line 376 */
{
  return;
}

/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x101ace748, message_t * msg, error_t error){
/* #line 100 */
  switch (arg_0x101ace748) {
/* #line 100 */
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
/* #line 100 */
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
/* #line 100 */
      break;
/* #line 100 */
    default:
/* #line 100 */
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x101ace748, msg, error);
/* #line 100 */
      break;
/* #line 100 */
    }
/* #line 100 */
}
/* #line 100 */
/* # 158 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
/* #line 158 */
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 162 */
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
/* #line 162 */
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
/* #line 164 */
    error = ECANCEL;
    }
/* #line 165 */
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

/* #line 212 */
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
/* #line 212 */
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

/* # 198 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline void CC2420ActiveMessageP__Packet__setPayloadLength(message_t *msg, uint8_t len)
/* #line 198 */
{
  __nesc_hton_leuint8(CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg)->length.nxdata, len + CC2420_SIZE);
}

/* # 94 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc" */
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
/* #line 94 */
  CC2420ActiveMessageP__Packet__setPayloadLength(msg, len);
/* #line 94 */
}
/* #line 94 */
/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
/* #line 91 */
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Send.nc" */
inline static error_t /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
/* #line 75 */
  unsigned char __nesc_result;
/* #line 75 */

/* #line 75 */
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
/* #line 75 */

/* #line 75 */
  return __nesc_result;
/* #line 75 */
}
/* #line 75 */
/* # 169 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline void CC2420ActiveMessageP__AMPacket__setType(message_t *amsg, am_id_t type)
/* #line 169 */
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

/* #line 171 */
  __nesc_hton_leuint8(header->type.nxdata, type);
}

/* # 162 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
inline static void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
/* #line 162 */
  CC2420ActiveMessageP__AMPacket__setType(amsg, t);
/* #line 162 */
}
/* #line 162 */
/* # 149 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static inline void CC2420ActiveMessageP__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
/* #line 149 */
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

/* #line 151 */
  __nesc_hton_leuint16(header->dest.nxdata, addr);
}

/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
inline static void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
/* #line 103 */
  CC2420ActiveMessageP__AMPacket__setDestination(amsg, addr);
/* #line 103 */
}
/* #line 103 */
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc" */
static inline error_t /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
/* #line 55 */
{
  /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 147);
  return /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
inline static error_t /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
/* #line 80 */
  unsigned char __nesc_result;
/* #line 80 */

/* #line 80 */
  __nesc_result = /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.DirectAMSenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
/* #line 80 */

/* #line 80 */
  return __nesc_result;
/* #line 80 */
}
/* #line 80 */
/* # 16 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/SystemLowPowerListeningP.nc" */
static inline uint16_t SystemLowPowerListeningP__SystemLowPowerListening__getDefaultRemoteWakeupInterval(void )
/* #line 16 */
{
/* #line 16 */
  return SystemLowPowerListeningP__remoteWakeup;
}

/* # 6 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SystemLowPowerListening.nc" */
inline static uint16_t /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__SystemLowPowerListening__getDefaultRemoteWakeupInterval(void ){
/* #line 6 */
  unsigned int __nesc_result;
/* #line 6 */

/* #line 6 */
  __nesc_result = SystemLowPowerListeningP__SystemLowPowerListening__getDefaultRemoteWakeupInterval();
/* #line 6 */

/* #line 6 */
  return __nesc_result;
/* #line 6 */
}
/* #line 6 */
/* # 149 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline void DefaultLplP__LowPowerListening__setRemoteWakeupInterval(message_t *msg, 
uint16_t intervalMs)
/* #line 150 */
{
  __nesc_hton_uint16(DefaultLplP__CC2420PacketBody__getMetadata(msg)->rxInterval.nxdata, intervalMs);
}

/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/LowPowerListening.nc" */
inline static void /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__Lpl__setRemoteWakeupInterval(message_t * msg, uint16_t intervalMs){
/* #line 65 */
  DefaultLplP__LowPowerListening__setRemoteWakeupInterval(msg, intervalMs);
/* #line 65 */
}
/* #line 65 */
/* # 13 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LplAMSenderP.nc" */
static inline error_t /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__send(am_addr_t addr, message_t *msg, uint8_t len)
{
  /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__Lpl__setRemoteWakeupInterval(msg, /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__SystemLowPowerListening__getDefaultRemoteWakeupInterval());
  return /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__SubAMSend__send(addr, msg, len);
}

/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMSend.nc" */
inline static error_t LowPowerSensingBaseC__RadioRequestSampleMsgsSend__send(am_addr_t addr, message_t * msg, uint8_t len){
/* #line 80 */
  unsigned char __nesc_result;
/* #line 80 */

/* #line 80 */
  __nesc_result = /*LowPowerSensingBaseAppC.RadioRequestSampleMsgsSender.SenderC.LplAMSenderP*/LplAMSenderP__0__AMSend__send(addr, msg, len);
/* #line 80 */

/* #line 80 */
  return __nesc_result;
/* #line 80 */
}
/* #line 80 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/LowPowerListening.nc" */
inline static void LowPowerSensingBaseC__LPL__setRemoteWakeupInterval(message_t * msg, uint16_t intervalMs){
/* #line 65 */
  DefaultLplP__LowPowerListening__setRemoteWakeupInterval(msg, intervalMs);
/* #line 65 */
}
/* #line 65 */
/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr(void )
/* #line 57 */
{
/* #line 57 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 57 */
    * (volatile uint8_t * )49U &= ~(0x01 << 4);
/* #line 57 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 50 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr(void ){
/* #line 50 */
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__clr();
/* #line 50 */
}
/* #line 50 */
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr(void )
/* #line 49 */
{
/* #line 49 */
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__clr();
}

/* # 41 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void LedsP__Led0__clr(void ){
/* #line 41 */
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__clr();
/* #line 41 */
}
/* #line 41 */
/* # 74 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/LedsP.nc" */
static inline void LedsP__Leds__led0On(void )
/* #line 74 */
{
  LedsP__Led0__clr();
  ;
/* #line 76 */
  ;
}

/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Leds.nc" */
inline static void LowPowerSensingBaseC__Leds__led0On(void ){
/* #line 56 */
  LedsP__Leds__led0On();
/* #line 56 */
}
/* #line 56 */
/* # 85 "LowPowerSensingBaseC.nc" */
static inline message_t *LowPowerSensingBaseC__SerialRequestSampleMsgsReceive__receive(message_t *msg, void *payload, uint8_t len)
/* #line 85 */
{
  serial_request_samples_msg_t *request_msg = payload;

/* #line 87 */
  LowPowerSensingBaseC__Leds__led0On();
  LowPowerSensingBaseC__LPL__setRemoteWakeupInterval(&LowPowerSensingBaseC__request_samples_msg, LPL_INTERVAL + 100);
  LowPowerSensingBaseC__RadioRequestSampleMsgsSend__send(__nesc_ntoh_uint16(request_msg->addr.nxdata), &LowPowerSensingBaseC__request_samples_msg, sizeof(request_samples_msg_t ));
  return msg;
}

/* # 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
/* #line 109 */
{
  return msg;
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x10199c158, message_t * msg, void * payload, uint8_t len){
/* #line 78 */
  nx_struct message_t *__nesc_result;
/* #line 78 */

/* #line 78 */
  switch (arg_0x10199c158) {
/* #line 78 */
    case 146:
/* #line 78 */
      __nesc_result = LowPowerSensingBaseC__SerialRequestSampleMsgsReceive__receive(msg, payload, len);
/* #line 78 */
      break;
/* #line 78 */
    default:
/* #line 78 */
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x10199c158, msg, payload, len);
/* #line 78 */
      break;
/* #line 78 */
    }
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
/* #line 113 */
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

/* # 371 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
/* #line 373 */
{
  return msg;
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Receive.nc" */
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x101ad1c50, message_t * msg, void * payload, uint8_t len){
/* #line 78 */
  nx_struct message_t *__nesc_result;
/* #line 78 */

/* #line 78 */
  switch (arg_0x101ad1c50) {
/* #line 78 */
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
/* #line 78 */
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
/* #line 78 */
      break;
/* #line 78 */
    default:
/* #line 78 */
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x101ad1c50, msg, payload, len);
/* #line 78 */
      break;
/* #line 78 */
    }
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc" */
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
/* #line 57 */
{
  return dataLinkLen - sizeof(serial_header_t );
}

/* # 365 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
/* #line 366 */
{
  return 0;
}

/* # 31 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc" */
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x101acdaa8, message_t *msg, uint8_t dataLinkLen){
/* #line 31 */
  unsigned char __nesc_result;
/* #line 31 */

/* #line 31 */
  switch (arg_0x101acdaa8) {
/* #line 31 */
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
/* #line 31 */
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
/* #line 31 */
      break;
/* #line 31 */
    default:
/* #line 31 */
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x101acdaa8, msg, dataLinkLen);
/* #line 31 */
      break;
/* #line 31 */
    }
/* #line 31 */

/* #line 31 */
  return __nesc_result;
/* #line 31 */
}
/* #line 31 */
/* # 275 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
/* #line 275 */
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

/* #line 280 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 280 */
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
/* #line 285 */
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 289 */
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
/* #line 293 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 82 "LowPowerSensingBaseC.nc" */
static inline void LowPowerSensingBaseC__SerialAMControl__stopDone(error_t error)
/* #line 82 */
{
}

/* # 138 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
inline static void SerialP__SplitControl__stopDone(error_t error){
/* #line 138 */
  LowPowerSensingBaseC__SerialAMControl__stopDone(error);
/* #line 138 */
}
/* #line 138 */
/* # 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc" */
static inline error_t HplMsp430Usart1P__AsyncStdControl__stop(void )
/* #line 109 */
{
  HplMsp430Usart1P__Usart__disableSpi();
  HplMsp430Usart1P__Usart__disableUart();
  return SUCCESS;
}

/* # 105 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AsyncStdControl.nc" */
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
/* #line 105 */
  unsigned char __nesc_result;
/* #line 105 */

/* #line 105 */
  __nesc_result = HplMsp430Usart1P__AsyncStdControl__stop();
/* #line 105 */

/* #line 105 */
  return __nesc_result;
/* #line 105 */
}
/* #line 105 */
/* # 84 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc" */
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
/* #line 84 */
{
}

/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc" */
inline static void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
/* #line 62 */
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
/* #line 62 */
}
/* #line 62 */
/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc" */
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
/* #line 79 */
{
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc" */
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
/* #line 46 */
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
/* #line 46 */
}
/* #line 46 */
/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableUart(void ){
/* #line 128 */
  HplMsp430Usart1P__Usart__disableUart();
/* #line 128 */
}
/* #line 128 */
/* #line 179 */
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableIntr(void ){
/* #line 179 */
  HplMsp430Usart1P__Usart__disableIntr();
/* #line 179 */
}
/* #line 179 */
/* #line 97 */
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__resetUsart(bool reset){
/* #line 97 */
  HplMsp430Usart1P__Usart__resetUsart(reset);
/* #line 97 */
}
/* #line 97 */
/* # 92 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(uint8_t id)
/* #line 92 */
{
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__resetUsart(TRUE);
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableIntr();
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__disableUart();
}

/* # 218 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
/* #line 218 */
{
}

/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceConfigure.nc" */
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x101d7d9b8){
/* #line 65 */
  switch (arg_0x101d7d9b8) {
/* #line 65 */
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
/* #line 65 */
      /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__unconfigure(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
/* #line 65 */
      break;
/* #line 65 */
    default:
/* #line 65 */
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x101d7d9b8);
/* #line 65 */
      break;
/* #line 65 */
    }
/* #line 65 */
}
/* #line 65 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
static inline resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
/* #line 68 */
{
  /* atomic removed: atomic calls only */
/* #line 69 */
  {
    if (/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead != /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead;

/* #line 72 */
        /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qTail = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
/* #line 75 */
        /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
/* #line 76 */
          id;

/* #line 76 */
          return __nesc_temp;
        }
      }
/* #line 78 */
    {
      unsigned char __nesc_temp = 
/* #line 78 */
      /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

/* #line 78 */
      return __nesc_temp;
    }
  }
}

/* # 70 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
inline static resource_client_id_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
/* #line 70 */
  unsigned char __nesc_result;
/* #line 70 */

/* #line 70 */
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
/* #line 70 */

/* #line 70 */
  return __nesc_result;
/* #line 70 */
}
/* #line 70 */
/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
static inline bool /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
/* #line 60 */
{
  /* atomic removed: atomic calls only */
/* #line 61 */
  {
    unsigned char __nesc_temp = 
/* #line 61 */
    /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__qHead == /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

/* #line 61 */
    return __nesc_temp;
  }
}

/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceQueue.nc" */
inline static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
/* #line 53 */
  unsigned char __nesc_result;
/* #line 53 */

/* #line 53 */
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
/* #line 53 */

/* #line 53 */
  return __nesc_result;
/* #line 53 */
}
/* #line 53 */
/* # 111 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
/* #line 111 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 112 */
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY && /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
          if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
/* #line 127 */
            SUCCESS;

            {
/* #line 127 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 127 */
              return __nesc_temp;
            }
          }
        }
    }
/* #line 131 */
    __nesc_atomic_end(__nesc_atomic); }
/* #line 130 */
  return FAIL;
}

/* # 213 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(uint8_t id)
/* #line 213 */
{
/* #line 213 */
  return FAIL;
}

/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__release(uint8_t arg_0x101bfa258){
/* #line 120 */
  unsigned char __nesc_result;
/* #line 120 */

/* #line 120 */
  switch (arg_0x101bfa258) {
/* #line 120 */
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
/* #line 120 */
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID);
/* #line 120 */
      break;
/* #line 120 */
    default:
/* #line 120 */
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__release(arg_0x101bfa258);
/* #line 120 */
      break;
/* #line 120 */
    }
/* #line 120 */

/* #line 120 */
  return __nesc_result;
/* #line 120 */
}
/* #line 120 */
/* # 210 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(uint8_t id)
/* #line 210 */
{
/* #line 210 */
  return FAIL;
}

/* # 128 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static bool /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(uint8_t arg_0x101bfa258){
/* #line 128 */
  unsigned char __nesc_result;
/* #line 128 */

/* #line 128 */
  switch (arg_0x101bfa258) {
/* #line 128 */
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
/* #line 128 */
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID);
/* #line 128 */
      break;
/* #line 128 */
    default:
/* #line 128 */
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__isOwner(arg_0x101bfa258);
/* #line 128 */
      break;
/* #line 128 */
    }
/* #line 128 */

/* #line 128 */
  return __nesc_result;
/* #line 128 */
}
/* #line 128 */
/* # 77 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(uint8_t id)
/* #line 77 */
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(id) == FALSE) {
    return FAIL;
    }
/* #line 80 */
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf || /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf) {
    return EBUSY;
    }
/* #line 82 */
  return /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__release(id);
}

/* # 120 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t TelosSerialP__Resource__release(void ){
/* #line 120 */
  unsigned char __nesc_result;
/* #line 120 */

/* #line 120 */
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__release(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
/* #line 120 */

/* #line 120 */
  return __nesc_result;
/* #line 120 */
}
/* #line 120 */
/* # 13 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosa/TelosSerialP.nc" */
static inline error_t TelosSerialP__StdControl__stop(void )
/* #line 13 */
{
  TelosSerialP__Resource__release();
  return SUCCESS;
}

/* # 105 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc" */
inline static error_t SerialP__SerialControl__stop(void ){
/* #line 105 */
  unsigned char __nesc_result;
/* #line 105 */

/* #line 105 */
  __nesc_result = TelosSerialP__StdControl__stop();
/* #line 105 */

/* #line 105 */
  return __nesc_result;
/* #line 105 */
}
/* #line 105 */
/* # 332 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static inline void SerialP__SerialFlush__flushDone(void )
/* #line 332 */
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
/* #line 337 */
{
  SerialP__SerialFlush__flushDone();
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 340 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static inline void SerialP__SerialFlush__default__flush(void )
/* #line 340 */
{
  SerialP__defaultSerialFlushTask__postTask();
}

/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialFlush.nc" */
inline static void SerialP__SerialFlush__flush(void ){
/* #line 49 */
  SerialP__SerialFlush__default__flush();
/* #line 49 */
}
/* #line 49 */
/* # 328 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static inline void SerialP__stopDoneTask__runTask(void )
/* #line 328 */
{
  SerialP__SerialFlush__flush();
}

/* # 76 "LowPowerSensingBaseC.nc" */
static inline void LowPowerSensingBaseC__SerialAMControl__startDone(error_t error)
/* #line 76 */
{
}

/* # 113 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
inline static void SerialP__SplitControl__startDone(error_t error){
/* #line 113 */
  LowPowerSensingBaseC__SerialAMControl__startDone(error);
/* #line 113 */
}
/* #line 113 */
/* # 133 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
/* #line 133 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 134 */
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
/* #line 138 */
                SUCCESS;

                {
/* #line 138 */
                  __nesc_atomic_end(__nesc_atomic); 
/* #line 138 */
                  return __nesc_temp;
                }
              }
            }
          else {
/* #line 140 */
            if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
                /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
/* #line 143 */
                  SUCCESS;

                  {
/* #line 143 */
                    __nesc_atomic_end(__nesc_atomic); 
/* #line 143 */
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
/* #line 149 */
    __nesc_atomic_end(__nesc_atomic); }
/* #line 147 */
  return FAIL;
}

/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc" */
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
/* #line 56 */
  unsigned char __nesc_result;
/* #line 56 */

/* #line 56 */
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
/* #line 56 */

/* #line 56 */
  return __nesc_result;
/* #line 56 */
}
/* #line 56 */
/* # 105 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc" */
static inline error_t HplMsp430Usart1P__AsyncStdControl__start(void )
/* #line 105 */
{
  return SUCCESS;
}

/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AsyncStdControl.nc" */
inline static error_t /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
/* #line 95 */
  unsigned char __nesc_result;
/* #line 95 */

/* #line 95 */
  __nesc_result = HplMsp430Usart1P__AsyncStdControl__start();
/* #line 95 */

/* #line 95 */
  return __nesc_result;
/* #line 95 */
}
/* #line 95 */
/* # 74 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc" */
static inline void /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested(void )
/* #line 74 */
{
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceDefaultOwner.nc" */
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void ){
/* #line 81 */
  /*Msp430UsartShare1P.PowerManagerC.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__immediateRequested();
/* #line 81 */
}
/* #line 81 */
/* # 206 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
/* #line 206 */
{
}

/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ResourceRequested.nc" */
inline static void /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x101d807e8){
/* #line 61 */
    /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x101d807e8);
/* #line 61 */
}
/* #line 61 */
/* # 93 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static inline error_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id)
/* #line 93 */
{
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 95 */
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING;
          /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
/* #line 100 */
          FAIL;

          {
/* #line 100 */
            __nesc_atomic_end(__nesc_atomic); 
/* #line 100 */
            return __nesc_temp;
          }
        }
    }
/* #line 103 */
    __nesc_atomic_end(__nesc_atomic); }
/* #line 102 */
  /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId);
      return SUCCESS;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 107 */
    /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
/* #line 107 */
    __nesc_atomic_end(__nesc_atomic); }
  return FAIL;
}

/* # 212 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(uint8_t id)
/* #line 212 */
{
/* #line 212 */
  return FAIL;
}

/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(uint8_t arg_0x101bfa258){
/* #line 97 */
  unsigned char __nesc_result;
/* #line 97 */

/* #line 97 */
  switch (arg_0x101bfa258) {
/* #line 97 */
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
/* #line 97 */
      __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID);
/* #line 97 */
      break;
/* #line 97 */
    default:
/* #line 97 */
      __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__default__immediateRequest(arg_0x101bfa258);
/* #line 97 */
      break;
/* #line 97 */
    }
/* #line 97 */

/* #line 97 */
  return __nesc_result;
/* #line 97 */
}
/* #line 97 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(uint8_t id)
/* #line 65 */
{
  return /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__immediateRequest(id);
}

/* # 97 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Resource.nc" */
inline static error_t TelosSerialP__Resource__immediateRequest(void ){
/* #line 97 */
  unsigned char __nesc_result;
/* #line 97 */

/* #line 97 */
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__Resource__immediateRequest(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
/* #line 97 */

/* #line 97 */
  return __nesc_result;
/* #line 97 */
}
/* #line 97 */
/* # 10 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosa/TelosSerialP.nc" */
static inline error_t TelosSerialP__StdControl__start(void )
/* #line 10 */
{
  return TelosSerialP__Resource__immediateRequest();
}

/* # 95 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/StdControl.nc" */
inline static error_t SerialP__SerialControl__start(void ){
/* #line 95 */
  unsigned char __nesc_result;
/* #line 95 */

/* #line 95 */
  __nesc_result = TelosSerialP__StdControl__start();
/* #line 95 */

/* #line 95 */
  return __nesc_result;
/* #line 95 */
}
/* #line 95 */
/* # 322 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static inline void SerialP__startDoneTask__runTask(void )
/* #line 322 */
{
  SerialP__SerialControl__start();
  SerialP__SplitControl__startDone(SUCCESS);
}

/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc" */
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
/* #line 56 */
  unsigned char __nesc_result;
/* #line 56 */

/* #line 56 */
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
/* #line 56 */

/* #line 56 */
  return __nesc_result;
/* #line 56 */
}
/* #line 56 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 194 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
/* #line 194 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 195 */
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
/* #line 195 */
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

/* # 91 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SendBytePacket.nc" */
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
/* #line 91 */
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
/* #line 91 */
}
/* #line 91 */
/* # 244 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static __inline bool SerialP__ack_queue_is_empty(void )
/* #line 244 */
{
  bool ret;

/* #line 246 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 246 */
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
/* #line 246 */
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
/* #line 260 */
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
/* #line 262 */
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
/* #line 270 */
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
/* #line 272 */
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
/* #line 275 */
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
/* #line 278 */
  return retval;
}

/* #line 547 */
static inline void SerialP__RunTx__runTask(void )
/* #line 547 */
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 564 */
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
/* #line 573 */
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 577 */
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
/* #line 586 */
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

/* #line 593 */
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 593 */
        goInactive = SerialP__offPending;
/* #line 593 */
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 595 */
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
/* #line 595 */
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

/* #line 601 */
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 601 */
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
/* #line 604 */
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 606 */
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
/* #line 613 */
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
/* #line 615 */
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 616 */
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
/* #line 620 */
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 634 */
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
/* #line 637 */
            __nesc_atomic_end(__nesc_atomic); 
/* #line 637 */
            return;
          }
        }
    }
/* #line 640 */
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 643 */
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
/* #line 647 */
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 649 */
            SerialP__txState = SerialP__TXSTATE_ERROR;
/* #line 649 */
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t SerialP__stopDoneTask__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 48 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
/* #line 48 */
  unsigned char __nesc_result;
/* #line 48 */

/* #line 48 */
  __nesc_result = /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID, buf, len);
/* #line 48 */

/* #line 48 */
  return __nesc_result;
/* #line 48 */
}
/* #line 48 */
/* # 216 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static __inline void SerialP__ackInit(void )
/* #line 216 */
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

/* #line 207 */
static __inline void SerialP__rxInit(void )
/* #line 207 */
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_NOSYNC;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

/* #line 195 */
static __inline void SerialP__txInit(void )
/* #line 195 */
{
  uint8_t i;

  /* atomic removed: atomic calls only */
/* #line 197 */
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_IDLE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

/* #line 220 */
static inline error_t SerialP__Init__init(void )
/* #line 220 */
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
static inline error_t /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init(void )
/* #line 55 */
{
  memset(/*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ, /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

/* # 93 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ActiveMessageAddressC.nc" */
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
/* #line 93 */
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
/* #line 95 */
  myGroup = ActiveMessageAddressC__group;
  return myGroup;
}

/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc" */
inline static am_group_t CC2420ControlP__ActiveMessageAddress__amGroup(void ){
/* #line 55 */
  unsigned char __nesc_result;
/* #line 55 */

/* #line 55 */
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
/* #line 55 */

/* #line 55 */
  return __nesc_result;
/* #line 55 */
}
/* #line 55 */
/* #line 50 */
inline static am_addr_t CC2420ControlP__ActiveMessageAddress__amAddress(void ){
/* #line 50 */
  unsigned int __nesc_result;
/* #line 50 */

/* #line 50 */
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
/* #line 50 */

/* #line 50 */
  return __nesc_result;
/* #line 50 */
}
/* #line 50 */
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void )
/* #line 63 */
{
  /* atomic removed: atomic calls only */
/* #line 63 */
  * (volatile uint8_t * )30U |= 0x01 << 5;
}

/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void ){
/* #line 82 */
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput();
/* #line 82 */
}
/* #line 82 */
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void )
/* #line 54 */
{
/* #line 54 */
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput();
}

/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420ControlP__VREN__makeOutput(void ){
/* #line 46 */
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput();
/* #line 46 */
}
/* #line 46 */
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void )
/* #line 63 */
{
  /* atomic removed: atomic calls only */
/* #line 63 */
  * (volatile uint8_t * )30U |= 0x01 << 6;
}

/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput(void ){
/* #line 82 */
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput();
/* #line 82 */
}
/* #line 82 */
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void )
/* #line 54 */
{
/* #line 54 */
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput();
}

/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420ControlP__RSTN__makeOutput(void ){
/* #line 46 */
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput();
/* #line 46 */
}
/* #line 46 */
/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void )
/* #line 63 */
{
  /* atomic removed: atomic calls only */
/* #line 63 */
  * (volatile uint8_t * )30U |= 0x01 << 2;
}

/* # 82 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void ){
/* #line 82 */
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput();
/* #line 82 */
}
/* #line 82 */
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void )
/* #line 54 */
{
/* #line 54 */
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput();
}

/* # 46 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420ControlP__CSN__makeOutput(void ){
/* #line 46 */
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput();
/* #line 46 */
}
/* #line 46 */
/* # 127 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline error_t CC2420ControlP__Init__init(void )
/* #line 127 */
{
  CC2420ControlP__CSN__makeOutput();
  CC2420ControlP__RSTN__makeOutput();
  CC2420ControlP__VREN__makeOutput();

  CC2420ControlP__m_short_addr = CC2420ControlP__ActiveMessageAddress__amAddress();
  CC2420ControlP__m_ext_addr = CC2420ControlP__LocalIeeeEui64__getId();
  CC2420ControlP__m_pan = CC2420ControlP__ActiveMessageAddress__amGroup();
  CC2420ControlP__m_tx_power = 31;
  CC2420ControlP__m_channel = 26;





  CC2420ControlP__addressRecognition = TRUE;





  CC2420ControlP__hwAddressRecognition = FALSE;






  CC2420ControlP__autoAckEnabled = TRUE;






  CC2420ControlP__hwAutoAckDefault = FALSE;



  return SUCCESS;
}

/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
static inline error_t StateImplP__Init__init(void )
/* #line 81 */
{
  int i;

/* #line 83 */
  for (i = 0; i < 6U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init(void )
/* #line 55 */
{
  memset(/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__NO_ENTRY, sizeof /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__resQ);
  return SUCCESS;
}

/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)
/* #line 57 */
{
/* #line 57 */
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4413 {
/* #line 57 */
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t f;
/* #line 57 */
    uint16_t t;
  } 
/* #line 57 */
  c = { .f = x };

/* #line 57 */
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(x);
}

/* #line 105 */
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )386U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl();
}

/* # 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
inline static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void ){
/* #line 47 */
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare();
/* #line 47 */
}
/* #line 47 */
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc" */
static inline error_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void )
/* #line 61 */
{
  /* atomic removed: atomic calls only */
/* #line 61 */
  * (volatile uint8_t * )30U &= ~(0x01 << 1);
}

/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput(void ){
/* #line 75 */
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput();
/* #line 75 */
}
/* #line 75 */
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void )
/* #line 52 */
{
/* #line 52 */
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput();
}

/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420TransmitP__SFD__makeInput(void ){
/* #line 44 */
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput();
/* #line 44 */
}
/* #line 44 */


inline static void CC2420TransmitP__CSN__makeOutput(void ){
/* #line 46 */
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput();
/* #line 46 */
}
/* #line 46 */
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void )
/* #line 61 */
{
  /* atomic removed: atomic calls only */
/* #line 61 */
  * (volatile uint8_t * )34U &= ~(0x01 << 4);
}

/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIO.nc" */
inline static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput(void ){
/* #line 75 */
  /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput();
/* #line 75 */
}
/* #line 75 */
/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430GpioC.nc" */
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void )
/* #line 52 */
{
/* #line 52 */
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput();
}

/* # 44 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GeneralIO.nc" */
inline static void CC2420TransmitP__CCA__makeInput(void ){
/* #line 44 */
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput();
/* #line 44 */
}
/* #line 44 */
/* # 160 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static inline error_t CC2420TransmitP__Init__init(void )
/* #line 160 */
{
  CC2420TransmitP__CCA__makeInput();
  CC2420TransmitP__CSN__makeOutput();
  CC2420TransmitP__SFD__makeInput();
  return SUCCESS;
}

/* # 151 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static inline error_t CC2420ReceiveP__Init__init(void )
/* #line 151 */
{
  CC2420ReceiveP__m_p_rx_buf = &CC2420ReceiveP__m_rx_buf;
  return SUCCESS;
}

/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static inline  uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)
/* #line 57 */
{
/* #line 57 */
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4414 {
/* #line 57 */
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t f;
/* #line 57 */
    uint16_t t;
  } 
/* #line 57 */
  c = { .f = x };

/* #line 57 */
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(x);
}

/* #line 105 */
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )390U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl();
}

/* # 47 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerControl.nc" */
inline static void /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void ){
/* #line 47 */
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare();
/* #line 47 */
}
/* #line 47 */
/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430AlarmC.nc" */
static inline error_t /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init(void )
{
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/RandomMlcgC.nc" */
static inline error_t RandomMlcgC__Init__init(void )
/* #line 55 */
{
  /* atomic removed: atomic calls only */
/* #line 56 */
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

/* # 52 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Random.nc" */
inline static uint16_t UniqueSendP__Random__rand16(void ){
/* #line 52 */
  unsigned int __nesc_result;
/* #line 52 */

/* #line 52 */
  __nesc_result = RandomMlcgC__Random__rand16();
/* #line 52 */

/* #line 52 */
  return __nesc_result;
/* #line 52 */
}
/* #line 52 */
/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc" */
static inline error_t UniqueSendP__Init__init(void )
/* #line 62 */
{
  UniqueSendP__localSendId = UniqueSendP__Random__rand16();
  return SUCCESS;
}

/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc" */
static inline error_t UniqueReceiveP__Init__init(void )
/* #line 71 */
{
  int i;

/* #line 73 */
  for (i = 0; i < 4; i++) {
      UniqueReceiveP__receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP__receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
static inline error_t /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init(void )
/* #line 55 */
{
  memset(/*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

/* # 118 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static inline error_t DefaultLplP__Init__init(void )
/* #line 118 */
{
  DefaultLplP__dutyCycling = FALSE;
  return SUCCESS;
}

/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Init.nc" */
inline static error_t RealMainP__SoftwareInit__init(void ){
/* #line 62 */
  unsigned char __nesc_result;
/* #line 62 */

/* #line 62 */
  __nesc_result = DefaultLplP__Init__init();
/* #line 62 */
  __nesc_result = ecombine(__nesc_result, /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__Init__init());
/* #line 62 */
  __nesc_result = ecombine(__nesc_result, UniqueReceiveP__Init__init());
/* #line 62 */
  __nesc_result = ecombine(__nesc_result, UniqueSendP__Init__init());
/* #line 62 */
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
/* #line 62 */
  __nesc_result = ecombine(__nesc_result, /*HilTimerMilliC.AlarmMilli32C.AlarmFrom.Msp430Alarm*/Msp430AlarmC__1__Init__init());
/* #line 62 */
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__Init__init());
/* #line 62 */
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP__Init__init());
/* #line 62 */
  __nesc_result = ecombine(__nesc_result, /*AlarmMultiplexC.Alarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init());
/* #line 62 */
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__2__Init__init());
/* #line 62 */
  __nesc_result = ecombine(__nesc_result, StateImplP__Init__init());
/* #line 62 */
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
/* #line 62 */
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__1__Init__init());
/* #line 62 */
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
/* #line 62 */

/* #line 62 */
  return __nesc_result;
/* #line 62 */
}
/* #line 62 */
/* # 51 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
inline static void PowerCycleP__SplitControlState__forceState(uint8_t reqState){
/* #line 51 */
  StateImplP__State__forceState(4U, reqState);
/* #line 51 */
}
/* #line 51 */
/* # 135 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc" */
static inline error_t PowerCycleP__SplitControl__start(void )
/* #line 135 */
{
  if (PowerCycleP__SplitControlState__isState(PowerCycleP__S_ON)) {
      return EALREADY;
    }
  else {
/* #line 139 */
    if (PowerCycleP__SplitControlState__isState(PowerCycleP__S_TURNING_ON)) {
        return SUCCESS;
      }
    else {
/* #line 142 */
      if (!PowerCycleP__SplitControlState__isState(PowerCycleP__S_OFF)) {
          return EBUSY;
        }
      }
    }
  PowerCycleP__SplitControlState__forceState(PowerCycleP__S_TURNING_ON);

  if (PowerCycleP__sleepInterval > 0) {

      PowerCycleP__stopRadio__postTask();
      return SUCCESS;
    }
  else {
      PowerCycleP__startRadio__postTask();
      return SUCCESS;
    }
}

/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/SplitControl.nc" */
inline static error_t LowPowerSensingBaseC__RadioAMControl__start(void ){
/* #line 104 */
  unsigned char __nesc_result;
/* #line 104 */

/* #line 104 */
  __nesc_result = PowerCycleP__SplitControl__start();
/* #line 104 */

/* #line 104 */
  return __nesc_result;
/* #line 104 */
}
/* #line 104 */
/* # 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Packet.nc" */
inline static void * LowPowerSensingBaseC__SerialPacket__getPayload(message_t * msg, uint8_t len){
/* #line 126 */
  void *__nesc_result;
/* #line 126 */

/* #line 126 */
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(msg, len);
/* #line 126 */

/* #line 126 */
  return __nesc_result;
/* #line 126 */
}
/* #line 126 */
/* # 66 "LowPowerSensingBaseC.nc" */
static inline void LowPowerSensingBaseC__Boot__booted(void )
/* #line 66 */
{
  LowPowerSensingBaseC__serialSending = FALSE;
  LowPowerSensingBaseC__sample_msg_payload = (serial_sample_msg_t *)LowPowerSensingBaseC__SerialPacket__getPayload(&LowPowerSensingBaseC__sample_msg, sizeof(serial_sample_msg_t ));
  LowPowerSensingBaseC__RadioAMControl__start();
}

/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Boot.nc" */
inline static void RealMainP__Boot__booted(void ){
/* #line 60 */
  LowPowerSensingBaseC__Boot__booted();
/* #line 60 */
}
/* #line 60 */
/* # 217 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/msp430hardware.h" */
static inline  void __nesc_disable_interrupt(void )
{
_R2 &= 0xfff7;
;}

/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc" */
static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void )
/* #line 63 */
{
  return MSP430_POWER_LPM3;
}

/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/McuPowerOverride.nc" */
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
/* #line 62 */
  unsigned char __nesc_result;
/* #line 62 */

/* #line 62 */
  __nesc_result = Msp430ClockP__McuPowerOverride__lowestState();
/* #line 62 */

/* #line 62 */
  return __nesc_result;
/* #line 62 */
}
/* #line 62 */
/* # 74 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/McuSleepC.nc" */
static inline mcu_power_t McuSleepC__getPowerState(void )
/* #line 74 */
{
  mcu_power_t pState = MSP430_POWER_LPM4;









  if ((((((
/* #line 77 */
  TA0CCTL0 & 0x0010 || 
  TA0CCTL1 & 0x0010) || 
  TA0CCTL2 & 0x0010) && (
  TA0CTL & (3 << 8)) == (2 << 8)) || (
  ME1 & ((1 << 7) | (1 << 6)) && U0TCTL & 0x20)) || (
  ME2 & ((1 << 5) | (1 << 4)) && U1TCTL & 0x20))


   || (U0CTLnr & 0x01 && I2CTCTLnr & 0x20 && 
  I2CDCTLnr & 0x20 && U0CTLnr & 0x04 && U0CTLnr & 0x20)) {


    pState = MSP430_POWER_LPM1;
    }


  if (ADC12CTL0 & 0x0010) {
      if (ADC12CTL1 & (2 << 3)) {

          if (ADC12CTL1 & (1 << 3)) {
            pState = MSP430_POWER_LPM1;
            }
          else {
/* #line 99 */
            pState = MSP430_POWER_ACTIVE;
            }
        }
      else {
/* #line 100 */
        if (ADC12CTL1 & 0x0400 && (TA0CTL & (3 << 8)) == (2 << 8)) {



            pState = MSP430_POWER_LPM1;
          }
        }
    }

  return pState;
}

/* # 205 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/msp430hardware.h" */
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
/* #line 205 */
{
  return m1 < m2 ? m1 : m2;
}

/* # 112 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/McuSleepC.nc" */
static inline void McuSleepC__computePowerState(void )
/* #line 112 */
{
  McuSleepC__powerState = mcombine(McuSleepC__getPowerState(), 
  McuSleepC__McuPowerOverride__lowestState());
}

static inline void McuSleepC__McuSleep__sleep(void )
/* #line 117 */
{
  uint16_t temp;

/* #line 119 */
  if (McuSleepC__dirty) {
      McuSleepC__computePowerState();
    }

  temp = McuSleepC__msp430PowerBits[McuSleepC__powerState] | 0x0008;
_R2 |= temp;

;
  __nesc_disable_interrupt();
}

/* # 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/McuSleep.nc" */
inline static void SchedulerBasicP__McuSleep__sleep(void ){
/* #line 76 */
  McuSleepC__McuSleep__sleep();
/* #line 76 */
}
/* #line 76 */
/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/SchedulerBasicP.nc" */
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

/* #line 83 */
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

/* #line 149 */
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
/* #line 161 */
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/Scheduler.nc" */
inline static void RealMainP__Scheduler__taskLoop(void ){
/* #line 72 */
  SchedulerBasicP__Scheduler__taskLoop();
/* #line 72 */
}
/* #line 72 */
/* # 98 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ArbiterInfo.nc" */
inline static uint8_t /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void ){
/* #line 98 */
  unsigned char __nesc_result;
/* #line 98 */

/* #line 98 */
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId();
/* #line 98 */

/* #line 98 */
  return __nesc_result;
/* #line 98 */
}
/* #line 98 */
/* # 389 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
/* #line 389 */
{
  SerialP__rx_state_machine(FALSE, data);
}

/* # 94 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc" */
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
/* #line 94 */
  SerialP__SerialFrameComm__dataReceived(data);
/* #line 94 */
}
/* #line 94 */
/* # 386 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
/* #line 386 */
{
  SerialP__rx_state_machine(TRUE, 0);
}

/* # 85 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc" */
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
/* #line 85 */
  SerialP__SerialFrameComm__delimiterReceived();
/* #line 85 */
}
/* #line 85 */
/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc" */
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
/* #line 73 */
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
/* #line 85 */
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
/* #line 90 */
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
/* #line 95 */
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

/* # 221 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte)
/* #line 221 */
{
}

/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receivedByte(uint8_t arg_0x101bfd020, uint8_t byte){
/* #line 79 */
  switch (arg_0x101bfd020) {
/* #line 79 */
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
/* #line 79 */
      HdlcTranslateC__UartStream__receivedByte(byte);
/* #line 79 */
      break;
/* #line 79 */
    default:
/* #line 79 */
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receivedByte(arg_0x101bfd020, byte);
/* #line 79 */
      break;
/* #line 79 */
    }
/* #line 79 */
}
/* #line 79 */
/* # 132 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc" */
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
/* #line 132 */
{
}

/* # 222 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
/* #line 222 */
{
}

/* # 99 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receiveDone(uint8_t arg_0x101bfd020, uint8_t * buf, uint16_t len, error_t error){
/* #line 99 */
  switch (arg_0x101bfd020) {
/* #line 99 */
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
/* #line 99 */
      HdlcTranslateC__UartStream__receiveDone(buf, len, error);
/* #line 99 */
      break;
/* #line 99 */
    default:
/* #line 99 */
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__receiveDone(arg_0x101bfd020, buf, len, error);
/* #line 99 */
      break;
/* #line 99 */
    }
/* #line 99 */
}
/* #line 99 */
/* # 134 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(uint8_t id, uint8_t data)
/* #line 134 */
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf) {
      /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf[/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_pos++] = data;
      if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_pos >= /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_len) {
          uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf;

/* #line 139 */
          /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_buf = (void *)0;
          /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receiveDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP__0__m_rx_len, SUCCESS);
        }
    }
  else 
/* #line 142 */
    {
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__receivedByte(id, data);
    }
}

/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data)
/* #line 65 */
{
}

/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
inline static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(uint8_t arg_0x101d3f220, uint8_t data){
/* #line 54 */
  switch (arg_0x101d3f220) {
/* #line 54 */
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
/* #line 54 */
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__rxDone(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID, data);
/* #line 54 */
      break;
/* #line 54 */
    default:
/* #line 54 */
      /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(arg_0x101d3f220, data);
/* #line 54 */
      break;
/* #line 54 */
    }
/* #line 54 */
}
/* #line 54 */
/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ArbiterInfo.nc" */
inline static bool /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void ){
/* #line 90 */
  unsigned char __nesc_result;
/* #line 90 */

/* #line 90 */
  __nesc_result = /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse();
/* #line 90 */

/* #line 90 */
  return __nesc_result;
/* #line 90 */
}
/* #line 90 */
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data)
/* #line 54 */
{
  if (/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(), data);
    }
}

/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
inline static void HplMsp430Usart1P__Interrupts__rxDone(uint8_t data){
/* #line 54 */
  /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(data);
/* #line 54 */
}
/* #line 54 */
/* # 393 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static inline bool SerialP__valid_rx_proto(uint8_t proto)
/* #line 393 */
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

/* # 203 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
/* #line 203 */
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

/* #line 199 */
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
/* #line 199 */
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

/* #line 226 */
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
/* #line 226 */
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
/* #line 228 */
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc" */
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
/* #line 62 */
  unsigned char __nesc_result;
/* #line 62 */

/* #line 62 */
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
/* #line 62 */

/* #line 62 */
  return __nesc_result;
/* #line 62 */
}
/* #line 62 */
/* # 311 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static __inline uint16_t SerialP__rx_current_crc(void )
/* #line 311 */
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

/* #line 314 */
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc" */
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
/* #line 80 */
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
/* #line 80 */
}
/* #line 80 */
/* # 221 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
/* #line 221 */
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 234 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static __inline bool SerialP__ack_queue_is_full(void )
/* #line 234 */
{
  uint8_t tmp;
/* #line 235 */
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
/* #line 236 */
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
/* #line 240 */
    tmp = 0;
    }
/* #line 241 */
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
/* #line 250 */
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
/* #line 252 */
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
/* #line 254 */
          SerialP__ackQ.writePtr = 0;
          }
      }
/* #line 256 */
      SerialP__MaybeScheduleTx();
    }
}

/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc" */
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
/* #line 67 */
{
  HdlcTranslateC__state.receiveEscape = 0;
}

/* # 79 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc" */
inline static void SerialP__SerialFrameComm__resetReceive(void ){
/* #line 79 */
  HdlcTranslateC__SerialFrameComm__resetReceive();
/* #line 79 */
}
/* #line 79 */
/* # 244 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
/* #line 244 */
{
  /* atomic removed: atomic calls only */
/* #line 245 */
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
/* #line 266 */
            ;
      }
  }
}

/* # 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc" */
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
/* #line 69 */
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
/* #line 69 */
}
/* #line 69 */
/* # 301 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static __inline uint8_t SerialP__rx_buffer_top(void )
/* #line 301 */
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

/* #line 303 */
  return tmp;
}

/* #line 305 */
static __inline uint8_t SerialP__rx_buffer_pop(void )
/* #line 305 */
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

/* #line 307 */
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
/* #line 307 */
    SerialP__rxBuf.readPtr = 0;
    }
/* #line 308 */
  return tmp;
}

/* #line 297 */
static __inline void SerialP__rx_buffer_push(uint8_t data)
/* #line 297 */
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
/* #line 299 */
    SerialP__rxBuf.writePtr = 0;
    }
}

/* # 220 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
/* #line 220 */
{
}

/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/UartStream.nc" */
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(uint8_t arg_0x101bfd020, uint8_t * buf, uint16_t len, error_t error){
/* #line 57 */
  switch (arg_0x101bfd020) {
/* #line 57 */
    case /*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID:
/* #line 57 */
      HdlcTranslateC__UartStream__sendDone(buf, len, error);
/* #line 57 */
      break;
/* #line 57 */
    default:
/* #line 57 */
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__default__sendDone(arg_0x101bfd020, buf, len, error);
/* #line 57 */
      break;
/* #line 57 */
    }
/* #line 57 */
}
/* #line 57 */
/* # 384 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc" */
static inline void HplMsp430Usart1P__Usart__tx(uint8_t data)
/* #line 384 */
{
  HplMsp430Usart1P__U1TXBUF = data;
}

/* # 224 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
inline static void /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(uint8_t data){
/* #line 224 */
  HplMsp430Usart1P__Usart__tx(data);
/* #line 224 */
}
/* #line 224 */
/* # 162 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static inline void /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(uint8_t id)
/* #line 162 */
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__current_owner != id) {
      uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf;

/* #line 165 */
      /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf = (void *)0;
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len, FAIL);
    }
  else {
/* #line 168 */
    if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos < /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len) {
        /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf[/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos++]);
      }
    else {
        uint8_t *buf = /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf;

/* #line 173 */
        /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf = (void *)0;
        /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__sendDone(id, buf, /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len, SUCCESS);
      }
    }
}

/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id)
/* #line 64 */
{
}

/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
inline static void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(uint8_t arg_0x101d3f220){
/* #line 49 */
  switch (arg_0x101d3f220) {
/* #line 49 */
    case /*PlatformSerialC.UartC.UsartC*/Msp430Usart1C__0__CLIENT_ID:
/* #line 49 */
      /*Msp430Uart1P.UartP*/Msp430UartP__0__UsartInterrupts__txDone(/*PlatformSerialC.UartC*/Msp430Uart1C__0__CLIENT_ID);
/* #line 49 */
      break;
/* #line 49 */
    default:
/* #line 49 */
      /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(arg_0x101d3f220);
/* #line 49 */
      break;
/* #line 49 */
    }
/* #line 49 */
}
/* #line 49 */
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
static inline void /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void )
/* #line 49 */
{
  if (/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(/*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
inline static void HplMsp430Usart1P__Interrupts__txDone(void ){
/* #line 49 */
  /*Msp430UsartShare1P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone();
/* #line 49 */
}
/* #line 49 */
/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc" */
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
/* #line 65 */
  unsigned char __nesc_result;
/* #line 65 */

/* #line 65 */
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
/* #line 65 */

/* #line 65 */
  return __nesc_result;
/* #line 65 */
}
/* #line 65 */
/* # 521 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static inline error_t SerialP__SendBytePacket__completeSend(void )
/* #line 521 */
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
/* #line 523 */
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

/* # 71 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SendBytePacket.nc" */
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
/* #line 71 */
  unsigned char __nesc_result;
/* #line 71 */

/* #line 71 */
  __nesc_result = SerialP__SendBytePacket__completeSend();
/* #line 71 */

/* #line 71 */
  return __nesc_result;
/* #line 71 */
}
/* #line 71 */
/* # 178 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
/* #line 178 */
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
/* #line 181 */
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SendBytePacket.nc" */
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
/* #line 81 */
  unsigned char __nesc_result;
/* #line 81 */

/* #line 81 */
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
/* #line 81 */

/* #line 81 */
  return __nesc_result;
/* #line 81 */
}
/* #line 81 */
/* # 656 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static inline void SerialP__SerialFrameComm__putDone(void )
/* #line 656 */
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
/* #line 659 */
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

/* #line 687 */
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

/* # 100 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc" */
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
/* #line 100 */
  SerialP__SerialFrameComm__putDone();
/* #line 100 */
}
/* #line 100 */
/* # 212 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void )
/* #line 212 */
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STARTED) {

      CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
      CC2420ReceiveP__beginReceive();
    }
  else 



    {
      CC2420ReceiveP__m_missed_packets++;
    }
}

/* # 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void ){
/* #line 68 */
  CC2420ReceiveP__InterruptFIFOP__fired();
/* #line 68 */
}
/* #line 68 */
/* # 77 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc" */
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void )
/* #line 77 */
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port10__fired(void ){
/* #line 72 */
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired();
/* #line 72 */
}
/* #line 72 */
/* # 103 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port11__clear(void )
/* #line 103 */
{
/* #line 103 */
  P1IFG &= ~(1 << 1);
}

/* #line 79 */
static inline void HplMsp430InterruptP__Port11__default__fired(void )
/* #line 79 */
{
/* #line 79 */
  HplMsp430InterruptP__Port11__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port11__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port11__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 104 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port12__clear(void )
/* #line 104 */
{
/* #line 104 */
  P1IFG &= ~(1 << 2);
}

/* #line 80 */
static inline void HplMsp430InterruptP__Port12__default__fired(void )
/* #line 80 */
{
/* #line 80 */
  HplMsp430InterruptP__Port12__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port12__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port12__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 105 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port13__clear(void )
/* #line 105 */
{
/* #line 105 */
  P1IFG &= ~(1 << 3);
}

/* #line 81 */
static inline void HplMsp430InterruptP__Port13__default__fired(void )
/* #line 81 */
{
/* #line 81 */
  HplMsp430InterruptP__Port13__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port13__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port13__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 67 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
inline static error_t CC2420CsmaP__startDone_task__postTask(void ){
/* #line 67 */
  unsigned char __nesc_result;
/* #line 67 */

/* #line 67 */
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420CsmaP__startDone_task);
/* #line 67 */

/* #line 67 */
  return __nesc_result;
/* #line 67 */
}
/* #line 67 */
/* # 218 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static inline void CC2420CsmaP__CC2420Power__startOscillatorDone(void )
/* #line 218 */
{
  CC2420CsmaP__startDone_task__postTask();
}

/* # 76 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc" */
inline static void CC2420ControlP__CC2420Power__startOscillatorDone(void ){
/* #line 76 */
  CC2420CsmaP__CC2420Power__startOscillatorDone();
/* #line 76 */
}
/* #line 76 */
/* # 61 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
inline static error_t CC2420ControlP__InterruptCCA__disable(void ){
/* #line 61 */
  unsigned char __nesc_result;
/* #line 61 */

/* #line 61 */
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
/* #line 61 */

/* #line 61 */
  return __nesc_result;
/* #line 61 */
}
/* #line 61 */
/* # 429 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static inline void CC2420ControlP__InterruptCCA__fired(void )
/* #line 429 */
{
  CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTED;
  CC2420ControlP__InterruptCCA__disable();
  CC2420ControlP__IOCFG1__write(0);
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__CC2420Power__startOscillatorDone();
}

/* # 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/GpioInterrupt.nc" */
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void ){
/* #line 68 */
  CC2420ControlP__InterruptCCA__fired();
/* #line 68 */
}
/* #line 68 */
/* # 77 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/Msp430InterruptC.nc" */
static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void )
/* #line 77 */
{
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port14__fired(void ){
/* #line 72 */
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired();
/* #line 72 */
}
/* #line 72 */
/* # 107 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port15__clear(void )
/* #line 107 */
{
/* #line 107 */
  P1IFG &= ~(1 << 5);
}

/* #line 83 */
static inline void HplMsp430InterruptP__Port15__default__fired(void )
/* #line 83 */
{
/* #line 83 */
  HplMsp430InterruptP__Port15__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port15__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port15__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 108 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port16__clear(void )
/* #line 108 */
{
/* #line 108 */
  P1IFG &= ~(1 << 6);
}

/* #line 84 */
static inline void HplMsp430InterruptP__Port16__default__fired(void )
/* #line 84 */
{
/* #line 84 */
  HplMsp430InterruptP__Port16__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port16__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port16__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 109 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port17__clear(void )
/* #line 109 */
{
/* #line 109 */
  P1IFG &= ~(1 << 7);
}

/* #line 85 */
static inline void HplMsp430InterruptP__Port17__default__fired(void )
/* #line 85 */
{
/* #line 85 */
  HplMsp430InterruptP__Port17__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port17__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port17__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 206 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port20__clear(void )
/* #line 206 */
{
/* #line 206 */
  P2IFG &= ~(1 << 0);
}

/* #line 182 */
static inline void HplMsp430InterruptP__Port20__default__fired(void )
/* #line 182 */
{
/* #line 182 */
  HplMsp430InterruptP__Port20__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port20__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port20__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 207 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port21__clear(void )
/* #line 207 */
{
/* #line 207 */
  P2IFG &= ~(1 << 1);
}

/* #line 183 */
static inline void HplMsp430InterruptP__Port21__default__fired(void )
/* #line 183 */
{
/* #line 183 */
  HplMsp430InterruptP__Port21__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port21__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port21__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 208 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port22__clear(void )
/* #line 208 */
{
/* #line 208 */
  P2IFG &= ~(1 << 2);
}

/* #line 184 */
static inline void HplMsp430InterruptP__Port22__default__fired(void )
/* #line 184 */
{
/* #line 184 */
  HplMsp430InterruptP__Port22__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port22__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port22__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 209 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port23__clear(void )
/* #line 209 */
{
/* #line 209 */
  P2IFG &= ~(1 << 3);
}

/* #line 185 */
static inline void HplMsp430InterruptP__Port23__default__fired(void )
/* #line 185 */
{
/* #line 185 */
  HplMsp430InterruptP__Port23__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port23__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port23__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 210 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port24__clear(void )
/* #line 210 */
{
/* #line 210 */
  P2IFG &= ~(1 << 4);
}

/* #line 186 */
static inline void HplMsp430InterruptP__Port24__default__fired(void )
/* #line 186 */
{
/* #line 186 */
  HplMsp430InterruptP__Port24__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port24__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port24__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 211 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port25__clear(void )
/* #line 211 */
{
/* #line 211 */
  P2IFG &= ~(1 << 5);
}

/* #line 187 */
static inline void HplMsp430InterruptP__Port25__default__fired(void )
/* #line 187 */
{
/* #line 187 */
  HplMsp430InterruptP__Port25__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port25__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port25__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 212 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port26__clear(void )
/* #line 212 */
{
/* #line 212 */
  P2IFG &= ~(1 << 6);
}

/* #line 188 */
static inline void HplMsp430InterruptP__Port26__default__fired(void )
/* #line 188 */
{
/* #line 188 */
  HplMsp430InterruptP__Port26__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port26__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port26__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 213 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
static inline void HplMsp430InterruptP__Port27__clear(void )
/* #line 213 */
{
/* #line 213 */
  P2IFG &= ~(1 << 7);
}

/* #line 189 */
static inline void HplMsp430InterruptP__Port27__default__fired(void )
/* #line 189 */
{
/* #line 189 */
  HplMsp430InterruptP__Port27__clear();
}

/* # 72 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430Interrupt.nc" */
inline static void HplMsp430InterruptP__Port27__fired(void ){
/* #line 72 */
  HplMsp430InterruptP__Port27__default__fired();
/* #line 72 */
}
/* #line 72 */
/* # 98 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ArbiterInfo.nc" */
inline static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId(void ){
/* #line 98 */
  unsigned char __nesc_result;
/* #line 98 */

/* #line 98 */
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId();
/* #line 98 */

/* #line 98 */
  return __nesc_result;
/* #line 98 */
}
/* #line 98 */
/* # 349 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
static inline void HplMsp430Usart0P__Usart__disableRxIntr(void )
/* #line 349 */
{
  HplMsp430Usart0P__IE1 &= ~(1 << 6);
}

/* # 177 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart.nc" */
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr(void ){
/* #line 177 */
  HplMsp430Usart0P__Usart__disableRxIntr();
/* #line 177 */
}
/* #line 177 */
/* # 232 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data)
/* #line 232 */
{

  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos - 1] = data;
    }
  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos < /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp();
    }
  else 
/* #line 239 */
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone();
    }
}

/* # 65 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(uint8_t id, uint8_t data)
/* #line 65 */
{
}

/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__rxDone(uint8_t arg_0x101d3f220, uint8_t data){
/* #line 54 */
  switch (arg_0x101d3f220) {
/* #line 54 */
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
/* #line 54 */
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(data);
/* #line 54 */
      break;
/* #line 54 */
    default:
/* #line 54 */
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__rxDone(arg_0x101d3f220, data);
/* #line 54 */
      break;
/* #line 54 */
    }
/* #line 54 */
}
/* #line 54 */
/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/ArbiterInfo.nc" */
inline static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse(void ){
/* #line 90 */
  unsigned char __nesc_result;
/* #line 90 */

/* #line 90 */
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse();
/* #line 90 */

/* #line 90 */
  return __nesc_result;
/* #line 90 */
}
/* #line 90 */
/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(uint8_t data)
/* #line 54 */
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__rxDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId(), data);
    }
}

/* # 54 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
inline static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data){
/* #line 54 */
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__rxDone(data);
/* #line 54 */
}
/* #line 54 */
/* # 55 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C0P.nc" */
static inline bool HplMsp430I2C0P__HplI2C__isI2C(void )
/* #line 55 */
{
  /* atomic removed: atomic calls only */
/* #line 56 */
  {
    unsigned char __nesc_temp = 
/* #line 56 */
    HplMsp430I2C0P__U0CTL & 0x20 && HplMsp430I2C0P__U0CTL & 0x04 && HplMsp430I2C0P__U0CTL & 0x01;

/* #line 56 */
    return __nesc_temp;
  }
}

/* # 6 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2C.nc" */
inline static bool HplMsp430Usart0P__HplI2C__isI2C(void ){
/* #line 6 */
  unsigned char __nesc_result;
/* #line 6 */

/* #line 6 */
  __nesc_result = HplMsp430I2C0P__HplI2C__isI2C();
/* #line 6 */

/* #line 6 */
  return __nesc_result;
/* #line 6 */
}
/* #line 6 */
/* # 66 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__default__fired(uint8_t id)
/* #line 66 */
{
}

/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc" */
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__fired(uint8_t arg_0x101d3bc58){
/* #line 39 */
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__default__fired(arg_0x101d3bc58);
/* #line 39 */
}
/* #line 39 */
/* # 59 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawI2CInterrupts__fired(void )
/* #line 59 */
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__I2CInterrupts__fired(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId());
    }
}

/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc" */
inline static void HplMsp430Usart0P__I2CInterrupts__fired(void ){
/* #line 39 */
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawI2CInterrupts__fired();
/* #line 39 */
}
/* #line 39 */
/* # 250 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void )
/* #line 250 */
{
}

/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(uint8_t id)
/* #line 64 */
{
}

/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__txDone(uint8_t arg_0x101d3f220){
/* #line 49 */
  switch (arg_0x101d3f220) {
/* #line 49 */
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
/* #line 49 */
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone();
/* #line 49 */
      break;
/* #line 49 */
    default:
/* #line 49 */
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__default__txDone(arg_0x101d3f220);
/* #line 49 */
      break;
/* #line 49 */
    }
/* #line 49 */
}
/* #line 49 */
/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UsartShareP.nc" */
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone(void )
/* #line 49 */
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__Interrupts__txDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__ArbiterInfo__userId());
    }
}

/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc" */
inline static void HplMsp430Usart0P__Interrupts__txDone(void ){
/* #line 49 */
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__1__RawInterrupts__txDone();
/* #line 49 */
}
/* #line 49 */
/* # 237 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/msp430hardware.h" */
  __nesc_atomic_t __nesc_atomic_start(void )
{
  __nesc_atomic_t result = (({
/* #line 239 */
    uint16_t __x;

/* #line 239 */
(uint16_t )__x = _R2;__x;
  }
  )
/* #line 239 */
   & 0x0008) != 0;

/* #line 240 */
  __nesc_disable_interrupt();
;
  return result;
}

  void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)
{
;
  if (reenable_interrupts) {
    __nesc_enable_interrupt();
    }
}

/* # 11 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc" */
/*__attribute_interrupt_12*/  void sig_TIMERA0_VECTOR(void )
/* #line 11 */
{
/* #line 11 */
  Msp430TimerCommonP__VectorTimerA0__fired();
}

/* # 180 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCapComP.nc" */
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent());
    }
  else {
/* #line 185 */
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired();
    }
}

/* #line 180 */
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent());
    }
  else {
/* #line 185 */
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired();
    }
}

/* #line 180 */
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent());
    }
  else {
/* #line 185 */
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired();
    }
}

/* # 12 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc" */
/*__attribute_interrupt_10*/  void sig_TIMERA1_VECTOR(void )
/* #line 12 */
{
/* #line 12 */
  Msp430TimerCommonP__VectorTimerA1__fired();
}

/* #line 13 */
/*__attribute_interrupt_26*/  void sig_TIMERB0_VECTOR(void )
/* #line 13 */
{
/* #line 13 */
  Msp430TimerCommonP__VectorTimerB0__fired();
}

/* # 146 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n)
{
}

/* # 39 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerEvent.nc" */
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x1015d0de0){
/* #line 39 */
  switch (arg_0x1015d0de0) {
/* #line 39 */
    case 0:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired();
/* #line 39 */
      break;
/* #line 39 */
    case 1:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired();
/* #line 39 */
      break;
/* #line 39 */
    case 2:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired();
/* #line 39 */
      break;
/* #line 39 */
    case 3:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired();
/* #line 39 */
      break;
/* #line 39 */
    case 4:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired();
/* #line 39 */
      break;
/* #line 39 */
    case 5:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired();
/* #line 39 */
      break;
/* #line 39 */
    case 6:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired();
/* #line 39 */
      break;
/* #line 39 */
    case 7:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired();
/* #line 39 */
      break;
/* #line 39 */
    default:
/* #line 39 */
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x1015d0de0);
/* #line 39 */
      break;
/* #line 39 */
    }
/* #line 39 */
}
/* #line 39 */
/* # 147 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm();
    }
/* #line 154 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* #line 107 */
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm(void )
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get();
/* #line 109 */
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type expires;
/* #line 109 */
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
/* #line 132 */
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type )remaining << 0);
}

/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformCounterC.nc" */
static /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type rv = 0;

/* #line 83 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type high = /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper;
      /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type low = /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get();

/* #line 87 */
      if (/*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type high_to = high;
        /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT;

/* #line 101 */
        rv = (high_to << /*Counter32khz32C.Transform*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
/* #line 103 */
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

/* # 62 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerP.nc" */
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void )
{




  if (1) {
      /* atomic removed: atomic calls only */
/* #line 69 */
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )400U;

/* #line 72 */
        do {
/* #line 72 */
            t0 = t1;
/* #line 72 */
            t1 = * (volatile uint16_t * )400U;
          }
        while (
/* #line 72 */
        t0 != t1);
        {
          unsigned int __nesc_temp = 
/* #line 73 */
          t1;

/* #line 73 */
          return __nesc_temp;
        }
      }
    }
  else 
/* #line 76 */
    {
      return * (volatile uint16_t * )400U;
    }
}

/* # 782 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static void CC2420TransmitP__congestionBackoff(void )
/* #line 782 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 783 */
    {
      CC2420TransmitP__RadioBackoff__requestCongestionBackoff(CC2420TransmitP__m_msg);
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__myCongestionBackoff);
    }
/* #line 786 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 69 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/RandomMlcgC.nc" */
static uint32_t RandomMlcgC__Random__rand32(void )
/* #line 69 */
{
  uint32_t mlcg;
/* #line 70 */
  uint32_t p;
/* #line 70 */
  uint32_t q;
  uint64_t tmpseed;

/* #line 72 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
/* #line 84 */
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

/* # 789 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static error_t CC2420TransmitP__acquireSpiResource(void )
/* #line 789 */
{
  error_t error = CC2420TransmitP__SpiResource__immediateRequest();

/* #line 791 */
  if (error != SUCCESS) {
      CC2420TransmitP__SpiResource__request();
    }
  return error;
}

/* # 126 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id)
/* #line 126 */
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 129 */
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
/* #line 131 */
            EBUSY;

            {
/* #line 131 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 131 */
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP__SpiResource__isOwner()) {
          CC2420SpiP__m_holder = id;
          error = SUCCESS;
        }
      else {
/* #line 139 */
        if ((error = CC2420SpiP__SpiResource__immediateRequest()) == SUCCESS) {
            CC2420SpiP__m_holder = id;
          }
        else {
            CC2420SpiP__WorkingState__toIdle();
          }
        }
    }
/* #line 146 */
    __nesc_atomic_end(__nesc_atomic); }
/* #line 146 */
  return error;
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
/* #line 96 */
{
  error_t returnVal = FAIL;

/* #line 98 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 98 */
    {
      if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
          StateImplP__state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
/* #line 103 */
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

/* # 177 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__Resource__isOwner(uint8_t id)
/* #line 177 */
{
  /* atomic removed: atomic calls only */
/* #line 178 */
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId == id && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY) {
        unsigned char __nesc_temp = 
/* #line 179 */
        TRUE;

/* #line 179 */
        return __nesc_temp;
      }
    else 
/* #line 180 */
      {
        unsigned char __nesc_temp = 
/* #line 180 */
        FALSE;

/* #line 180 */
        return __nesc_temp;
      }
  }
}

/* #line 133 */
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void )
/* #line 133 */
{
  /* atomic removed: atomic calls only */
/* #line 134 */
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__default_owner_id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_GRANTING) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__postTask();
            {
              unsigned char __nesc_temp = 
/* #line 138 */
              SUCCESS;

/* #line 138 */
              return __nesc_temp;
            }
          }
        else {
/* #line 140 */
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_IMM_GRANTING) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__reqResId;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY;
              {
                unsigned char __nesc_temp = 
/* #line 143 */
                SUCCESS;

/* #line 143 */
                return __nesc_temp;
              }
            }
          }
      }
  }
/* #line 147 */
  return FAIL;
}

/* # 170 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/SchedulerBasicP.nc" */
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 172 */
    {
/* #line 172 */
      {
        unsigned char __nesc_temp = 
/* #line 172 */
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
/* #line 172 */
          __nesc_atomic_end(__nesc_atomic); 
/* #line 172 */
          return __nesc_temp;
        }
      }
    }
/* #line 175 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 265 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config)
/* #line 265 */
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 267 */
    {
      HplMsp430Usart0P__Usart__resetUsart(TRUE);
      HplMsp430Usart0P__HplI2C__clearModeI2C();
      HplMsp430Usart0P__Usart__disableUart();
      HplMsp430Usart0P__configSpi(config);
      HplMsp430Usart0P__Usart__enableSpi();
      HplMsp430Usart0P__Usart__resetUsart(FALSE);
      HplMsp430Usart0P__Usart__clrIntr();
      HplMsp430Usart0P__Usart__disableIntr();
    }
/* #line 276 */
    __nesc_atomic_end(__nesc_atomic); }
  return;
}

/* # 107 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static error_t CC2420SpiP__Resource__request(uint8_t id)
/* #line 107 */
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 109 */
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) == SUCCESS) {
          CC2420SpiP__m_holder = id;
          if (CC2420SpiP__SpiResource__isOwner()) {
              CC2420SpiP__grant__postTask();
            }
          else {
              CC2420SpiP__SpiResource__request();
            }
        }
      else {
          CC2420SpiP__m_requests |= 1 << id;
        }
    }
/* #line 122 */
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

/* # 737 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static void CC2420TransmitP__attemptSend(void )
/* #line 737 */
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 741 */
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_CANCEL) {
          CC2420TransmitP__SFLUSHTX__strobe();
          CC2420TransmitP__releaseSpiResource();
          CC2420TransmitP__CSN__set();
          CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
          CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, ECANCEL);
          {
/* #line 748 */
            __nesc_atomic_end(__nesc_atomic); 
/* #line 748 */
            return;
          }
        }





      CC2420TransmitP__CSN__clr();
      status = CC2420TransmitP__m_cca ? CC2420TransmitP__STXONCCA__strobe() : CC2420TransmitP__STXON__strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP__SNOP__strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP__m_state = congestion ? CC2420TransmitP__S_SAMPLE_CCA : CC2420TransmitP__S_SFD;
      CC2420TransmitP__CSN__set();
    }
/* #line 767 */
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP__totalCcaChecks = 0;
      CC2420TransmitP__releaseSpiResource();
      CC2420TransmitP__congestionBackoff();
    }
  else 
/* #line 773 */
    {
      CC2420TransmitP__BackoffTimer__start(CC2420TransmitP__CC2420_ABORT_PERIOD);
    }
}

/* # 318 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr)
/* #line 318 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 319 */
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
/* #line 321 */
            0;

            {
/* #line 321 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 321 */
              return __nesc_temp;
            }
          }
        }
    }
/* #line 325 */
    __nesc_atomic_end(__nesc_atomic); }
/* #line 325 */
  return CC2420SpiP__SpiByte__write(addr);
}

/* # 133 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
static bool StateImplP__State__isState(uint8_t id, uint8_t myState)
/* #line 133 */
{
  bool isState;

/* #line 135 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 135 */
    isState = StateImplP__state[id] == myState;
/* #line 135 */
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

/* # 134 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx)
/* #line 134 */
{
  uint8_t byte;


  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(tx);
  while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending()) ;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr();
  byte = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx();

  return byte;
}

/* # 149 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static error_t CC2420SpiP__Resource__release(uint8_t id)
/* #line 149 */
{
  uint8_t i;

/* #line 151 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 151 */
    {
      if (CC2420SpiP__m_holder != id) {
          {
            unsigned char __nesc_temp = 
/* #line 153 */
            FAIL;

            {
/* #line 153 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 153 */
              return __nesc_temp;
            }
          }
        }
/* #line 156 */
      CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;
      if (!CC2420SpiP__m_requests) {
          CC2420SpiP__WorkingState__toIdle();
          CC2420SpiP__attemptRelease();
        }
      else {
          for (i = CC2420SpiP__m_holder + 1; ; i++) {
              i %= CC2420SpiP__RESOURCE_COUNT;

              if (CC2420SpiP__m_requests & (1 << i)) {
                  CC2420SpiP__m_holder = i;
                  CC2420SpiP__m_requests &= ~(1 << i);
                  CC2420SpiP__grant__postTask();
                  {
                    unsigned char __nesc_temp = 
/* #line 169 */
                    SUCCESS;

                    {
/* #line 169 */
                      __nesc_atomic_end(__nesc_atomic); 
/* #line 169 */
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
/* #line 175 */
    __nesc_atomic_end(__nesc_atomic); }
/* #line 175 */
  return SUCCESS;
}

/* #line 339 */
static error_t CC2420SpiP__attemptRelease(void )
/* #line 339 */
{


  if ((
/* #line 340 */
  CC2420SpiP__m_requests > 0
   || CC2420SpiP__m_holder != CC2420SpiP__NO_HOLDER)
   || !CC2420SpiP__WorkingState__isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP__release = TRUE;
  CC2420SpiP__ChipSpiResource__releasing();
  /* atomic removed: atomic calls only */
/* #line 348 */
  {
    if (CC2420SpiP__release) {
        CC2420SpiP__SpiResource__release();
        {
          unsigned char __nesc_temp = 
/* #line 351 */
          SUCCESS;

/* #line 351 */
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

/* # 247 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
static void HplMsp430Usart0P__Usart__disableSpi(void )
/* #line 247 */
{
  /* atomic removed: atomic calls only */
/* #line 248 */
  {
    HplMsp430Usart0P__ME1 &= ~(1 << 6);
    HplMsp430Usart0P__SIMO__selectIOFunc();
    HplMsp430Usart0P__SOMI__selectIOFunc();
    HplMsp430Usart0P__UCLK__selectIOFunc();
  }
}

/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void )
/* #line 56 */
{
/* #line 56 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 56 */
    * (volatile uint8_t * )29U |= 0x01 << 2;
/* #line 56 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* #line 57 */
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void )
/* #line 57 */
{
/* #line 57 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 57 */
    * (volatile uint8_t * )29U &= ~(0x01 << 2);
/* #line 57 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 844 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static void CC2420TransmitP__signalDone(error_t err)
/* #line 844 */
{
  /* atomic removed: atomic calls only */
/* #line 845 */
  CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
  CC2420TransmitP__abortSpiRelease = FALSE;
  CC2420TransmitP__ChipSpiResource__attemptRelease();
  CC2420TransmitP__Send__sendDone(CC2420TransmitP__m_msg, err);
}

/* # 49 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/GpioCaptureC.nc" */
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode)
/* #line 49 */
{
  /* atomic removed: atomic calls only */
/* #line 50 */
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents();
  }
  return SUCCESS;
}

/* # 57 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void )
/* #line 57 */
{
/* #line 57 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 57 */
    * (volatile uint8_t * )29U &= ~(0x01 << 6);
/* #line 57 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* #line 56 */
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void )
/* #line 56 */
{
/* #line 56 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 56 */
    * (volatile uint8_t * )29U |= 0x01 << 6;
/* #line 56 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 260 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
/* #line 262 */
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 268 */
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
/* #line 270 */
            status;

            {
/* #line 270 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 270 */
              return __nesc_temp;
            }
          }
        }
    }
/* #line 274 */
    __nesc_atomic_end(__nesc_atomic); }
/* #line 274 */
  addr += offset;

  status = CC2420SpiP__SpiByte__write(addr | 0x80);
  CC2420SpiP__SpiByte__write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP__SpiByte__write(tmpData[tmpLen - len]);
    }

  return status;
}

/* # 171 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static void CC2420PacketP__PacketTimeStamp32khz__clear(message_t *msg)
{
  __nesc_hton_int8(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timesync.nxdata, FALSE);
  __nesc_hton_uint32(CC2420PacketP__CC2420PacketBody__getMetadata(msg)->timestamp.nxdata, CC2420_INVALID_TIMESTAMP);
}

/* # 107 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm(void )
{
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type now = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Counter__get();
/* #line 109 */
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type expires;
/* #line 109 */
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type remaining;




  expires = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;


  remaining = (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type )(expires - now);


  if (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 <= now) 
    {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
/* #line 132 */
  if (remaining > /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY) 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 = now + /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt = remaining - /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      remaining = /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__MAX_DELAY;
    }
  else 
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 += /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt = 0;
    }
  /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt((/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type )now << 5, 
  (/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__from_size_type )remaining << 5);
}

/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformCounterC.nc" */
static /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type /*CounterMilli32C.Transform*/TransformCounterC__1__Counter__get(void )
{
  /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type rv = 0;

/* #line 83 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.Transform*/TransformCounterC__1__upper_count_type high = /*CounterMilli32C.Transform*/TransformCounterC__1__m_upper;
      /*CounterMilli32C.Transform*/TransformCounterC__1__from_size_type low = /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get();

/* #line 87 */
      if (/*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.Transform*/TransformCounterC__1__CounterFrom__get();
        }
      {
        /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type high_to = high;
        /*CounterMilli32C.Transform*/TransformCounterC__1__to_size_type low_to = low >> /*CounterMilli32C.Transform*/TransformCounterC__1__LOW_SHIFT_RIGHT;

/* #line 101 */
        rv = (high_to << /*CounterMilli32C.Transform*/TransformCounterC__1__HIGH_SHIFT_LEFT) | low_to;
      }
    }
/* #line 103 */
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

/* # 14 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430TimerCommonP.nc" */
/*__attribute_interrupt_24*/  void sig_TIMERB1_VECTOR(void )
/* #line 14 */
{
/* #line 14 */
  Msp430TimerCommonP__VectorTimerB1__fired();
}

/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/RealMainP.nc" */
  int main(void )
/* #line 63 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
/* #line 71 */
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
/* #line 88 */
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

/* # 175 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/timer/Msp430ClockP.nc" */
static void Msp430ClockP__set_dco_calib(int calib)
{
  BCSCTL1 = (BCSCTL1 & ~0x07) | ((calib >> 8) & 0x07);
  DCOCTL = calib & 0xff;
}

/* # 16 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/telosb/MotePlatformC.nc" */
static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set)
/* #line 16 */
{
  if (set) {
    TOSH_SET_SIMO0_PIN();
    }
  else {
/* #line 20 */
    TOSH_CLR_SIMO0_PIN();
    }
/* #line 21 */
  TOSH_SET_UCLK0_PIN();
  TOSH_CLR_UCLK0_PIN();
}

/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc" */
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void )
/* #line 56 */
{
/* #line 56 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 56 */
    * (volatile uint8_t * )49U |= 0x01 << 4;
/* #line 56 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 134 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/SchedulerBasicP.nc" */
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
/* #line 138 */
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
/* #line 142 */
          FALSE;

/* #line 142 */
          return __nesc_temp;
        }
      }
  }
/* #line 145 */
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

/* #line 175 */
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

/* # 75 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/TaskBasic.nc" */
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x101487d50){
/* #line 75 */
  switch (arg_0x101487d50) {
/* #line 75 */
    case SerialP__RunTx:
/* #line 75 */
      SerialP__RunTx__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case SerialP__startDoneTask:
/* #line 75 */
      SerialP__startDoneTask__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case SerialP__stopDoneTask:
/* #line 75 */
      SerialP__stopDoneTask__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case SerialP__defaultSerialFlushTask:
/* #line 75 */
      SerialP__defaultSerialFlushTask__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
/* #line 75 */
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
/* #line 75 */
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask:
/* #line 75 */
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case CC2420CsmaP__startDone_task:
/* #line 75 */
      CC2420CsmaP__startDone_task__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case CC2420CsmaP__stopDone_task:
/* #line 75 */
      CC2420CsmaP__stopDone_task__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case CC2420CsmaP__sendDone_task:
/* #line 75 */
      CC2420CsmaP__sendDone_task__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case CC2420ControlP__sync:
/* #line 75 */
      CC2420ControlP__sync__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case CC2420ControlP__syncDone:
/* #line 75 */
      CC2420ControlP__syncDone__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case CC2420SpiP__grant:
/* #line 75 */
      CC2420SpiP__grant__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task:
/* #line 75 */
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask:
/* #line 75 */
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__grantedTask__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case CC2420ReceiveP__receiveDone_task:
/* #line 75 */
      CC2420ReceiveP__receiveDone_task__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
/* #line 75 */
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
/* #line 75 */
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case CC2420TinyosNetworkP__grantTask:
/* #line 75 */
      CC2420TinyosNetworkP__grantTask__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case DefaultLplP__send:
/* #line 75 */
      DefaultLplP__send__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case DefaultLplP__resend:
/* #line 75 */
      DefaultLplP__resend__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case DefaultLplP__startRadio:
/* #line 75 */
      DefaultLplP__startRadio__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case DefaultLplP__stopRadio:
/* #line 75 */
      DefaultLplP__stopRadio__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case PowerCycleP__stopRadio:
/* #line 75 */
      PowerCycleP__stopRadio__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case PowerCycleP__startRadio:
/* #line 75 */
      PowerCycleP__startRadio__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case PowerCycleP__getCca:
/* #line 75 */
      PowerCycleP__getCca__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
/* #line 75 */
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
/* #line 75 */
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask:
/* #line 75 */
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__CancelTask__runTask();
/* #line 75 */
      break;
/* #line 75 */
    case /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask:
/* #line 75 */
      /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__errorTask__runTask();
/* #line 75 */
      break;
/* #line 75 */
    default:
/* #line 75 */
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x101487d50);
/* #line 75 */
      break;
/* #line 75 */
    }
/* #line 75 */
}
/* #line 75 */
/* # 112 "LowPowerSensingBaseC.nc" */
static void LowPowerSensingBaseC__SerialSampleMsgSend__sendDone(message_t *msg, error_t error)
/* #line 112 */
{
  if (LowPowerSensingBaseC__MsgQueue__empty() == FALSE) {
      LowPowerSensingBaseC__sample_msg = LowPowerSensingBaseC__MsgQueue__dequeue();
      LowPowerSensingBaseC__dest_addr = LowPowerSensingBaseC__SerialAMPacket__destination(msg);
      LowPowerSensingBaseC__SerialSampleMsgSend__send(LowPowerSensingBaseC__dest_addr, &LowPowerSensingBaseC__sample_msg, sizeof(serial_sample_msg_t ));
    }
  else {
/* #line 118 */
    LowPowerSensingBaseC__serialSending = FALSE;
    }
}

/* # 53 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueEntryP.nc" */
static error_t /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
/* #line 55 */
{
  /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(msg, dest);
  /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(msg, 153);
  return /*LowPowerSensingBaseAppC.SerialSampleMsgSender.AMQueueEntryP*/AMQueueEntryP__1__Send__send(msg, len);
}

/* # 172 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
/* #line 172 */
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

/* #line 174 */
  return __nesc_ntoh_uint8(header->type.nxdata);
}

/* # 78 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/AMPacket.nc" */
static am_addr_t /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__AMPacket__destination(message_t * amsg){
/* #line 78 */
  unsigned int __nesc_result;
/* #line 78 */

/* #line 78 */
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__destination(amsg);
/* #line 78 */

/* #line 78 */
  return __nesc_result;
/* #line 78 */
}
/* #line 78 */
/* # 68 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
/* #line 70 */
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

/* # 510 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static void SerialP__MaybeScheduleTx(void )
/* #line 510 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 511 */
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
/* #line 517 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 163 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
static void /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__sendDone(uint8_t last, message_t * msg, error_t err)
/* #line 163 */
{
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__queue[last].msg = (void *)0;
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__tryToSend();
  /*SerialAMQueueP.AMQueueImplP*/AMQueueImplP__1__Send__sendDone(last, msg, err);
}

/* #line 163 */
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
/* #line 163 */
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

/* # 139 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static am_addr_t CC2420ActiveMessageP__AMPacket__destination(message_t *amsg)
/* #line 139 */
{
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(amsg);

/* #line 141 */
  return __nesc_ntoh_leuint16(header->dest.nxdata);
}

/* #line 87 */
static error_t CC2420ActiveMessageP__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
/* #line 89 */
{
  unsigned char *__nesc_temp48;
/* #line 90 */
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(msg);

  if (len > CC2420ActiveMessageP__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_leuint8(header->type.nxdata, id);
  __nesc_hton_leuint16(header->dest.nxdata, addr);
  __nesc_hton_leuint16(header->destpan.nxdata, CC2420ActiveMessageP__CC2420Config__getPanAddr());
  __nesc_hton_leuint16(header->src.nxdata, CC2420ActiveMessageP__AMPacket__address());
  (__nesc_temp48 = header->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp48, __nesc_ntoh_leuint16(__nesc_temp48) | (((1 << IEEE154_FCF_INTRAPAN) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));
  __nesc_hton_leuint8(header->length.nxdata, len + CC2420_SIZE);

  if (CC2420ActiveMessageP__RadioResource__immediateRequest() == SUCCESS) {
      error_t rc;

/* #line 107 */
      CC2420ActiveMessageP__SendNotifier__aboutToSend(id, addr, msg);

      rc = CC2420ActiveMessageP__SubSend__send(msg, len);
      if (rc != SUCCESS) {
          CC2420ActiveMessageP__RadioResource__release();
        }

      return rc;
    }
  else 
/* #line 115 */
    {
      CC2420ActiveMessageP__pending_length = len;
      CC2420ActiveMessageP__pending_message = msg;
      return CC2420ActiveMessageP__RadioResource__request();
    }
}

/* # 106 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ActiveMessageAddressC.nc" */
static am_addr_t ActiveMessageAddressC__amAddress(void )
/* #line 106 */
{
  am_addr_t myAddr;

/* #line 108 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 108 */
    myAddr = ActiveMessageAddressC__addr;
/* #line 108 */
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

/* # 60 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/FcfsResourceQueueC.nc" */
static bool /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
/* #line 60 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 61 */
    {
      unsigned char __nesc_temp = 
/* #line 61 */
      /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__qHead == /*CC2420TinyosNetworkC.FcfsResourceQueueC*/FcfsResourceQueueC__0__NO_ENTRY;

      {
/* #line 61 */
        __nesc_atomic_end(__nesc_atomic); 
/* #line 61 */
        return __nesc_temp;
      }
    }
/* #line 63 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 80 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lowpan/CC2420TinyosNetworkP.nc" */
static error_t CC2420TinyosNetworkP__ActiveSend__send(message_t *msg, uint8_t len)
/* #line 80 */
{
  CC2420TinyosNetworkP__CC2420Packet__setNetwork(msg, 0x3f);
  CC2420TinyosNetworkP__m_busy_client = CC2420TinyosNetworkP__CLIENT_AM;
  return CC2420TinyosNetworkP__SubSend__send(msg, len);
}

/* # 90 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketP.nc" */
static uint8_t *CC2420PacketP__getNetwork(message_t *msg)
/* #line 90 */
{
  cc2420_header_t *hdr = CC2420PacketP__CC2420PacketBody__getHeader(msg);
  int offset;

  offset = CC2420PacketP__getAddressLength((__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3) + 
  CC2420PacketP__getAddressLength((__nesc_ntoh_leuint16(hdr->fcf.nxdata) >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3) + 
  (size_t )& ((cc2420_header_t *)0)->dest;

  return (uint8_t *)hdr + offset;
}

/* # 143 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/StateImplP.nc" */
static uint8_t StateImplP__State__getState(uint8_t id)
/* #line 143 */
{
  uint8_t theState;

/* #line 145 */
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 145 */
    theState = StateImplP__state[id];
/* #line 145 */
    __nesc_atomic_end(__nesc_atomic); }
  return theState;
}

/* # 391 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/DefaultLplP.nc" */
static void DefaultLplP__initializeSend(void )
/* #line 391 */
{

  if (
/* #line 392 */
  DefaultLplP__LowPowerListening__getRemoteWakeupInterval(DefaultLplP__currentSendMsg)
   > DefaultLplP__ONE_MESSAGE) {

      if (__nesc_ntoh_leuint16(DefaultLplP__CC2420PacketBody__getHeader(DefaultLplP__currentSendMsg)->dest.nxdata) == IEEE154_BROADCAST_ADDR) {
          DefaultLplP__PacketAcknowledgements__noAck(DefaultLplP__currentSendMsg);
        }
      else 
/* #line 397 */
        {

          DefaultLplP__PacketAcknowledgements__requestAck(DefaultLplP__currentSendMsg);
        }

      DefaultLplP__SendDoneTimer__startOneShot(
      DefaultLplP__LowPowerListening__getRemoteWakeupInterval(DefaultLplP__currentSendMsg) + 20);
    }

  DefaultLplP__send__postTask();
}

/* # 144 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc" */
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

/* #line 147 */
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

/* # 56 "/Users/doinabucur/local/src/tinyos-2.x/tos/interfaces/State.nc" */
static void UniqueSendP__State__toIdle(void ){
/* #line 56 */
  StateImplP__State__toIdle(2U);
/* #line 56 */
}
/* #line 56 */
/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static void DefaultLplP__OffTimer__startOneShot(uint32_t dt){
/* #line 73 */
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
/* #line 73 */
}
/* #line 73 */
/* # 81 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static error_t CC2420CsmaP__SplitControl__start(void )
/* #line 81 */
{
  if (CC2420CsmaP__SplitControlState__requestState(CC2420CsmaP__S_STARTING) == SUCCESS) {
      CC2420CsmaP__CC2420Power__startVReg();
      return SUCCESS;
    }
  else {
/* #line 86 */
    if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
        return EALREADY;
      }
    else {
/* #line 89 */
      if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTING)) {
          return SUCCESS;
        }
      }
    }
/* #line 93 */
  return EBUSY;
}

static error_t CC2420CsmaP__SplitControl__stop(void )
/* #line 96 */
{
  if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STARTED)) {
      CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPING);
      CC2420CsmaP__shutdown();
      return SUCCESS;
    }
  else {
/* #line 102 */
    if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPED)) {
        return EALREADY;
      }
    else {
/* #line 105 */
      if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_TRANSMITTING)) {
          CC2420CsmaP__SplitControlState__forceState(CC2420CsmaP__S_STOPPING);

          return SUCCESS;
        }
      else {
/* #line 110 */
        if (CC2420CsmaP__SplitControlState__isState(CC2420CsmaP__S_STOPPING)) {
            return SUCCESS;
          }
        }
      }
    }
/* #line 114 */
  return EBUSY;
}

/* # 179 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static error_t CC2420TransmitP__StdControl__stop(void )
/* #line 179 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 180 */
    {
      CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;
      CC2420TransmitP__BackoffTimer__stop();
      CC2420TransmitP__CaptureSFD__disable();
      CC2420TransmitP__SpiResource__release();
      CC2420TransmitP__CSN__set();
    }
/* #line 186 */
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

/* # 171 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static error_t CC2420ReceiveP__StdControl__stop(void )
/* #line 171 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 172 */
    {
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__CSN__set();
      CC2420ReceiveP__InterruptFIFOP__disable();
    }
/* #line 177 */
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

/* #line 808 */
static void CC2420ReceiveP__reset_state(void )
/* #line 808 */
{
  CC2420ReceiveP__m_bytes_left = CC2420ReceiveP__RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
/* #line 810 */
  CC2420ReceiveP__receivingPacket = FALSE;
  CC2420ReceiveP__m_timestamp_head = 0;
  CC2420ReceiveP__m_timestamp_size = 0;
  CC2420ReceiveP__m_missed_packets = 0;
}

/* # 206 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static error_t CC2420ControlP__CC2420Power__stopVReg(void )
/* #line 206 */
{
  CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;
  CC2420ControlP__RSTN__clr();
  CC2420ControlP__VREN__clr();
  CC2420ControlP__RSTN__set();
  return SUCCESS;
}

/* # 284 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/lpl/PowerCycleP.nc" */
static bool PowerCycleP__finishSplitControlRequests(void )
/* #line 284 */
{
  if (PowerCycleP__SplitControlState__isState(PowerCycleP__S_TURNING_OFF)) {
      PowerCycleP__SplitControlState__forceState(PowerCycleP__S_OFF);
      PowerCycleP__SplitControl__stopDone(SUCCESS);
      return TRUE;
    }
  else {
/* #line 290 */
    if (PowerCycleP__SplitControlState__isState(PowerCycleP__S_TURNING_ON)) {

        PowerCycleP__SplitControlState__forceState(PowerCycleP__S_ON);
        PowerCycleP__SplitControl__startDone(SUCCESS);
        return TRUE;
      }
    }
  return FALSE;
}

/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/Timer.nc" */
static void PowerCycleP__OnTimer__startOneShot(uint32_t dt){
/* #line 73 */
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
/* #line 73 */
}
/* #line 73 */
/* # 223 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc" */
static void CC2420CsmaP__SubBackoff__requestInitialBackoff(message_t *msg)
/* #line 223 */
{
  CC2420CsmaP__SubBackoff__setInitialBackoff(CC2420CsmaP__Random__rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP__RadioBackoff__requestInitialBackoff(msg);
}

/* # 819 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc" */
static void CC2420TransmitP__loadTXFIFO(void )
/* #line 819 */
{
  cc2420_header_t *header = CC2420TransmitP__CC2420PacketBody__getHeader(CC2420TransmitP__m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8(CC2420TransmitP__CC2420PacketBody__getMetadata(CC2420TransmitP__m_msg)->tx_power.nxdata);

  if (!tx_power) {
      tx_power = 31;
    }

  CC2420TransmitP__CSN__clr();

  if (CC2420TransmitP__m_tx_power != tx_power) {
      CC2420TransmitP__TXCTRL__write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP__m_tx_power = tx_power;

  {
    uint8_t tmpLen  = __nesc_ntoh_leuint8(header->length.nxdata) - 1;

/* #line 840 */
    CC2420TransmitP__TXFIFO__write((uint8_t * )header, __nesc_ntoh_leuint8(header->length.nxdata) - 1);
  }
}

/* # 305 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data)
/* #line 305 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 306 */
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
/* #line 308 */
            0;

            {
/* #line 308 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 308 */
              return __nesc_temp;
            }
          }
        }
    }
/* #line 312 */
    __nesc_atomic_end(__nesc_atomic); }
/* #line 311 */
  CC2420SpiP__SpiByte__write(addr);
  CC2420SpiP__SpiByte__write(data >> 8);
  return CC2420SpiP__SpiByte__write(data & 0xff);
}

/* # 206 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc" */
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len)
/* #line 208 */
{

  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client = id;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf = tx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf = rx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len = len;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos = 0;

  if (len) {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp();
    }
  else {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask();
    }

  return SUCCESS;
}

/* #line 183 */
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp(void )
/* #line 183 */
{

  uint8_t end;
  uint8_t tmp;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 188 */
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos] : 0);

      end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos + /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SPI_ATOMIC_SIZE;
      if (end > /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len) {
        end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len;
        }
      while (++/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos < end) {
          while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending()) ;
          tmp = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx();
          if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf) {
            /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos - 1] = tmp;
            }
/* #line 200 */
          /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos] : 0);
        }
    }
/* #line 202 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 74 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc" */
static void CC2420ActiveMessageP__RadioResource__granted(void )
/* #line 74 */
{
  uint8_t rc;
  cc2420_header_t *header = CC2420ActiveMessageP__CC2420PacketBody__getHeader(CC2420ActiveMessageP__pending_message);

  CC2420ActiveMessageP__SendNotifier__aboutToSend(__nesc_ntoh_leuint8(header->type.nxdata), __nesc_ntoh_leuint16(header->dest.nxdata), CC2420ActiveMessageP__pending_message);
  rc = CC2420ActiveMessageP__SubSend__send(CC2420ActiveMessageP__pending_message, CC2420ActiveMessageP__pending_length);
  if (rc != SUCCESS) {
      CC2420ActiveMessageP__RadioResource__release();
      CC2420ActiveMessageP__AMSend__sendDone(__nesc_ntoh_leuint8(header->type.nxdata), CC2420ActiveMessageP__pending_message, rc);
    }
}

/* # 189 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/AMQueueImplP.nc" */
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
/* #line 189 */
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

/* # 73 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc" */
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
/* #line 90 */
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

/* # 147 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc" */
static void /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type t0, /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_t0 = t0;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__m_dt = dt;
      /*HilTimerMilliC.AlarmMilli32C.Transform*/TransformAlarmC__1__set_alarm();
    }
/* #line 154 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 290 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static uint16_t CC2420ControlP__CC2420Config__getShortAddr(void )
/* #line 290 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 291 */
    {
      unsigned int __nesc_temp = 
/* #line 291 */
      CC2420ControlP__m_short_addr;

      {
/* #line 291 */
        __nesc_atomic_end(__nesc_atomic); 
/* #line 291 */
        return __nesc_temp;
      }
    }
/* #line 293 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 8 "/Users/doinabucur/local/src/tinyos-2.x/tos/platforms/epic/chips/ds2411/DallasId48ToIeeeEui64C.nc" */
static ieee_eui64_t DallasId48ToIeeeEui64C__LocalIeeeEui64__getId(void )
/* #line 8 */
{
  uint8_t id[6];
  ieee_eui64_t eui;

/* #line 11 */
  if (DallasId48ToIeeeEui64C__ReadId48__read(id) != SUCCESS) {
      memset(eui.data, 0, 8);
      goto done;
    }

  eui.data[0] = IEEE_EUI64_COMPANY_ID_0;
  eui.data[1] = IEEE_EUI64_COMPANY_ID_1;
  eui.data[2] = IEEE_EUI64_COMPANY_ID_2;



  eui.data[3] = IEEE_EUI64_SERIAL_ID_0;
  eui.data[4] = IEEE_EUI64_SERIAL_ID_1;


  eui.data[5] = id[2];
  eui.data[6] = id[1];
  eui.data[7] = id[0];

  done: 
    return eui;
}

/* # 63 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/timer/BusyWaitCounterC.nc" */
static void /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__BusyWait__wait(/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type dt)
{
  /* atomic removed: atomic calls only */
  {


    /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__size_type t0 = /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get();

    if (dt > /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE) 
      {
        dt -= /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE;
        while (/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get() - t0 <= dt) ;
        t0 += dt;
        dt = /*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__HALF_MAX_SIZE_TYPE;
      }

    while (/*BusyWaitMicroC.BusyWaitCounterC*/BusyWaitCounterC__0__Counter__get() - t0 <= dt) ;
  }
}

/* # 764 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static void CC2420ReceiveP__waitForNextPacket(void )
/* #line 764 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 765 */
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
          CC2420ReceiveP__SpiResource__release();
          {
/* #line 768 */
            __nesc_atomic_end(__nesc_atomic); 
/* #line 768 */
            return;
          }
        }
      CC2420ReceiveP__receivingPacket = FALSE;
/* #line 783 */
      if ((CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get()) {

          if (CC2420ReceiveP__m_missed_packets) {
              CC2420ReceiveP__m_missed_packets--;
            }





          CC2420ReceiveP__beginReceive();
        }
      else 
        {

          CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
          CC2420ReceiveP__m_missed_packets = 0;
          CC2420ReceiveP__SpiResource__release();
        }
    }
/* #line 802 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* #line 711 */
static void CC2420ReceiveP__beginReceive(void )
/* #line 711 */
{
  CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
  /* atomic removed: atomic calls only */
/* #line 713 */
  CC2420ReceiveP__receivingPacket = TRUE;
  if (CC2420ReceiveP__SpiResource__isOwner()) {
      CC2420ReceiveP__receive();
    }
  else {
/* #line 717 */
    if (CC2420ReceiveP__SpiResource__immediateRequest() == SUCCESS) {
        CC2420ReceiveP__receive();
      }
    else {
        CC2420ReceiveP__SpiResource__request();
      }
    }
}

/* #line 754 */
static void CC2420ReceiveP__receive(void )
/* #line 754 */
{
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__RXFIFO__beginRead((uint8_t *)CC2420ReceiveP__CC2420PacketBody__getHeader(CC2420ReceiveP__m_p_rx_buf), 1);
}

/* # 189 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc" */
static cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
/* #line 190 */
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 194 */
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
/* #line 196 */
            status;

            {
/* #line 196 */
              __nesc_atomic_end(__nesc_atomic); 
/* #line 196 */
              return __nesc_temp;
            }
          }
        }
    }
/* #line 200 */
    __nesc_atomic_end(__nesc_atomic); }
/* #line 200 */
  CC2420SpiP__m_addr = addr | 0x40;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__Fifo__continueRead(addr, data, len);

  return status;
}

/* #line 329 */
static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
/* #line 330 */
{
  if (CC2420SpiP__m_addr & 0x40) {
      CC2420SpiP__Fifo__readDone(CC2420SpiP__m_addr & ~0x40, rx_buf, len, error);
    }
  else 
/* #line 333 */
    {
      CC2420SpiP__Fifo__writeDone(CC2420SpiP__m_addr, tx_buf, len, error);
    }
}

/* # 728 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc" */
static void CC2420ReceiveP__flush(void )
/* #line 728 */
{








  CC2420ReceiveP__reset_state();

  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__SpiResource__release();
  CC2420ReceiveP__waitForNextPacket();
}

/* # 467 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc" */
static void CC2420ControlP__writeFsctrl(void )
/* #line 467 */
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 470 */
    {
      channel = CC2420ControlP__m_channel;
    }
/* #line 472 */
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__FSCTRL__write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}







static void CC2420ControlP__writeMdmctrl0(void )
/* #line 484 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 485 */
    {
      CC2420ControlP__MDMCTRL0__write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | ((
      CC2420ControlP__addressRecognition && CC2420ControlP__hwAddressRecognition ? 1 : 0) << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP__autoAckEnabled && CC2420ControlP__hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
/* #line 494 */
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP__writeId(void )
/* #line 503 */
{
  nxle_uint16_t id[6];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 506 */
    {
      * (ieee_eui64_t *)&id[0] = CC2420ControlP__m_ext_addr;
      __nesc_hton_leuint16(id[4].nxdata, CC2420ControlP__m_pan);
      __nesc_hton_leuint16(id[5].nxdata, CC2420ControlP__m_short_addr);
    }
/* #line 510 */
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP__IEEEADR__write(0, (uint8_t *)&id, 12);
}

/* # 85 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static void /*Msp430Uart1P.UartP*/Msp430UartP__0__ResourceConfigure__configure(uint8_t id)
/* #line 85 */
{
  msp430_uart_union_config_t *config = /*Msp430Uart1P.UartP*/Msp430UartP__0__Msp430UartConfigure__getConfig(id);

/* #line 87 */
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_byte_time = config->uartConfig.ubr / 2;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__setModeUart(config);
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__enableIntr();
}

/* # 251 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc" */
static void HplMsp430Usart1P__Usart__disableSpi(void )
/* #line 251 */
{
  /* atomic removed: atomic calls only */
/* #line 252 */
  {
    HplMsp430Usart1P__ME2 &= ~(1 << 4);
    HplMsp430Usart1P__SIMO__selectIOFunc();
    HplMsp430Usart1P__SOMI__selectIOFunc();
    HplMsp430Usart1P__UCLK__selectIOFunc();
  }
}

/* #line 211 */
static void HplMsp430Usart1P__Usart__disableUart(void )
/* #line 211 */
{
  /* atomic removed: atomic calls only */
/* #line 212 */
  {
    HplMsp430Usart1P__ME2 &= ~((1 << 5) | (1 << 4));
    HplMsp430Usart1P__UTXD__selectIOFunc();
    HplMsp430Usart1P__URXD__selectIOFunc();
  }
}

/* # 177 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id)
/* #line 177 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 178 */
    {
      if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId == id && /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) {
          unsigned char __nesc_temp = 
/* #line 179 */
          TRUE;

          {
/* #line 179 */
            __nesc_atomic_end(__nesc_atomic); 
/* #line 179 */
            return __nesc_temp;
          }
        }
      else 
/* #line 180 */
        {
          unsigned char __nesc_temp = 
/* #line 180 */
          FALSE;

          {
/* #line 180 */
            __nesc_atomic_end(__nesc_atomic); 
/* #line 180 */
            return __nesc_temp;
          }
        }
    }
/* #line 183 */
    __nesc_atomic_end(__nesc_atomic); }
}

/* # 349 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static void SerialP__testOff(void )
/* #line 349 */
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
/* #line 351 */
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
/* #line 359 */
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
/* #line 362 */
      SerialP__offPending = TRUE;
    }
}

/* # 98 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc" */
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
/* #line 98 */
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
/* #line 99 */
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
/* #line 102 */
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

/* # 147 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/Msp430UartP.nc" */
static error_t /*Msp430Uart1P.UartP*/Msp430UartP__0__UartStream__send(uint8_t id, uint8_t *buf, uint16_t len)
/* #line 147 */
{
  if (/*Msp430Uart1P.UartP*/Msp430UartP__0__UsartResource__isOwner(id) == FALSE) {
    return FAIL;
    }
/* #line 150 */
  if (len == 0) {
    return FAIL;
    }
  else {
/* #line 152 */
    if (/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
/* #line 154 */
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_buf = buf;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_len = len;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos = 0;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__current_owner = id;
  /*Msp430Uart1P.UartP*/Msp430UartP__0__Usart__tx(buf[/*Msp430Uart1P.UartP*/Msp430UartP__0__m_tx_pos++]);
  return SUCCESS;
}

/* # 135 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc" */
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
/* #line 135 */
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc" */
/*__attribute_interrupt_6*/  void sig_UART1RX_VECTOR(void )
/* #line 96 */
{
  uint8_t temp = U1RXBUF;

/* #line 98 */
  HplMsp430Usart1P__Interrupts__rxDone(temp);
}

/* # 153 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static bool /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void )
/* #line 153 */
{
  /* atomic removed: atomic calls only */
/* #line 154 */
  {
    if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
/* #line 156 */
        FALSE;

/* #line 156 */
        return __nesc_temp;
      }
  }
/* #line 158 */
  return TRUE;
}

/* # 404 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialP.nc" */
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
/* #line 404 */
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            SerialP__rxState = SerialP__RXSTATE_TOKEN;
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            if (SerialP__rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        SerialP__ack_queue_push(SerialP__rxSeqno);
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

/* # 91 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/crc.h" */
static uint16_t crcByte(uint16_t crc, uint8_t b)
/* #line 91 */
{
  crc = (uint8_t )(crc >> 8) | (crc << 8);
  crc ^= b;
  crc ^= (uint8_t )(crc & 0xff) >> 4;
  crc ^= crc << 12;
  crc ^= (crc & 0xff) << 5;
  return crc;
}

/* # 296 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc" */
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
/* #line 296 */
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
/* #line 298 */
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
/* #line 308 */
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

/* # 166 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static uint8_t /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void )
/* #line 166 */
{
  /* atomic removed: atomic calls only */
/* #line 167 */
  {
    if (/*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__state != /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
/* #line 169 */
        /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;

/* #line 169 */
        return __nesc_temp;
      }
/* #line 170 */
    {
      unsigned char __nesc_temp = 
/* #line 170 */
      /*Msp430UsartShare1P.ArbiterC.Arbiter*/ArbiterP__0__resId;

/* #line 170 */
      return __nesc_temp;
    }
  }
}

/* # 101 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart1P.nc" */
/*__attribute_interrupt_4*/  void sig_UART1TX_VECTOR(void )
/* #line 101 */
{
  HplMsp430Usart1P__Interrupts__txDone();
}

/* # 118 "/Users/doinabucur/local/src/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc" */
static void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
/* #line 119 */
{
  /* atomic removed: atomic calls only */
/* #line 120 */
  {
    if (HdlcTranslateC__state.sendEscape) {
        HdlcTranslateC__state.sendEscape = 0;
        HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
        HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
      }
    else {
        HdlcTranslateC__SerialFrameComm__putDone();
      }
  }
}

/* #line 106 */
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
/* #line 106 */
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

/* # 64 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/pins/HplMsp430InterruptP.nc" */
/*__attribute_interrupt_8*/  void sig_PORT1_VECTOR(void )
{
  volatile int n = P1IFG & P1IE;

  if (n & (1 << 0)) {
/* #line 68 */
      HplMsp430InterruptP__Port10__fired();
/* #line 68 */
      return;
    }
/* #line 69 */
  if (n & (1 << 1)) {
/* #line 69 */
      HplMsp430InterruptP__Port11__fired();
/* #line 69 */
      return;
    }
/* #line 70 */
  if (n & (1 << 2)) {
/* #line 70 */
      HplMsp430InterruptP__Port12__fired();
/* #line 70 */
      return;
    }
/* #line 71 */
  if (n & (1 << 3)) {
/* #line 71 */
      HplMsp430InterruptP__Port13__fired();
/* #line 71 */
      return;
    }
/* #line 72 */
  if (n & (1 << 4)) {
/* #line 72 */
      HplMsp430InterruptP__Port14__fired();
/* #line 72 */
      return;
    }
/* #line 73 */
  if (n & (1 << 5)) {
/* #line 73 */
      HplMsp430InterruptP__Port15__fired();
/* #line 73 */
      return;
    }
/* #line 74 */
  if (n & (1 << 6)) {
/* #line 74 */
      HplMsp430InterruptP__Port16__fired();
/* #line 74 */
      return;
    }
/* #line 75 */
  if (n & (1 << 7)) {
/* #line 75 */
      HplMsp430InterruptP__Port17__fired();
/* #line 75 */
      return;
    }
}

/* #line 169 */
/*__attribute_interrupt_2*/  void sig_PORT2_VECTOR(void )
{
  volatile int n = P2IFG & P2IE;

  if (n & (1 << 0)) {
/* #line 173 */
      HplMsp430InterruptP__Port20__fired();
/* #line 173 */
      return;
    }
/* #line 174 */
  if (n & (1 << 1)) {
/* #line 174 */
      HplMsp430InterruptP__Port21__fired();
/* #line 174 */
      return;
    }
/* #line 175 */
  if (n & (1 << 2)) {
/* #line 175 */
      HplMsp430InterruptP__Port22__fired();
/* #line 175 */
      return;
    }
/* #line 176 */
  if (n & (1 << 3)) {
/* #line 176 */
      HplMsp430InterruptP__Port23__fired();
/* #line 176 */
      return;
    }
/* #line 177 */
  if (n & (1 << 4)) {
/* #line 177 */
      HplMsp430InterruptP__Port24__fired();
/* #line 177 */
      return;
    }
/* #line 178 */
  if (n & (1 << 5)) {
/* #line 178 */
      HplMsp430InterruptP__Port25__fired();
/* #line 178 */
      return;
    }
/* #line 179 */
  if (n & (1 << 6)) {
/* #line 179 */
      HplMsp430InterruptP__Port26__fired();
/* #line 179 */
      return;
    }
/* #line 180 */
  if (n & (1 << 7)) {
/* #line 180 */
      HplMsp430InterruptP__Port27__fired();
/* #line 180 */
      return;
    }
}

/* # 96 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
/*__attribute_interrupt_18*/  void sig_UART0RX_VECTOR(void )
/* #line 96 */
{
  uint8_t temp = U0RXBUF;

/* #line 98 */
  HplMsp430Usart0P__Interrupts__rxDone(temp);
}

/* # 153 "/Users/doinabucur/local/src/tinyos-2.x/tos/system/ArbiterP.nc" */
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__inUse(void )
/* #line 153 */
{
  /* atomic removed: atomic calls only */
/* #line 154 */
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
/* #line 156 */
        FALSE;

/* #line 156 */
        return __nesc_temp;
      }
  }
/* #line 158 */
  return TRUE;
}






static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__ArbiterInfo__userId(void )
/* #line 166 */
{
  /* atomic removed: atomic calls only */
/* #line 167 */
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__state != /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
/* #line 169 */
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__NO_RES;

/* #line 169 */
        return __nesc_temp;
      }
/* #line 170 */
    {
      unsigned char __nesc_temp = 
/* #line 170 */
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__1__resId;

/* #line 170 */
      return __nesc_temp;
    }
  }
}

/* # 101 "/Users/doinabucur/local/src/tinyos-2.x/tos/chips/msp430/usart/HplMsp430Usart0P.nc" */
/*__attribute_interrupt_16*/  void sig_UART0TX_VECTOR(void )
/* #line 101 */
{
  if (HplMsp430Usart0P__HplI2C__isI2C()) {
    HplMsp430Usart0P__I2CInterrupts__fired();
    }
  else {
/* #line 105 */
    HplMsp430Usart0P__Interrupts__txDone();
    }
}

