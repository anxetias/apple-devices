// name: FUN_10020d864
// address: 10020d864

undefined1 FUN_10020d864(undefined8 param_1,char *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  int local_43a;
  undefined1 local_428 [1032];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_10020bf57(param_1,local_428);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      _snprintf(param_2,0x400,"Payload/%s/Info.plist",local_428);
      uVar1 = 1;
      goto LAB_10020d8d6;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x400;
      local_43a = iVar3;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_448,0x12);
    }
  }
  uVar1 = 0;
LAB_10020d8d6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

