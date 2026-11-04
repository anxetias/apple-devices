// name: FUN_1004ba637
// address: 1004ba637

void FUN_1004ba637(long *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong local_480;
  ulong local_478;
  long local_470;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  char *local_45a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1004aa626(*param_1);
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_45a = "DownloadItem_IsValid(downloadItem)";
LAB_1004ba988:
      local_45c = 0x822;
      local_464 = "Assertion failure";
      local_468 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
    }
  }
  else if ((((char)param_1[0x22] == '\0') || (param_1[0x21] == 0)) ||
          (*(char *)((long)param_1 + 0x111) != '\0')) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_45a = 
      "( (inHashInfo)->isComputingSegmentHashes && ((inHashInfo)->segmentsInfo != __null) && ((inHashInfo)->disableSegmentHashesOverride == false) )"
      ;
      goto LAB_1004ba988;
    }
  }
  else {
    local_470 = 0;
    param_1[0x3a] = param_1[0x24];
    param_1[0x3b] = param_1[0x25];
    *(int *)(param_1 + 0x3c) = (int)param_1[0x27];
    *(undefined4 *)((long)param_1 + 0x1e4) = *(undefined4 *)((long)param_1 + 0x13c);
    *(int *)(param_1 + 0x3d) = (int)param_1[0x28];
    *(undefined4 *)((long)param_1 + 0x1ec) = *(undefined4 *)((long)param_1 + 0x144);
    *(int *)(param_1 + 0x3e) = (int)param_1[0x29];
    *(undefined4 *)((long)param_1 + 500) = *(undefined4 *)((long)param_1 + 0x14c);
    *(int *)(param_1 + 0x3f) = (int)param_1[0x2a];
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)((long)param_1 + 0x154);
    *(int *)(param_1 + 0x40) = (int)param_1[0x2b];
    *(undefined4 *)((long)param_1 + 0x204) = *(undefined4 *)((long)param_1 + 0x15c);
    *(int *)(param_1 + 0x41) = (int)param_1[0x2c];
    *(undefined4 *)((long)param_1 + 0x20c) = *(undefined4 *)((long)param_1 + 0x164);
    param_1[0x42] = param_1[0x2d];
    param_1[0x43] = param_1[0x2e];
    *(char *)(param_1 + 0x44) = (char)param_1[0x2f];
    *(undefined8 *)((long)param_1 + 0x221) = *(undefined8 *)((long)param_1 + 0x179);
    *(undefined8 *)((long)param_1 + 0x229) = *(undefined8 *)((long)param_1 + 0x181);
    *(undefined8 *)((long)param_1 + 0x231) = *(undefined8 *)((long)param_1 + 0x189);
    *(undefined8 *)((long)param_1 + 0x239) = *(undefined8 *)((long)param_1 + 0x191);
    *(undefined8 *)((long)param_1 + 0x241) = *(undefined8 *)((long)param_1 + 0x199);
    *(undefined8 *)((long)param_1 + 0x249) = *(undefined8 *)((long)param_1 + 0x1a1);
    *(undefined4 *)((long)param_1 + 0x251) = *(undefined4 *)((long)param_1 + 0x1a9);
    *(undefined4 *)((long)param_1 + 0x255) = *(undefined4 *)((long)param_1 + 0x1ad);
    *(undefined4 *)((long)param_1 + 0x259) = *(undefined4 *)((long)param_1 + 0x1b1);
    *(undefined4 *)((long)param_1 + 0x25d) = *(undefined4 *)((long)param_1 + 0x1b5);
    *(undefined1 *)((long)param_1 + 0x261) = *(undefined1 *)((long)param_1 + 0x1b9);
    *(undefined1 *)(param_1 + 0x39) = 1;
    if (param_1[0x4d] != 0) {
      FUN_1001c64c1();
      param_1[0x4d] = 0;
    }
    cVar2 = FUN_1004aa626(*param_1);
    if (cVar2 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        puVar7 = &local_468;
        local_468 = 0x8220202;
        local_464 = "Assertion failure";
        local_45c = 0x822;
        pcVar6 = "DownloadItem_IsValid(inHashInfo->downloadItem)";
LAB_1004baace:
        *(char **)((long)puVar7 + 0xe) = pcVar6;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",puVar7,0x16);
      }
