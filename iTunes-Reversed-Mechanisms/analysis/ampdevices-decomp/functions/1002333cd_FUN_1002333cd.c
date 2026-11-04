// name: FUN_1002333cd
// address: 1002333cd

void FUN_1002333cd(long param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined7 uVar11;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  bool bVar12;
  uint local_e8 [5];
  undefined4 local_d4;
  undefined1 local_d0 [16];
  undefined1 local_c0 [20];
  undefined4 local_ac;
  uint local_a8;
  char *local_a4;
  undefined2 local_9c;
  char *local_9a;
  undefined2 local_92;
  undefined8 local_90;
  undefined2 local_88;
  char *local_86;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined2 local_78;
  char *local_76;
  undefined2 local_6e;
  undefined4 local_6c;
  undefined2 local_68;
  char *local_66;
  undefined2 local_5e;
  int local_5c;
  undefined2 local_58;
  int local_56;
  undefined2 local_52;
  int local_50;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) goto LAB_100233e80;
  FUN_1001b7a44(local_d0);
  FUN_1001b7a44(local_c0);
  uVar7 = FUN_100266a70(*(undefined8 *)(param_1 + 0x66d8));
  *(char *)(param_1 + 0x6ac8) = (char)uVar7;
  uVar11 = (undefined7)((ulong)uVar7 >> 8);
  local_d4 = (undefined4)CONCAT71(uVar11,1);
  if (*(int *)(param_1 + 0x152dc) == 0) {
    if (((*(char *)(param_1 + 0x6abf) == '\0') && (*(char *)(param_1 + 0x6ac1) == '\0')) &&
       (*(char *)(param_1 + 0x6ac2) == '\0')) {
      local_d4 = (undefined4)CONCAT71(uVar11,*(char *)(param_1 + 0x6ac3) == '\0');
    }
    else {
      local_d4 = 0;
    }
  }
  iVar5 = *(int *)(param_1 + 0x67b4);
  cVar2 = FUN_10039e077(*(undefined4 *)(param_1 + 0x28),1,0);
  if (((cVar2 != '\0') || (*(char *)(param_1 + 0x6abd) == '\0')) ||
     (lVar9 = *(long *)(param_1 + 0x30), lVar9 == 0)) {
    local_ac = 0;
    cVar2 = '\0';
    bVar1 = false;
    goto LAB_1002334dc;
  }
  if ((*(char *)(param_1 + 0x6acf) == '\0') &&
     (((*(byte *)(lVar9 + 0x2be0) & 0x20) == 0 || (*(char *)(param_1 + 0x14cda) == '\0')))) {
    cVar2 = FUN_100266a70(*(undefined8 *)(param_1 + 0x66d8));
    if ((((cVar2 == '\0') ||
         (cVar2 = FUN_100266904(*(undefined8 *)(param_1 + 0x66d8)), cVar2 != '\0')) &&
        (*(char *)(param_1 + 0x3a2) == '\0')) &&
       (uVar10 = *(ulong *)(param_1 + 0x6b30), uVar10 != 0)) {
      if (((char)local_d4 != '\0') && (*(char *)(param_1 + 0x6ad7) != '\0')) {
        cVar2 = FUN_10017cbd0(param_1 + 0x6b40);
        if (cVar2 != '\0') goto LAB_1002340b9;
        uVar10 = *(ulong *)(param_1 + 0x6b30);
      }
      if ((uVar10 & 0xfffffffffffffff0) == 0x1000000 || (uVar10 & 0x24fb838639e0) == 0)
      goto LAB_1002340b9;
      uVar10 = *(ulong *)(param_1 + 0x6b28) | *(ulong *)(param_1 + 0x6b20);
      local_ac = (undefined4)CONCAT71((int7)(uVar10 >> 8),uVar10 == 0);
    }
    else {
LAB_1002340b9:
      local_ac = 0;
    }
    cVar2 = '\0';
    bVar1 = false;
  }
  else {
    if ((((*(ulong *)(param_1 + 0x6b20) & 0x24fb838639e0) == 0) &&
        ((*(char *)(param_1 + 0x3a2) == '\0' || ((*(byte *)(lVar9 + 0x2be0) & 0x20) == 0)))) ||
       ((cVar2 = *(char *)(param_1 + 0x6ac8), cVar2 == '\0' && (*(long *)(lVar9 + 0x2c60) != 0))))
    goto LAB_1002340b9;
    bVar1 = true;
    local_ac = 0;
  }
  if ((*(char *)(param_1 + 0x6ada) == '\0') && (*(int *)(param_1 + 0x6b0c) == 0)) {
    if ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2be0) & 0x20) != 0) goto LAB_1002334dc;
    if ((*(char *)(param_1 + 0x15948) == '\0') && (*(int *)(param_1 + 0x15934) == 0)) {
      if (*(int *)(param_1 + 0x166d4) == 1) {
        if (*(long *)(param_1 + 0x6b20) == 0) {
LAB_1002345e9:
          if ((*(long *)(param_1 + 0x16640) == 0) ||
             (*(int *)(*(long *)(param_1 + 0x16640) + 0x78) == 0)) goto LAB_1002334dc;
        }
      }
      else if (4 < *(int *)(param_1 + 0x166d4) - 2U) goto LAB_1002345e9;
    }
  }
  cVar2 = *(char *)(param_1 + 0x6ac8);
  bVar1 = true;
  if ((iVar5 != 0x77666d64) && (iVar5 != 0)) {
    local_ac = 0;
    goto LAB_1002334dc;
  }
  iVar4 = 0x7265746e;
  if ((*(char *)(param_1 + 0x6ada) != '\0') || (iVar4 = 0x73746172, *(int *)(param_1 + 0x6b0c) != 0)
     ) goto switchD_10023452a_caseD_2;
  if (*(long *)(param_1 + 0x16688) == 0) {
    if ((*(ulong *)(param_1 + 0x6b30) & 0x24fb838639e0) == 0) goto switchD_10023427e_caseD_3;
    cVar3 = FUN_100402ecf(*(undefined8 *)(param_1 + 0x30));
    iVar4 = 0x66696e69;
    if (cVar3 != '\0') {
      iVar4 = iVar5;
    }
    local_ac = 0;
    if (cVar3 == '\0' || iVar5 != 0) goto switchD_10023452a_caseD_2;
    goto LAB_1002345bf;
  }
  if ((*(char *)(param_1 + 0x151d0) != '\0') || (*(char *)(param_1 + 0x6acf) != '\0')) {
    switch(*(undefined4 *)(param_1 + 0x166d4)) {
    case 1:
      iVar4 = iVar5;
      if (iVar5 == 0) {
        if (*(ulong *)(param_1 + 0x6b20) == 0) goto LAB_100234548;
        iVar4 = 0x77737461;
        if (((*(ulong *)(param_1 + 0x6b20) | *(ulong *)(param_1 + 0x6b28)) & 0xffffffffebfffff0) ==
            0x1000000) {
          iVar4 = 0x626b7570;
        }
      }
      break;
    case 2:
      iVar4 = 0x77737461;
      break;
    default:
      goto switchD_10023427e_caseD_3;
    case 5:
      iVar4 = 0x77666d64;
      break;
    case 6:
      goto switchD_10023427e_caseD_6;
    case 7:
    case 8:
      iVar6 = *(int *)(param_1 + 0x15934);
      bVar12 = iVar6 == 0;
      iVar4 = 0x66696e69;
      goto LAB_1002345a8;
    case 9:
      iVar6 = *(int *)(param_1 + 0x15934);
      bVar12 = iVar6 == 0;
      iVar4 = 0x63616e63;
      goto LAB_1002345a8;
    }
    goto switchD_10023452a_caseD_2;
  }
  iVar4 = 0x70727075;
  switch(*(undefined4 *)(param_1 + 0x166d4)) {
  case 6:
switchD_10023427e_caseD_6:
    iVar4 = 0x78666572;
  case 2:
  case 3:
  case 4:
  case 5:
switchD_10023452a_caseD_2:
    iVar5 = iVar4;
    if (*(long *)(param_1 + 0x6750) != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,2);
      if (cVar3 != '\0') {
        local_a8 = local_a8 & 0xffff0000;
        __os_log_impl(0x100000000,uVar7,2,"progress> deleting sync progress bar",&local_a8,2);
      }
      FUN_10052897c(*(undefined8 *)(param_1 + 0x6750));
      if (*(long *)(param_1 + 0x6750) != 0) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_a8 = 0x8220202;
          local_a4 = "Assertion failure";
          local_9c = 0x822;
          local_9a = "handlerData->syncProgressBar == nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *(undefined8 *)(param_1 + 0x6750) = 0;
    }
