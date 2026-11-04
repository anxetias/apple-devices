// name: FUN_1003bac16
// address: 1003bac16

undefined8 FUN_1003bac16(long *param_1,long param_2)

{
  ushort uVar1;
  char cVar2;
  ushort *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  ushort *puVar7;
  long lVar8;
  long lVar9;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar9 = *param_1;
  lVar8 = param_1[1];
  while (lVar8 != lVar9) {
    lVar8 = lVar8 + -0x10;
    FUN_1001b7a50(lVar8);
  }
  param_1[1] = lVar9;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_258 = 0x8220202;
      local_254 = "Assertion failure";
      local_24c = 0x822;
      local_24a = "data != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1003badad:
    uVar5 = 0;
  }
  else {
    puVar3 = (ushort *)FUN_100170f3b(param_2);
    uVar4 = FUN_100170ef7(param_2);
    uVar5 = 1;
    if (0 < (long)(uVar4 & 0xfffffffffffffffe)) {
      puVar6 = (ushort *)((uVar4 & 0xfffffffffffffffe) + (long)puVar3);
      do {
        uVar1 = *puVar3;
        puVar7 = puVar3 + (ulong)uVar1 + 1;
        if (puVar6 < puVar7) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_258 = 0x8220202;
            local_254 = "Assertion failure";
            local_24c = 0x822;
            local_24a = "namePtr + nameLength <= namePtrEnd";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1003badad;
        }
        if (0xff < uVar1) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "nameLength <= (sizeof(nameBuffer) / sizeof(nameBuffer[0]))";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1003badad;
        }
        _memcpy(&local_258,puVar3 + 1,(ulong)((uint)uVar1 + (uint)uVar1));
        FUN_1001b7e14(&local_58,&local_258,(ulong)uVar1);
        uVar4 = param_1[1];
        if (uVar4 < (ulong)param_1[2]) {
          FUN_1001b7a88(uVar4,&local_58);
          lVar9 = uVar4 + 0x10;
          param_1[1] = lVar9;
        }
        else {
          lVar9 = FUN_1001de980(param_1,&local_58);
        }
        param_1[1] = lVar9;
        FUN_1001b7a50(&local_58);
        puVar3 = puVar7;
      } while (puVar7 < puVar6);
      uVar5 = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

