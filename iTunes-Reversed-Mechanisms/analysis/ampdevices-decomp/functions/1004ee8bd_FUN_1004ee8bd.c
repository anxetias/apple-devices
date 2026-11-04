// name: FUN_1004ee8bd
// address: 1004ee8bd

undefined8 FUN_1004ee8bd(long param_1,char param_2)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004ee94e:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
    goto LAB_1004eea79;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_1004ee94e;
  }
  uVar3 = 0;
  if (*(char *)(param_1 + 0x6acf) == param_2) goto LAB_1004eea79;
  if (param_2 == '\0') {
    FUN_1004ee22c(param_1);
    *(undefined1 *)(param_1 + 0x6ad0) = 0;
  }
  else {
    pvVar1 = *(void **)(param_1 + 0x157f8);
    if (pvVar1 == (void *)0x0) {
      if (*(int *)(param_1 + 0x152d8) == 0) goto LAB_1004ee9c8;
    }
    else {
      FUN_1003380d0(pvVar1);
      operator_delete(pvVar1);
    }
    *(undefined8 *)(param_1 + 0x157f8) = 0;
    *(undefined4 *)(param_1 + 0x152d8) = 0;
    uVar4 = FUN_1001c156e();
    FUN_1001c6987(uVar4,0x69706572,*(undefined4 *)(param_1 + 0x28),0,0);
  }
LAB_1004ee9c8:
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar4 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_44 = "true";
    if (param_2 == '\0') {
      local_44 = "false";
    }
    local_3a = *(char **)(param_1 + 0x38);
    local_48 = 0x8220202;
    local_3c = 0x800;
    __os_log_impl(0x100000000,uVar4,1,
                  "sync> setting syncInProgress to %{public}s for device id %016llX",&local_48,0x16)
    ;
  }
  *(char *)(param_1 + 0x6acf) = param_2;
  uVar4 = FUN_1001c156e();
  FUN_1001c6987(uVar4,0x69707378,*(undefined4 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x6acf),
                (long)*(int *)(param_1 + 0x152d8));
  if (param_2 != '\0') {
    FUN_1004ed4f6(param_1);
  }
LAB_1004eea79:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

