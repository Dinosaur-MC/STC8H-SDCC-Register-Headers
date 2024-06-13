// Copyright 2021 IOsetting <iosetting(at)outlook.com>
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef __FW_REG_BASE_H__
#define __FW_REG_BASE_H__

#include <stdbool.h>

/* add '__SDCC_SYNTAX_FIX' define in c_cpp_properties.json to fix syntax problem while editing codes */
#ifdef __SDCC_SYNTAX_FIX

    #define __data
    #define __near
    #define __idata
    #define __xdata
    #define __far
    #define __pdata
    #define __code
    #define __bit bool
    #define __sfr volatile unsigned char
    #define __sbit volatile bool
    #define __critical
    #define __at(x)             /* use "__at (0xab)" instead of "__at 0xab" */
    #define __using(x)
    #define __interrupt(x)
    #define __naked

    #define data
    #define near 
    #define idata
    #define xdata
    #define far
    #define pdata
    #define code
    #define bit bool
    #define sfr volatile unsigned char
    #define sbit volatile bool
    #define critical
    #define at(x)
    #define using(x)
    #define interrupt(x)
    #define naked

#endif

#define  _P0            0x80
__sfr   __at (_P0)  P0;
__sbit  __at (_P0+0)  P00;
__sbit  __at (_P0+1)  P01;
__sbit  __at (_P0+2)  P02;
__sbit  __at (_P0+3)  P03;
__sbit  __at (_P0+4)  P04;
__sbit  __at (_P0+5)  P05;
__sbit  __at (_P0+6)  P06;
__sbit  __at (_P0+7)  P07;
__sfr   __at (0x81)  SP;
__sfr   __at (0x82)  DPL;
__sfr   __at (0x83)  DPH;
__sfr   __at (0x84)  S4CON;
__sfr   __at (0x85)  S4BUF;
__sfr   __at (0x87)  PCON;

#define  _TCON          0x88
__sfr   __at (_TCON)  TCON;
__sbit  __at (_TCON+7)  TF1;
__sbit  __at (_TCON+6)  TR1;
__sbit  __at (_TCON+5)  TF0;
__sbit  __at (_TCON+4)  TR0;
__sbit  __at (_TCON+3)  IE1;
__sbit  __at (_TCON+2)  IT1;
__sbit  __at (_TCON+1)  IE0;
__sbit  __at (_TCON+0)  IT0;
__sfr   __at (0x89)  TMOD;

__sfr   __at (0x8A)  TL0;
__sfr   __at (0x8B)  TL1;
__sfr   __at (0x8C)  TH0;
__sfr   __at (0x8D)  TH1;
__sfr   __at (0x8E)  AUXR;
__sfr   __at (0x8F)  INTCLKO;

#define  _P1            0x90
__sfr   __at (_P1)  P1;
__sbit  __at (_P1+0)  P10;
__sbit  __at (_P1+1)  P11;
__sbit  __at (_P1+2)  P12;
__sbit  __at (_P1+3)  P13;
__sbit  __at (_P1+4)  P14;
__sbit  __at (_P1+5)  P15;
__sbit  __at (_P1+6)  P16;
__sbit  __at (_P1+7)  P17;
__sfr   __at (0x91)  P1M1;
__sfr   __at (0x92)  P1M0;
__sfr   __at (0x93)  P0M1;
__sfr   __at (0x94)  P0M0;
__sfr   __at (0x95)  P2M1;
__sfr   __at (0x96)  P2M0;

#define  _SCON          0x98
__sfr   __at (_SCON)  SCON;
__sbit  __at (_SCON+7)  SM0;
__sbit  __at (_SCON+6)  SM1;
__sbit  __at (_SCON+5)  SM2;
__sbit  __at (_SCON+4)  REN;
__sbit  __at (_SCON+3)  TB8;
__sbit  __at (_SCON+2)  RB8;
__sbit  __at (_SCON+1)  TI;
__sbit  __at (_SCON+0)  RI;
__sfr   __at (0x99)  SBUF;
__sfr   __at (0x9A)  S2CON;
__sfr   __at (0x9B)  S2BUF;
__sfr   __at (0x9D)  IRCBAND;
__sfr   __at (0x9E)  LIRTRIM;
__sfr   __at (0x9F)  IRTRIM;

#define  _P2            0xA0
__sfr   __at (_P2)  P2;
__sbit  __at (_P2+0)  P20;
__sbit  __at (_P2+1)  P21;
__sbit  __at (_P2+2)  P22;
__sbit  __at (_P2+3)  P23;
__sbit  __at (_P2+4)  P24;
__sbit  __at (_P2+5)  P25;
__sbit  __at (_P2+6)  P26;
__sbit  __at (_P2+7)  P27;
__sfr   __at (0xA1)  BUS_SPEED;
__sfr   __at (0xA2)  P_SW1;

#define  _IE            0xA8
__sfr   __at (_IE)  IE;
__sbit  __at (_IE+7)  EA;
__sbit  __at (_IE+6)  ELVD;
__sbit  __at (_IE+5)  EADC;
__sbit  __at (_IE+4)  ES;
__sbit  __at (_IE+3)  ET1;
__sbit  __at (_IE+2)  EX1;
__sbit  __at (_IE+1)  ET0;
__sbit  __at (_IE+0)  EX0;
__sfr   __at (0xA9)  SADDR;
__sfr   __at (0xAA)  WKTCL;
__sfr   __at (0xAB)  WKTCH;
__sfr   __at (0xAC)  S3CON;
__sfr   __at (0xAD)  S3BUF;
__sfr   __at (0xAE)  TA;
__sfr   __at (0xAF)  IE2;

