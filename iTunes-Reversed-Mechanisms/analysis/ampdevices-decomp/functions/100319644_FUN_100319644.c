// name: FUN_100319644
// address: 100319644

undefined8 FUN_100319644(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x3c);
    uVar3 = 0;
    if (iVar1 < 0x48545450) {
      if ((iVar1 != 0x43442020) && (iVar1 != 0x44574e4c)) goto LAB_1003196d4;
    }
    else if ((iVar1 != 0x48545450) && ((iVar1 != 0x53485244 && (iVar1 != 0x4d425546))))
    goto LAB_1003196d4;
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
LAB_1003196d4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

