// name: FUN_10046f802
// address: 10046f802

undefined8
FUN_10046f802(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar3 = (int *)_CMBaseObjectGetDerivedStorage();
  uVar6 = 0xffffffce;
  if ((((piVar3 == (int *)0x0) || (*piVar3 != 0x62797473)) ||
      (plVar1 = *(long **)(piVar3 + 2), plVar1 == (long *)0x0)) || ((int)plVar1[1] != 0x62797473))
  goto LAB_10046f8f3;
  cVar2 = FUN_100170633(param_2,*(undefined8 *)PTR__kCMByteStreamProperty_EntireLength_10082bbd0);
  if (cVar2 == '\0') {
    cVar2 = FUN_100170633(param_2,*(undefined8 *)
                                   PTR__kCMByteStreamProperty_AvailableLength_10082bbc8);
    if (cVar2 != '\0') {
      local_58 = 0;
      uStack_54 = 0;
      uVar6 = 0;
      FUN_10046fa3a(param_1,0,&local_58);
      uVar4 = _CFNumberCreate(param_3,4,&local_58);
      *param_4 = uVar4;
      goto LAB_10046f8f3;
    }
    cVar2 = _CFEqual(param_2,*(undefined8 *)PTR__kCMByteStreamProperty_URL_10082bbe8);
    if (cVar2 == '\0') {
      cVar2 = _CFEqual(param_2,*(undefined8 *)
                                PTR__kCMByteStreamProperty_EntireLengthAvailableOnDemand_10082bbd8);
      if (cVar2 == '\0') {
        cVar2 = _CFEqual(param_2,*(undefined8 *)
                                  PTR__kCMByteStreamProperty_ThroughputStatistics_10082bbe0);
        if (cVar2 == '\0') {
          uVar6 = 0xffffce10;
          goto LAB_10046f8f3;
        }
        uVar6 = (**(code **)(*plVar1 + 0x68))(plVar1,param_3);
      }
      else {
        if ((long *)plVar1[3] == (long *)0x0) goto LAB_10046f97b;
        cVar2 = (**(code **)(*(long *)plVar1[3] + 0x78))();
        puVar5 = (undefined8 *)PTR__kCFBooleanTrue_10082e038;
        if (cVar2 == '\0') {
          puVar5 = (undefined8 *)PTR__kCFBooleanFalse_10082e030;
        }
        uVar6 = *puVar5;
      }
    }
    else {
      if (plVar1[3] == 0) {
LAB_10046f97b:
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "instance->mDataHandler != __null";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_10046f8f3;
      }
      uVar6 = (**(code **)(*plVar1 + 0x70))(plVar1,param_3);
    }
  }
  else {
    uVar6 = (**(code **)(*plVar1 + 0x60))(plVar1);
    local_58 = (undefined4)uVar6;
    uStack_54 = (undefined4)((ulong)uVar6 >> 0x20);
    uVar6 = _CFNumberCreate(param_3,4);
  }
  *param_4 = uVar6;
  uVar6 = 0;
LAB_10046f8f3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

