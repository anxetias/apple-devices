// name: FUN_1000bfa70
// address: 1000bfa70

uint FUN_1000bfa70(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 local_48;
  uint local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  uint local_18;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = ((ulong)(&stack0x488fc2df4e2d9386 + ((ulong)&local_48 & 0x488fc2df4e2d93ce) * -2) ^
          0x31070c8fbc279cd3) * 0x54361bb5;
  local_48 = 0x480746673cfddffc;
  local_40 = (uint)lVar2;
  local_1c = local_40 ^ 0x2bb92423;
  local_20 = (((param_2 ^ 0xd6ff5ed7) + (param_2 & 0xd6ff5ed7) * 2) - local_40) + 0x7d2ffb80;
  cVar1 = (char)lVar2;
  local_38 = param_3;
  local_30 = param_1;
  local_28 = param_4;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)((byte)((uint)(byte)(cVar1 + ((char)((uint)(int)(short)(cVar1 * 0x4f) >> 10) -
                                                 (cVar1 >> 7)) * -0xd + 0x89) * 0xbb >> 0xd) | 0x71)
              + 0x43] + -0xe))();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return local_18 ^ 0x3a3402de;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

