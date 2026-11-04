// name: FUN_100457986
// address: 100457986

undefined8 * FUN_100457986(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar3 = operator_new(0x70,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar3 != (long *)0x0) {
    *plVar3 = (long)&PTR_FUN_100859dc0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(undefined8 *)((long)plVar3 + 0x1c) = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    *(undefined4 *)(plVar3 + 0xd) = 0;
    FUN_1001c62d9(plVar3 + 4,0x48);
  }
  *param_1 = plVar3;
  puVar4 = operator_new(0x20);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_100859e58;
  puVar4[3] = plVar3;
  param_1[1] = puVar4;
  if (plVar3 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be not NULL)";
      local_3c = 0x822;
      local_3a = "obj";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') goto LAB_100457a73;
    plVar3 = (long *)*param_1;
  }
  iVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,param_2);
  if (iVar2 != 0) {
    FUN_1002188e4(param_1);
  }
LAB_100457a73:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

