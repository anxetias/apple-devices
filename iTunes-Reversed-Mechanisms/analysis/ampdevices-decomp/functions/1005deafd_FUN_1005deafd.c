// name: FUN_1005deafd
// address: 1005deafd

long FUN_1005deafd(long param_1)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = 0;
  iVar6 = 0;
  do {
    puVar2 = *(uint **)(param_1 + lVar4 * 8);
    if (puVar2 != (uint *)0x0) {
      uVar1 = *puVar2;
      iVar6 = iVar6 + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x10);
  lVar4 = FUN_1001c63e1(iVar6);
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "buffer != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar8 = 0;
    lVar9 = lVar4;
    do {
      puVar2 = *(uint **)(param_1 + lVar8 * 8);
      if (puVar2 != (uint *)0x0) {
        uVar1 = *puVar2;
        uVar7 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                       uVar1 << 0x18);
        FUN_1001c631b(puVar2,lVar9,uVar7);
        lVar9 = lVar9 + uVar7;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x10);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