#define  _P3            0xB0
__sfr   __at (_P3)  P3;
__sbit  __at (_P3+0)  P30;
__sbit  __at (_P3+1)  P31;
__sbit  __at (_P3+2)  P32;
__sbit  __at (_P3+3)  P33;
__sbit  __at (_P3+4)  P34;
__sbit  __at (_P3+5)  P35;
__sbit  __at (_P3+6)  P36;
__sbit  __at (_P3+7)  P37;
__sfr   __at (0xB1)  P3M1;
__sfr   __at (0xB2)  P3M0;
__sfr   __at (0xB3)  P4M1;
__sfr   __at (0xB4)  P4M0;
__sfr   __at (0xB5)  IP2;
__sfr   __at (0xB6)  IP2H;
__sfr   __at (0xB7)  IPH;

#define  _IP            0xB8
__sfr   __at (_IP)  IP;
__sbit  __at (_IP+7)  PPCA;
__sbit  __at (_IP+6)  PLVD;
__sbit  __at (_IP+5)  PADC;
__sbit  __at (_IP+4)  PS;
__sbit  __at (_IP+3)  PT1;
__sbit  __at (_IP+2)  PX1;
__sbit  __at (_IP+1)  PT0;
__sbit  __at (_IP+0)  PX0;
__sfr   __at (0xB9)  SADEN;
__sfr   __at (0xBA)  P_SW2;
__sfr   __at (0xBC)  ADC_CONTR;
__sfr   __at (0xBD)  ADC_RES;
__sfr   __at (0xBE)  ADC_RESL;

#define  _P4            0xC0
__sfr   __at (_P4)  P4;
__sbit  __at (_P4+0)  P40;
__sbit  __at (_P4+1)  P41;
__sbit  __at (_P4+2)  P42;
__sbit  __at (_P4+3)  P43;
__sbit  __at (_P4+4)  P44;
__sbit  __at (_P4+5)  P45;
__sbit  __at (_P4+6)  P46;
__sbit  __at (_P4+7)  P47;
__sfr   __at (0xC1)  WDT_CONTR;
__sfr   __at (0xC2)  IAP_DATA;
__sfr   __at (0xC3)  IAP_ADDRH;
__sfr   __at (0xC4)  IAP_ADDRL;
__sfr   __at (0xC5)  IAP_CMD;
__sfr   __at (0xC6)  IAP_TRIG;
__sfr   __at (0xC7)  IAP_CONTR;

#define  _P5            0xC8
__sfr   __at (_P5)  P5;
__sbit  __at (_P5+0)  P50;
__sbit  __at (_P5+1)  P51;
__sbit  __at (_P5+2)  P52;
__sbit  __at (_P5+3)  P53;
__sbit  __at (_P5+4)  P54;
__sbit  __at (_P5+5)  P55;
__sbit  __at (_P5+6)  P56;
__sbit  __at (_P5+7)  P57;
__sfr   __at (0xC9)  P5M1;
__sfr   __at (0xCA)  P5M0;
__sfr   __at (0xCB)  P6M1;
__sfr   __at (0xCC)  P6M0;
__sfr   __at (0xCD)  SPSTAT;
__sfr   __at (0xCE)  SPCTL;
__sfr   __at (0xCF)  SPDAT;

#define  _PSW           0xD0
__sfr   __at (_PSW)  PSW;
__sbit  __at (_PSW+7)  CY;
__sbit  __at (_PSW+6)  AC;
__sbit  __at (_PSW+5)  F0;
__sbit  __at (_PSW+4)  RS1;
__sbit  __at (_PSW+3)  RS0;
__sbit  __at (_PSW+2)  OV;
__sbit  __at (_PSW+1)  F1;
__sbit  __at (_PSW+0)  P;
__sfr   __at (0xD1)  T4T3M;
__sfr   __at (0xD2)  T4H;
__sfr   __at (0xD3)  T4L;
__sfr   __at (0xD4)  T3H;
__sfr   __at (0xD5)  T3L;
__sfr   __at (0xD6)  T2H;
__sfr   __at (0xD7)  T2L;

__sfr   __at (0xE0)  ACC;

#define  _P6            0xE8
__sfr   __at (_P6)  P6;
__sbit  __at (_P6+0)  P60;
__sbit  __at (_P6+1)  P61;
__sbit  __at (_P6+2)  P62;
__sbit  __at (_P6+3)  P63;
__sbit  __at (_P6+4)  P64;
__sbit  __at (_P6+5)  P65;
__sbit  __at (_P6+6)  P66;
__sbit  __at (_P6+7)  P67;

__sfr   __at (0xF0)  B;

#define  _P7            0xF8
__sfr   __at (_P7)  P7;
__sbit  __at (_P7+0)  P70;
__sbit  __at (_P7+1)  P71;
__sbit  __at (_P7+2)  P72;
__sbit  __at (_P7+3)  P73;
__sbit  __at (_P7+4)  P74;
__sbit  __at (_P7+5)  P75;
__sbit  __at (_P7+6)  P76;
__sbit  __at (_P7+7)  P77;

#endif
