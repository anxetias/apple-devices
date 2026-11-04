// name: FUN_1003cd991
// address: 1003cd991

int FUN_1003cd991(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 local_898;
  char *local_894;
  undefined2 local_88c;
  int local_88a;
  undefined4 local_878;
  char *local_874;
  undefined2 local_86c;
  char *local_86a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_44a = "artworkData != nullptr";
LAB_1003cdc2e:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else {
    *param_3 = 0;
    if (param_1 == 0) {
LAB_1003cdb5f:
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_44a = "DulcimerHandlerDataIsValid(handlerData)";
        goto LAB_1003cdc2e;
      }
    }
    else {
      if (*(int *)(param_1 + 8) != 0x64756c63) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure (expected to be true)";
          local_44c = 0x822;
          local_44a = "handlerData->magic == kDulcimerHandlerDataMagic";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_1003cdb5f;
      }
      if (*(char *)(param_1 + 0x37c) == '\0') {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_44a = "handlerData->deviceInfo.supportsStore";
          goto LAB_1003cdc2e;
        }
      }
      else {
        cVar1 = FUN_1003ca4e0(param_2);
        if (cVar1 != '\0') {
          uVar3 = *(undefined8 *)(param_2 + 0x58);
          iVar2 = FUN_1002b0559(uVar3,0xc2);
          if (iVar2 == -0x80) goto LAB_1003cdc61;
          if (iVar2 == 0) {
            iVar2 = FUN_1002b1039(uVar3,&local_458);
            if (iVar2 == -0x80) goto LAB_1003cdc61;
            if (iVar2 == 0) {
              cVar1 = FUN_1002bd03f(param_2,*(undefined1 *)(param_1 + 0x39e),
                                    *(undefined1 *)(param_1 + 0x39d));
              if (cVar1 == '\0') {
                lVar4 = FUN_1003cc68c(param_1,&local_458,0);
                if (lVar4 == 0) {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    local_878 = 0x8220202;
                    local_874 = "Assertion failure";
                    local_86c = 0x822;
                    local_86a = "assetInfoDict != nullptr";
                    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_878
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  iVar2 = -0x2b;
                  goto LAB_1003cdc61;
                }
                iVar2 = FUN_1003cdec3(param_1 + 0x159c8,lVar4,&cf_relativeArtworkAssetPath,
                                      &local_878);
                if (iVar2 == -0x80) goto LAB_1003cdc61;
                if (iVar2 == 0) goto LAB_1003cddd3;
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 == '\0') goto LAB_1003cdc61;
                puVar5 = &local_898;
                local_898 = 0x8220202;
                local_894 = "Assertion failure";
                local_88c = 0x400;
                local_88a = iVar2;
              }
              else {
                iVar2 = FUN_1001887a6(&local_458,"iTunesArtwork",&local_878);
                if (iVar2 == -0x80) goto LAB_1003cdc61;
                if (iVar2 == 0) {
LAB_1003cddd3:
                  iVar2 = FUN_100180f0c(&local_878,0,param_3,0);
                  goto LAB_1003cdc61;
                }
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 == '\0') goto LAB_1003cdc61;
                puVar5 = &local_898;
                local_898 = 0x8220202;
                local_894 = "Assertion failure";
                local_88c = 0x400;
                local_88a = iVar2;
              }
            }
            else {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 == '\0') goto LAB_1003cdc61;
              puVar5 = &local_878;
              local_878 = 0x8220202;
              local_874 = "Assertion failure";
              local_86c = 0x400;
              local_86a = (char *)CONCAT44(local_86a._4_4_,iVar2);
            }
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 == '\0') goto LAB_1003cdc61;
            puVar5 = &local_458;
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x400;
            local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
          }
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",puVar5,0x12);
          goto LAB_1003cdc61;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_44a = "TrackInfoIsValidIPodPurchasedTrack(trackInfo)";
          goto LAB_1003cdc2e;
        }
      }
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1003cdc61:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

