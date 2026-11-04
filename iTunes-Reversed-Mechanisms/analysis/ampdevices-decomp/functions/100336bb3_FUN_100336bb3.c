// name: FUN_100336bb3
// address: 100336bb3

undefined8 FUN_100336bb3(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  double dVar8;
  undefined4 local_d28;
  undefined8 local_d24;
  undefined2 local_d1c;
  undefined2 uStack_d1a;
  undefined6 uStack_d18;
  undefined1 local_cf4 [4];
  int local_cf0;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100336cd4:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      puVar7 = &local_d28;
      local_d28 = 0x8220202;
      local_d24 = "Assertion failure";
      local_d1c = 0x822;
      pcVar3 = "DulcimerHandlerDataIsValid(handlerData)";
      goto LAB_100336d8f;
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_d28 = 0x8220202;
        local_d24 = "Assertion failure (expected to be true)";
        local_d1c = 0x822;
        uStack_d1a = 0xd710;
        uStack_d18 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_d28,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100336cd4;
    }
    if (*(long *)(param_1 + 0x16688) == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_d28 = 0x8220202;
        local_d24 = "Assertion failure";
        local_d1c = 0x822;
        uStack_d1a = 0x1a8;
        uStack_d18 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_d28,0x16);
      }
      FUN_1001782e9(0,0);
      uVar2 = 0x484;
      goto LAB_100336fb4;
    }
    if (param_2 == 0) {
LAB_100336d4b:
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        puVar7 = &local_d28;
        local_d28 = 0x8220202;
        local_d24 = "Assertion failure";
        local_d1c = 0x822;
        pcVar3 = "TrackDataIsValid(trackData)";
        goto LAB_100336d8f;
      }
    }
    else {
      if (*(int *)(param_2 + 0x80) != 0x74646174) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_d28 = 0x8220202;
          local_d24 = "Assertion failure (expected to be true)";
          local_d1c = 0x822;
          uStack_d1a = 0xec03;
          uStack_d18 = 0x1007a;
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_d28,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_100336d4b;
      }
      if ((*(long *)(param_1 + 0x30) == param_2) || ((*(byte *)(param_2 + 0x1bb0) & 1) != 0)) {
        dVar8 = (double)FUN_1001ebd46();
        uVar2 = 0;
        if (dVar8 < *(double *)(param_1 + 0x16828) + DAT_100700b00) goto LAB_100336fb4;
        cVar1 = FUN_10015b1df(param_2 + 0x2c20,*(undefined4 *)(param_2 + 0x2c50),&local_d28);
        if (cVar1 == '\0') {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            puVar7 = &local_58;
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            pcVar3 = "GetArrayItem( &trackData->copyFileList, trackData->copyFileIndex, &fileItem )"
            ;
            goto LAB_100336d8f;
          }
        }
        else {
          if (local_cf0 == 0) {
            uVar2 = 0;
            if (CONCAT22(uStack_d1a,local_d1c) == 0) goto LAB_100336fb4;
            lVar4 = FUN_10030252b((long)&local_d24 + 4);
            if (lVar4 != 0) goto LAB_100336fb4;
          }
          else {
            uVar2 = *(undefined8 *)
                     (param_1 + 0x167f0 + (ulong)(*(long *)(param_1 + 0x30) != param_2) * 8);
            lVar4 = FUN_10030252b(local_cf4);
            if (lVar4 != 0) {
              uVar5 = FUN_100165701(DAT_1008c4d90,**(undefined8 **)(lVar4 + 8));
              lVar4 = FUN_100166b7f(uVar2,uVar5);
              FUN_10017060f(uVar5);
              uVar2 = 0;
              if (lVar4 != 0) {
                lVar6 = FUN_100166c1b(lVar4,&cf_AssetID);
                lVar4 = FUN_100166c1b(lVar4,&cf_Dataclass);
                if (lVar6 == 0 || lVar4 == 0) {
                  uVar2 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar2,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "assetIdentifier != nullptr && dataclass != nullptr";
                    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  uVar2 = 0;
                  FUN_1001782e9(0,0);
                }
                else {
                  _ATHostConnectionSendFileProgress
                            (*(undefined8 *)(param_2 + 0x2c68),*(undefined8 *)(param_2 + 0x2c70),
                             *(undefined8 *)(param_1 + 0x16688),lVar6,lVar4);
                  uVar5 = FUN_1001ebd46();
                  *(undefined8 *)(param_1 + 0x16828) = uVar5;
                }
              }
              goto LAB_100336fb4;
            }
          }
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            puVar7 = &local_58;
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            pcVar3 = "trackInstance != nullptr";
LAB_100336d8f:
            *(char **)((long)puVar7 + 0xe) = pcVar3;
            __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",puVar7,0x16);
          }
        }
      }
      else {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          puVar7 = &local_d28;
          local_d28 = 0x8220202;
          local_d24 = "Assertion failure";
          local_d1c = 0x822;
          pcVar3 = "trackData == handlerData->trackData || trackData->isPrimaryTrackData";
          goto LAB_100336d8f;
        }
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100336fb4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

