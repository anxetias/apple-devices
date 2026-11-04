// name: FUN_1005e2888
// address: 1005e2888

long * FUN_1005e2888(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar3 = operator_new(0x108,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar3 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "artistInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined1 *)((long)plVar3 + 0x44) = 0;
    *(undefined8 *)((long)plVar3 + 0x3c) = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    *(undefined1 *)(plVar3 + 7) = 0;
    *plVar3 = (long)&PTR_FUN_10086f9d0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    *(undefined4 *)(plVar3 + 0xb) = 0x61747369;
    *(undefined8 *)((long)plVar3 + 0x5c) = 0;
    *(undefined8 *)((long)plVar3 + 100) = 0;
    *(undefined8 *)((long)plVar3 + 0x6c) = 0;
    *(undefined8 *)((long)plVar3 + 0x74) = 0;
    *(undefined8 *)((long)plVar3 + 0x7c) = 0;
    *(undefined8 *)((long)plVar3 + 0x84) = 0;
    *(undefined4 *)((long)plVar3 + 0x8c) = 0;
    FUN_1001aa318();
    plVar3[0x13] = 0;
    plVar3[0x14] = 0;
    FUN_1001b7a44();
    FUN_1001de708(plVar3 + 0x17);
    plVar3[0x1b] = 0;
    plVar3[0x1c] = 0;
    plVar3[0x19] = 0;
    plVar3[0x1a] = 0;
    FUN_1001de708(plVar3 + 0x1d);
    FUN_1001de708(plVar3 + 0x1f);
    iVar2 = FUN_100269164(plVar3,param_1,param_2);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        *(undefined2 *)((long)plVar3 + 0x62) = param_3;
        *(undefined1 *)((long)plVar3 + 0x5f) = param_4;
        *(byte *)(plVar3 + 7) = *(byte *)(plVar3 + 7) & 0xe0 | 0x1e;
        goto LAB_1005e2a2f;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar2 == 0) goto LAB_1005e2a2f;
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    (**(code **)(*plVar3 + 0xa0))(plVar3);
  }
  plVar3 = (long *)0x0;
LAB_1005e2a2f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

