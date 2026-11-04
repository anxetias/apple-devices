// name: FUN_10052dcf2
// address: 10052dcf2

undefined8 FUN_10052dcf2(long param_1,undefined4 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = 0;
  plVar1 = *(long **)(param_1 + 0x558);
  if (plVar1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mSubDataHandler != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x98))
                      (plVar1,*(undefined8 *)(param_1 + 0x550),param_3,*param_2,1,&local_40);
    if ((int)uVar3 == 0) {
      *(long *)(param_1 + 0x550) = *(long *)(param_1 + 0x550) + local_40;
      uVar3 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

