// name: FUN_100316f84
// address: 100316f84

int FUN_100316f84(undefined8 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_90,0x38);
  local_8c = 0xf;
  local_90 = param_2;
  local_8f = param_3;
  local_8e = param_4;
  iVar2 = FUN_1002fc1ae(param_1,0x74647364,&local_90);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

