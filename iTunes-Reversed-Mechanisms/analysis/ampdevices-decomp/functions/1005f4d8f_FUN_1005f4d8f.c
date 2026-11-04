// name: FUN_1005f4d8f
// address: 1005f4d8f

int FUN_1005f4d8f(char *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  byte local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (char *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "params != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1005f4efd:
    iVar8 = -0x32;
    goto LAB_1005f50ee;
  }
  if (param_1[2] != '\0') {
    if (param_1[1] == '\0') {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "(params->useOutputDictionary == false) || params->onlyFetchXML";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      if (param_1[2] == '\0') goto LAB_1005f4e25;
    }
    if (*param_1 != '\0') {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "(params->useOutputDictionary == false) || (params->checkInBackground == false)";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1005f4efd;
    }
  }
LAB_1005f4e25:
  puVar5 = (undefined4 *)FUN_1001c629e(0x838,&DAT_100711c6e);
  if (puVar5 == (undefined4 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "versionInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar8 = -0x6c;
LAB_1005f50c3:
    lVar6 = 0;
LAB_1005f50c6:
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0x77766369;
    puVar5[0x20d] = 0;
    *(undefined8 *)(puVar5 + 1) = 0;
    *(undefined8 *)(puVar5 + 3) = 0;
    *(undefined1 *)(puVar5 + 5) = 0;
    ___bzero(puVar5 + 6,0x81b);
    _memcpy(puVar5 + 2,param_1,0x520);
    if (param_1[4] != '\0') {
      local_68[0] = 0;
      lVar6 = FUN_1005f4b1c(1);
      if (lVar6 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "webUpdateDictionary != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        FUN_10017060f(0);
        FUN_1005f4acc(*(undefined8 *)(puVar5 + 0x14a));
        operator_delete(puVar5);
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        iVar8 = -0x32;
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,0xffffffce);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      else {
        FUN_1005f5f52(lVar6,puVar5);
        FUN_1005f551a(puVar5,local_68);
        bVar1 = local_68[0];
        FUN_10017060f(lVar6);
        iVar8 = (bVar1 ^ 1) * 0x80 + -0x80;
      }
      goto LAB_1005f50c3;
    }
    cVar2 = *param_1;
    iVar8 = FUN_10019c4ca(puVar5 + 0x14a,1);
    if (iVar8 != -0x80) {
      if (iVar8 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_1005f5240;
      }
      FUN_1001b7b04(&local_58,param_1 + 0x14);
      FUN_100132900(local_68);
      cVar2 = (cVar2 != '\0') * '\x02';
      lVar6 = FUN_10019bec8(&local_58,local_68,cVar2);
      FUN_1001b7a50(local_68);
      FUN_1001b7a50(&local_58);
      if (lVar6 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "request != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar8 = -0x6c;
        goto LAB_1005f5240;
      }
      iVar8 = FUN_10019c22a((int)DAT_100700af8,(int)DAT_100700af8,*(undefined8 *)(puVar5 + 0x14a),
                            lVar6,cVar2,0,FUN_1005f54c5,puVar5,0);
      if (iVar8 == -0x80) goto LAB_1005f50c8;
      if (iVar8 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_1005f50c8;
      }
      iVar8 = 0;
      if (*param_1 != '\0') goto LAB_1005f50c8;
      uVar4 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
      while ((*(char *)(puVar5 + 0x20c) == '\0' || (*(char *)((long)puVar5 + 0x832) == '\0'))) {
        iVar8 = FUN_1001b1a0f();
        iVar3 = FUN_1001b19b0();
        if (iVar8 == iVar3) {
          FUN_1001727b4((int)DAT_10070f2b8,uVar4);
        }
        else {
          FUN_1001b0d8d((int)DAT_10070f2b8);
        }
      }
      iVar3 = puVar5[1];
      iVar8 = 0;
      uVar7 = 0x5c7;
      if (iVar3 != 3) {
        uVar7 = 0;
      }
      *(undefined4 *)(param_1 + 0x514) = uVar7;
      *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(puVar5 + 0x148);
      *(undefined8 *)(puVar5 + 0x148) = 0;
      if ((iVar3 == 0) || (puVar5[0x20d] == -0x80)) {
        FUN_1005f4acc(*(undefined8 *)(puVar5 + 0x14a));
        operator_delete(puVar5);
      }
      else {
        iVar8 = 0;
        FUN_1005f551a(puVar5,0);
      }
      goto LAB_1005f50c6;
    }
LAB_1005f5240:
    lVar6 = 0;
  }
LAB_1005f50c8:
  FUN_10017060f(lVar6);
  if ((puVar5 != (undefined4 *)0x0) && (iVar8 != 0)) {
    FUN_1005f4acc(*(undefined8 *)(puVar5 + 0x14a));
    operator_delete(puVar5);
  }
LAB_1005f50ee:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

