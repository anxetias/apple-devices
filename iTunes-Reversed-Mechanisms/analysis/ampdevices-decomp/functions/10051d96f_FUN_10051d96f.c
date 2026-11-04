// name: FUN_10051d96f
// address: 10051d96f

void FUN_10051d96f(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10051dabf:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_10051dabf;
    }
    if (*(char *)(param_1 + 0x15218) == '\0') {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "handlerData->syncServicesAvailable";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    puVar6 = operator_new(0x58,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar6 == (undefined8 *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "syncServicePrefs != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x665c);
      cVar3 = *(char *)(param_1 + 0x667d);
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      uVar5 = FUN_1001705fc(*(undefined8 *)(param_1 + 0x152c8));
      *puVar6 = uVar5;
      *(undefined4 *)(puVar6 + 1) = uVar2;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      *(undefined2 *)(puVar6 + 8) = 0;
      *(undefined1 *)((long)puVar6 + 0x42) = 1;
      *(undefined4 *)((long)puVar6 + 0x44) = uVar1;
      puVar6[9] = 0;
      *(undefined4 *)(puVar6 + 10) = 0;
      *(bool *)((long)puVar6 + 0x54) = cVar3 != '\0';
      *(bool *)((long)puVar6 + 0x55) = *(char *)(param_1 + 0x6682) != '\0';
      if (*(char *)(param_1 + 0x6ac3) == '\0') {
        bVar7 = false;
      }
      else {
        puVar6[9] = *(undefined8 *)(param_1 + 0x6664);
        FUN_1002eb0c8(puVar6,0);
        *(undefined4 *)(puVar6 + 10) = *(undefined4 *)(param_1 + 0x6678);
        bVar7 = *(char *)(param_1 + 0x6ac3) != '\0';
      }
      iVar4 = FUN_1002ea484(puVar6,bVar7,0xffffffff,0,0);
      if (iVar4 != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x4000100;
          local_54 = (char *)CONCAT44(local_54._4_4_,iVar4);
          __os_log_impl(0x100000000,uVar5,0x10,"failed to load Sync Services preferences (%d)",
                        &local_58,8);
        }
      }
    }
    *(undefined8 **)(param_1 + 0x15220) = puVar6;
    *(undefined8 *)(param_1 + 0x152c0) = 0;
    iVar4 = FUN_1001e89de(param_1 + 0x15230);
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    FUN_1004e1e68(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

