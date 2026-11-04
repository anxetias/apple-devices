// name: FUN_10053672c
// address: 10053672c

void FUN_10053672c(void *param_1,undefined8 param_2,void *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (void *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "fileSpec != nullptr";
LAB_100536845:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (param_3 != (void *)0x0) {
      _memcpy(param_3,param_1,0x420);
      uVar2 = FUN_100189e40(param_1);
      *(undefined4 *)((long)param_3 + 0x430) = uVar2;
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        FUN_100536603(param_2,param_3);
        return;
      }
      goto LAB_10053686c;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "fileLocation != nullptr";
      goto LAB_100536845;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_10053686c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

