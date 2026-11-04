// name: FUN_1004a8990
// address: 1004a8990

int FUN_1004a8990(long param_1,undefined8 *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  undefined8 uVar26;
  long lVar27;
  int iVar28;
  undefined8 local_60;
  uint local_54;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar28 = 0;
  if (*(char *)(param_1 + 0x778) != '\0') goto LAB_1004a8e2e;
  if ((*(int *)(param_1 + 0x140) != 0) && (*(int *)(param_1 + 0x140) != 0x70656e64)) {
    uVar26 = FUN_1001cc310();
    cVar23 = _os_log_type_enabled(uVar26,0x10);
    if (cVar23 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 
      "(inItem->downloadTargetType == 0) || (inItem->downloadTargetType == kDownloadDataDeliveryType_Pending)"
      ;
      __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar28 = 0x234f;
    goto LAB_1004a8e2e;
  }
  if (((param_2[5] == 0) && (param_2[6] == 0)) && (*(char *)(param_2 + 9) == '\0')) {
    uVar26 = FUN_1001cc310();
    cVar23 = _os_log_type_enabled(uVar26,0x10);
    if (cVar23 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 
      "(inParams->mURL != __null) || (inParams->mURLList != __null) || (inParams->mSourceFileValid)"
      ;
      __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar28 = -0x32;
    goto LAB_1004a8e2e;
  }
  uVar4 = *(undefined4 *)((long)param_2 + 0x4c4);
  uVar5 = *(undefined4 *)(param_2 + 0x99);
  uVar6 = *(undefined4 *)((long)param_2 + 0x4cc);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = uVar5;
  *(undefined4 *)(param_1 + 0x8c) = uVar6;
  FUN_1001c631b(param_2 + 0x9a,param_1 + 0x90,0x30);
  FUN_1001c631b(param_2 + 0xa0,param_1 + 0xc0,0x2c);
  *(undefined8 *)(param_1 + 0x120) = *param_2;
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x144) = param_2[0x8e];
  FUN_100203686(param_1 + 0x150,param_2 + 0x95);
  *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(param_2 + 0x97);
  FUN_1001b8172(param_1 + 0x130,param_2 + 2);
  iVar28 = *(int *)(param_2 + 0x8f);
  *(int *)(param_1 + 0x140) = iVar28;
  if (iVar28 == 0x66696c65) {
    puVar2 = (uint *)(param_1 + 0x7d8);
    _memcpy(puVar2,(void *)param_2[0x90],0x658);
    uVar24 = *(uint *)(param_1 + 0x7d8);
    if ((uVar24 & 0x20) == 0) {
      if (-1 < (int)uVar24) goto LAB_1004a8b02;
    }
    else {
      uVar24 = uVar24 & 0x7ffffffd;
      *puVar2 = uVar24;
LAB_1004a8b02:
      *(undefined1 *)(param_1 + 0x210) = 2;
    }
    if ((uVar24 & 0x10) != 0) {
      uVar24 = uVar24 & 0xfffffff7;
      *puVar2 = uVar24;
    }
    if ((uVar24 & 1) != 0) {
      FUN_1004a9316(param_1,param_1 + 0x7e0);
    }
  }
  uVar26 = param_2[0x92];
  *(undefined8 *)(param_1 + 7000) = uVar26;
  *(undefined8 *)(param_1 + 0x1b78) = uVar26;
  *(undefined8 *)(param_1 + 0x12f0) = uVar26;
  lVar27 = param_2[0x93];
  if (0 < lVar27) {
    *(long *)(param_1 + 0x1b68) = lVar27;
    *(long *)(param_1 + 0x1b60) = lVar27;
  }
  *(undefined4 *)(param_1 + 0x1b70) = *(undefined4 *)(param_2 + 0x94);
  if (*(int *)(param_1 + 0x120) == 0x73746f72) {
    *(undefined8 *)(param_1 + 0x1b88) = 0x405e000000000000;
  }
  if (*(char *)((long)param_2 + 0x52c) != '\0') {
    *(undefined1 *)(param_1 + 0x1c09) = *(undefined1 *)((long)param_2 + 0x56d);
    uVar4 = *(undefined4 *)((long)param_2 + 0x52d);
    uVar5 = *(undefined4 *)((long)param_2 + 0x531);
    uVar6 = *(undefined4 *)((long)param_2 + 0x535);
    uVar7 = *(undefined4 *)((long)param_2 + 0x539);
    uVar8 = *(undefined4 *)((long)param_2 + 0x53d);
    uVar9 = *(undefined4 *)((long)param_2 + 0x541);
    uVar10 = *(undefined4 *)((long)param_2 + 0x545);
    uVar11 = *(undefined4 *)((long)param_2 + 0x549);
    uVar12 = *(undefined4 *)((long)param_2 + 0x54d);
    uVar13 = *(undefined4 *)((long)param_2 + 0x551);
    uVar14 = *(undefined4 *)((long)param_2 + 0x555);
    uVar15 = *(undefined4 *)((long)param_2 + 0x559);
    uVar16 = *(undefined4 *)((long)param_2 + 0x561);
    uVar17 = *(undefined4 *)((long)param_2 + 0x565);
    uVar18 = *(undefined4 *)((long)param_2 + 0x569);
    *(undefined4 *)(param_1 + 0x1bf9) = *(undefined4 *)((long)param_2 + 0x55d);
    *(undefined4 *)(param_1 + 0x1bfd) = uVar16;
    *(undefined4 *)(param_1 + 0x1c01) = uVar17;
    *(undefined4 *)(param_1 + 0x1c05) = uVar18;
    *(undefined4 *)(param_1 + 0x1be9) = uVar12;
    *(undefined4 *)(param_1 + 0x1bed) = uVar13;
    *(undefined4 *)(param_1 + 0x1bf1) = uVar14;
    *(undefined4 *)(param_1 + 0x1bf5) = uVar15;
    *(undefined4 *)(param_1 + 0x1bd9) = uVar8;
    *(undefined4 *)(param_1 + 0x1bdd) = uVar9;
    *(undefined4 *)(param_1 + 0x1be1) = uVar10;
    *(undefined4 *)(param_1 + 0x1be5) = uVar11;
    *(undefined4 *)(param_1 + 0x1bc9) = uVar4;
    *(undefined4 *)(param_1 + 0x1bcd) = uVar5;
    *(undefined4 *)(param_1 + 0x1bd1) = uVar6;
    *(undefined4 *)(param_1 + 0x1bd5) = uVar7;
    *(undefined1 *)(param_1 + 0x1c12) = 1;
    FUN_1004afcf8(param_1 + 0x1c10);
    if (*(char *)((long)param_2 + 0x52d) == '\0') {
      FUN_1004afcf8(param_1 + 0x1c10);
    }
    else {
      *(undefined1 *)(param_1 + 0x1c70) = *(undefined1 *)((long)param_2 + 0x56d);
      uVar4 = *(undefined4 *)((long)param_2 + 0x52d);
      uVar5 = *(undefined4 *)((long)param_2 + 0x531);
      uVar6 = *(undefined4 *)((long)param_2 + 0x535);
      uVar7 = *(undefined4 *)((long)param_2 + 0x539);
      uVar26 = *(undefined8 *)((long)param_2 + 0x53d);
      uVar19 = *(undefined8 *)((long)param_2 + 0x545);
      uVar20 = *(undefined8 *)((long)param_2 + 0x54d);
      uVar21 = *(undefined8 *)((long)param_2 + 0x555);
      uVar22 = *(undefined8 *)((long)param_2 + 0x565);
      *(undefined8 *)(param_1 + 0x1c60) = *(undefined8 *)((long)param_2 + 0x55d);
      *(undefined8 *)(param_1 + 0x1c68) = uVar22;
      *(undefined8 *)(param_1 + 0x1c50) = uVar20;
      *(undefined8 *)(param_1 + 0x1c58) = uVar21;
      *(undefined8 *)(param_1 + 0x1c40) = uVar26;
      *(undefined8 *)(param_1 + 0x1c48) = uVar19;
      *(undefined4 *)(param_1 + 0x1c30) = uVar4;
      *(undefined4 *)(param_1 + 0x1c34) = uVar5;
      *(undefined4 *)(param_1 + 0x1c38) = uVar6;
      *(undefined4 *)(param_1 + 0x1c3c) = uVar7;
      *(undefined1 *)(param_1 + 0x1c10) = 1;
      *(undefined1 *)(param_1 + 0x1c13) = 1;
    }
    lVar27 = param_2[0xae];
    if (lVar27 != 0) {
      if (*(long *)(param_1 + 0x1cc8) != 0) {
        piVar1 = (int *)(*(long *)(param_1 + 0x1cc8) + 4);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1004a8100();
        }
      }
      *(int *)(lVar27 + 4) = *(int *)(lVar27 + 4) + 1;
      *(undefined1 *)(param_1 + 0x1cd0) = 1;
      *(long *)(param_1 + 0x1cc8) = lVar27;
    }
  }
  if (*(int *)(param_1 + 0x1300) == 0x646c7470) {
    uVar26 = FUN_1001cc310();
    cVar23 = _os_log_type_enabled(uVar26,0x10);
    if (cVar23 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inItem->leaf.downloadTransport.magic != \'dltp\'";
      __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1004a8e08:
    iVar25 = -0x32;
  }
  else {
    *(undefined4 *)(param_1 + 0x1300) = 0x646c7470;
    iVar28 = 0;
    if (param_2[5] == 0) {
      lVar27 = param_2[6];
      if (lVar27 != 0) {
        *(undefined4 *)(param_1 + 0x1304) = 0x68747470;
        if (*(long *)(param_1 + 0x1308) == 0) {
          *(long *)(param_1 + 0x1308) = lVar27;
          FUN_100197f12();
          lVar27 = FUN_1001966f6(*(undefined8 *)(param_1 + 0x1308));
          if (lVar27 == 0) {
            FUN_100132900(&local_48);
            FUN_1001aaf14(&local_50,&local_48);
            FUN_1001b7a50(&local_48);
            FUN_100198006(*(undefined8 *)(param_1 + 0x1308),local_50);
            FUN_1001ab006(&local_50);
          }
          puVar3 = (undefined8 *)(param_1 + 0x1310);
          FUN_100198282(*(undefined8 *)(param_1 + 0x1308),0,puVar3);
          uVar26 = FUN_1001705fc(*puVar3);
          *puVar3 = uVar26;
LAB_1004a8dc2:
          uVar26 = FUN_1001705fc(param_2[7]);
          *(undefined8 *)(param_1 + 0x1330) = uVar26;
          goto LAB_1004a8e2e;
        }
LAB_1004a8de2:
        uVar26 = FUN_1001cc310();
        cVar23 = _os_log_type_enabled(uVar26,0x10);
        if (cVar23 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "httpTransport->urlList == __null";
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1004a8e08;
      }
      iVar25 = -0x32;
      if (*(char *)(param_2 + 9) != '\0') {
        *(undefined4 *)(param_1 + 0x1304) = 0x636f7079;
        if (*(int *)(param_2 + 0x8f) == 0x66696c65) {
          _memcpy((void *)(param_1 + 0x1308),param_2 + 10,0x420);
          *(long *)(param_1 + 0x1b48) = param_1 + 0xe30;
          goto LAB_1004a8e2e;
        }
        uVar26 = FUN_1001cc310();
        cVar23 = _os_log_type_enabled(uVar26,0x10);
        if (cVar23 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "inParams->mDataDeliveryType == kDownloadDataDeliveryType_File";
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1304) = 0x68747470;
      if (param_2[6] != 0) {
        uVar26 = FUN_1001cc310();
        cVar23 = _os_log_type_enabled(uVar26,0x10);
        if (cVar23 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "inParams->mURL == __null || inParams->mURLList == __null";
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1004a8e08;
      }
      if (*(long *)(param_1 + 0x1308) != 0) goto LAB_1004a8de2;
      FUN_100132900(&local_48);
      FUN_1001aaf14(&local_50,&local_48);
      FUN_1001b7a50(&local_48);
      local_60 = 0xbff0000000000000;
      local_54 = *(uint *)(param_2 + 0x8e) >> 3 & 1;
      lVar27 = FUN_100197ece();
      *(long *)(param_1 + 0x1308) = lVar27;
      if (lVar27 == 0) {
        uVar26 = FUN_1001cc310();
        cVar23 = _os_log_type_enabled(uVar26,0x10);
        if (cVar23 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "httpTransport->urlList != __null";
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        FUN_1001ab006(&local_50);
        iVar25 = -0x6c;
      }
      else {
        FUN_100198006(lVar27,local_50);
        iVar25 = FUN_100198086(*(undefined8 *)(param_1 + 0x1308),param_2[5],param_2[0x91],local_50,
                               &local_60,&local_54);
        if (iVar25 == 0) {
          uVar26 = FUN_1001705fc(param_2[5]);
          *(undefined8 *)(param_1 + 0x1310) = uVar26;
          FUN_1001ab006(&local_50);
          goto LAB_1004a8dc2;
        }
        if (iVar25 == -0x80) {
          FUN_1001ab006(&local_50);
          iVar28 = -0x80;
          goto LAB_1004a8e2e;
        }
        uVar26 = FUN_1001cc310();
        cVar23 = _os_log_type_enabled(uVar26,0x10);
        if (cVar23 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar25);
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        FUN_1001ab006(&local_50);
        iVar28 = 0;
        if (iVar25 == 0) goto LAB_1004a8e2e;
      }
    }
  }
  uVar26 = FUN_1001cc310();
  cVar23 = _os_log_type_enabled(uVar26,0x10);
  iVar28 = iVar25;
  if (cVar23 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x400;
    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar25);
    __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_1004a8e2e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar28;
}

