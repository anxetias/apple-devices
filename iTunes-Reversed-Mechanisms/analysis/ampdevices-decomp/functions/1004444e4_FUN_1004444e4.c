// name: FUN_1004444e4
// address: 1004444e4

long FUN_1004444e4(long param_1)

{
  char cVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = *(long *)(param_1 + 0x498);
  if (lVar3 == 0) {
    FUN_10043e902(param_1);
    lVar3 = *(long *)(param_1 + 0x498);
    if (lVar3 != 0) goto LAB_10044452a;
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_4a = "mAsset != __null";
LAB_1004446f4:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
LAB_10044452a:
    lVar3 = _AVCFAssetCopyTracksWithMediaType
                      (lVar3,*(undefined8 *)PTR__AVCFMediaTypeAudio_10082b228);
    if (lVar3 != 0) {
      lVar4 = FUN_10017076e(lVar3);
      if (lVar4 < 1) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "numTracks > 0";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        lVar8 = 0;
        FUN_1001782e9(0,0);
      }
      else {
        lVar8 = 0;
        lVar7 = 0;
        do {
          lVar5 = FUN_100170853(lVar3,lVar7);
          if (((lVar5 != 0) && (cVar1 = _AVCFAssetTrackIsEnabled(lVar5), cVar1 != '\0')) &&
             (uVar2 = FUN_100443df1(lVar5,0), 2 < uVar2)) {
            fVar9 = (float)_AVCFAssetTrackGetEstimatedDataRate(lVar5);
            lVar4 = (long)fVar9;
            lVar8 = lVar4 + 0x3ff;
            if (-1 < lVar4) {
              lVar8 = lVar4;
            }
            lVar8 = lVar8 >> 10;
            break;
          }
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
      }
      goto LAB_100444633;
    }
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_4a = "tracksArray != __null";
      goto LAB_1004446f4;
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
  lVar8 = 0;
LAB_100444633:
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar8;
}

