// name: FUN_1002e51b6
// address: 1002e51b6

void FUN_1002e51b6(long param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  void **local_118;
  void **ppvStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  void *pvStack_c0;
  long local_b8 [2];
  void **local_a8;
  undefined1 local_a0;
  void ***local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined1 local_40 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = *(long *)(param_1 + 0x10);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x2cf8) == 0)) goto LAB_1002e5384;
  uVar2 = FUN_10030889c();
  FUN_10031bbcc(&local_118,param_1);
  plVar1 = *(long **)(lVar3 + 0x2cf8);
  local_68 = param_2[4];
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  FUN_1001a8c1c(local_60,param_2 + 6);
  FUN_1001a8c1c(local_58,param_2 + 8);
  FUN_1001a8c1c(local_50,param_2 + 10);
  local_48 = *(undefined8 *)(param_2 + 0xc);
  local_a8 = &local_c8;
  local_c8 = (void *)0x0;
  pvStack_c0 = (void *)0x0;
  local_b8[0] = 0;
  local_a0 = 0;
  local_c8 = operator_new(0x38);
  local_b8[0] = (long)local_c8 + 0x38;
  pvStack_c0 = local_c8;
  pvStack_c0 = (void *)FUN_1002e766c(local_b8,&local_78,local_40,local_c8);
  local_88 = operator_new(0x58);
  *local_88 = &PTR_FUN_100852fb8;
  local_88[1] = local_118;
  local_88[2] = ppvStack_110;
  *(undefined4 *)(local_88 + 3) = local_108;
  *(undefined4 *)((long)local_88 + 0x1c) = uStack_104;
  *(undefined4 *)(local_88 + 4) = uStack_100;
  *(undefined4 *)((long)local_88 + 0x24) = uStack_fc;
  *(undefined4 *)(local_88 + 5) = local_f8;
  *(undefined4 *)((long)local_88 + 0x2c) = uStack_f4;
  *(undefined4 *)(local_88 + 6) = uStack_f0;
  *(undefined4 *)((long)local_88 + 0x34) = uStack_ec;
  *(undefined4 *)(local_88 + 7) = local_e8;
  *(undefined4 *)((long)local_88 + 0x3c) = uStack_e4;
  *(undefined4 *)(local_88 + 8) = uStack_e0;
  *(undefined4 *)((long)local_88 + 0x44) = uStack_dc;
  *(undefined4 *)(local_88 + 9) = local_d8;
  *(undefined4 *)((long)local_88 + 0x4c) = uStack_d4;
  *(undefined4 *)(local_88 + 10) = uStack_d0;
  *(undefined4 *)((long)local_88 + 0x54) = uStack_cc;
  (**(code **)(*plVar1 + 0x40))(plVar1,uVar2,&local_c8,&local_a8);
  if (local_88 == &local_a8) {
    lVar3 = 0x20;
LAB_1002e5356:
    (**(code **)((long)*local_88 + lVar3))();
  }
  else {
    lVar3 = 0x28;
    if (local_88 != (void ***)0x0) goto LAB_1002e5356;
  }
  local_a8 = &local_c8;
  FUN_1002e77f0();
  FUN_1001ab006(local_50);
  FUN_1001ab006(local_58);
  FUN_1001ab006(local_60);
LAB_1002e5384:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

