// name: FUN_1002ae348
// address: 1002ae348

undefined1 FUN_1002ae348(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
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
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else if (*(char *)(param_1 + 0x12f) == '\x02') {
    uVar4 = 0;
  }
  else {
    for (puVar3 = *(undefined8 **)(param_1 + 0x58); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      *(byte *)((long)puVar3 + 0x4a) = *(byte *)((long)puVar3 + 0x4a) & 0xfb;
    }
    *(undefined1 *)(param_1 + 0x12f) = 2;
    *(undefined8 *)(param_1 + 0x60) = 0;
    FUN_1002fef76();
    uVar4 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

