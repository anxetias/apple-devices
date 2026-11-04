// name: FUN_10017a740
// address: 10017a740

void FUN_10017a740(long param_1,undefined4 *param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)uVar3;
  uVar4 = (ulong)(0x40 - (uVar2 & 0x3f));
  *(ulong *)(param_1 + 0x20) = uVar3 + param_3;
  if ((long)param_3 < (long)uVar4) {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      param_1 = param_1 + (ulong)(uVar2 & 0x3f);
LAB_10017a84d:
      FUN_1001c631b(param_2,param_1 + 0x38);
      return;
    }
  }
  else {
    if ((uVar3 & 0x3f) != 0) {
      FUN_1001c631b(param_2,param_1 + (ulong)(uVar2 & 0x3f) + 0x38,uVar4);
      FUN_10017a87a(param_1 + 0x38,param_1 + 0x28);
      param_2 = (undefined4 *)((long)param_2 + uVar4);
      param_3 = param_3 - uVar4;
    }
    if (0x3f < (long)param_3) {
      uVar3 = param_3;
      do {
        local_78 = *param_2;
        uStack_74 = param_2[1];
        uStack_70 = param_2[2];
        uStack_6c = param_2[3];
        local_68 = param_2[4];
        uStack_64 = param_2[5];
        uStack_60 = param_2[6];
        uStack_5c = param_2[7];
        local_58 = param_2[8];
        uStack_54 = param_2[9];
        uStack_50 = param_2[10];
        uStack_4c = param_2[0xb];
        local_48 = param_2[0xc];
        uStack_44 = param_2[0xd];
        uStack_40 = param_2[0xe];
        uStack_3c = param_2[0xf];
        FUN_10017a87a(&local_78,param_1 + 0x28);
        param_2 = param_2 + 0x10;
        param_3 = uVar3 - 0x40;
        bVar1 = 0x7f < uVar3;
        uVar3 = param_3;
      } while (bVar1);
    }
    if (param_3 == 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) goto LAB_10017a84d;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

