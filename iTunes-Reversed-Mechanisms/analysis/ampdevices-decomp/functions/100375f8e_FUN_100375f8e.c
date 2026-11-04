// name: FUN_100375f8e
// address: 100375f8e

int FUN_100375f8e(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10017d477(param_1 + 0x18,local_88,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      *param_2 = local_68;
    }
    else {
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
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

