// name: FUN_100444724
// address: 100444724

long FUN_100444724(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x498) == 0) {
    FUN_10043e902(param_1);
    if (*(long *)(param_1 + 0x498) != 0) goto LAB_100444764;
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mAsset != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    lVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
LAB_100444764:
    lVar2 = _AVCFAssetCopyAssetTracks();
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar3 = FUN_10017076e(lVar2);
      if (0 < lVar3) {
        lVar7 = 0;
        lVar6 = 0;
        do {
          lVar4 = FUN_100170853(lVar2,lVar7);
          if (lVar4 != 0) {
            fVar8 = (float)_AVCFAssetTrackGetEstimatedDataRate(lVar4);
            lVar6 = lVar6 + (long)fVar8;
          }
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = lVar6 + 0x3ff;
        if (-1 < lVar6) {
          lVar3 = lVar6;
        }
        lVar3 = lVar3 >> 10;
        goto LAB_1004447ef;
      }
    }
  }
  lVar3 = 0;
LAB_1004447ef:
  FUN_10017060f(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

