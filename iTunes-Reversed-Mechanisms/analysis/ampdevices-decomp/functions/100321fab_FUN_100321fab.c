// name: FUN_100321fab
// address: 100321fab

undefined8 * FUN_100321fab(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
LAB_100322028:
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackDataIsValid(inTrackData)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*(int *)(param_2 + 0x80) != 0x74646174) {
      uVar7 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar7,0x10);
      if (cVar6 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar6 = FUN_1001782e9(0,1);
      if (cVar6 == '\0') goto LAB_100322028;
    }
    lVar2 = *(long *)(param_2 + 0x2da8);
    uVar3 = *(undefined4 *)(param_2 + 0x2da4);
    uVar4 = *(undefined4 *)(param_2 + 0x2da8);
    uVar5 = *(undefined4 *)(param_2 + 0x2dac);
    *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x2da0);
    *(undefined4 *)((long)param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 1) = uVar4;
    *(undefined4 *)((long)param_1 + 0xc) = uVar5;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

