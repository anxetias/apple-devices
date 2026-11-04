// name: FUN_10038ed63
// address: 10038ed63

int FUN_10038ed63(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_100160255(*param_1,&local_60);
  if (iVar2 == -0x80) goto LAB_10038eefc;
  if (iVar2 == 0) {
    iVar2 = FUN_100160772(*param_1,param_2);
    if (iVar2 == -0x80) goto LAB_10038eefc;
    if (iVar2 == 0) {
      uStack_54 = 0;
      local_58 = param_4;
      iVar2 = FUN_100160894(*param_1,&local_58,param_3);
      if (iVar2 == -0x80) goto LAB_10038eefc;
      if (iVar2 == 0) {
        iVar2 = FUN_100160772(*param_1,local_60);
        goto LAB_10038eefc;
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
LAB_10038eefc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

