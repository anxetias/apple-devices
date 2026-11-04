// name: FUN_10043fbde
// address: 10043fbde

void FUN_10043fbde(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_68;
  undefined8 uStack_64;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined2 uStack_52;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((*(long *)(param_1 + 0x4d0) == 0) && (0 < *(long *)(param_1 + 0x4c8))) &&
     (*(long *)(param_1 + 0x4b0) != 0)) {
    lVar2 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    if (lVar2 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_68 = 0x8220202;
        uStack_64 = "Assertion failure";
        uStack_5c = 0x822;
        uStack_5a = 0xec2d;
        uStack_58 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      _CMTimeMake(&local_68,*(undefined8 *)(param_1 + 0x4c8),1000);
      uVar4 = CONCAT26(uStack_52,uStack_58);
      uVar6 = local_68;
      uVar7 = uStack_64._4_4_;
      lVar3 = _CMTimeCopyAsDictionary(DAT_1008c4d98);
      if (lVar3 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "timeDict != __null";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16,uVar6
                              ,uVar7,uVar4);
        }
        FUN_1001782e9(0,0);
      }
      else {
        FUN_1001709a5(lVar2,lVar3);
        uVar4 = _AVCFPlayerCreateBoundaryTimeObserverForTimes
                          (*(undefined8 *)(param_1 + 0x4b0),lVar2,*(undefined8 *)(param_1 + 0x4c0),
                           FUN_100444df0,param_1);
        *(undefined8 *)(param_1 + 0x4d0) = uVar4;
      }
      FUN_10017060f(lVar2);
      FUN_10017060f(lVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

