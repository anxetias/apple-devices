// name: FUN_1004fad1d
// address: 1004fad1d

ulong FUN_1004fad1d(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  undefined1 *puVar4;
  char cVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined1 local_8c0 [80];
  long local_870;
  void *local_868;
  undefined4 local_860;
  uint local_85c;
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
  lVar2 = *param_2;
  if (*(int *)(lVar2 + 0x3c) != 0x46494c45) {
    if (*(long *)(lVar2 + 8) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(lVar2 + 8) + 0x10);
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      uVar6 = FUN_100318904(uVar7,0x7464706c);
      return uVar6;
    }
    goto LAB_1004fb1dd;
  }
  if ((*(long *)(lVar2 + 8) == 0) || (*(long *)(*(long *)(lVar2 + 8) + 0x10) == 0)) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_858 = 0x8220202;
      local_854 = "Assertion failure";
      local_84c = 0x822;
      local_84a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
    }
    FUN_1001782e9(0,0);
    uVar9 = 0xffffffce;
  }
  else {
    if (*(char *)(param_1 + 0x6ad7) != '\0') {
      pvVar3 = (void *)param_2[2];
      puVar4 = (undefined1 *)param_2[3];
      local_870 = param_2[4];
      uVar1 = *(uint *)(param_2 + 1);
      cVar5 = FUN_10017cbd0(param_1 + 0x6b40);
      if (cVar5 != '\0') {
        uVar9 = 0;
        local_85c = uVar1;
        if ((*(byte *)(lVar2 + 0x48) & 1) != 0) goto LAB_1004fb15f;
        local_868 = pvVar3;
        FUN_1002ae6f7(lVar2);
        *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) | 1;
        if (*(char *)(lVar2 + 0x44) == '\x01') {
          puVar8 = local_8c0;
          if (puVar4 != (undefined1 *)0x0) {
            puVar8 = puVar4;
          }
LAB_1004faeb6:
          uVar9 = 0;
          if ((local_85c & 0x40) == 0) {
            uVar9 = FUN_10017d477(*(undefined8 *)(lVar2 + 0x80),puVar8,local_870);
            if (uVar9 == 0) {
              FUN_100536603(puVar8,*(undefined8 *)(lVar2 + 0x80));
              uVar9 = 0;
              if ((local_85c & 2) == 0) {
                uVar9 = 0;
                FUN_10030ceed(lVar2,puVar8,local_85c >> 6 & 2,0);
              }
            }
            else {
              *(undefined1 *)(lVar2 + 0x44) = 0;
            }
          }
          cVar5 = *(char *)(lVar2 + 0x44);
          if (local_868 != (void *)0x0 && cVar5 == '\x01') {
            _memcpy(local_868,*(void **)(lVar2 + 0x80),0x420);
            cVar5 = *(char *)(lVar2 + 0x44);
          }
        }
        else {
          FUN_10017cbfd(*(undefined8 *)(lVar2 + 0x80));
          cVar5 = *(char *)(lVar2 + 0x44);
          puVar8 = local_8c0;
          if (puVar4 != (undefined1 *)0x0) {
            puVar8 = puVar4;
          }
          uVar9 = 0;
          if (cVar5 == '\x01') goto LAB_1004faeb6;
        }
        if ((cVar5 == '\x03') || (cVar5 == '\0')) {
          cVar5 = FUN_10032109f(lVar2);
          if (cVar5 == '\0') {
            uVar9 = 0xffffffce;
          }
          else {
            uVar7 = *(undefined8 *)(lVar2 + 0x80);
            local_860 = 0;
            if ((*(long *)(lVar2 + 8) == 0) || (*(long *)(*(long *)(lVar2 + 8) + 0x10) == 0)) {
              uVar7 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar7,0x10);
              if (cVar5 != '\0') {
                local_4a = "TrackInstanceIsValid(trackInstance)";
LAB_1004fb120:
                local_4c = 0x822;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
LAB_1004fb145:
              FUN_1001782e9(0,0);
              uVar9 = 0xffffffce;
LAB_1004fb154:
              uVar10 = 2;
            }
            else {
              if (*(int *)(lVar2 + 0x3c) != 0x46494c45) {
                uVar7 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar7,0x10);
                if (cVar5 != '\0') {
                  local_4a = "trackInstance->trackKind == kITFileKind";
                  goto LAB_1004fb120;
                }
                goto LAB_1004fb145;
              }
              uVar9 = FUN_100320fae(lVar2,&local_858,0x3ff,&local_860);
              if ((uVar9 != 0) ||
                 (uVar9 = FUN_10017d64f(param_1 + 0x6b40,&local_858,local_860,uVar7,puVar8,local_870
                                       ), uVar9 != 0)) goto LAB_1004fb154;
              FUN_100536603(puVar8,*(undefined8 *)(lVar2 + 0x80));
              *(undefined1 *)(lVar2 + 0x44) = 1;
              if ((local_85c & 2) == 0) {
                FUN_10030ceed(lVar2,puVar8,local_85c >> 6 & 2,0);
              }
              uVar9 = 0;
              uVar10 = 1;
              if (local_868 != (void *)0x0) {
                _memcpy(local_868,*(void **)(lVar2 + 0x80),0x420);
              }
            }
            *(undefined1 *)(lVar2 + 0x44) = uVar10;
          }
        }
        *(byte *)(lVar2 + 0x48) = *(byte *)(lVar2 + 0x48) & 0xfe;
        goto LAB_1004fb15f;
      }
    }
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_858 = 0x8220202;
      local_854 = "Assertion failure";
      local_84c = 0x822;
      local_84a = "IsDeviceMounted(handlerData)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
    }
    FUN_1001782e9(0,0);
    uVar9 = 0xffffffdd;
  }
LAB_1004fb15f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)uVar9;
  }
LAB_1004fb1dd:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

