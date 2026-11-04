// name: FUN_100636f27
// address: 100636f27

undefined8 FUN_100636f27(undefined4 param_1)

{
  char cVar1;
  tm *ptVar2;
  undefined8 uVar3;
  char *pcVar4;
  ushort uVar5;
  undefined8 *puVar6;
  long local_c0;
  ushort local_b4;
  ushort local_b2;
  char local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined1 local_ac;
  undefined2 local_a8;
  undefined1 local_a5;
  undefined1 local_98 [8];
  undefined1 uStack_90;
  undefined2 local_8c;
  int local_84;
  ushort local_7c;
  undefined1 local_78;
  long local_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  ushort *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_b4,0xc);
  local_c0 = _time(0);
  if (local_c0 == -1) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      puVar6 = (undefined8 *)local_98;
      local_98._0_4_ = 0x8220202;
      stack0xffffffffffffff6c = "Assertion failure";
      local_8c = 0x822;
      pcVar4 = "now != (time_t) -1";
LAB_1006370fc:
      *(char **)((long)puVar6 + 0xe) = pcVar4;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",puVar6,0x16);
    }
  }
  else {
    ptVar2 = _localtime_r(&local_c0,(tm *)local_98);
    if (ptVar2 != (tm *)0x0) {
      uVar5 = (ushort)(local_84 + 0x76c);
      local_b4 = uVar5 << 8 | uVar5 >> 8;
      local_b2 = local_7c << 8 | local_7c >> 8;
      local_b0 = SUB161(SEXT816(0x48d159e26af37c05) * SEXT816(local_70),9) -
                 (SUB161(SEXT816(0x48d159e26af37c05) * SEXT816(local_70),0xf) >> 7);
      local_af = uStack_90;
      local_ae = local_98[4];
      local_ad = local_98[0];
      local_ac = local_78;
      FUN_1001c62d9(&local_a8,0x10);
      local_a8 = 0x13b;
      local_a5 = 0xc;
      local_50 = 10;
      local_40 = 0xc;
      local_3c = 1;
      local_38 = 0;
      local_48 = &local_b4;
      local_58 = &local_a8;
      uVar3 = FUN_1006343f6(param_1,FUN_100637128);
      goto LAB_1006370ba;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      puVar6 = &local_58;
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7a0a90;
      local_50 = 1;
      local_4c = 0x822;
      pcVar4 = "localtime_r(&now, &localTime) != __null";
      goto LAB_1006370fc;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_1006370ba:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

