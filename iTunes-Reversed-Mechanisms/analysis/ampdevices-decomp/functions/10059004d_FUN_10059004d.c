// name: FUN_10059004d
// address: 10059004d

undefined8 FUN_10059004d(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  int local_23a;
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10017d489(param_1,local_228);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      uVar3 = FUN_1001e21dd(local_228);
      uVar4 = FUN_100590118(uVar3);
      goto LAB_1005900b0;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_248 = 0x8220202;
      local_244 = "Assertion failure";
      local_23c = 0x400;
      local_23a = iVar2;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_248,0x12);
    }
  }
  uVar4 = 0;
LAB_1005900b0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

