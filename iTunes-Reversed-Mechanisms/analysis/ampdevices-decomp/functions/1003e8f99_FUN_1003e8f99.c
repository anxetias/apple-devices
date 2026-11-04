// name: FUN_1003e8f99
// address: 1003e8f99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003e8f99(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar6;
  undefined1 auVar5 [16];
  undefined1 local_f8 [2] [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined2 local_cc;
  int local_ca;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_f8,0x20);
  iVar2 = (**(code **)(param_1 + 0x100020))
                    (*(undefined8 *)(param_1 + 0x100008),0x6773616e,local_f8,
                     *(undefined8 *)(param_1 + 0x100028));
  if (iVar2 == -0x80) goto LAB_1003e91cf;
  if (iVar2 == 0) {
    FUN_1001c62d9(&local_88,0x60);
    uVar3 = _s_mhsd__100747d70;
    uVar6 = _UNK_100747d78;
    if (*(char *)(param_1 + 0x100127) != '\0') {
      uVar3 = _DAT_100747d80;
      uVar6 = _UNK_100747d88;
    }
    local_88 = (undefined4)uVar3;
    uStack_84 = (undefined4)((ulong)uVar3 >> 0x20);
    uStack_80 = (undefined4)uVar6;
    uStack_7c = (undefined2)((ulong)uVar6 >> 0x20);
    uStack_7a = (undefined2)((ulong)uVar6 >> 0x30);
    local_b8 = 0x60;
    uStack_b4 = 0;
    iVar2 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_b8,&local_88);
    if (iVar2 == -0x80) goto LAB_1003e91cf;
    if (iVar2 == 0) {
      FUN_1001c62d9(&local_b8,0x30);
      local_b8 = local_f8[0]._0_4_;
      uStack_b4 = local_f8[0]._4_4_;
      uStack_b0 = local_f8[0]._8_4_;
      uStack_ac = local_f8[0]._12_2_;
      uStack_aa = local_f8[0]._14_2_;
      if (*(char *)(param_1 + 0x100127) != '\0') {
        auVar5 = pshufb(local_f8[0],_DAT_100718a70);
        local_b8 = auVar5._0_4_;
        uStack_b4 = auVar5._4_4_;
        uStack_b0 = auVar5._8_4_;
        uStack_ac = auVar5._12_2_;
        uStack_aa = auVar5._14_2_;
      }
      local_d8 = 0x30;
      uStack_d4 = 0;
      iVar2 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_d8,&local_b8);
      if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_1003e91cf;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') goto LAB_1003e91cf;
      puVar4 = &local_d8;
      local_d8 = 0x8220202;
      uStack_d4 = 0x7a0a90;
      uStack_d0 = 1;
      local_cc = 0x400;
      local_ca = iVar2;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') goto LAB_1003e91cf;
      puVar4 = &local_b8;
      local_b8 = 0x8220202;
      uStack_b4 = 0x7a0a90;
      uStack_b0 = 1;
      uStack_ac = 0x400;
      uStack_aa = (undefined2)iVar2;
      uStack_a8 = (undefined2)((uint)iVar2 >> 0x10);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_1003e91cf;
    puVar4 = &local_88;
    local_88 = 0x8220202;
    uStack_84 = 0x7a0a90;
    uStack_80 = 1;
    uStack_7c = 0x400;
    uStack_7a = (undefined2)iVar2;
    uStack_78 = (undefined2)((uint)iVar2 >> 0x10);
  }
  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",puVar4,0x12);
LAB_1003e91cf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

