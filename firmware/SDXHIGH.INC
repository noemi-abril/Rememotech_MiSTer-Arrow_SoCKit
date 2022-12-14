;
; SDX ROM use of high memory
;

LSTLOW	EQU	0D3FFH
BDOSADDR EQU	0D700H
LSTHIGH	EQU	0D700H
JP59K	EQU	0D706H
CPMLOC	EQU	0D708H
DSKMSG	EQU	0D7BAH
DSKERR	EQU	0D7C6H
ERRFLG	EQU	0D7E5H
PRINT0	EQU	0D804H
CRLF0	EQU	0D80EH
CHNL1	EQU	0D840H
CHNL2	EQU	0D86AH
CHNL3	EQU	0D894H
CHNL4	EQU	0D8BEH
CHNL5	EQU	0D8E8H
LINPUT	EQU	0D8F4H
IXTEMP	EQU	0D8F6H
STORE	EQU	0D8F8H
USERSAV	EQU	0D912H
CURDSK	EQU	0DA42H

BIOSADDR EQU	0E500H
DPH_A	EQU	0E533H
DPH_B	EQU	0E543H
DPH_C	EQU	0E553H
DPH_D	EQU	0E563H
DPH_E	EQU	0E573H
DPH_F	EQU	0E583H
DPH_G	EQU	0E593H
DPH_H	EQU	0E5A3H
DPH_I	EQU	0E5B3H
DMA_DEF	EQU	0E680H
DISCASS	EQU	0E880H
DIRBUF	EQU	0E8C0H
VECST	EQU	0E940H
AVEC_AB	EQU	0E940H
CVEC_AB	EQU	0E954H
AVEC_C	EQU	0E964H
CVEC_C	EQU	0E978H
VECEND	EQU	0E9C0H

DBUF	EQU	0E9C0H
TDBUF	EQU	0EAC0H
PTRKP	EQU	0EB80H
LCA	EQU	0EB82H
EFLAG	EQU	0EB83H
LSTOUTX	EQU	0EB84H
SWUF	EQU	0EB85H
CURDRV	EQU	0EB86H
TRACKS	EQU	0EB87H
BFID	EQU	0EB8BH
CFGTAB	EQU	0EB93H
TRUST	EQU	0EB9BH
DRVRQ	EQU	0EB9CH
CFGBYT	EQU	0EB9DH
TRKRQ	EQU	0EB9EH
SECRQ	EQU	0EBA0H
DMARQ	EQU	0EBA2H
CDDRV	EQU	0EBA4H
BPNT	EQU	0EBA5H
RETRY	EQU	0EBA6H
TOAM	EQU	0EBA7H
JPLINK	EQU	0EBA9H
ULINK1	EQU	0EBACH
SKEW	EQU	0EBAFH
CNFG	EQU	0EBB0H
READ	EQU	0EBB6H
WRITE	EQU	0EBBEH
BBLKRD	EQU	0EBC6H
INITLIZ	EQU	0EBCCH
SWROM	EQU	0EBD9H
SWPAGE	EQU	0EBDBH
DISCROM	EQU	0EBE1H
CALSUB	EQU	0EC01H
PAGE0	EQU	0EC09H
PAGEX	EQU	0EC28H
SPARE	EQU	0EC2DH
JPTABLE	EQU	0EC2EH
RETBASIC EQU	0EC46H
PBASE	EQU	0EC4EH
PEND	EQU	0EC5EH

RNGFLG	EQU	0F00FH
MBXCNT	EQU	0F03DH
NEWNAM	EQU	0F043H
RNGERR	EQU	0F046H
INTA	EQU	0F0D1H
NLIST	EQU	0F052H
LSTBAS	EQU	0F054H
MBXTOP	EQU	0F072H
MBXBEG	EQU	0F074H
MBXEND	EQU	0F076H
MBXSIZE	EQU	0F078H
MBXFREE	EQU	0F07AH

; The RAM Disc support is incompatible with the NODE ROM,
; because we overwrite part of its memory space.
RECBUF	EQU	0F100H				; 128 byte sector
RAMDRV	EQU	RECBUF+00080H			; 1 byte
ZCOPY	EQU	RAMDRV+1			; copy routine copied here

LSTTOP	EQU	0F2FEH

; The SD Card support is incompatible with the NODE ROM,
; because we overwrite part of its memory space.
SECADR	EQU	0F300H				; word offset
CBLKBN	EQU	SECADR+2			; 4 byte block number
CBLKBF	EQU	CBLKBN+4			; 512 byte buffer
SDREGV	EQU	CBLKBF+00200H			; 16 byte area
SDLBA	EQU	SDREGV+16			; 4 byte LBA

SDXBDOS	EQU	0F5B0H
USRJMP	EQU	0F5B3H
DSCFLG	EQU	0F5D3H
KEYJP	EQU	0F5D4H

;
