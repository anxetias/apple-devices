// name: FUN_10034943e
// address: 10034943e

int FUN_10034943e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_478 [16];
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  int local_45a;
  int local_448 [7];
  char local_42c [1028];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001660b3(param_2,param_3,param_4,local_448,3);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (local_448[0] == 0x41464350) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar3 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_45a = FUN_100170ef7(param_2);
          local_464 = local_42c;
          local_468 = 0x8220202;
          local_45c = 0x400;
          __os_log_impl(0x100000000,uVar3,1,"airtraffic> saved artwork to \"%{public}s\" (%u bytes)"
                        ,&local_468,0x12);
        }
      }
      goto LAB_1003495c4;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_468 = 0x8220202;
      local_464 = "Assertion failure";
      local_45c = 0x400;
      local_45a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_468,0x12);
    }
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar3 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
  if (cVar1 != '\0') {
    FUN_1001b8dfc(local_478,param_4);
    local_464 = (char *)FUN_1001b83ae(local_478);
    local_468 = 0x8220202;
    local_45c = 0x400;
    local_45a = iVar2;
    __os_log_impl(0x100000000,uVar3,0x10,
                  "airtraffic> failed to save artwork to file \"%{public}s\" (%d)",&local_468,0x12);
    FUN_1001b7a50(local_478);
  }
LAB_1003495c4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

