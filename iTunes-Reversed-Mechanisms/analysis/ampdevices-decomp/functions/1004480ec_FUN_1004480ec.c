// name: FUN_1004480ec
// address: 1004480ec

int FUN_1004480ec(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  iVar2 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) || (iVar2 = *(int *)(param_1 + 0x40), iVar2 != 0))
  goto LAB_100448373;
  iVar2 = FUN_1004471ac(*(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28),&local_50,
                        param_1 + 0x48);
  lVar3 = local_50;
  if (iVar2 == -0x80) {
LAB_1004481ac:
    lVar4 = 0;
  }
  else {
    if (iVar2 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      goto LAB_1004481ac;
    }
    if (local_50 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "tracksArray != __null";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      lVar4 = 0;
LAB_100448353:
      FUN_1001782e9(0,0);
      iVar2 = 0x234f;
    }
    else {
      *(undefined1 *)(param_1 + 0x45) = 1;
      if (*(int *)(param_1 + 0x10) == 0x6175636d) {
        lVar3 = FUN_100170853(local_50,0);
        if (lVar3 != 0) {
          lVar4 = 0;
          lVar3 = _AVCFAssetReaderTrackOutputCreateWithOutputSettings(0,lVar3,0);
          goto LAB_10044832a;
        }
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "track != __null";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        lVar4 = 0;
        FUN_1001782e9(0,0);
        iVar2 = -0x32;
      }
      else {
        lVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "dict != __null";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          FUN_100168746(lVar4,*(undefined8 *)PTR__AVCFFormatIDKey_10082b1f8,
                        *(undefined4 *)(param_1 + 0x50),0);
          FUN_100168c16((float)*(double *)(param_1 + 0x48),lVar4,
                        *(undefined8 *)PTR__AVCFSampleRateKey_10082b470,0);
          FUN_100168746(lVar4,*(undefined8 *)PTR__AVCFNumberOfChannelsKey_10082b358,
                        *(undefined4 *)(param_1 + 100),0);
          FUN_100168746(lVar4,*(undefined8 *)PTR__AVCFLinearPCMBitDepthKey_10082b200,
                        *(undefined4 *)(param_1 + 0x68),0);
          FUN_100168b0b(lVar4,*(undefined8 *)PTR__AVCFLinearPCMIsBigEndianKey_10082b208,
                        *(byte *)(param_1 + 0x54) >> 1 & 1,1);
          FUN_100168b0b(lVar4,*(undefined8 *)PTR__AVCFLinearPCMIsFloatKey_10082b210,
                        *(uint *)(param_1 + 0x54) & 1,1);
          FUN_100168b0b(lVar4,*(undefined8 *)PTR__AVCFLinearPCMIsNonInterleavedKey_10082b218,
                        *(byte *)(param_1 + 0x54) >> 5 & 1,1);
        }
        lVar3 = _AVCFAssetReaderAudioMixOutputCreateWithOutputSettings(0,lVar3,lVar4);
LAB_10044832a:
        *(long *)(param_1 + 0x38) = lVar3;
        iVar2 = 0;
        if (lVar3 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "mReaderOutput != __null";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          goto LAB_100448353;
        }
      }
    }
  }
  FUN_10017060f(local_50);
  FUN_10017060f(lVar4);
LAB_100448373:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

