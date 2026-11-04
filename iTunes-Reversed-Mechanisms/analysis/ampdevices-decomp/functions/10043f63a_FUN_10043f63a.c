// name: FUN_10043f63a
// address: 10043f63a

void FUN_10043f63a(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long local_78;
  undefined8 local_70;
  long local_68;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x4b0) != 0) goto LAB_10043f99c;
  lVar7 = *(long *)(param_1 + 0x4a8);
  if (lVar7 == 0) {
    FUN_10043f0e2(param_1);
    lVar7 = *(long *)(param_1 + 0x4a8);
    if (lVar7 != 0) goto LAB_10043f68e;
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 == '\0') goto LAB_10043f988;
    local_4a = "playerItem != __null";
LAB_10043fa26:
    local_4c = 0x822;
    local_54 = "Assertion failure";
    local_58 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
LAB_10043f988:
    lVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
LAB_10043f68e:
    lVar4 = FUN_10043ebfa(param_1);
    if (lVar4 == 0) {
      uVar8 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar8,0x10);
      if (cVar1 != '\0') {
        local_4a = "notificationQueue != __null";
        goto LAB_10043fa26;
      }
      goto LAB_10043f988;
    }
    local_78 = 0;
    local_5c = 0;
    if (*(long *)(param_1 + 0x498) == 0) {
      uVar8 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar8,0x10);
      if (cVar1 != '\0') {
        local_4a = "mAsset != __null";
LAB_10043faf0:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
LAB_10043f7fc:
      FUN_1001782e9(0,0);
    }
    else {
      cVar1 = _AVCFAssetHasProtectedContent();
      if (cVar1 != '\0') {
        if (*(long *)(param_1 + 0x4a8) == 0) {
          uVar8 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar8,0x10);
          if (cVar1 != '\0') {
            local_4a = "mPlayerItem != __null";
            goto LAB_10043faf0;
          }
          goto LAB_10043f7fc;
        }
        lVar5 = __AVCFPlayerItemCopyApplicationAuthorizationChallengeProvider();
        if (lVar5 == 0) goto LAB_10043f8ad;
        cVar1 = FUN_100170633(lVar5,*(undefined8 *)
                                     PTR__AVCFApplicationAuthorizationChallengeProviderNone_10082b028
                             );
        if (cVar1 == '\0') {
          cVar1 = FUN_100170633(lVar5,*(undefined8 *)
                                       PTR__AVCFApplicationAuthorizationChallengeProviderFairPlay_10082b020
                               );
          if (cVar1 == '\0') {
            uVar8 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar8,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = 
              "JRCFEqual(provider, AVCFApplicationAuthorizationChallengeProviderFairPlay)";
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
LAB_10043f8ad:
            lVar6 = 0;
            local_68 = 0;
          }
          else {
            local_68 = __AVCFPlayerItemCopyApplicationAuthorizationChallenge
                                 (*(undefined8 *)(param_1 + 0x4a8));
            if (local_68 == 0) goto LAB_10043f8ad;
            local_70 = FUN_100170f3b(local_68);
            uVar2 = FUN_100170ef7(local_68);
            iVar3 = FUN_1000bfa70(local_70,uVar2,&local_78,&local_5c);
            if (iVar3 == -0x80) {
LAB_10043fb34:
              lVar6 = 0;
            }
            else {
              if (iVar3 != 0) {
                local_70 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(local_70,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                  __os_log_error_impl(0x100000000,local_70,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
                goto LAB_10043fb34;
              }
              lVar6 = FUN_100170dc5(DAT_1008c4d90,local_78,local_5c);
              if (lVar6 == 0) goto LAB_10043fb34;
              __AVCFPlayerItemSetApplicationAuthorizationChallengeResponse
                        (*(undefined8 *)(param_1 + 0x4a8),lVar6);
            }
          }
          if (local_78 != 0) {
            FUN_1000b34f0();
          }
          FUN_10017060f(lVar6);
          FUN_10017060f(lVar5);
          lVar5 = local_68;
        }
        FUN_10017060f(lVar5);
      }
    }
    lVar5 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar5 == 0) {
      uVar8 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar8,0x10);
      if (cVar1 != '\0') {
        local_4a = "optionsDict != __null";
        goto LAB_10043fa26;
      }
      goto LAB_10043f988;
    }
    FUN_1001714de(lVar5,*(undefined8 *)
                         PTR__AVCFPlayerAppliesMediaSelectionCriteriaAutomaticallyKey_10082b360,
                  *(undefined8 *)PTR__kCFBooleanTrue_10082e038);
    lVar7 = _AVCFPlayerCreateWithPlayerItemAndOptions(0,lVar7,lVar5,lVar4);
    if (lVar7 == 0) {
      uVar8 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar8,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "coreMediaPlayer != __null";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      FUN_10017060f(lVar5);
      if (*(int *)(param_1 + 0x4b8) == 0) {
        *(undefined4 *)(param_1 + 0x4b8) = 0xffffff85;
      }
      goto LAB_10043f99c;
    }
    *(long *)(param_1 + 0x4b0) = lVar7;
    uVar8 = _CFNotificationCenterGetLocalCenter();
    _CFNotificationCenterAddObserver
              (uVar8,param_1,FUN_10043fbd8,0,*(undefined8 *)(param_1 + 0x4b0),4);
    FUN_10043fbde(param_1);
  }
  FUN_10017060f(lVar5);
LAB_10043f99c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

