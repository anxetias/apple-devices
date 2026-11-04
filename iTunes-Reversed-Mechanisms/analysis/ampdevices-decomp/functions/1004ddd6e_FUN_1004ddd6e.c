// name: FUN_1004ddd6e
// address: 1004ddd6e

undefined4 FUN_1004ddd6e(int param_1,char *param_2,char param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  lVar7 = DAT_1008c77c0;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (char *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4a = "uniqueIdentifier != nullptr";
LAB_1004de01c:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (*param_2 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4a = "uniqueIdentifier[0] != \'\\0\'";
      goto LAB_1004de01c;
    }
  }
  else if (DAT_1008c77c0 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4a = "sDulcimerPluginData != nullptr";
      goto LAB_1004de01c;
    }
  }
  else {
    local_60 = 0;
    if (((param_1 != 0x69506f64) && ((param_1 != 0 || (sVar4 = _strlen(param_2), sVar4 != 0x10))))
       || (iVar3 = _sscanf(param_2,"%llX",&local_60), lVar7 = DAT_1008c77c0, iVar3 == 1)) {
      for (puVar1 = *(undefined8 **)(lVar7 + 0x10); puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)*puVar1) {
        if (*(int *)(puVar1 + 1) != 0x64756c63) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure (expected to be true)";
            local_4c = 0x822;
            local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          uVar6 = 0;
          cVar2 = FUN_1001782e9(0,1);
          if (cVar2 == '\0') goto LAB_1004de04d;
        }
        if (((param_3 == '\0') || (*(char *)((long)puVar1 + 0x6ad9) != '\0')) &&
           (*(char *)((long)puVar1 + 0x66ec) == '\0')) {
          if (local_60 == 0) {
            cVar2 = FUN_1001df957(param_2,(long)puVar1 + 0x244,1);
            if (cVar2 != '\0') goto LAB_1004de06f;
          }
          else if ((local_60 == puVar1[8]) || (local_60 == (puVar1[8] | 0xa270002000000))) {
LAB_1004de06f:
            uVar6 = *(undefined4 *)(puVar1 + 5);
            goto LAB_1004de04d;
          }
        }
      }
      uVar6 = 0;
      goto LAB_1004de04d;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4a = "sscanf(uniqueIdentifier, \"%llX\", &guid) == 1";
      goto LAB_1004de01c;
    }
  }
  uVar6 = 0;
  FUN_1001782e9(0,0);
LAB_1004de04d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

