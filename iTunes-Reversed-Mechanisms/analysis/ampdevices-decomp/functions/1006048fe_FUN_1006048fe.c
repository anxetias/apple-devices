// name: FUN_1006048fe
// address: 1006048fe

void FUN_1006048fe(long param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100604a3a:
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100604e6a;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure (expected to be true)";
      local_44c = 0x822;
      local_44a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    cVar4 = FUN_1001782e9(0,1);
    if (cVar4 == '\0') goto LAB_100604a3a;
  }
  if (((*(char *)(param_1 + 0x37c) != '\0') && ((param_2 & 6) != 0)) &&
     (*(char *)(param_1 + 0x3a2) == '\0')) {
    FUN_1003c7fb5(param_1);
  }
  uVar12 = 0;
  if ((param_2 & 0xfffffffffffffffc) == 0x1000000) {
    uVar6 = FUN_10060586b(param_1);
    uVar6 = FUN_10060514d(param_1,uVar6 & 0x103);
    if ((uVar6 & 0x103) != 0) {
      cVar4 = FUN_1005460eb(param_1);
      if (cVar4 != '\0') {
        param_2 = param_2 | 0x80000;
      }
      uVar12 = uVar6 & 0x103;
      if (cVar4 == '\0') {
        uVar12 = 0;
      }
    }
  }
  if (((uint)(param_2 >> 0x2c) & 1) == 0 && (param_2 & 0x18e0) != 0) {
    if (*(char *)(param_1 + 0x6abf) == '\0') {
      if (((param_2 & 1) == 0) || (*(char *)(param_1 + 0x14d1f) != '\0')) {
        bVar2 = false;
      }
      else {
        local_458 = local_458 & 0xffffff00;
        uVar12 = FUN_10060586b(param_1);
        uVar12 = FUN_10060514d(param_1,uVar12 & 0x103);
        cVar4 = FUN_10054302c(param_1,uVar12 != 0,&local_458,param_1 + 0x14d1f);
        if (cVar4 == '\0') {
          uVar10 = param_2 | 0x80000;
          if ((char)local_458 == '\0') {
            uVar10 = param_2;
          }
        }
        else {
          uVar10 = param_2 | 0x100000000000;
          if (uVar12 != 0) {
            cVar4 = FUN_100544525(param_1,0,0);
            if (cVar4 != '\0') {
              uVar10 = param_2 | 0x100000080000;
            }
          }
        }
        bVar2 = true;
        param_2 = uVar10;
      }
      if ((param_2 & 0x100000000000) != 0) {
        bVar1 = true;
        if (((*(char *)(param_1 + 0x38b) != '\0') && (*(char *)(param_1 + 0x14dc9) != '\0')) &&
           ((*(char *)(param_1 + 0x38c) == '\0' || (cVar4 = FUN_100537ef0(0), cVar4 != '\0')))) {
          param_2 = param_2 | 0x40000000000;
        }
        goto LAB_100604bec;
      }
      param_2 = param_2 & 0xffffebffffffe71f;
    }
    else {
      if (((param_2 & 2) == 0) || (*(char *)(param_1 + 0x35c) == '\0')) {
        bVar5 = FUN_10060586b(param_1);
        if ((*(char *)(param_1 + 0x14dee) == '\0') || (*(char *)(param_1 + 0x6abf) == '\0')) {
          if ((char)bVar5 < '\0') {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar9 = DAT_1008c75b8;
            cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar4 != '\0') {
              local_458 = local_458 & 0xffff0000;
              __os_log_impl(0x100000000,uVar9,1,
                            "sync> not reverse-syncing device-downloaded books because book syncing is not enabled"
                            ,&local_458,2);
            }
          }
          bVar5 = bVar5 & 0x7f;
        }
        if (*(char *)(param_1 + 0x151e5) != '\0') {
          if (0x7f < bVar5) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar9 = DAT_1008c75b8;
            cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar4 != '\0') {
              local_458 = local_458 & 0xffff0000;
              __os_log_impl(0x100000000,uVar9,1,
                            "sync> not reverse-syncing device-downloaded books because iCloud backup is enabled"
                            ,&local_458,2);
            }
          }
          bVar5 = bVar5 & 0x7f;
        }
        uVar12 = FUN_10060514d(param_1,bVar5);
        param_2 = param_2 & 0xffffeffffff7ffff;
        goto LAB_100604be6;
      }
      bVar2 = false;
      param_2 = param_2 & 0xffffeffffff7ffff;
    }
    bVar1 = true;
  }
  else {
    bVar1 = true;
    if (((((uint)param_2 >> 0x13 & 1) == 0) && (*(char *)(param_1 + 0x39c) != '\0')) &&
       ((*(char *)(param_1 + 0x6abf) != '\0' && (*(char *)(param_1 + 0x14dee) != '\0')))) {
      uVar12 = FUN_10060586b(param_1);
      uVar12 = FUN_10060514d(param_1,uVar12 & 0x80);
LAB_100604be6:
      bVar2 = false;
      bVar1 = false;
    }
    else {
      bVar2 = false;
    }
  }
