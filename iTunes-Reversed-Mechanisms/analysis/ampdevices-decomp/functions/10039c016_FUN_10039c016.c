// name: FUN_10039c016
// address: 10039c016

long FUN_10039c016(undefined8 param_1,int param_2,int param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_68;
  int local_60;
  undefined2 local_5c;
  char *local_5a;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_3 != 0) == (param_2 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      local_60 = 1;
      local_5c = 0x822;
      local_5a = "((dulcimerObjectID != 0) ^ (rawObjectID != 0)) != 0";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    lVar2 = 0;
    goto LAB_10039c0ef;
  }
  local_68._0_4_ = 0x856448;
  local_68._4_4_ = 1;
  local_60 = param_2;
  local_48 = &local_68;
  lVar2 = FUN_10039c40c(param_1,&local_68);
  if (local_48 == &local_68) {
    lVar3 = 0x20;
LAB_10039c0aa:
    (**(code **)(*local_48 + lVar3))();
  }
  else {
    lVar3 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_10039c0aa;
  }
  if (lVar2 == 0) {
    local_68._0_4_ = 0x856448;
    local_68._4_4_ = 1;
    local_60 = param_3;
    local_48 = &local_68;
    lVar2 = FUN_10039c40c(param_1,&local_68);
    if (local_48 == &local_68) {
      lVar3 = 0x20;
    }
    else {
      lVar3 = 0x28;
      if (local_48 == (long *)0x0) goto LAB_10039c0ef;
    }
    (**(code **)(*local_48 + lVar3))();
  }
LAB_10039c0ef:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar2;
}

