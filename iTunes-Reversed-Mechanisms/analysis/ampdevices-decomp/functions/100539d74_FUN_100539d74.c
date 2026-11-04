// name: FUN_100539d74
// address: 100539d74

int FUN_100539d74(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1004de449();
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = 0x45f;
  }
  else if (*(char *)(lVar3 + 0x3b2) == '\0') {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "handlerData->deviceInfo.requiresActivation";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = 0;
    if (*(char *)(lVar3 + 0x6af4) == '\0') {
      puVar4 = operator_new(0x20,(nothrow_t *)PTR_nothrow_10082c970);
      if (puVar4 == (undefined8 *)0x0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "context != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
      else {
        *puVar4 = 0;
        puVar4[2] = lVar3;
        puVar4[3] = 0;
        FUN_1004e17a4(lVar3);
        FUN_10019c4ca(puVar4 + 3,1);
        *(undefined4 *)(puVar4 + 1) = 0;
        *(undefined1 *)(puVar4[2] + 0x6af4) = 1;
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_44 = *(char **)(puVar4[2] + 0x152c8);
          local_48 = 0x8420102;
          __os_log_impl(0x100000000,uVar5,1,
                        "activation> creating activation session info for device %{public}@",
                        &local_48,0xc);
        }
        iVar2 = FUN_1005b9808(*(undefined8 *)(lVar3 + 0x7168),9,0,FUN_10053a0d7,puVar4);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

