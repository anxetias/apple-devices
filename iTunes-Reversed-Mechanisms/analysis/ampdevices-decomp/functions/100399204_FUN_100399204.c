// name: FUN_100399204
// address: 100399204

void FUN_100399204(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "userData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(long *)(param_4 + 0x458) != 0) {
    lVar2 = FUN_10026647d();
    if (lVar2 == *(long *)(param_4 + 0x458)) {
      if (param_2 != 0x706f6475) {
        if (param_2 == 0x706f6472) {
          *(undefined1 *)(param_4 + 0x464) = 0;
          goto LAB_10039928d;
        }
        if (param_2 != 0x706f646d) goto LAB_10039928d;
      }
      *(bool *)(param_4 + 0x464) = param_2 == 0x706f646d;
    }
  }
LAB_10039928d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

