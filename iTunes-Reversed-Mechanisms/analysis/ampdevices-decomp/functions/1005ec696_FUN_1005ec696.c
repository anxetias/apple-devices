// name: FUN_1005ec696
// address: 1005ec696

void FUN_1005ec696(undefined8 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == '\0') {
    FUN_1001c62d9(local_60,0x28);
    local_60[0] = 2;
    local_58 = param_1;
    iVar2 = FUN_1001c0269(0x41704576,0x414d524e,0,local_60);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      return;
    }
  }
  else {
    FUN_1005e9a2c();
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      FUN_1005ea388(param_1,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

