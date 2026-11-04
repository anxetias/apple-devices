// name: FUN_10009abb0
// address: 10009abb0

uint FUN_10009abb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 local_40 [2];
  undefined8 local_38;
  uint local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = ((ulong)(&stack0x080ccad68d8b66e7 + ((ulong)local_40 & 0x80ccad68d8b6727) * -2) ^
          0x68dc80980043b7e) * 0x3df53769;
  local_40[0] = (undefined4)lVar2;
  cVar1 = (char)lVar2;
  uVar5 = cVar1 * 0x2f & 0xffff;
  bVar3 = (cVar1 + (((char)(uVar5 >> 8) >> 3) + (char)(uVar5 >> 0xf)) * -0x2c ^ 0xbbU) * -0x14;
  bVar4 = bVar3 + 0x17;
  if (bVar3 < 0xe9) {
    bVar4 = bVar3;
  }
  bVar4 = ((bVar4 ^ 0xc) & bVar3) + 0x26;
  cVar1 = (char)(((uint)bVar4 + (uint)bVar4 * 4) * 5 >> 8);
  uVar5 = (char)(((byte)((byte)(((byte)(bVar4 - cVar1) >> 1) + cVar1) >> 6 | 0x74) % 0x57) * '(') *
          -0x31 & 0xffff;
  local_38 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)(((char)(uVar5 >> 8) >> 2) + (char)(uVar5 >> 0xf) | 0x96) + 0x79] + -10))();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return local_30 ^ 0x3a3402de;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