LAB_100604bec:
  if ((((*(char *)(param_1 + 0x38b) != '\0') && (*(char *)(param_1 + 0x14dc9) != '\0')) &&
      ((*(char *)(param_1 + 0x38c) == '\0' || (cVar4 = FUN_100537ef0(0), cVar4 != '\0')))) &&
     (*(long *)(param_1 + 0x16640) != 0)) {
    cVar4 = FUN_1005a7714();
    if (cVar4 != '\0') {
      param_2 = param_2 | 0x40000000000;
    }
  }
  bVar3 = bVar2;
  if (bVar1) {
LAB_100604c40:
    bVar2 = bVar3;
    if (((uint)param_2 >> 0x13 & 1) == 0) {
      uVar12 = 0;
    }
    else if (uVar12 == 0) goto LAB_100604d71;
  }
  else {
    uVar6 = uVar12 & 0x282;
    uVar11 = uVar12 & 0x282;
    if (*(char *)(param_1 + 0x14d50) != '\0') {
      uVar12 = uVar11;
    }
    if (uVar12 != 0) {
      if ((uVar12 & 0xfffffd7d) == 0) {
        param_2 = param_2 | 0x80000;
      }
      else if ((param_2 & 1) != 0 && *(char *)(param_1 + 0x14d50) == '\0') {
        cVar4 = FUN_100544525(param_1,1,(char *)(param_1 + 0x14d50));
        if ((cVar4 == '\0') && (uVar12 = uVar11, uVar6 == 0)) {
          uVar12 = 0;
        }
        else {
          param_2 = param_2 | 0x80000;
        }
        bVar3 = true;
        if (*(char *)(param_1 + 0x14d50) == '\0') {
          bVar3 = bVar2;
        }
      }
      goto LAB_100604c40;
    }
    if (((uint)param_2 >> 0x13 & 1) == 0) {
      uVar12 = 0;
    }
    else {
LAB_100604d71:
      uVar7 = FUN_10060586b(param_1);
      uVar12 = FUN_10060514d(param_1,uVar7);
    }
  }
  if (((uint)param_2 >> 8 & 1) != 0) {
    uVar10 = param_2 & 0xfffffffffffffeff;
    if (*(char *)(param_1 + 0x6ac2) != '\0') {
      uVar10 = param_2;
    }
    if ((param_2 & 0x100000000000) == 0) {
      param_2 = uVar10;
    }
  }
  if (((((uint)param_2 >> 0xc & 1) != 0) && ((param_2 & 0x100000000000) == 0)) &&
     (*(char *)(param_1 + 0x6abf) == '\0')) {
    param_2 = param_2 & 0xffffefffffffefff;
    uVar12 = uVar12 & 0xffffff7f;
  }
  if ((param_2 & 0x18c0) != 0) {
    uVar10 = param_2 & 0xffffffffffffe73f;
    if (*(char *)(param_1 + 0x6abf) != '\0') {
      uVar10 = param_2;
    }
    if ((param_2 & 0x100000000000) == 0) {
      param_2 = uVar10;
    }
  }
  if (((uint)param_2 >> 0xd & 1) == 0) {
LAB_100604e02:
    if (bVar2) goto LAB_100604e1c;
  }
  else {
    if (*(char *)(param_1 + 0x6ac1) == '\0') {
      iVar8 = FUN_100561d9d(0x400,0,&local_458);
      if (iVar8 != 0) {
        param_2 = param_2 & 0xffffffffffffdfff;
        goto LAB_100604e02;
      }
      if ((((param_2 & 1) == 0) || (*(char *)(param_1 + 0x14d28) != '\0')) ||
         (cVar4 = FUN_1005437da(param_1,0,param_1 + 0x14d28), cVar4 == '\0')) {
        param_2 = param_2 & 0xffffffffffffdfff;
      }
      else {
        *(undefined1 *)(param_1 + 0x14d05) = 6;
        FUN_10022af6b(param_1 + 0x14cd0);
        FUN_100605988(param_1);
        FUN_1004315a1(param_1,0);
        param_2 = param_2 | 0x8000;
      }
    }
    else {
      FUN_1004315a1(param_1,0);
    }
LAB_100604e1c:
    FUN_1004ef324(param_1,8,0);
    uVar9 = FUN_1001c156e();
    FUN_1001c6987(uVar9,0x69707372,*(undefined4 *)(param_1 + 0x28),0,0);
  }
  FUN_100605ae4(param_1,param_2,uVar12);
  FUN_1004ee22c(param_1);
  FUN_1004dd69c(param_1,"");
LAB_100604e6a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

