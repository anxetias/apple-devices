// name: FUN_10046fb2b
// address: 10046fb2b

long FUN_10046fb2b(int *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long local_4e0;
  int local_4d8;
  char *local_4d4;
  undefined2 local_4cc;
  char *local_4ca;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = *param_1;
  if (iVar2 == 0x44574e4c) {
    if ((char)param_1[0x120] != '\x01') goto LAB_10046fc0d;
    local_48 = 0;
    uStack_44 = 0;
    if (param_1[0x115] == 0) {
      uVar8 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar8,0x10);
      if (cVar1 != '\0') {
        local_4ca = "inTrackLocation->download.downloadItemID != 0";
LAB_10046fe6f:
        local_4cc = 0x822;
        local_4d4 = "Assertion failure";
        local_4d8 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_4d8,0x16);
      }
LAB_10046ff6a:
      lVar3 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      lVar3 = FUN_1004aab9f(0);
      if (lVar3 == 0) {
        uVar8 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar8,0x10);
        if (cVar1 != '\0') {
          local_4ca = "downloadManager != __null";
          goto LAB_10046fe6f;
        }
        goto LAB_10046ff6a;
      }
      lVar3 = FUN_1004ab0f6(lVar3,param_1[0x115]);
      if (lVar3 == 0) {
        uVar8 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar8,0x10);
        if (cVar1 != '\0') {
          local_4ca = "downloadItem != __null";
          goto LAB_10046fe6f;
        }
        goto LAB_10046ff6a;
      }
      lVar9 = CONCAT44(uStack_44,local_48);
      if (lVar9 == 0) {
        if ((*(char *)(lVar3 + 0x778) == '\0') && (*(int *)(lVar3 + 0x1304) == 0x68747470)) {
          uVar8 = FUN_1004aa733(lVar3);
        }
        else {
          uVar8 = 0;
        }
        FUN_1004701aa(&local_48,uVar8);
        lVar9 = CONCAT44(uStack_44,local_48);
        if (lVar9 == 0) {
          uVar8 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar8,0x10);
          if (cVar1 != '\0') {
            local_4ca = "urlString != __null";
            goto LAB_10046fe6f;
          }
          goto LAB_10046ff6a;
        }
      }
      lVar3 = FUN_1001744bd(DAT_1008c4d90,lVar9,0);
    }
    FUN_10014d890(&local_48);
    lVar9 = 0;
  }
  else if ((iVar2 == 0x46494c45) && (param_1[0xc] == 0x41464350)) {
LAB_10046fc0d:
    FUN_1001c62d9(&local_4d8,0x488);
    local_4d8 = iVar2;
    _memcpy(&local_4d4,param_1 + 1,0x460);
    local_4e0 = 0;
    plVar4 = operator_new(0x48,(nothrow_t *)PTR_nothrow_10082c970);
    if (plVar4 == (long *)0x0) {
      uVar8 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar8,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "itCMByteStream != nullptr";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      *plVar4 = (long)&PTR_FUN_10085c318;
      *(undefined4 *)(plVar4 + 1) = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[6] = 0;
      FUN_1001c62d9(plVar4 + 7,0x10);
      iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_4d8);
      uVar8 = DAT_1008c4d90;
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          uVar5 = _CMByteStreamGetClassID();
          iVar2 = _CMDerivedObjectCreate(uVar8,&DAT_10085c2f0,uVar5,&local_4e0);
          if (iVar2 == -0x80) goto LAB_10046febb;
          if (iVar2 == 0) {
            puVar6 = (undefined4 *)_CMBaseObjectGetDerivedStorage(local_4e0);
            *puVar6 = 0x62797473;
            *(long **)(puVar6 + 2) = plVar4;
            (**(code **)(*plVar4 + 0x18))(plVar4,local_4e0);
            goto LAB_10046fec6;
          }
          uVar8 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar8,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            goto LAB_100470111;
          }
        }
        else {
          uVar8 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar8,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_100470111:
            local_3c = 0x400;
            uStack_40 = 1;
            uStack_44 = 0x7a0a90;
            local_48 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
        if (iVar2 == 0) goto LAB_10046fec6;
      }
LAB_10046febb:
      local_4e0 = 0;
    }
LAB_10046fec6:
    lVar3 = 0;
    lVar9 = local_4e0;
  }
  else {
    lVar3 = FUN_1003d0a4e(0,iVar2,param_1 + 1,0);
    lVar9 = 0;
  }
  if (lVar3 == 0 && lVar9 == 0) {
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      local_4d8 = 0x8220202;
      local_4d4 = "Assertion failure";
      local_4cc = 0x822;
      local_4ca = "(url != __null) || (byteStream != __null)";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_4d8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (lVar9 != 0) {
      lVar7 = _AVCFAssetCreateWithByteStreamAndOptions(*(undefined8 *)(param_1 + 0x11e),lVar9);
      goto LAB_10046ffd5;
    }
    lVar7 = _AVCFURLAssetCreateWithURLAndOptions
                      (*(undefined8 *)(param_1 + 0x11e),lVar3,*(undefined8 *)(param_1 + 0x11a),
                       *(undefined8 *)(param_1 + 0x11c));
    if (lVar7 != 0) goto LAB_10046ffd5;
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      local_4d8 = 0x8220202;
      local_4d4 = "Assertion failure";
      local_4cc = 0x822;
      local_4ca = "asset != __null";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_4d8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  lVar7 = 0;
LAB_10046ffd5:
  FUN_10017060f(lVar9);
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

