// name: FUN_100394c21
// address: 100394c21

long FUN_100394c21(long param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  char cVar14;
  undefined8 local_890;
  undefined8 local_888;
  long local_880;
  undefined4 local_874;
  long local_870;
  long local_868;
  long local_860;
  undefined4 local_858;
  char *local_854;
  undefined2 local_84c;
  char *local_84a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = *(char *)(param_1 + 0x11);
  lVar4 = FUN_100171409(0,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (lVar4 == 0) {
    uVar11 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar11,0x10);
    if (cVar1 != '\0') {
      local_858 = 0x8220202;
      local_854 = "Assertion failure";
      local_84c = 0x822;
      local_84a = "dictionary != nullptr";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
    }
    lVar4 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1003951f9;
  }
  cVar14 = (char)param_2;
  if (cVar14 != '\0') {
    FUN_100169968(99,&local_890);
  }
  puVar10 = &local_890;
  if (cVar14 == '\0') {
    puVar10 = (undefined8 *)(param_1 + 0x38);
  }
  puVar5 = &local_888;
  if (cVar14 == '\0') {
    puVar5 = (undefined8 *)(param_1 + 0x40);
  }
  lVar6 = FUN_100169885(*puVar10,*puVar5);
  if (lVar6 == 0) {
    uVar11 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar11,0x10);
    if (cVar1 != '\0') {
      puVar12 = &local_858;
      local_858 = 0x8220202;
      local_854 = "Assertion failure";
      local_84c = 0x822;
      pcVar8 = "uuidString != nullptr";
LAB_100394eb7:
      *(char **)((long)puVar12 + 0xe) = pcVar8;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",puVar12,0x16);
    }
LAB_100394db9:
    FUN_1001782e9(0,0);
LAB_100394dca:
    lVar9 = 0;
    lVar7 = 0;
  }
  else {
    local_874 = param_2;
    FUN_100171502(lVar4,PTR_cf_uuid_10086f4a8,lVar6);
    iVar2 = FUN_10049ac7a(param_1,&local_858,0x800);
    if (iVar2 == -0x80) goto LAB_100394dca;
    if (iVar2 == 0) {
      lVar7 = FUN_100169bb7(0,&local_858);
      if (lVar7 == 0) {
        uVar11 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar11,0x10);
        if (cVar1 != '\0') {
          puVar12 = &local_58;
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          pcVar8 = "albumNameString != nullptr";
          goto LAB_100394eb7;
        }
        goto LAB_100394db9;
      }
      FUN_100171502(lVar4,PTR_cf_albumName_10086f580,lVar7);
      uVar11 = 1;
      if ((char)local_874 == '\0') {
        cVar14 = *(char *)(param_1 + 0x11);
        switch(cVar14) {
        case '\v':
        case '\f':
          uVar11 = 4;
          break;
        case '\r':
        case '\x0e':
        case '\x10':
        case '\x11':
          break;
        case '\x0f':
          uVar11 = 3;
          break;
        case '\x12':
          uVar11 = 6;
          break;
        case '\x13':
          uVar11 = 7;
          break;
        default:
          if (cVar14 == '\x01') {
            uVar11 = 5;
          }
          else if (cVar14 == '\x03') {
            uVar11 = 2;
          }
        }
      }
      FUN_100168746(lVar4,PTR_cf_subclass_10086f590,uVar11,1);
      if ((((byte)(cVar1 - 0xbU) < 2) || (*(char *)(param_1 + 0x11) == '\x0f')) &&
         (*(int *)(param_1 + 0x94) != 0)) {
        lVar9 = FUN_1004983e2(*(undefined8 *)(param_1 + 8));
        if (lVar9 == 0) {
          local_870 = lVar6;
          local_868 = lVar7;
          uVar11 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar11,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "keyPhotoImageInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          local_860 = 0;
          FUN_1001782e9(0,0);
        }
        else {
          lVar9 = FUN_100169885(*(undefined8 *)(lVar9 + 0x28),*(undefined8 *)(lVar9 + 0x30));
          if (lVar9 == 0) {
            uVar11 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar11,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "keyPhotoUUIDString != nullptr";
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            lVar9 = 0;
            FUN_1001782e9(0,0);
            goto LAB_1003951d0;
          }
          local_870 = lVar6;
          local_868 = lVar7;
          local_860 = lVar9;
          FUN_100171502(lVar4,PTR_cf_keyAssetUUID_10086f578,lVar9);
          if (*(char *)(param_1 + 0x11) == '\x0f') {
            FUN_100168746(lVar4,PTR_cf_keyAssetFaceIndex_10086f598,*(undefined2 *)(param_1 + 0xa8),1
                         );
          }
        }
      }
      else {
        local_860 = 0;
        local_870 = lVar6;
        local_868 = lVar7;
      }
      local_880 = FUN_100170720(0,0,PTR__kCFTypeArrayCallBacks_10082e130);
      if (local_880 != 0) {
        uVar3 = *(uint *)(param_1 + 0x50);
        if (uVar3 != 0) {
          lVar6 = 0;
          uVar13 = 0;
          do {
            lVar7 = *(long *)(*(long *)(param_1 + 0x58) + lVar6);
            if (((lVar7 != 0) && (*(int *)(lVar7 + 0xa4) != 0)) &&
               (((char)local_874 == '\0' || (*(int *)(lVar7 + 0xa0) == 0)))) {
              lVar7 = FUN_100169885(*(undefined8 *)(lVar7 + 0x28),*(undefined8 *)(lVar7 + 0x30));
              if (lVar7 == 0) {
                uVar11 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar11,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "uuidString != nullptr";
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                FUN_10017060f(local_880);
                goto LAB_100395164;
              }
              FUN_1001709a5(local_880,lVar7);
              FUN_10017060f(lVar7);
              uVar3 = *(uint *)(param_1 + 0x50);
            }
            uVar13 = uVar13 + 1;
            lVar6 = lVar6 + 0x10;
          } while (uVar13 < uVar3);
        }
        lVar6 = local_880;
        FUN_100171502(lVar4,PTR_cf_assetUUIDs_10086f588,local_880);
        FUN_100171502(lVar4,PTR_cf_itemType_10086f4f0,PTR_cf_Album_10086f500);
        FUN_10017060f(lVar6);
        FUN_10017060f(local_860);
        FUN_10017060f(local_868);
        FUN_10017060f(local_870);
        goto LAB_1003951f9;
      }
      uVar11 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar11,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "array != nullptr";
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
LAB_100395164:
      lVar9 = local_860;
      lVar7 = local_868;
      uVar11 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar11,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "assetUUIDArray != nullptr";
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar6 = local_870;
    }
    else {
      uVar11 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar11,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      lVar9 = 0;
      lVar7 = 0;
    }
  }
LAB_1003951d0:
  FUN_10017060f(0);
  FUN_10017060f(lVar9);
  FUN_10017060f(lVar7);
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar4);
  lVar4 = 0;
LAB_1003951f9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

