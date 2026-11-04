// name: FUN_1005551f4
// address: 1005551f4

int FUN_1005551f4(long param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  uint local_68;
  undefined8 local_64;
  undefined2 local_5c;
  char *local_5a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined1 *)(param_1 + 0x64b6) = 1;
  if (*(char *)(param_1 + 0x64a8) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = "mPlayerOpen";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_10055535a;
  }
  FUN_1001c62d9(param_2,0xa8);
  iVar4 = 0;
  if (*(long **)(param_1 + 0x38) == (long *)0x0) {
LAB_10055529a:
    lVar5 = 0;
  }
  else {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x38) + 0x140))();
    if (cVar1 == '\0') goto LAB_10055529a;
    iVar2 = (**(code **)(**(long **)(param_1 + 0x38) + 0x150))();
    if (iVar2 == 0) {
      param_2[2] = 1;
      uVar3 = (**(code **)(**(long **)(param_1 + 0x38) + 0x158))();
      *(undefined8 *)(param_2 + 4) = uVar3;
      lVar5 = 1;
    }
    else {
      lVar5 = 0;
      iVar4 = iVar2;
    }
  }
  iVar2 = (int)lVar5;
  if (*(long *)(param_1 + 0x64c0) != 0) {
    local_68 = local_68 & 0xffffff00;
    local_64 = (char *)((ulong)local_64 & 0xffffffff00000000);
    FUN_1001799f1();
    param_2[lVar5 * 10 + 2] = 2;
    uVar3 = FUN_100170dc5(0,(long)&local_64 + 4,(ulong)local_64 & 0xffffffff);
    *(undefined8 *)(param_2 + lVar5 * 10 + 4) = uVar3;
    iVar2 = iVar2 + 1;
    FUN_100179a7b(*(undefined8 *)(param_1 + 0x64c0));
    *(undefined8 *)(param_1 + 0x64c0) = 0;
  }
  *param_2 = iVar2;
  *(undefined1 *)(param_1 + 0x64a8) = 0;
  if (*(long *)(param_1 + 0x4b0) != 0) {
    iVar2 = FUN_1001ed4ad(*(long *)(param_1 + 0x4b0),0x7fffffffffffffff);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_68 = 0x8220202;
        local_64 = "Assertion failure";
        local_5c = 0x400;
        local_5a = (char *)CONCAT44(local_5a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_68,0x12);
      }
    }
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x1d0))();
  }
LAB_10055535a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