LAB_1002341c2:
    local_ac = 0;
    break;
  case 7:
  case 8:
    iVar6 = *(int *)(param_1 + 0x15934);
    bVar12 = iVar6 == 0;
    iVar4 = 0x66696e75;
    goto LAB_1002345a8;
  case 9:
    iVar6 = *(int *)(param_1 + 0x15934);
    bVar12 = iVar6 == 0;
    iVar4 = 0x63616e75;
LAB_1002345a8:
    if (bVar12) {
      iVar4 = iVar5;
    }
    local_ac = 0;
    if (iVar6 != 0 || iVar5 != 0) goto switchD_10023452a_caseD_2;
LAB_1002345bf:
    local_ac = 0;
    iVar5 = 0;
    break;
  default:
switchD_10023427e_caseD_3:
    iVar4 = iVar5;
    if (iVar5 != 0) goto switchD_10023452a_caseD_2;
LAB_100234548:
    iVar5 = 0;
    goto LAB_1002341c2;
  }
LAB_1002334dc:
  if (((*(long *)(param_1 + 0x6758) != 0) &&
      (*(char *)(*(long *)(param_1 + 0x6758) + 0x8e0) == '\0')) ||
     (*(char *)(param_1 + 0x6aeb) != '\0')) {
    local_ac = 0;
    cVar2 = '\0';
    bVar1 = false;
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar7 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,2);
  if (cVar3 != '\0') {
    local_66 = "YES";
    local_a4 = "YES";
    if (*(char *)(param_1 + 0x6acf) == '\0') {
      local_a4 = "NO";
    }
    local_90 = "YES";
    if (*(char *)(param_1 + 0x6ada) == '\0') {
      local_90 = "NO";
    }
    local_9a = *(char **)(param_1 + 0x6b20);
    local_86 = "YES";
    if (*(char *)(param_1 + 0x15948) == '\0') {
      local_86 = "NO";
    }
    local_7c = *(undefined4 *)(param_1 + 0x6b0c);
    local_76 = "NO";
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (local_76 = "NO", (*(uint *)(*(long *)(param_1 + 0x30) + 0x2be0) & 0x20) != 0)) {
      local_76 = "YES";
    }
    local_6c = *(undefined4 *)(param_1 + 0x166d4);
    if (!bVar1) {
      local_66 = "NO";
    }
    local_a8 = 0x8220c02;
    local_9c = 0x800;
    local_92 = 0x822;
    local_88 = 0x822;
    local_7e = 0x400;
    local_78 = 0x822;
    local_6e = 0x400;
    local_68 = 0x822;
    local_5c = iVar5 >> 0x18;
    local_5e = 0x400;
    local_56 = (int)(char)((uint)iVar5 >> 0x10);
    local_58 = 0x400;
    local_50 = (int)(char)((uint)iVar5 >> 8);
    local_52 = 0x400;
    local_4c = 0x400;
    local_4a = (int)(char)iVar5;
    __os_log_impl(0x100000000,uVar7,2,
                  "progress> syncInProgress = %{public}s, syncOptions = 0x%016llX, isRetainingPod = %{public}s, saveFilesPending = %{public}s, syncStartFiberID = %u, runningCopyFiber = %{public}s, airTrafficSyncState = %u, shouldHaveSyncProgressBar = %{public}s, syncOperation = \'%c%c%c%c\'"
                  ,&local_a8,0x62);
  }
  if (((char)local_ac == '\0') && (*(long *)(param_1 + 0x6748) != 0)) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar7 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,2);
    if (cVar3 != '\0') {
      local_a8 = local_a8 & 0xffff0000;
      __os_log_impl(0x100000000,uVar7,2,"progress> deleting complete progress bar",&local_a8,2);
    }
    FUN_10052897c(*(undefined8 *)(param_1 + 0x6748));
    if (*(long *)(param_1 + 0x6748) != 0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_a8 = 0x8220202;
        local_a4 = "Assertion failure";
        local_9c = 0x822;
        local_9a = "handlerData->completeProgressBar == nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
      }
      FUN_1001782e9(0,0);
    }
    *(undefined8 *)(param_1 + 0x6748) = 0;
  }
  if (bVar1) {
    if ((cVar2 != '\0') && (*(long *)(param_1 + 0x6740) == 0)) {
      uVar7 = 0x10cc00af;
      if (*(char *)(param_1 + 0x6adb) == '\0') {
        uVar7 = 0x10cc0057;
      }
      uVar7 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),uVar7);
      FUN_1001b81f2(local_d0,uVar7);
      FUN_1001c334a(&local_a8,0x10cf0046);
      FUN_1001b80b2(local_c0,&local_a8);
      FUN_1001b7a50(&local_a8);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
      if (cVar2 != '\0') {
        pcVar8 = (char *)FUN_1001b83ae(local_d0);
        local_9a = (char *)FUN_1001b83ae(local_c0);
        local_a8 = 0x8220202;
        local_9c = 0x822;
        local_a4 = pcVar8;
        __os_log_impl(0x100000000,uVar7,2,
                      "progress> creating update progress bar \"%{public}s\" / \"%{public}s\"",
                      &local_a8,0x16);
      }
      uVar7 = FUN_10048604a(*(undefined8 *)(param_1 + 0x30));
      iVar4 = FUN_100528802(uVar7,local_d0,local_c0,0,0,1,0x808,(long *)(param_1 + 0x6740),0);
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_a8 = 0x8220202;
          local_a4 = "Assertion failure";
          local_9c = 0x400;
          local_9a = (char *)CONCAT44(local_9a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_a8,0x12);
        }
      }
      if (*(long *)(param_1 + 0x6740) != 0) {
        FUN_1005298e9();
      }
    }
    if ((*(long *)(param_1 + 0x6750) == 0) &&
       (lVar9 = FUN_10048604a(*(undefined8 *)(param_1 + 0x30)), lVar9 != 0)) {
      local_e8[0] = 0x80;
      FUN_100231b73(param_1,iVar5,local_d0,local_c0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
      if (cVar2 != '\0') {
        pcVar8 = (char *)FUN_1001b83ae(local_d0);
        local_9a = (char *)FUN_1001b83ae(local_c0);
        local_a8 = 0x8220302;
        local_9c = 0x822;
        local_92 = 0x400;
        local_90 = (char *)(CONCAT44(local_90._4_4_,local_e8[0] >> 1) & 0xffffffff00000001);
        local_a4 = pcVar8;
        __os_log_impl(0x100000000,uVar7,2,
                      "progress> creating sync progress bar \"%{public}s\" / \"%{public}s\", hidden = %d"
                      ,&local_a8,0x1c);
      }
      iVar5 = FUN_100528802(lVar9,local_d0,local_c0,0,0,1,local_e8[0] & 0xfffff7ef | 0x800,
                            (long *)(param_1 + 0x6750),0);
      if ((iVar5 != -0x80) && (iVar5 != 0)) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_a8 = 0x8220202;
          local_a4 = "Assertion failure";
          local_9c = 0x400;
          local_9a = (char *)CONCAT44(local_9a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_a8,0x12);
        }
      }
      lVar9 = *(long *)(param_1 + 0x6750);
      if ((lVar9 != 0) && (*(char *)(lVar9 + 0x8e0) == '\0')) {
        FUN_1005298e9();
      }
      if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(*(long *)(param_1 + 0x30) + 0x2c60) != 0))
      {
        FUN_100528e75();
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x6740) != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
      if (cVar2 != '\0') {
        local_a8 = local_a8 & 0xffff0000;
        __os_log_impl(0x100000000,uVar7,2,"progress> deleting update progress bar",&local_a8,2);
      }
      FUN_10052897c(*(undefined8 *)(param_1 + 0x6740));
      if (*(long *)(param_1 + 0x6740) != 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_a8 = 0x8220202;
          local_a4 = "Assertion failure";
          local_9c = 0x822;
          local_9a = "handlerData->updateProgressBar == nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *(undefined8 *)(param_1 + 0x6740) = 0;
    }
    if (*(long *)(param_1 + 0x6750) != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
      if (cVar2 != '\0') {
        local_a8 = local_a8 & 0xffff0000;
        __os_log_impl(0x100000000,uVar7,2,"progress> deleting sync progress bar",&local_a8,2);
      }
      FUN_10052897c(*(undefined8 *)(param_1 + 0x6750));
      if (*(long *)(param_1 + 0x6750) != 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_a8 = 0x8220202;
          local_a4 = "Assertion failure";
          local_9c = 0x822;
          local_9a = "handlerData->syncProgressBar == nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *(undefined8 *)(param_1 + 0x6750) = 0;
    }
    *(undefined4 *)(param_1 + 0x67b4) = 0;
  }
  if ((char)local_ac == '\0') {
    if (*(long *)(param_1 + 0x6748) != 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_a8 = 0x8220202;
        local_a4 = "Assertion failure";
        local_9c = 0x822;
        local_9a = "handlerData->completeProgressBar == nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  else {
    FUN_1001b7a44(&local_a8);
    FUN_1001b80b2(local_d0,&local_a8);
    FUN_1001b7a50(&local_a8);
    FUN_1001b7a44(&local_a8);
    FUN_1001b80b2(local_c0,&local_a8);
    FUN_1001b7a50(&local_a8);
    if (*(int *)(param_1 + 0x66e4) == 0) {
      if ((char)local_d4 == '\0') {
        uVar7 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc0058);
        FUN_1001b81f2(local_d0,uVar7);
      }
      else {
        cVar2 = FUN_100266cae(*(undefined8 *)(param_1 + 0x66d8));
        if (cVar2 == '\0') {
          FUN_1001c334a(&local_a8,0x10cf0047);
          FUN_1001b80b2(local_d0,&local_a8);
          FUN_1001b7a50(&local_a8);
        }
      }
      if ((((*(char *)(param_1 + 0x6ad7) == '\0') ||
           (cVar2 = FUN_10017cbd0(param_1 + 0x6b40), cVar2 == '\0')) ||
          (cVar2 = FUN_100266a70(*(undefined8 *)(param_1 + 0x66d8)), cVar2 == '\0')) ||
         (*(char *)(param_1 + 0x14cef) == '\0')) {
        cVar2 = FUN_100266cae(*(undefined8 *)(param_1 + 0x66d8));
        if (((cVar2 == '\0') && (*(int *)(param_1 + 0x152dc) == 0)) &&
           ((*(char *)(param_1 + 0x6ad7) == '\0' ||
            ((cVar2 = FUN_10017cbd0(param_1 + 0x6b40), cVar2 == '\0' ||
             (cVar2 = FUN_100266a70(*(undefined8 *)(param_1 + 0x66d8)), cVar2 == '\0')))))) {
          FUN_1001c334a(&local_a8,0x10cf0047);
          FUN_1001b80b2(local_c0,&local_a8);
          goto LAB_100233db6;
        }
      }
      else {
        FUN_1001c334a(&local_a8,0x10cf0048);
        FUN_1001b80b2(local_c0,&local_a8);
LAB_100233db6:
        FUN_1001b7a50(&local_a8);
      }
      iVar5 = FUN_1001b9c66(local_d0,local_c0);
      if (iVar5 == 0) {
        FUN_1001b7a44(&local_a8);
        FUN_1001b80b2(local_c0,&local_a8);
        goto LAB_100233df8;
      }
    }
    else {
      uVar7 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc0059);
      FUN_1001b81f2(local_d0,uVar7);
      if ((*(char *)(param_1 + 0x6ad7) == '\0') ||
         (cVar2 = FUN_10017cbd0(param_1 + 0x6b40), cVar2 == '\0')) {
        FUN_1001c334a(&local_a8,0x10cf0049);
        FUN_1001b80b2(local_c0,&local_a8);
LAB_100233df8:
        FUN_1001b7a50(&local_a8);
      }
    }
    lVar9 = *(long *)(param_1 + 0x6748);
    if (lVar9 == 0) {
      cVar2 = FUN_1001b8428(local_d0);
      if ((cVar2 == '\0') || (cVar2 = FUN_1001b8428(local_c0), cVar2 == '\0')) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar7 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
        if (cVar2 != '\0') {
          local_a8 = local_a8 & 0xffff0000;
          __os_log_impl(0x100000000,uVar7,2,"progress> creating complete progress bar",&local_a8,2);
        }
        uVar7 = FUN_10048604a(*(undefined8 *)(param_1 + 0x30));
        iVar5 = FUN_100528802(uVar7,local_d0,local_c0,0,0,1,0x80c,param_1 + 0x6748,0);
        if ((iVar5 != -0x80) && (iVar5 != 0)) {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_a8 = 0x8220202;
            local_a4 = "Assertion failure";
            local_9c = 0x400;
            local_9a = (char *)CONCAT44(local_9a._4_4_,iVar5);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_a8,0x12);
          }
        }
      }
    }
    else {
      FUN_1001b7a44(&local_a8);
      FUN_1001b7a44(local_e8);
      FUN_10052918c(lVar9,local_d0,local_c0,&local_a8,local_e8);
      FUN_1001b7a50(local_e8);
      FUN_1001b7a50(&local_a8);
    }
  }
  FUN_1001b7a50(local_c0);
  FUN_1001b7a50(local_d0);
LAB_100233e80:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

