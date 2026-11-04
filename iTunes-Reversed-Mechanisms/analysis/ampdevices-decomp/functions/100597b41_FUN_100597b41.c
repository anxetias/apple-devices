// name: FUN_100597b41
// address: 100597b41

undefined8 * FUN_100597b41(long param_1,short param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    puVar3 = (undefined8 *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    for (puVar3 = *(undefined8 **)(param_1 + 0x58); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      if (((*(byte *)puVar3[3] & 1) != 0) && (*(short *)((byte *)puVar3[3] + 2) == param_2))
      goto LAB_100597ba9;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_100597ba9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

