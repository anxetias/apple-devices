// name: FUN_1001f21b4
// address: 1001f21b4

void FUN_1001f21b4(long param_1,ulong param_2,byte *param_3,ulong param_4,ulong *param_5,
                  uint param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte local_67 [47];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 != 0 && param_2 != 0) {
    uVar5 = 0;
    uVar6 = 0;
    do {
      bVar1 = *(byte *)(param_1 + uVar5);
      if ((((ulong)bVar1 < 0x3f) && ((0x5000004000000000U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) ||
         (((param_6 & 1) != 0 && (bVar1 == 0x22)))) {
        uVar3 = _snprintf((char *)local_67,0x20,"%u");
        bVar1 = (byte)uVar3;
        if (param_4 < (uVar3 & 0xff) + uVar6 + 3) goto LAB_1001f22d7;
        param_3[0] = 0x26;
        param_3[1] = 0x23;
        param_3 = param_3 + 2;
        if (bVar1 == 0) {
          bVar1 = 0;
        }
        else {
          uVar4 = 0;
          do {
            param_3[uVar4] = local_67[uVar4];
            uVar4 = uVar4 + 1;
          } while (uVar4 < bVar1);
          param_3 = param_3 + uVar4;
        }
        *param_3 = 0x3b;
        uVar6 = uVar6 + 3 + (ulong)bVar1;
      }
      else {
        bVar2 = bVar1;
        if ((byte)(bVar1 - 0xb) < 0xfe) {
          bVar2 = 0x20;
        }
        if (0x1f < bVar1) {
          bVar2 = bVar1;
        }
        if (bVar1 == 0xd) {
          bVar2 = bVar1;
        }
        *param_3 = bVar2;
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
      if ((param_2 <= uVar5) || (param_3 = param_3 + 1, param_4 <= uVar6)) goto LAB_1001f22d7;
    } while( true );
  }
  uVar6 = 0;
LAB_1001f22d7:
  *param_5 = uVar6;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

