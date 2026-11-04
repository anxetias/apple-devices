// name: FUN_100466e48
// address: 100466e48

void FUN_100466e48(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 local_198 [80];
  long local_148;
  int local_140;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_2 = 0;
  FUN_1001a3e13(param_1,local_198);
  iVar1 = local_140;
  if (local_140 != 0) {
    uVar5 = local_140 - 1;
    lVar2 = 0;
    uVar4 = (ulong)uVar5;
    do {
      if (*(char *)(local_148 + uVar4) == '.') {
        uVar3 = 0xff;
        if ((uint)lVar2 < 0xff) {
          uVar3 = (undefined1)lVar2;
        }
        *param_2 = uVar3;
        FUN_1001c631b((((ulong)uVar5 + local_148) - lVar2) + 1,param_2 + 1);
        break;
      }
      local_140 = (int)uVar4;
      lVar2 = lVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (iVar1 != (int)lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

