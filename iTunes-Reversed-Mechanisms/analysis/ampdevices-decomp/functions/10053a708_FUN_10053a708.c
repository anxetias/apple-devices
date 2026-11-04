// name: FUN_10053a708
// address: 10053a708

undefined8 FUN_10053a708(undefined8 param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  char *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1004de449();
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0x45f;
  }
  else if (param_2 == (char *)0x0) {
    uVar5 = 0;
    if (param_3 != (char *)0x0) {
      *param_3 = *(char *)(lVar3 + 0x6af4);
    }
  }
  else {
    if (*(char *)(lVar3 + 0x3b2) == '\0') {
      cVar2 = '\x01';
    }
    else {
      uVar4 = *(int *)(lVar3 + 0x151f8) - 2;
      if (uVar4 < 8) {
        cVar2 = (char)(0x101000000000101 >> ((char)uVar4 * '\b' & 0x3fU));
      }
      else {
        cVar2 = '\0';
      }
    }
    *param_2 = cVar2;
    uVar5 = 0;
    if (param_3 != (char *)0x0) {
      *param_3 = *(char *)(lVar3 + 0x6af4);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_54 = *(char **)(lVar3 + 0x152c8);
        local_40 = "is";
        local_4a = "is";
        if (*param_2 == '\0') {
          local_4a = "is not";
        }
        if (*param_3 == '\0') {
          local_40 = "is not";
        }
        local_58 = 0x8420302;
        local_4c = 0x822;
        local_42 = 0x822;
        __os_log_impl(0x100000000,uVar1,1,
                      "activation> device %{public}@ %{public}s activated, activation %{public}s pending"
                      ,&local_58,0x20);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

