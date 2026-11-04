// name: FUN_1000b32a0
// address: 1000b32a0

void FUN_1000b32a0(void)

{
  byte bVar1;
  long lVar2;
  undefined *local_20;
  int local_18;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = ((ulong)(&stack0x3a84b57a3d6f8840 + ((ulong)&local_20 & 0x3a84b57a3d6f8860) * -2) ^
          0xcfc714684c80ea79) * 0x14e649c;
  bVar1 = (char)lVar2 << 2 | 0x52;
  local_20 = (&PTR_DAT_10082ee00)
             [(byte)(((byte)(((uint)(byte)((char)((uint)(int)(short)((char)bVar1 * 0x29) >> 0xc) -
                                           ((char)bVar1 >> 7) | 0x92) * -0x14 & 0xff) * 0x19 >> 9) &
                     0xc) * '\t' + 0x62) + 0xa3] + -3;
  local_18 = 0x5c293a81 -
             ((int)((ulong)(&stack0x3a84b57a3d6f8840 + ((ulong)&local_20 & 0x3a84b57a3d6f8860) * -2)
                   ^ 0xcfc714684c80ea79) * 0x3f2007f + (int)lVar2);
  FUN_1000bc950();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

