// name: FUN_1000b1120
// address: 1000b1120

undefined4 FUN_1000b1120(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 local_20;
  undefined4 local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = (uint)(&stack0x08896f0fad3f68ed + ((ulong)&local_38 & 0x8896f0fad3f6925) * -2) ^
          0xa0b0357c;
  local_14 = uVar4 * -0x3df53769 + 5;
  local_28 = (param_2 ^ 0xdfbfefbf) + (param_2 & 0xdfbfefbf) * 2 + 0x2f6cd2fc ^ uVar4 * 0x3df53769;
  cVar1 = (((byte)((ulong)(&stack0x08896f0fad3f68ed + ((ulong)&local_38 & 0x8896f0fad3f6925) * -2)
                  >> 1) & 0x34) % 0x2a | 0x1f) + 0x45;
  cVar1 = cVar1 * cVar1;
  uVar4 = cVar1 * 0x67;
  cVar1 = cVar1 + ((char)((uVar4 & 0xffff) >> 0xf) + (char)(uVar4 >> 0xc)) * -0x28;
  bVar2 = cVar1 >> 1;
  bVar3 = bVar2 - 0x24;
  if (-1 < cVar1) {
    bVar3 = bVar2;
  }
  local_38 = param_4;
  local_30 = param_3;
  local_20 = param_1;
  (*(code *)((&PTR_DAT_10082ee00)[(bVar3 ^ 0x34) + 0xf7] + -0xb))();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