LAB_1004ba953:
      FUN_1001782e9(0,0);
    }
    else {
      FUN_1004aa912(*param_1,&local_468);
      iVar3 = FUN_10017cc65(&local_468,0x64617461,1,&local_470);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          iVar3 = FUN_10017ce92(local_470,&local_480);
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              if (local_480 != param_1[0x26] + param_1[0x24]) {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  local_48 = 0x8220202;
                  local_44 = "Assertion failure";
                  local_3c = 0x822;
                  local_3a = 
                  "eof == (hashComputation->hashStartOffset + hashComputation->bytesHashed)";
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              uVar8 = 1000;
              if (local_480 < 1000) {
                uVar8 = local_480;
              }
              local_478 = uVar8;
              lVar5 = FUN_1001c6429(uVar8);
              param_1[0x4d] = lVar5;
              if (lVar5 == 0) {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  puVar7 = &local_48;
                  local_48 = 0x8220202;
                  local_44 = "Assertion failure";
                  local_3c = 0x822;
                  pcVar6 = "errorInfo->cachedBytes != __null";
                  goto LAB_1004baace;
                }
                goto LAB_1004ba953;
              }
              iVar3 = FUN_10017d068(local_470,local_480 - uVar8);
              if (iVar3 != -0x80) {
                if (iVar3 == 0) {
                  iVar3 = FUN_10017d186(local_470,param_1[0x4d],uVar8,0,&local_478);
                  if (iVar3 != -0x80) {
                    if (iVar3 == 0) {
                      if (local_478 == 0) {
                        uVar4 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar4,0x10);
                        if (cVar2 != '\0') {
                          puVar7 = &local_48;
                          local_48 = 0x8220202;
                          local_44 = "Assertion failure";
                          local_3c = 0x822;
                          pcVar6 = "length > 0";
                          goto LAB_1004baace;
                        }
                        goto LAB_1004ba953;
                      }
                      *(int *)((long)param_1 + 0x264) = (int)local_478;
                    }
                    else {
                      uVar4 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar2 != '\0') {
                        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
                        goto LAB_1004baa4f;
                      }
                    }
                  }
                }
                else {
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar2 != '\0') {
                    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
                    goto LAB_1004baa4f;
                  }
                }
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
                goto LAB_1004baa4f;
              }
            }
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
LAB_1004baa4f:
            local_3c = 0x400;
            local_44 = "Assertion failure";
            local_48 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
    }
    if (local_470 != 0) {
      FUN_10017cdfb();
    }
    lVar5 = *param_1;
    uVar8 = param_1[0x24];
    local_470 = 0;
    cVar2 = FUN_1004aa626(lVar5);
    if ((cVar2 != '\0') && (*(char *)(lVar5 + 0x778) == '\0')) {
      if ((*(int *)(lVar5 + 0x140) == 0x66696c65) &&
         ((*(int *)(lVar5 + 0x1304) != 0x636f7079 && (*(int *)(lVar5 + 0x7d8) < 0)))) {
        if (*(long *)(lVar5 + 0x1b78) < (long)uVar8) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            puVar7 = &local_468;
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            pcVar6 = "inLeafInfo->bytesRead >= inAdjustedBytesRead";
LAB_1004baf17:
            *(char **)((long)puVar7 + 0xe) = pcVar6;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",puVar7,0x16);
          }
LAB_1004bac34:
          FUN_1001782e9(0,0);
        }
        else {
          FUN_10017060f(*(undefined8 *)(lVar5 + 0x12e8));
          *(undefined8 *)(lVar5 + 0x12e8) = 0;
          plVar1 = *(long **)(lVar5 + 0x1258);
          if (plVar1 == (long *)0x0) {
            FUN_1004aa912(lVar5,&local_468);
            iVar3 = FUN_10017cc65(&local_468,0x64617461,3,&local_470);
            if (iVar3 != -0x80) {
              if (iVar3 == 0) {
                iVar3 = FUN_10017ce92(local_470,&local_478);
                if (iVar3 != -0x80) {
                  if (iVar3 == 0) {
                    if (uVar8 <= local_478) {
                      FUN_10017cf3c(local_470,uVar8);
                      goto LAB_1004baed5;
                    }
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 != '\0') {
                      puVar7 = &local_48;
                      goto LAB_1004baccb;
                    }
                    goto LAB_1004bac34;
                  }
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar2 != '\0') {
                    puVar7 = &local_48;
                    local_48 = 0x8220202;
                    local_44 = "Assertion failure";
                    local_3c = 0x400;
                    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
                    goto LAB_1004baf8d;
                  }
                }
              }
              else {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  puVar7 = &local_48;
                  local_48 = 0x8220202;
                  local_44 = "Assertion failure";
                  local_3c = 0x400;
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
LAB_1004baf8d:
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar7,0x12);
                }
              }
            }
          }
          else {
            iVar3 = (**(code **)(*plVar1 + 0x100))(plVar1,&local_478);
            if (iVar3 != -0x80) {
              if (iVar3 == 0) {
                if (local_478 < uVar8) {
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar2 != '\0') {
                    puVar7 = &local_468;
LAB_1004baccb:
                    *puVar7 = 0x8220202;
                    *(char **)(puVar7 + 1) = "Assertion failure";
                    *(undefined2 *)(puVar7 + 3) = 0x822;
                    pcVar6 = "eof >= inAdjustedBytesRead";
                    goto LAB_1004baf17;
                  }
                  goto LAB_1004bac34;
                }
                (**(code **)(**(long **)(lVar5 + 0x1258) + 0x108))(*(long **)(lVar5 + 0x1258),uVar8)
                ;
LAB_1004baed5:
                *(ulong *)(lVar5 + 0x1b78) = uVar8;
                *(ulong *)(lVar5 + 0x12f0) = uVar8;
                *(undefined1 *)(lVar5 + 0x642) = 1;
              }
              else {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  puVar7 = &local_468;
                  local_468 = 0x8220202;
                  local_464 = "Assertion failure";
                  local_45c = 0x400;
                  local_45a = (char *)CONCAT44(local_45a._4_4_,iVar3);
                  goto LAB_1004baf8d;
                }
              }
            }
          }
        }
      }
      if (local_470 != 0) {
        FUN_10017cdfb();
      }
      goto LAB_1004ba6ef;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_45a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
      goto LAB_1004ba988;
    }
  }
  FUN_1001782e9(0,0);
LAB_1004ba6ef:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

