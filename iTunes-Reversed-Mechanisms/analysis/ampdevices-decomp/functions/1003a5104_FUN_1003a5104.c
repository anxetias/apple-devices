// name: FUN_1003a5104
// address: 1003a5104

undefined8 FUN_1003a5104(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *param_2;
  if (**(long **)(param_1 + 8) == 0) {
LAB_1003a5148:
    if ((**(byte **)(param_1 + 0x10) & 1) == 0) {
      FUN_100478704();
    }
    else {
      FUN_100478736(lVar1,**(undefined8 **)(param_1 + 0x18));
    }
    uVar4 = 0x2349;
  }
  else if (lVar1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "trackInfo != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar4 = 0;
    for (plVar3 = *(long **)(lVar1 + 0x68); plVar3 != (long *)0x0; plVar3 = (long *)plVar3[10]) {
      if (*plVar3 == **(long **)(param_1 + 8)) goto LAB_1003a5148;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

