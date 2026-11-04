// name: FUN_10044523a
// address: 10044523a

undefined8 FUN_10044523a(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10043f63a();
  local_40 = 0;
  if (*(long *)(param_1 + 0x4b0) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_2a = "mCoreMediaPlayer != __null";
LAB_100445357:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
LAB_10044537c:
    FUN_1001782e9(0,0);
    goto LAB_100445385;
  }
  do {
    lVar3 = _AVCFPlayerGetStatus(*(undefined8 *)(param_1 + 0x4b0),&local_40);
    if (lVar3 == 1) {
      if (*(long *)(param_1 + 0x4a8) != 0) {
        goto LAB_1004452e2;
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 == '\0') goto LAB_10044537c;
      local_2a = "mPlayerItem != __null";
      goto LAB_100445357;
    }
  } while (lVar3 != 2);
  goto LAB_100445301;
  while (lVar3 != 2) {
LAB_1004452e2:
    lVar3 = _AVCFPlayerItemGetStatus(*(undefined8 *)(param_1 + 0x4a8),&local_40);
    if (lVar3 == 1) {
      if ((*(long *)(param_1 + 0x4a8) != 0) &&
         (lVar3 = _AVCFPlayerItemGetAsset(), lVar3 != *(long *)(param_1 + 0x498))) {
        uVar4 = FUN_1001705fc(lVar3);
        FUN_10017060f(*(undefined8 *)(param_1 + 0x498));
        *(undefined8 *)(param_1 + 0x498) = uVar4;
        plVar1 = *(long **)(param_1 + 0x488);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x18))(plVar1,param_1,2);
        }
      }
      goto LAB_100445385;
    }
  }
LAB_100445301:
  if (local_40 != 0) {
    FUN_100171607();
    FUN_10017060f(local_40);
  }
LAB_100445385:
  if (*(long *)(param_1 + 0x4b0) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mCoreMediaPlayer != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    FUN_10044516e(DAT_100700b50,param_1);
    uVar4 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

