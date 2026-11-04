// name: FUN_1004e9331
// address: 1004e9331

void FUN_1004e9331(int param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *local_90;
  undefined **local_88 [4];
  undefined ***local_68;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x202;
      uStack_56 = 0x822;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "userDictionary != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = FUN_100166c1b(param_2,&cf_deviceIdentifier);
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x202;
        uStack_56 = 0x822;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "deviceIdentifier != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if (DAT_1008c77c0 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x202;
          uStack_56 = 0x822;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "sDulcimerPluginData != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        for (puVar5 = *(undefined8 **)(DAT_1008c77c0 + 0x10); puVar5 != (undefined8 *)0x0;
            puVar5 = (undefined8 *)*puVar5) {
          if (*(int *)(puVar5 + 1) != 0x64756c63) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x202;
              uStack_56 = 0x822;
              uStack_54 = 0x7ab58c;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            cVar1 = FUN_1001782e9(0,1);
            if (cVar1 == '\0') break;
          }
          if (*(char *)((long)puVar5 + 0x66ec) == '\0') {
            if (*(int *)(puVar5 + 0xcd6) == 0x69506f64) {
              uVar4 = FUN_100634e69(puVar5[8]);
              local_58 = (undefined2)uVar4;
              uStack_56 = (undefined2)((ulong)uVar4 >> 0x10);
              uStack_54 = (undefined4)((ulong)uVar4 >> 0x20);
              cVar1 = FUN_100169eb1(lVar3,uVar4);
              FUN_10016d588(&local_58);
            }
            else {
              cVar1 = FUN_100169ee7(lVar3,(long)puVar5 + 0x244);
            }
            if (cVar1 != '\0') {
              if ((*(int *)(puVar5 + 5) == param_1) &&
                 (iVar2 = FUN_100425478(param_1,0,0,&local_90), iVar2 != -0x80)) {
                if (iVar2 == 0) {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar4 = DAT_1008c75b8;
                  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar1 != '\0') {
                    local_58 = 0;
                    __os_log_impl(0x100000000,uVar4,1,
                                  "checking for updates due to system notification clicked",
                                  &local_58,2);
                  }
                  local_88[0] = &PTR_FUN_10085f0b8;
                  local_68 = local_88;
                  (**(code **)(*local_90 + 0x10))(local_90,0,1,0,local_88);
                  if (local_68 == local_88) {
                    lVar3 = 0x20;
LAB_1004e97b4:
                    (**(code **)((long)*local_68 + lVar3))();
                  }
                  else {
                    lVar3 = 0x28;
                    if (local_68 != (undefined ***)0x0) goto LAB_1004e97b4;
                  }
                  FUN_100506012(local_90);
                }
                else {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x202;
                    uStack_56 = 0x822;
                    uStack_54 = 0x7a0a90;
                    uStack_50 = 1;
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
              }
              goto LAB_1004e9521;
            }
          }
        }
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x202;
        uStack_56 = 0x822;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "handlerData != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
LAB_1004e9521:
    FUN_10017060f(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

