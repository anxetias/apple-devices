// name: FUN_10043f0e2
// address: 10043f0e2

void FUN_10043f0e2(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x4a8) == 0) {
    lVar3 = *(long *)(param_1 + 0x498);
    if (lVar3 == 0) {
      FUN_10043e902(param_1);
      lVar3 = *(long *)(param_1 + 0x498);
      if (lVar3 != 0) goto LAB_10043f130;
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_2a = "asset != __null";
        goto LAB_10043f30c;
      }
    }
    else {
LAB_10043f130:
      lVar2 = FUN_10043ebfa(param_1);
      if (lVar2 != 0) {
        if (*(long *)(param_1 + 0x4a0) == 0) {
          lVar3 = _AVCFPlayerItemCreateWithAsset(0,lVar3,lVar2);
        }
        else {
          lVar3 = _PFVideoAVCFObjectBuilderCreatePlayerItem(*(long *)(param_1 + 0x4a0),0,lVar2,0);
        }
        if (lVar3 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x822;
            local_2a = "playerItem != __null";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
          }
          FUN_1001782e9(0,0);
          if (*(int *)(param_1 + 0x4b8) == 0) {
            *(undefined4 *)(param_1 + 0x4b8) = 0xffffff85;
          }
        }
        else {
          *(long *)(param_1 + 0x4a8) = lVar3;
          uVar4 = _CFNotificationCenterGetLocalCenter();
          _CFNotificationCenterAddObserver
                    (uVar4,param_1,FUN_10043f33c,0,*(undefined8 *)(param_1 + 0x4a8),4);
          _AVCFPlayerItemSetShouldOptimizeForExclusivePlayback(lVar3,1);
          if (*(long *)(param_1 + 0x550) != 0) {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
              _AVCFPlayerItemSetServiceIdentifier(*(undefined8 *)(param_1 + 0x4a8));
              return;
            }
            goto LAB_10043f336;
          }
        }
        goto LAB_10043f27d;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_2a = "notificationQueue != __null";
LAB_10043f30c:
        local_2c = 0x822;
        local_34 = "Assertion failure";
        local_38 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
    }
    FUN_1001782e9(0,0);
  }
LAB_10043f27d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_10043f336:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

