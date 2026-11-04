// name: FUN_1004a9c2f
// address: 1004a9c2f

void FUN_1004a9c2f(long *param_1)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  byte bVar9;
  long *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) goto LAB_1004aa231;
  if ((int)param_1[2] != 0x646e6974) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inDownloadItem->magic == \'dnit\'";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,1);
    goto LAB_1004aa231;
  }
  lVar7 = FUN_100490af0(param_1 + 0x18);
  if (lVar7 == 0) {
    cVar5 = FUN_1004aa626(param_1);
    if ((cVar5 != '\0') && ((char)param_1[0xef] != '\0')) {
      lVar7 = FUN_1004aa784(param_1);
      if (lVar7 != 0) {
        lVar7 = FUN_100490af0(lVar7 + 0xc0);
        if (lVar7 != 0) goto LAB_1004a9c74;
      }
    }
  }
  else {
LAB_1004a9c74:
    lVar7 = FUN_100242590(lVar7);
    if ((lVar7 != 0) && (*(char *)((long)param_1 + 0x1cf) != '\0')) {
      *(undefined1 *)((long)param_1 + 0x1cf) = 0;
      FUN_10047659f(lVar7,0);
    }
  }
  if (param_1[0xf] == 0) {
LAB_1004a9d42:
    local_60 = (long *)0x0;
  }
  else {
    local_60 = (long *)std::__shared_weak_count::lock();
    if (local_60 == (long *)0x0) goto LAB_1004a9d42;
    plVar4 = (long *)param_1[0xe];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x60))(plVar4,param_1);
    }
  }
  if ((code *)param_1[0x10] != (code *)0x0) {
    (*(code *)param_1[0x10])(param_1,0x64656c74,0,0,param_1 + 0x12);
  }
  if (param_1[1] != 0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inDownloadItem->link.prev == __null";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*param_1 != 0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inDownloadItem->link.next == __null";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if ((char)param_1[0xef] == '\0') {
    FUN_10017060f(param_1[0x25c]);
    FUN_10017060f(param_1[0x25f]);
    if (param_1[0x25b] != 0) {
      FUN_1001c64c1();
      param_1[0x25b] = 0;
    }
    FUN_10017060f(param_1[0x25d]);
    param_1[0x25d] = 0;
    if (param_1[0x24b] == 0) {
      bVar9 = 0;
    }
    else {
      plVar4 = param_1 + 0x251;
      cVar5 = FUN_1001e9c23(plVar4);
      if (cVar5 != '\0') {
        FUN_1001e9de0(plVar4);
      }
      plVar2 = param_1 + 0x24b;
      (**(code **)(*(long *)*plVar2 + 8))();
      (**(code **)(*(long *)*plVar2 + 0x1d0))();
      FUN_100295c56(plVar2);
      uVar3 = *(uint *)(param_1 + 0xfb);
      lVar7 = param_1[0x2e];
      cVar5 = FUN_1001e9c23(plVar4);
      bVar9 = (int)lVar7 != 0 & (byte)((uVar3 & 4) >> 2) | (char)uVar3 < '\0';
      if (cVar5 != '\0') {
        FUN_1001e9eb9(plVar4);
      }
    }
    FUN_100295c56(param_1 + 0x24d);
    FUN_100295c56(param_1 + 0x24f);
    if (bVar9 != 0 || (char)param_1[0x25a] != '\0') {
      FUN_1004ac981(param_1);
    }
    FUN_1001e9d75(param_1 + 0x251);
    if (*(int *)((long)param_1 + 0x1304) != 0) {
      if ((int)param_1[0x260] == 0x646c7470) {
        if (*(int *)((long)param_1 + 0x1304) == 0x68747470) {
          FUN_10017060f(param_1[0x269]);
          param_1[0x269] = 0;
          FUN_10017060f(param_1[0x26a]);
          param_1[0x26a] = 0;
          if (param_1[0x267] != 0) {
            FUN_100199903();
            uVar6 = FUN_10019aa5a(param_1[0x267]);
            *(undefined4 *)(param_1 + 0x26d) = uVar6;
            FUN_100199872(param_1[0x267]);
            param_1[0x267] = 0;
          }
          if (param_1[0x261] != 0) {
            FUN_100197fda();
            param_1[0x261] = 0;
          }
          FUN_10017060f(param_1[0x262]);
          param_1[0x262] = 0;
          FUN_10017060f(param_1[0x263]);
          param_1[0x263] = 0;
          FUN_10017060f(param_1[0x264]);
          param_1[0x264] = 0;
          FUN_10017060f(param_1[0x265]);
          param_1[0x265] = 0;
          FUN_10017060f(param_1[0x266]);
          param_1[0x266] = 0;
        }
      }
      else {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "inTransport->magic == \'dltp\'";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    FUN_1004afcf8(param_1 + 0x382);
    FUN_1004afcf8(param_1 + 0x39b);
    if (param_1[0x399] != 0) {
      piVar1 = (int *)(param_1[0x399] + 4);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1004a8100();
      }
    }
    param_1[0x399] = 0;
    param_1[0x378] = 0;
    FUN_1001c64c1(param_1[0x3c5]);
    FUN_1001c62d9(param_1 + 0x3b1,0xa8);
  }
  else if ((int)param_1[0xf0] == 0x636e7472) {
    if (param_1[0xf3] == 0) {
      lVar7 = 0;
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "inDownloadItem->container.currentlyDownloadingSubItem == __null";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar7 = param_1[0xf3];
    }
    FUN_1004aa496(lVar7);
    param_1[0xf3] = 0;
    lVar7 = FUN_1004afd45(param_1);
    while (lVar7 != 0) {
      FUN_1004aa496(lVar7);
      lVar7 = FUN_1004afd45(param_1);
    }
    if ((int)param_1[0xf4] != 0) {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "inDownloadItem->container.numSubItems == 0";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  if (DAT_1008c7780 == (long *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "sDownloadItemList != __null";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    (**(code **)(*DAT_1008c7780 + 0x18))(DAT_1008c7780,param_1);
  }
  FUN_10017060f(param_1[0x43]);
  FUN_1001c62d9(param_1 + 0xc9,0x130);
  if ((char)param_1[0xd] != '\0') {
    FUN_1001c672e(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_10021e316(param_1 + 0x24f);
  FUN_10021e316(param_1 + 0x24d);
  FUN_10021e316(param_1 + 0x24b);
  FUN_10021e316(param_1 + 0x2c);
  FUN_100205d70(param_1 + 0x2a);
  FUN_1001b7a50(param_1 + 0x26);
  if (param_1[0xf] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar7 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1004aa231:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

