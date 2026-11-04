// name: FUN_1003958de
// address: 1003958de

int FUN_1003958de(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *in_R8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = 4;
  uStack_54 = 0;
  iVar2 = FUN_100160894();
  if (iVar2 == -0x80) goto LAB_100395a95;
  if (iVar2 == 0) {
    local_58 = 4;
    uStack_54 = 0;
    iVar2 = FUN_100160894(param_1);
    if (iVar2 == -0x80) goto LAB_100395a95;
    if (iVar2 == 0) {
      local_58 = 4;
      uStack_54 = 0;
      iVar2 = FUN_100160894(param_1);
      if (iVar2 == -0x80) goto LAB_100395a95;
      if (iVar2 == 0) {
        *in_R8 = *in_R8 + 0xc;
        iVar2 = 0;
        goto LAB_100395a95;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  if (cVar1 != '\0') {
    local_4c = 0x400;
    uStack_50 = 1;
    uStack_54 = 0x7a0a90;
    local_58 = 0x8220202;
    local_4a = iVar2;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
LAB_100395a95:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

