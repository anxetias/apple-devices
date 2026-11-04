// name: FUN_10032daa1
// address: 10032daa1

int FUN_10032daa1(long param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_8e8 [4];
  char *local_8e4;
  undefined2 local_8dc;
  int local_8da;
  int local_898 [7];
  char local_87c [1028];
  char local_478 [4];
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  char local_58 [4];
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10032db33:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      pcVar5 = local_478;
      builtin_strncpy(local_478,"\x02\x02\"\b",4);
      local_474 = "Assertion failure";
      local_46c = 0x822;
      pcVar4 = "DulcimerHandlerDataIsValid(handlerData)";
      goto LAB_10032dce3;
    }
    goto LAB_10032db50;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      builtin_strncpy(local_478,"\x02\x02\"\b",4);
      local_474 = "Assertion failure (expected to be true)";
      local_46c = 0x822;
      local_46a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_478,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_10032db33;
  }
  iVar2 = FUN_1002b0559(param_2,0x42);
  if ((iVar2 != 0) || (iVar2 = FUN_1002b1039(param_2,local_898), iVar2 != 0)) goto LAB_10032db5f;
  if (local_898[0] == 0x41464350) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,2);
    if (cVar1 != '\0') {
      local_474 = local_87c;
      builtin_strncpy(local_478,"\x02\x01\"\b",4);
      __os_log_impl(0x100000000,uVar3,2,"sync> voice memo file path is \"%{public}s\"",local_478,0xc
                   );
    }
  }
  iVar2 = FUN_10017d5ba(local_898,local_478);
  if (iVar2 == -0x80) goto LAB_10032db5f;
  if (iVar2 == 0) {
    cVar1 = FUN_10017f77e(local_478,param_1 + 0x15df0);
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        pcVar5 = local_8e8;
        builtin_strncpy(local_8e8,"\x02\x02\"\b",4);
        local_8e4 = "Assertion failure";
        local_8dc = 0x822;
        pcVar4 = "JRFileSpecsAreEqual(&parentSpec, &handlerData->voiceMemosFolderSpec)";
LAB_10032dce3:
        *(char **)(pcVar5 + 0xe) = pcVar4;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",pcVar5,0x16);
      }
    }
    else {
      pcVar5 = local_8e8;
      if (param_3 != (char *)0x0) {
        pcVar5 = param_3;
      }
      iVar2 = FUN_10017d477(local_898,pcVar5,param_4);
      if (iVar2 == -0x80) goto LAB_10032db5f;
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_10032db5f;
        pcVar5 = local_58;
        builtin_strncpy(local_58,"\x02\x02\"\b",4);
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar2;
        goto LAB_10032dd5c;
      }
      if (*pcVar5 == '\0') {
        iVar2 = 0;
        goto LAB_10032db5f;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        pcVar5 = local_58;
        builtin_strncpy(local_58,"\x02\x02\"\b",4);
        local_54 = "Assertion failure";
        local_4c = 0x822;
        pcVar4 = "fileInfo->isDirectory == false";
        goto LAB_10032dce3;
      }
    }
LAB_10032db50:
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_10032db5f;
    pcVar5 = local_8e8;
    builtin_strncpy(local_8e8,"\x02\x02\"\b",4);
    local_8e4 = "Assertion failure";
    local_8dc = 0x400;
    local_8da = iVar2;
LAB_10032dd5c:
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",pcVar5,0x12);
  }
LAB_10032db5f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

