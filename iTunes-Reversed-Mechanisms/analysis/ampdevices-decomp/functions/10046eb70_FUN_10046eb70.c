// name: FUN_10046eb70
// address: 10046eb70

undefined8 FUN_10046eb70(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 1) == 0x61646563) {
    FUN_10046d628();
    cVar2 = FUN_10046e3cc(param_1);
    if (cVar2 != '\0') {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "IsAsyncDecodeRequestInProgress(decoderData) == false";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    cVar2 = FUN_10046e3cc(param_1);
    if (cVar2 != '\0') {
      *(undefined1 *)((long)param_1 + 0x1876) = 1;
      FUN_1001e8dd6(param_1 + 0x263,0,0);
      FUN_10046d6f2(param_1);
      FUN_1001e944c(param_1 + 0x263);
      FUN_10046d628(param_1);
      if (*(char *)((long)param_1 + 0x1876) != '\0') {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "decoderData->deleteWithRequestInProgress == false";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      cVar2 = FUN_10046e3cc(param_1);
      if (cVar2 != '\0') {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "IsAsyncDecodeRequestInProgress(decoderData) == false";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    if (param_1[0x309] != 0) {
      FUN_1001c64c1();
    }
    if (param_1[0x30d] != 0) {
      FUN_1001c64c1();
    }
    if (param_1[0x303] != 0) {
      iVar3 = FUN_10015ea60();
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
    if (param_1[0x304] != 0) {
      FUN_1001c64c1();
    }
    FUN_10035fee0(param_1);
    if (param_1[0x267] != 0) {
      FUN_10046eb3e();
      puVar5 = &DAT_1008c76a8;
      puVar1 = (undefined8 *)0x0;
      do {
        puVar6 = puVar1;
        puVar5 = (undefined8 *)*puVar5;
        if (puVar5 == (undefined8 *)0x0) goto LAB_10046ed37;
        puVar1 = puVar5;
      } while (puVar5 != param_1);
      puVar5 = &DAT_1008c76a8;
      if (puVar6 != (undefined8 *)0x0) {
        puVar5 = puVar6;
      }
      *puVar5 = *param_1;
      *param_1 = 0;
LAB_10046ed37:
      FUN_1001e9eb9(&DAT_1008c76b8);
      FUN_1002188e4(param_1 + 0x267);
    }
    FUN_10046d6f2(param_1);
    FUN_1001e9d75(param_1 + 0x25a);
    FUN_1001c62d9(param_1,0x18c0);
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "decoderData->magic == \'adec\'";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffe4;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

