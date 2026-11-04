// name: FUN_1004e2d0e
// address: 1004e2d0e

void FUN_1004e2d0e(long param_1,char param_2)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  ulong in_RAX;
  ulong local_28;
  
  local_28 = in_RAX;
  FUN_1004e17a4();
  if (*(int *)(param_1 + 0x6b0c) != 0) {
    iVar4 = FUN_1001b19b0();
    if (iVar4 != *(int *)(param_1 + 0x6b0c)) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar2 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_28 = local_28 & 0xffffffffffff0000;
        __os_log_impl(0x100000000,uVar2,1,"sync> aborting sync start fiber",&local_28,2);
      }
      if (param_2 != '\0') {
        while (*(int *)(param_1 + 0x6b0c) != 0) {
          FUN_1004e32ed();
        }
      }
    }
  }
  if ((((*(int *)(param_1 + 0x6b10) != 0) || (*(int *)(param_1 + 0x167d8) != 0)) ||
      (*(int *)(param_1 + 0x16810) != 0)) || (*(int *)(param_1 + 0x168c8) != 0)) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar2 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_28 = local_28 & 0xffffffffffff0000;
      __os_log_impl(0x100000000,uVar2,1,"sync> aborting sync fiber",&local_28,2);
    }
    *(undefined1 *)(param_1 + 0x6acc) = 1;
    if ((*(int *)(param_1 + 0x167d8) != 0) || (*(int *)(param_1 + 0x16810) != 0)) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar2 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_28 = local_28 & 0xffffffffffff0000;
        __os_log_impl(0x100000000,uVar2,1,"sync> aborting AirTraffic sync operations fibers",
                      &local_28,2);
      }
      *(undefined1 *)(param_1 + 0x16849) = 1;
    }
    if ((*(long *)(param_1 + 0x30) != 0) &&
       ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2be0) & 0x20) != 0)) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar2 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_28 = local_28 & 0xffffffffffff0000;
        __os_log_impl(0x100000000,uVar2,1,"sync> aborting copy fiber",&local_28,2);
      }
      FUN_100407827(*(undefined8 *)(param_1 + 0x30));
    }
    if ((*(long *)(param_1 + 0x16640) != 0) && (*(int *)(*(long *)(param_1 + 0x16640) + 0x78) != 0))
    {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar2 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_28 = local_28 & 0xffffffffffff0000;
        __os_log_impl(0x100000000,uVar2,1,"sync> aborting speech generation",&local_28,2);
      }
      if (*(int *)(*(long *)(param_1 + 0x16640) + 0x78) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x16640) + 0x7d) = 1;
      }
    }
    if (*(int *)(param_1 + 0x168c8) != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar2 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_28 = local_28 & 0xffffffffffff0000;
        __os_log_impl(0x100000000,uVar2,1,"sync> aborting photo copy",&local_28,2);
      }
      FUN_100394a78(param_1,param_2 != '\0');
    }
    lVar1 = *(long *)(param_1 + 0x6750);
    if ((lVar1 != 0) && (*(code **)(lVar1 + 0x8a0) != (code *)0x0)) {
      (**(code **)(lVar1 + 0x8a0))(lVar1,*(undefined8 *)(lVar1 + 0x8a8));
    }
    if (*(char *)(param_1 + 0x157e0) != '\0') {
      FUN_1001e9809(param_1 + 0x157d0);
    }
    if (param_2 != '\0') {
      lVar1 = *(long *)(param_1 + 0x152e8);
      if (lVar1 != 0 && *(int *)(param_1 + 0x6b10) != 0) {
        *(undefined8 *)(param_1 + 0x152e8) = 0;
        FUN_10017899c(*(undefined4 *)(param_1 + 0x28));
        FUN_1001e9809(lVar1);
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar2 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_28 = local_28 & 0xffffffffffff0000;
        __os_log_impl(0x100000000,uVar2,1,"sync> waiting for sync fiber",&local_28,2);
      }
      while ((*(int *)(param_1 + 0x6b0c) != 0 || (*(int *)(param_1 + 0x6b10) != 0))) {
        FUN_1004e32ed();
      }
      if (*(long *)(param_1 + 0x16640) != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar2 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_28 = local_28 & 0xffffffffffff0000;
          __os_log_impl(0x100000000,uVar2,1,"sync> waiting for speech generation",&local_28,2);
        }
        FUN_1005b08fa(*(undefined8 *)(param_1 + 0x16640));
      }
      if (*(int *)(param_1 + 0x167d8) != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar2 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_28 = local_28 & 0xffffffffffff0000;
          __os_log_impl(0x100000000,uVar2,1,"sync> waiting for AirTraffic sync operations fiber",
                        &local_28,2);
        }
      }
      if (*(int *)(param_1 + 0x16810) != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar2 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_28 = local_28 & 0xffffffffffff0000;
          __os_log_impl(0x100000000,uVar2,1,"sync> waiting for AirTraffic asset copy fiber",
                        &local_28,2);
        }
      }
      while ((*(int *)(param_1 + 0x167d8) != 0 || (*(int *)(param_1 + 0x16810) != 0))) {
        FUN_1004e32ed();
      }
    }
  }
  FUN_1004e1e68(param_1);
  return;
}

