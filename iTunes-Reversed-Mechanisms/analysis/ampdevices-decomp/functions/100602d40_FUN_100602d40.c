// name: FUN_100602d40
// address: 100602d40

/* WARNING: Type propagation algorithm not settling */

void FUN_100602d40(long param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 local_80 [16];
  undefined1 local_70 [20];
  uint local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  uint local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_80);
  FUN_1001b7a44(local_70);
  cVar3 = FUN_1001ee056();
  if (cVar3 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "JRIsCurrentThreadCooperative()";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "context != nullptr";
LAB_10060316e:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_5c[1] = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 0x64756c63) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_5c[1] = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
        cVar3 = FUN_1001782e9(0,1);
        if (cVar3 == '\0') goto LAB_100602f5d;
      }
      *(undefined8 *)(lVar2 + 0x67ac) = 0;
      *(undefined8 *)(lVar2 + 0x67b4) = 0;
      *(undefined2 *)(lVar2 + 0x67bc) = 0;
      *(undefined4 *)(lVar2 + 0x67b4) = param_2;
      FUN_100231b73(lVar2,param_2,local_80,local_70,local_5c);
      FUN_1003d425b(param_1,param_2,local_70);
      puVar1 = (undefined8 *)(lVar2 + 0x6750);
      if (*(long *)(lVar2 + 0x6750) == 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,2);
        if (cVar3 != '\0') {
          pcVar6 = (char *)FUN_1001b83ae(local_80);
          local_4a = (char *)FUN_1001b83ae(local_70);
          local_40 = local_5c[0] >> 1 & 1;
          local_5c[1] = 0x8220302;
          local_4c = 0x822;
          local_42 = 0x400;
          local_54 = pcVar6;
          __os_log_impl(0x100000000,uVar5,2,
                        "progress> creating sync progress bar \"%{public}s\" / \"%{public}s\", hidden = %d"
                        ,local_5c + 1,0x1c);
        }
        uVar5 = FUN_10048604a(*(undefined8 *)(lVar2 + 0x30));
        if (param_3 == 0) {
          param_1 = 0;
        }
        iVar4 = FUN_100528802(uVar5,local_80,local_70,param_3,param_1,1,local_5c[0] | 0x800,puVar1,0
                             );
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
          }
        }
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,2);
        if (cVar3 != '\0') {
          pcVar6 = (char *)FUN_1001b83ae(local_80);
          local_4a = (char *)FUN_1001b83ae(local_70);
          local_5c[1] = 0x8220202;
          local_4c = 0x822;
          local_54 = pcVar6;
          __os_log_impl(0x100000000,uVar5,2,
                        "progress> updating sync progress bar \"%{public}s\" / \"%{public}s\"",
                        local_5c + 1,0x16);
        }
        FUN_1005295b5(0,*puVar1,local_80,local_70,local_5c[0]);
        if (param_3 == 0) {
          param_1 = 0;
        }
        FUN_100529664(*puVar1,param_3,param_1);
      }
      if ((*(long *)(lVar2 + 0x30) != 0) && (*(long *)(*(long *)(lVar2 + 0x30) + 0x2c60) != 0)) {
        FUN_100528e75();
      }
      goto LAB_100602f83;
    }
LAB_100602f5d:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      goto LAB_10060316e;
    }
  }
  FUN_1001782e9(0,0);
LAB_100602f83:
  FUN_1001b7a50(local_70);
  FUN_1001b7a50(local_80);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

