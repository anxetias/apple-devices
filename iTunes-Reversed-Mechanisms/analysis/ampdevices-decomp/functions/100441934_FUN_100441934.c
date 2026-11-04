// name: FUN_100441934
// address: 100441934

undefined8 * FUN_100441934(undefined8 *param_1,long param_2,undefined8 param_3,char param_4)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  undefined2 uStack_32;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10043e902(param_2);
  if (*(long *)(param_2 + 0x498) == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0xe807;
      uStack_38 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if ((*(int *)(param_2 + 0x1c) != 0x44574e4c) &&
          ((*(int *)(param_2 + 0x1c) != 0x46494c45 || (*(int *)(param_2 + 0x4c) != 0x41464350)))) {
    _CMTimeMake(&local_48,param_3,1000);
    lVar3 = _AVCFAssetImageGeneratorCreateWithAsset(0,*(undefined8 *)(param_2 + 0x498));
    if (lVar3 == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0xf00d;
        uStack_38 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      lVar4 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      _AVCFAssetImageGeneratorSetAppliesPreferredTrackTransform(lVar3,1);
      puVar1 = PTR__kCMTimeZero_10082bc18;
      uStack_38 = (undefined6)*(undefined8 *)(PTR__kCMTimeZero_10082bc18 + 0x10);
      uStack_32 = (undefined2)((ulong)*(undefined8 *)(PTR__kCMTimeZero_10082bc18 + 0x10) >> 0x30);
      uVar5 = *(undefined8 *)(PTR__kCMTimeZero_10082bc18 + 8);
      local_48 = (undefined4)*(undefined8 *)PTR__kCMTimeZero_10082bc18;
      uStack_44 = (undefined4)((ulong)*(undefined8 *)PTR__kCMTimeZero_10082bc18 >> 0x20);
      uStack_40 = (undefined4)uVar5;
      uStack_3c = (undefined2)((ulong)uVar5 >> 0x20);
      uStack_3a = (undefined2)((ulong)uVar5 >> 0x30);
      _AVCFAssetImageGeneratorSetRequestedTimeToleranceBefore(lVar3);
      if (param_4 != '\0') {
        uStack_38 = (undefined6)*(undefined8 *)(puVar1 + 0x10);
        uStack_32 = (undefined2)((ulong)*(undefined8 *)(puVar1 + 0x10) >> 0x30);
        uVar5 = *(undefined8 *)(puVar1 + 8);
        local_48 = (undefined4)*(undefined8 *)puVar1;
        uStack_44 = (undefined4)((ulong)*(undefined8 *)puVar1 >> 0x20);
        uStack_40 = (undefined4)uVar5;
        uStack_3c = (undefined2)((ulong)uVar5 >> 0x20);
        uStack_3a = (undefined2)((ulong)uVar5 >> 0x30);
        _AVCFAssetImageGeneratorSetRequestedTimeToleranceAfter(lVar3);
      }
      lVar4 = _AVCFAssetImageGeneratorCopyCGImageAtTime(lVar3,0,0);
      if (lVar4 == 0) {
        _AVCFAssetImageGeneratorSetApertureMode
                  (lVar3,*(undefined8 *)
                          PTR__AVCFAssetImageGeneratorApertureModeEncodedPixels_10082b0f0);
        lVar4 = _AVCFAssetImageGeneratorCopyCGImageAtTime(lVar3,0,0);
      }
    }
    FUN_10017060f(lVar3);
    if (lVar4 == 0) {
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      FUN_1001b2dff((int)DAT_100700458,&local_48,lVar4);
      uVar5 = CONCAT44(uStack_44,local_48);
      uVar6 = CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
      _CGImageRelease(lVar4);
    }
    *param_1 = uVar5;
    param_1[1] = uVar6;
    goto LAB_100441b44;
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_100441b44:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

