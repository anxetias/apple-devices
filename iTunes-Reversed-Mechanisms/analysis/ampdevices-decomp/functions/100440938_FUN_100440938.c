// name: FUN_100440938
// address: 100440938

ulong FUN_100440938(long param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 unaff_R15;
  ulong uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inAssetTrack != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1004409d2:
    uVar6 = 0;
    uVar5 = 0;
    if (param_2 == (uint *)0x0) goto LAB_100440a50;
  }
  else {
    lVar3 = _AVCFAssetTrackGetMediaType();
    if (lVar3 == 0) goto LAB_1004409d2;
    if (param_2 == (uint *)0x0) {
      uVar6 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
      goto LAB_100440a50;
    }
    cVar1 = FUN_100170633(lVar3,*(undefined8 *)PTR__AVCFMediaTypeAudio_10082b228);
    if (cVar1 == '\0') {
      cVar1 = FUN_100170633(lVar3,*(undefined8 *)PTR__AVCFMediaTypeClosedCaption_10082b230);
      uVar5 = 2;
      if (cVar1 == '\0') {
        cVar1 = FUN_100170633(lVar3,*(undefined8 *)PTR__AVCFMediaTypeSubtitle_10082b238);
        uVar5 = (uint)(cVar1 != '\0') << 2;
      }
    }
    else {
      iVar2 = FUN_1005d11fe(param_1);
      uVar5 = (uint)(iVar2 == 0x70616333 || iVar2 == 0x61632d33) << 4;
    }
    cVar1 = _AVCFAssetTrackIsEnabled(param_1);
    uVar6 = CONCAT71((int7)((ulong)lVar3 >> 8),1);
    if (cVar1 != '\0') {
      cVar1 = _AVCFAssetTrackHasMediaCharacteristic
                        (param_1,*(undefined8 *)PTR__AVCFMediaCharacteristicVisual_10082b220);
      uVar5 = uVar5 | cVar1 != '\0';
    }
  }
  *param_2 = uVar5;
LAB_100440a50:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
}

