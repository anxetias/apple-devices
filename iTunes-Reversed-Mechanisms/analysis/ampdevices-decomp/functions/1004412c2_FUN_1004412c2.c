// name: FUN_1004412c2
// address: 1004412c2

long FUN_1004412c2(long param_1,long param_2,int param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10043e902();
  if (*(long *)(param_1 + 0x498) == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mAsset != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar6 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar6 = 0;
    FUN_1004406ae(param_1,1,0);
    lVar2 = _AVCFAssetCopyMetadataForFormat
                      (*(undefined8 *)(param_1 + 0x498),
                       *(undefined8 *)PTR__AVCFMetadataFormatQuickTimeUserData_10082b260);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      if (param_3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_10016593d(DAT_1008c4d90,param_3);
      }
      lVar5 = FUN_10017076e(lVar2);
      if (lVar5 < 1) {
        lVar7 = 0;
        lVar6 = 0;
      }
      else {
        lVar10 = 0;
        do {
          lVar6 = FUN_100170853(lVar2,lVar10);
          if (lVar6 != 0) {
            lVar7 = _AVCFMetadataItemCopyKey(lVar6);
            if (lVar7 != 0) {
              lVar8 = FUN_1001705e9(lVar7);
              lVar9 = FUN_100171f56();
              if (lVar8 == lVar9) {
                if ((lVar3 != 0) && (lVar8 = FUN_1001720fd(lVar7,lVar3,0), lVar8 == 0)) {
LAB_10044141f:
                  lVar6 = _AVCFMetadataItemCopyValue(lVar6);
                  if (lVar6 != 0) {
                    FUN_1001705fc(lVar6);
                    goto LAB_100441459;
                  }
                }
              }
              else {
                lVar8 = FUN_1001705e9(lVar7);
                lVar9 = FUN_100173434();
                if (((param_2 != 0) && (lVar8 == lVar9)) &&
                   (cVar1 = FUN_100170633(lVar7,param_2), cVar1 != '\0')) goto LAB_10044141f;
              }
            }
            FUN_10017060f(0);
            FUN_10017060f(lVar7);
          }
          lVar10 = lVar10 + 1;
        } while (lVar5 != lVar10);
        lVar7 = 0;
        lVar6 = 0;
      }
LAB_100441459:
      FUN_10017060f(lVar7);
      FUN_10017060f(lVar6);
    }
    FUN_10017060f(lVar3);
    FUN_10017060f(lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar6;
}

