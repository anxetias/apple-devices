// name: FUN_1004437d8
// address: 1004437d8

char FUN_1004437d8(long param_1,int param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  FUN_10043e902();
  if (*(long *)(param_1 + 0x498) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "mAsset != __null";
LAB_100443945:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    cVar2 = '\x04';
    if (1 < param_2 - 2U) {
      if (param_2 == 1) {
        lVar3 = _AVCFAssetGetStatusOfValueForProperty
                          (*(long *)(param_1 + 0x498),
                           *(undefined8 *)PTR__AVCFAssetPropertyCommonMetadata_10082b138,&local_50);
        cVar2 = '\x03';
        if (lVar3 != 2) {
          cVar2 = (lVar3 == 3) * '\x02' + '\x02';
        }
      }
      goto LAB_100443978;
    }
    if (*(long *)(param_1 + 0x4a8) != 0) {
      lVar3 = _AVCFPlayerItemGetStatus(*(long *)(param_1 + 0x4a8),&local_50);
      if (((lVar3 != 2) && (cVar2 = '\x02', lVar3 == 1)) &&
         ((param_2 != 3 ||
          ((cVar1 = _AVCFPlayerItemIsPlaybackLikelyToKeepUp(*(undefined8 *)(param_1 + 0x4a8)),
           cVar1 != '\0' ||
           (cVar1 = _AVCFPlayerItemIsPlaybackBufferFull(*(undefined8 *)(param_1 + 0x4a8)),
           cVar1 != '\0')))))) {
        cVar2 = '\x03';
      }
      goto LAB_100443978;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "mPlayerItem != __null";
      goto LAB_100443945;
    }
  }
  FUN_1001782e9(0,0);
  cVar2 = '\x02';
LAB_100443978:
  FUN_10017060f(local_50);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar2;
}

