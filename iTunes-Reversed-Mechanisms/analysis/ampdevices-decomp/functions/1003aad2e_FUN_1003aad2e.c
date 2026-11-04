// name: FUN_1003aad2e
// address: 1003aad2e

void FUN_1003aad2e(ushort *param_1,char param_2,short *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  ushort *puVar6;
  undefined1 local_128 [264];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_3 = 0;
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = param_1[1];
    if (param_2 != '\0' && uVar2 != 0x28) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        FUN_1001e1c39(param_1,param_3);
        return;
      }
      goto LAB_1003aae81;
    }
    local_128[0] = 0;
    if (uVar1 == (uVar2 == 0x28)) {
LAB_1003aae15:
      FUN_1001e1c39(param_1,param_3);
    }
    else {
      puVar6 = param_1 + 2;
      if (uVar2 != 0x28) {
        puVar6 = param_1 + 1;
      }
      uVar5 = 0;
      do {
        uVar3 = puVar6[uVar5];
        if (9 < (ushort)(uVar3 - 0x30)) {
          if ((uVar3 != 0x29 || uVar2 != 0x28) || uVar5 == 0) goto LAB_1003aae15;
          break;
        }
        local_128[uVar5] = (char)uVar3;
        uVar5 = uVar5 + 1;
      } while ((short)uVar5 != (ushort)(uVar1 - (uVar2 == 0x28)));
      local_128[uVar5 & 0xffffffff] = 0;
      iVar4 = FUN_1001e3338(local_128);
      FUN_1001c34e1(iVar4 + 1U & 0xffff | 0x23f00000,param_3,&DAT_100712030);
      if (*param_3 == 0) {
        FUN_1001e1b6d((long)iVar4,param_3);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_1003aae81:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

