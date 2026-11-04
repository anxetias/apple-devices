// name: FUN_10018d104
// address: 10018d104

void FUN_10018d104(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  char *label;
  undefined1 local_460 [16];
  undefined1 local_450 [1056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = _DADiskCopyDescription();
  if (lVar2 != 0) {
    uVar3 = FUN_100166c1b(lVar2,*(undefined8 *)PTR__kDADiskDescriptionVolumeNameKey_10082e658);
    lVar4 = FUN_100166c7f(lVar2,*(undefined8 *)PTR__kDADiskDescriptionVolumePathKey_10082e668);
    cVar1 = FUN_100167e61(lVar2,*(undefined8 *)PTR__kDADiskDescriptionVolumeNetworkKey_10082e660,0);
    if (lVar4 != 0) {
      if (cVar1 == '\0') {
        cVar1 = FUN_10018d54e(lVar4,local_450);
        if (cVar1 != '\0') {
          FUN_10018d627(local_450,param_1,uVar3);
        }
      }
      else {
        if (DAT_1008c4dd0 == (dispatch_queue_t)0x0) {
          FUN_1001c15c6(local_450);
          FUN_1001b7b04(local_460,".volume_mounts");
          FUN_1001bbcfe(local_450);
          FUN_1001b7a50(local_460);
          label = (char *)FUN_1001b83ae(local_450);
          DAT_1008c4dd0 = _dispatch_queue_create(label,(dispatch_queue_attr_t)0x0);
          FUN_1001b7a50(local_450);
        }
        FUN_1001705fc(param_1);
        FUN_1001705fc(lVar4);
        FUN_1001705fc(uVar3);
        _dispatch_async(DAT_1008c4dd0);
      }
    }
    FUN_10017060f(lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

