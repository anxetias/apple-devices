// name: FUN_100440c7e
// address: 100440c7e

undefined4 FUN_100440c7e(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 local_80 [20];
  undefined4 local_6c;
  long local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = param_2;
  FUN_1001b7a44(local_80);
  if (*(long *)(param_1 + 0x498) == 0) {
    uVar9 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar9,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mAsset != __null";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    local_6c = 0;
    FUN_1001782e9(0,0);
  }
  else {
    local_68 = _AVCFAssetCopyMetadataForFormat
                         (*(long *)(param_1 + 0x498),
                          *(undefined8 *)PTR__AVCFMetadataFormatiTunesMetadata_10082b268);
    local_6c = (undefined4)CONCAT71((int7)((ulong)local_68 >> 8),local_68 != 0);
    if (local_68 != 0) {
      lVar3 = FUN_10016593d(DAT_1008c4d90,0x7374696b);
      lVar4 = FUN_10017076e(local_68);
      if (0 < lVar4) {
        lVar10 = 0;
        do {
          lVar5 = FUN_100170853(local_68,lVar10);
          if (lVar5 != 0) {
            lVar6 = _AVCFMetadataItemCopyKey(lVar5);
            if (lVar6 != 0) {
              lVar7 = FUN_1001705e9(lVar6);
              lVar8 = FUN_100171f56();
              if (lVar7 == lVar8) {
                if (lVar3 != 0) {
                  lVar7 = FUN_1001720fd(lVar6,lVar3,0);
                  if (lVar7 == 0) {
                    lVar5 = _AVCFMetadataItemCopyValue(lVar5);
                    if (lVar5 != 0) {
                      lVar4 = FUN_1001705e9(lVar5);
                      lVar10 = FUN_100171f56();
                      uVar2 = 0;
                      if (lVar4 == lVar10) {
                        uVar2 = FUN_100169538(lVar5,0);
                      }
                      goto LAB_100440da9;
                    }
                  }
                }
              }
              else {
                FUN_1001705e9(lVar6);
                FUN_100173434();
              }
            }
            FUN_10017060f(0);
            FUN_10017060f(lVar6);
          }
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
      }
      uVar2 = 0;
      lVar6 = 0;
      lVar5 = 0;
LAB_100440da9:
      FUN_10017060f(lVar6);
      FUN_10017060f(lVar5);
      FUN_10017060f(lVar3);
      if (uVar2 != 0) {
        if (0xff < uVar2) {
          uVar9 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar9,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "tempInt >= 0 && tempInt <= 255";
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        *(char *)(local_60 + 0x54) = (char)uVar2;
        *(byte *)(local_60 + 1) = *(byte *)(local_60 + 1) | 1;
      }
      cVar1 = FUN_100441012(local_68,0x61704944,local_80);
      if (cVar1 != '\0') {
        FUN_1001bb41a(local_80,local_60 + 0x80);
        *(byte *)(local_60 + 1) = *(byte *)(local_60 + 1) | 8;
      }
      cVar1 = FUN_100441012(local_68,0x64774944,local_80);
      if (cVar1 != '\0') {
        FUN_1001bb41a(local_80,local_60 + 0x480);
        *(byte *)(local_60 + 2) = *(byte *)(local_60 + 2) | 4;
      }
      cVar1 = FUN_100441012(local_68,0x64776c72,local_80);
      if (cVar1 != '\0') {
        FUN_1001bb41a(local_80,local_60 + 0x680);
        *(byte *)(local_60 + 2) = *(byte *)(local_60 + 2) | 8;
      }
      cVar1 = FUN_100441012(local_68,0xa96e616d,local_80);
      if (cVar1 != '\0') {
        FUN_1001bb41a(local_80,local_60 + 0x880);
        *(byte *)(local_60 + 1) = *(byte *)(local_60 + 1) | 0x20;
      }
    }
    FUN_10017060f(local_68);
  }
  FUN_1001b7a50(local_80);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return local_6c;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

