// name: FUN_100440388
// address: 100440388

ulong FUN_100440388(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = *(long *)(param_1 + 0x498);
  if (lVar2 == 0) {
    FUN_10043e902(param_1);
    lVar2 = *(long *)(param_1 + 0x498);
    if (lVar2 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "mAsset != __null";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar6 = 0;
      FUN_1001782e9(0,0);
      goto LAB_10044041f;
    }
  }
  lVar2 = _AVCFAssetCopyTracksWithMediaType(lVar2,*(undefined8 *)PTR__AVCFMediaTypeAudio_10082b228);
  if (lVar2 != 0) {
    lVar3 = FUN_10017076e(lVar2);
    if (0 < lVar3) {
      lVar7 = 0;
      do {
        lVar4 = FUN_100170853(lVar2,lVar7);
        if (lVar4 != 0) {
          cVar1 = _AVCFAssetTrackIsEnabled(lVar4);
          if (cVar1 != '\0') {
            uVar6 = CONCAT71((int7)((ulong)lVar3 >> 8),1);
            goto LAB_100440417;
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
    }
  }
  uVar6 = 0;
LAB_100440417:
  FUN_10017060f(lVar2);
LAB_10044041f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

