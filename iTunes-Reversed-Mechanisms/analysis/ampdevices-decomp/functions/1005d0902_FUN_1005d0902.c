// name: FUN_1005d0902
// address: 1005d0902

int FUN_1005d0902(long param_1,undefined2 *param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = 0;
  }
  FUN_1005cec66(param_1);
  FUN_1001c62d9(param_1 + 0xc,0x16a);
  sVar2 = _GetVoiceDescription(0,param_1 + 0xc,0x16a);
  if (sVar2 == 0) {
    if (param_2 != (undefined2 *)0x0) {
      FUN_1001e4f4b(param_1 + 0x1c,param_2);
    }
    *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
  }
  else if (sVar2 != -0x80) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (int)sVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  FUN_1001e9eb9(param_1 + 0x180);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return (int)sVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

