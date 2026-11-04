// name: FUN_1005d0a14
// address: 1005d0a14

int FUN_1005d0a14(long *param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined2 local_246;
  char *local_244;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e04f5(&DAT_10075bd46,local_238);
  iVar3 = (**(code **)(*param_1 + 0x30))(param_1,local_238);
  iVar4 = 0;
  if (iVar3 != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar2 != '\0') {
      local_258 = 0x8220302;
      local_254 = "Alex";
      local_24c = 0x400;
      local_246 = 0x822;
      local_244 = "Samantha";
      local_24a = iVar3;
      __os_log_impl(0x100000000,uVar1,0x10,
                    "%{public}s voice not available (%d), trying %{public}s voice",&local_258,0x1c);
    }
    FUN_1001e04f5("Samantha",local_238);
    iVar3 = (**(code **)(*param_1 + 0x30))(param_1,local_238);
    if (iVar3 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar2 != '\0') {
        local_258 = 0x8220202;
        local_254 = "Samantha";
        local_24c = 0x400;
        local_24a = iVar3;
        __os_log_impl(0x100000000,uVar1,0x10,
                      "%{public}s voice not available (%d), trying default voice",&local_258,0x12);
      }
      iVar3 = (**(code **)(*param_1 + 0x38))(param_1,local_238);
      if (iVar3 != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar1 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        iVar4 = iVar3;
        if (cVar2 != '\0') {
          local_258 = 0x4000100;
          local_254 = (char *)CONCAT44(local_254._4_4_,iVar3);
          __os_log_impl(0x100000000,uVar1,0x10,"default voice not available (%d)",&local_258,8);
        }
      }
    }
  }
  if (param_2 != 0) {
    FUN_1001e1c39(local_238);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

