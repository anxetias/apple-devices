// name: FUN_10043f33c
// address: 10043f33c

void FUN_10043f33c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  uint6 uStack_78;
  undefined2 uStack_72;
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x18) != 0x434d4954)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      uStack_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0xe8b6;
      uStack_78 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(char *)(param_2 + 0x531) == '\0') {
    cVar2 = FUN_100170633(param_3,*(undefined8 *)
                                   PTR__AVCFPlayerItemPresentationSizeChangedNotification_10082b400)
    ;
    if (cVar2 == '\0') {
      cVar2 = FUN_100170633(param_3,*(undefined8 *)
                                     PTR__AVCFPlayerItemTracksChangedNotification_10082b440);
      if (cVar2 == '\0') {
        cVar2 = FUN_100170633(param_3,*(undefined8 *)
                                       PTR__AVCFPlayerItemDidPlayToEndTimeNotification_10082b3a0);
        if (cVar2 == '\0') {
          cVar2 = FUN_100170633(param_3,*(undefined8 *)
                                         PTR__AVCFPlayerItemIsPlaybackLikelyToKeepUpChangedNotification_10082b3f8
                               );
          if (cVar2 == '\0') {
            cVar2 = FUN_100170633(param_3,*(undefined8 *)
                                           PTR__AVCFPlayerItemIsPlaybackBufferFullChangedNotification_10082b3e8
                                 );
            if (cVar2 == '\0') {
              cVar2 = FUN_100170633(param_3,*(undefined8 *)
                                             PTR__AVCFPlayerItemStatusChangedNotification_10082b428)
              ;
              if (cVar2 == '\0') {
                cVar2 = FUN_100170633(param_3,*(undefined8 *)
                                               PTR__AVCFPlayerItemDurationChangedNotification_10082b3a8
                                     );
                if (cVar2 == '\0') goto LAB_10043f3b9;
                uVar3 = 0x4000000000;
              }
              else {
                uVar3 = 0x20000000000;
              }
            }
            else {
              uVar3 = 0x10000000000;
            }
          }
          else {
            uVar3 = 0x800000000;
          }
        }
        else {
          uVar3 = 0x400000000;
        }
      }
      else {
        uVar3 = 0x200000000;
      }
    }
    else {
      uVar3 = 0x100000000;
    }
    if (*(char *)(param_2 + 0x531) == '\0') {
      uStack_78 = (uint6)uVar3 | (uint6)*(uint *)(param_2 + 0x490);
      local_88._0_4_ = 0x859370;
      local_88._4_4_ = 1;
      uStack_80 = 0x43fdcc;
      uStack_7c = 1;
      uStack_7a = 0;
      uStack_72 = 0;
      local_58 = 0;
      uStack_50 = 0;
      uStack_49 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = (long *)0x0;
      local_68 = &local_88;
      FUN_10017869a(&local_88);
      if (local_30 != (long *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_68 == &local_88) {
        lVar4 = 0x20;
      }
      else {
        lVar4 = 0x28;
        if (local_68 == (long *)0x0) goto LAB_10043f3b9;
      }
      (**(code **)(*local_68 + lVar4))();
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      uStack_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0xe8dc;
      uStack_78 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
LAB_10043f3b9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

