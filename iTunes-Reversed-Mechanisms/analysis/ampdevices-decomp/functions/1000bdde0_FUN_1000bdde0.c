// name: FUN_1000bdde0
// address: 1000bdde0

uint FUN_1000bdde0(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 local_20;
  int local_18;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_18 = (int)((ulong)(&stack0x4faf365cb260a861 + ((ulong)&local_20 & 0x4faf365cb260a881) * -2)
                  ^ 0x9648b1bbe9003e6) * 0x2b3eb91b;
  bVar2 = (char)((ulong)(&stack0x4faf365cb260a861 + ((ulong)&local_20 & 0x4faf365cb260a881) * -2) ^
                0x9648b1bbe9003e6) + 0xab;
  bVar1 = bVar2 >> 2;
  bVar1 = ((char)(((byte)((char)bVar2 >> 7) >> 6) +
                 ((byte)((uint)bVar1 + ((uint)bVar1 + (uint)bVar1 * 8) * 4 >> 8) ^ bVar2)) >> 2) -
          0x27U & 0x86;
  bVar1 = ((byte)(bVar1 + (char)((uint)bVar1 * 0xb3 >> 0xe) * -0x5c + 0x71) >> 4) + 0xa4;
  local_20 = param_1;
  (*(code *)(*(long *)(&DAT_10082edf8 + (ulong)(byte)((bVar1 + (bVar1 / 5 & 0xfc) * -5) - 8) * 8) +
            -0xe))();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return local_14 ^ 0x3a3402de;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

