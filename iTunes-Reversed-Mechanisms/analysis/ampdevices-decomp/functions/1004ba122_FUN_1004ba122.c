// name: FUN_1004ba122
// address: 1004ba122

undefined8
FUN_1004ba122(char *param_1,undefined8 param_2,uint param_3,long param_4,undefined4 *param_5)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = 0;
  if (*param_1 == '\0') goto LAB_1004ba306;
  if (param_1[0x20] == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "( (&inHashComputation->expectedHash)->hash[0] != 0 )";
      goto LAB_1004ba2d3;
    }
  }
  else {
    if (param_1[1] == '\0') goto LAB_1004ba306;
    lVar5 = *(long *)(param_1 + 0xa8);
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_4a = "inHashComputation->hashContext != __null";
LAB_1004ba2d3:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
    }
    else {
      uVar8 = (ulong)param_3;
      if (*(long *)(param_1 + 0x18) + *(long *)(param_1 + 8) == param_4) {
        lVar1 = *(long *)(param_1 + 0x10);
        uVar7 = uVar8;
        if (((0 < lVar1) && (*(long *)(param_1 + 8) + lVar1 < (long)(uVar8 + param_4))) &&
           (uVar6 = (int)lVar1 - (int)*(long *)(param_1 + 0x18), uVar7 = (ulong)uVar6,
           param_3 < uVar6)) {
          uVar3 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar3,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "dataLengthToUse <= inDataLength";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          lVar5 = *(long *)(param_1 + 0xa8);
          uVar7 = uVar8;
        }
        FUN_10017983e(lVar5,param_2,uVar7);
        *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + uVar7;
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = (int)uVar7;
          uVar4 = 0;
        }
        goto LAB_1004ba306;
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_4a = 
        "inDataOffset == inHashComputation->hashStartOffset + inHashComputation->bytesHashed";
        goto LAB_1004ba2d3;
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_1004ba306:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

