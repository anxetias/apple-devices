// name: FUN_1003ff98f
// address: 1003ff98f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003ff98f(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 local_a8 [3] [16];
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_a8,0x30);
  uVar5 = 0x30;
  if (param_2 < 0x30) {
    uVar5 = param_2;
  }
  iVar2 = FUN_1003f0368(param_1,local_a8,uVar5);
  if (iVar2 == -0x80) goto LAB_1003ffaef;
  if (iVar2 == 0) {
    if (0x30 < param_2) {
      iVar2 = FUN_100160dce(*(undefined8 *)(param_1 + 0x100000),param_2 - uVar5);
      if (iVar2 == -0x80) goto LAB_1003ffaef;
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_1003ffaef;
        puVar4 = &local_58;
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x400;
        uStack_4a = (undefined2)iVar2;
        uStack_48 = (undefined2)((uint)iVar2 >> 0x10);
        goto LAB_1003ffb8e;
      }
    }
    if (*(char *)(param_1 + 0x100127) != '\0') {
      local_a8[0] = pshufb(local_a8[0],_DAT_100718a70);
    }
    FUN_1001c62d9(&local_58,0x20);
    local_58 = local_a8[0]._0_4_;
    uStack_54 = local_a8[0]._4_4_;
    uStack_50 = local_a8[0]._8_4_;
    uStack_4c = local_a8[0]._12_2_;
    uStack_4a = local_a8[0]._14_2_;
    iVar2 = (**(code **)(param_1 + 0x100020))
                      (*(undefined8 *)(param_1 + 0x100008),0x7373616e,&local_58,
                       *(undefined8 *)(param_1 + 0x100028));
    if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_1003ffaef;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_1003ffaef;
    puVar4 = &local_78;
    local_78 = 0x8220202;
    local_74 = "Assertion failure";
    local_6c = 0x400;
    local_6a = iVar2;
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_1003ffaef;
    puVar4 = &local_58;
    local_58 = 0x8220202;
    uStack_54 = 0x7a0a90;
    uStack_50 = 1;
    uStack_4c = 0x400;
    uStack_4a = (undefined2)iVar2;
    uStack_48 = (undefined2)((uint)iVar2 >> 0x10);
  }
LAB_1003ffb8e:
  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",puVar4,0x12);
LAB_1003ffaef:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

