// name: FUN_1005f1520
// address: 1005f1520

undefined8 FUN_1005f1520(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "amDeviceRef != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(1,0);
    uVar3 = 0;
  }
  else {
    FUN_100238ca8(local_68,param_1 + 0x70);
    for (lVar5 = 0; lVar2 = FUN_10017076e(*(undefined8 *)(param_1 + 0x68)), lVar5 < lVar2;
        lVar5 = lVar5 + 1) {
      lVar2 = FUN_100170853(*(undefined8 *)(param_1 + 0x68),lVar5);
      if (lVar2 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be not NULL)";
          local_4c = 0x822;
          local_4a = "candidateRestorableDeviceRef";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = FUN_1001782e9(0,0);
        if (cVar1 != '\0') goto LAB_1005f15aa;
      }
      else {
LAB_1005f15aa:
        lVar4 = _AMRestorableDeviceCopyAMDevice(lVar2);
        if (lVar4 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "spCandidateAMDeviceRef != nullptr";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          lVar4 = 0;
        }
        else {
          cVar1 = FUN_100170633(lVar4,param_2);
          if (cVar1 != '\0') {
            uVar3 = FUN_1001705fc(lVar2);
            FUN_1005f2fc8(lVar4);
            goto LAB_1005f16dd;
          }
        }
        FUN_1005f2fc8(lVar4);
      }
    }
    uVar3 = 0;
LAB_1005f16dd:
    FUN_10015a142(local_68);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

