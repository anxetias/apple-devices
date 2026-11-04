// name: FUN_100320aca
// address: 100320aca

undefined1 FUN_100320aca(long param_1,char param_2,undefined1 param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 300) == param_2) {
    uVar1 = 0;
    goto LAB_100320b4c;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "trackData != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
LAB_100320b36:
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if ((*(ulong *)(*(long *)(param_1 + 0x10) + 0x1bb0) >> 0x2e & 1) == 0) goto LAB_100320b36;
  }
  FUN_1003208ac(param_1,(int)param_2,uVar1,param_3);
  uVar1 = 1;
LAB_100320b4c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

