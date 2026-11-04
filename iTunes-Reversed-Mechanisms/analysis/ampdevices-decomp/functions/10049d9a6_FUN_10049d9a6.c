// name: FUN_10049d9a6
// address: 10049d9a6

int FUN_10049d9a6(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  long local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_48;
  undefined8 uStack_44;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(&local_190,0x148);
  if (*(long *)(param_1 + 0x4e0) != 0) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = "Assertion failure";
      uStack_3c = 0x822;
      uStack_3a = 0x336c;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1002c3cd0(&local_48,param_1 + 8);
  uVar4 = CONCAT22(uStack_3a,uStack_3c);
  plVar3 = (long *)CONCAT44(uStack_17c,uStack_180);
  local_188 = local_48;
  uStack_184 = (undefined4)uStack_44;
  uStack_180 = uStack_44._4_4_;
  uStack_17c = uVar4;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_178 = *(undefined4 *)(param_1 + 0x1c);
  local_170 = param_1 + 0x20;
  FUN_10049cea2(param_1);
  local_168 = *param_2;
  local_164 = param_2[4];
  local_160 = *(undefined8 *)(param_2 + 2);
  local_158 = *(undefined8 *)(param_2 + 5);
  local_150 = param_2[7];
  local_14c = *(undefined1 *)(param_2 + 8);
  local_148 = *(undefined8 *)(param_2 + 9);
  local_140 = *(undefined8 *)(param_2 + 0xc);
  uStack_138 = *(undefined8 *)(param_2 + 0xe);
  local_130 = *(undefined8 *)(param_2 + 0x10);
  local_128 = *(undefined8 *)(param_2 + 0x12);
  local_120 = param_2[0x14];
  local_118 = *(undefined8 *)(param_2 + 0x16);
  uStack_110 = *(undefined8 *)(param_2 + 0x18);
  local_108 = *(undefined8 *)(param_2 + 0x1a);
  local_100 = *(undefined8 *)(param_2 + 0x1c);
  local_f8 = *(undefined8 *)(param_2 + 0x1e);
  local_f0 = param_2[0x20];
  local_e8 = *(undefined8 *)(param_2 + 0x22);
  local_e0 = *(undefined8 *)(param_2 + 0x24);
  local_d8 = *(undefined8 *)(param_2 + 0x26);
  uStack_d0 = *(undefined8 *)(param_2 + 0x28);
  local_c8 = param_2[0x2a];
  uStack_c4 = param_2[0x2b];
  uStack_c0 = param_2[0x2c];
  uStack_bc = param_2[0x2d];
  local_b8 = *(undefined8 *)(param_2 + 0x2e);
  local_b0 = *(undefined1 *)(param_2 + 0x30);
  local_af = *(undefined1 *)((long)param_2 + 0xc1);
  local_a8 = *(undefined8 *)(param_2 + 0x32);
  uStack_a0 = *(undefined8 *)(param_2 + 0x34);
  local_98 = param_2[0x36];
  local_94 = *(undefined2 *)(param_2 + 0x37);
  local_90 = param_2[0x38];
  uStack_8c = param_2[0x39];
  uStack_88 = param_2[0x3a];
  uStack_84 = param_2[0x3b];
  local_80 = *(undefined8 *)(param_2 + 0x3c);
  local_78 = *(undefined1 *)(param_2 + 0x3e);
  iVar6 = FUN_10043a8b3(*(undefined8 *)(param_1 + 0x4d8),0x706c6179);
  if (iVar6 == 0) {
    *param_2 = local_168;
    param_2[4] = local_164;
    *(undefined8 *)(param_2 + 2) = local_160;
    *(undefined8 *)(param_2 + 5) = local_158;
    param_2[7] = local_150;
    *(undefined1 *)(param_2 + 8) = local_14c;
    *(undefined8 *)(param_2 + 9) = local_148;
    *(undefined8 *)(param_2 + 0xc) = local_140;
    *(undefined8 *)(param_2 + 0xe) = uStack_138;
    *(undefined8 *)(param_2 + 0x10) = local_130;
    *(undefined8 *)(param_2 + 0x12) = local_128;
    param_2[0x14] = local_120;
    *(undefined8 *)(param_2 + 0x16) = local_118;
    *(undefined8 *)(param_2 + 0x18) = uStack_110;
    *(undefined8 *)(param_2 + 0x1c) = local_100;
    *(undefined8 *)(param_2 + 0x1e) = local_f8;
    param_2[0x20] = local_f0;
    *(undefined8 *)(param_2 + 0x22) = local_e8;
    *(undefined8 *)(param_2 + 0x24) = local_e0;
    *(undefined8 *)(param_2 + 0x2e) = local_b8;
    *(ulong *)(param_2 + 0x2a) = CONCAT44(uStack_c4,local_c8);
    *(ulong *)(param_2 + 0x2c) = CONCAT44(uStack_bc,uStack_c0);
    *(undefined8 *)(param_2 + 0x26) = local_d8;
    *(undefined8 *)(param_2 + 0x28) = uStack_d0;
    *(undefined1 *)(param_2 + 0x30) = local_b0;
    *(undefined1 *)((long)param_2 + 0xc1) = local_af;
    *(undefined8 *)(param_2 + 0x32) = local_a8;
    *(undefined8 *)(param_2 + 0x34) = uStack_a0;
    param_2[0x36] = local_98;
    *(undefined2 *)(param_2 + 0x37) = local_94;
    param_2[0x38] = local_90;
    param_2[0x39] = uStack_8c;
    param_2[0x3a] = uStack_88;
    param_2[0x3b] = uStack_84;
    *(undefined8 *)(param_2 + 0x3c) = local_80;
    *(undefined8 *)(param_1 + 0x4e0) = local_190;
  }
  plVar3 = (long *)CONCAT44(uStack_17c,uStack_180);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

