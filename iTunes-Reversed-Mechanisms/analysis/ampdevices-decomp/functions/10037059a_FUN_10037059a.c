// name: FUN_10037059a
// address: 10037059a

void FUN_10037059a(char *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 2) {
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar1 != '\0') {
      local_38 = 0x8000100;
      local_34 = param_1;
      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,"AFC connection %p invalidated",
                    &local_38,0xc);
    }
  }
  else if (param_2 == 1) {
    lVar3 = _AFCOperationGetContext(param_3);
    if (lVar3 != 0) {
      iVar2 = FUN_1001e9809(lVar3);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x400;
          local_2a = iVar2;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

