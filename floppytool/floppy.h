#ifndef FLOPPY_H__
#define FLOPPY_H__

#pragma once

typedef unsigned char	u8;
typedef unsigned short	u16;
typedef unsigned long	u32;

//软盘映像
struct stuFloppy
{
	
};

//引导区结构
struct stuBPB
{
	u8	BS_JMPBoot[3];
	u8	BS_OEMName[8];
	u16	BPB;
};

union uFATRecord
{
	struct {
		u16	data;
	};

	struct {
		u16	record1:12;
	};

	struct {
		u16 :4;
		u16	record2:12;
	};
};





#endif//FLOPPY_H__
