// name: FUN_1004e4f5a
// address: 1004e4f5a

void FUN_1004e4f5a(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  undefined8 uVar13;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
LAB_1004e4ff3:
    uVar13 = FUN_1001cc310();
    cVar12 = _os_log_type_enabled(uVar13,0x10);
    if (cVar12 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_2 + 8) != 0x64756c63) {
      uVar13 = FUN_1001cc310();
      cVar12 = _os_log_type_enabled(uVar13,0x10);
      if (cVar12 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar12 = FUN_1001782e9(0,1);
      if (cVar12 == '\0') goto LAB_1004e4ff3;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      uVar3 = *(undefined4 *)(param_1 + 0x38);
      uVar4 = *(undefined4 *)(param_1 + 0x3c);
      uVar5 = *(undefined4 *)(param_1 + 0x40);
      uVar6 = *(undefined4 *)(param_1 + 0x44);
      uVar7 = *(undefined4 *)(param_1 + 0x48);
      uVar8 = *(undefined4 *)(param_1 + 0x4c);
      uVar9 = *(undefined4 *)(param_1 + 0x54);
      uVar10 = *(undefined4 *)(param_1 + 0x58);
      uVar11 = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(param_2 + 0x7190) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_2 + 0x7194) = uVar9;
      *(undefined4 *)(param_2 + 0x7198) = uVar10;
      *(undefined4 *)(param_2 + 0x719c) = uVar11;
      *(undefined4 *)(param_2 + 0x7180) = uVar5;
      *(undefined4 *)(param_2 + 0x7184) = uVar6;
      *(undefined4 *)(param_2 + 0x7188) = uVar7;
      *(undefined4 *)(param_2 + 0x718c) = uVar8;
      *(undefined4 *)(param_2 + 0x7170) = uVar1;
      *(undefined4 *)(param_2 + 0x7174) = uVar2;
      *(undefined4 *)(param_2 + 0x7178) = uVar3;
      *(undefined4 *)(param_2 + 0x717c) = uVar4;
      FUN_1004e50d2(param_2);
    }
    FUN_1004e1e68(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

