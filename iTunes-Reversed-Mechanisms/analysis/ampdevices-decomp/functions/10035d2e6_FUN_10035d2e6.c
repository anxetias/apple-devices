// name: FUN_10035d2e6
// address: 10035d2e6

undefined8 FUN_10035d2e6(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (uint *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar9,0x10);
    if (cVar7 != '\0') {
      local_2a = "codecList != nullptr";
LAB_10035d3cf:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    uVar2 = *param_2;
    uVar8 = (ulong)uVar2;
    if (uVar8 < 0x14) {
      param_2[uVar8 * 9 + 9] = param_1[8];
      uVar3 = *param_1;
      uVar4 = param_1[1];
      uVar5 = param_1[2];
      uVar6 = param_1[3];
      uVar9 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_2 + uVar8 * 9 + 5) = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(param_2 + uVar8 * 9 + 5 + 2) = uVar9;
      puVar1 = param_2 + uVar8 * 9 + 1;
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      *param_2 = uVar2 + 1;
      uVar9 = 0;
      goto LAB_10035d394;
    }
    uVar9 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar9,0x10);
    if (cVar7 != '\0') {
      local_2a = "codecList->numCodecs < 20";
      goto LAB_10035d3cf;
    }
  }
  FUN_1001782e9(0,0);
  uVar9 = 0xffffffce;
LAB_10035d394:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

