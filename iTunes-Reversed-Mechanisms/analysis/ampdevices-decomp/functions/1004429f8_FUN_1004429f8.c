// name: FUN_1004429f8
// address: 1004429f8

undefined8 FUN_1004429f8(long param_1,uint *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10043e902();
  if (*(long *)(param_1 + 0x498) == 0) {
    uVar14 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar14,0x10);
    if (cVar7 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mAsset != __null";
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar8 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar8 = _AVCFAssetCopyMetadataForFormat
                      (*(long *)(param_1 + 0x498),
                       *(undefined8 *)PTR__AVCFMetadataFormatQuickTimeUserData_10082b260);
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      lVar9 = FUN_10017076e(lVar8);
      if (0 < lVar9) {
        uVar14 = *(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyFullName_10082b348;
        uVar1 = *(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyAlbum_10082b320;
        uVar2 = *(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyArtist_10082b328;
        uVar3 = *(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyComment_10082b330;
        uVar4 = *(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyComposer_10082b338;
        uVar5 = *(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyGenre_10082b350;
        uVar6 = *(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyCopyright_10082b340;
        lVar16 = 0;
        do {
          lVar10 = FUN_100170853(lVar8,lVar16);
          if (lVar10 != 0) {
            uVar11 = _AVCFMetadataItemCopyKey(lVar10);
            uVar12 = _AVCFMetadataItemCopyValue(lVar10);
            lVar10 = FUN_1001705e9(uVar11);
            lVar13 = FUN_100171f56();
            if (lVar10 != lVar13) {
              if (param_2 != (uint *)0x0) {
                cVar7 = FUN_100170633(uVar11,uVar14);
                if (cVar7 == '\0') {
                  cVar7 = FUN_100170633(uVar11,uVar1);
                  if (cVar7 == '\0') {
                    cVar7 = FUN_100170633(uVar11,uVar2);
                    if (cVar7 == '\0') {
                      cVar7 = FUN_100170633(uVar11,uVar3);
                      if (cVar7 == '\0') {
                        cVar7 = FUN_100170633(uVar11,uVar4);
                        if (cVar7 == '\0') {
                          cVar7 = FUN_100170633(uVar11,uVar5);
                          if (cVar7 == '\0') goto LAB_100442c8a;
                          cVar7 = FUN_100442d8a(uVar12,param_2 + 0x202);
                          uVar15 = 0x10;
                        }
                        else {
                          cVar7 = FUN_100442d8a(uVar12,param_2 + 0x410);
                          uVar15 = 0x200000;
                        }
                      }
                      else {
                        cVar7 = FUN_100442d8a(uVar12,param_2 + 0x382);
                        uVar15 = 0x400;
                      }
                    }
                    else {
                      cVar7 = FUN_100442d8a(uVar12,param_2 + 0x102);
                      uVar15 = 4;
                    }
                  }
                  else {
                    cVar7 = FUN_100442d8a(uVar12,param_2 + 0x182);
                    uVar15 = 8;
                  }
                }
                else {
                  cVar7 = FUN_100442d8a(uVar12,param_2 + 2);
                  uVar15 = 1;
                }
                if (cVar7 != '\0') {
                  *param_2 = *param_2 | uVar15;
                }
              }
LAB_100442c8a:
              if (((param_3 != 0) && (cVar7 = FUN_100170633(uVar11,uVar6), cVar7 != '\0')) &&
                 (cVar7 = FUN_100442d8a(uVar12,param_3 + 0x8c8), cVar7 != '\0')) {
                *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | 0x10;
              }
            }
            FUN_10017060f(uVar11);
            FUN_10017060f(uVar12);
          }
          lVar16 = lVar16 + 1;
        } while (lVar9 != lVar16);
      }
    }
  }
  FUN_10017060f(lVar8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

