// name: FUN_100572138
// address: 100572138

long * FUN_100572138(long *param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long lStack_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  plStack_f0 = (long *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  uVar4 = (**(code **)(*param_2 + 0xd8))(param_2,param_3);
  local_108 = CONCAT44(local_108._4_4_,uVar4);
  uVar4 = (**(code **)(*param_2 + 200))(param_2,param_3);
  local_108 = CONCAT44(uVar4,(undefined4)local_108);
  uVar4 = (**(code **)(*param_2 + 0xd0))(param_2,param_3);
  uStack_100 = CONCAT44(uStack_100._4_4_,uVar4);
  local_138 = *param_3;
  uStack_134 = param_3[1];
  uStack_130 = param_3[2];
  uStack_12c = param_3[3];
  local_128 = param_3[4];
  uStack_124 = param_3[5];
  uStack_120 = param_3[6];
  uStack_11c = param_3[7];
  local_118 = *(undefined8 *)(param_3 + 8);
  cVar3 = (**(code **)(*param_2 + 0x80))(param_2,0x6d646961,&local_138,0,&local_70);
  if (cVar3 == '\0') goto LAB_10057247e;
  local_118 = local_50;
  local_128 = local_60;
  uStack_124 = uStack_5c;
  uStack_120 = uStack_58;
  uStack_11c = uStack_54;
  local_138 = local_70;
  uStack_134 = uStack_6c;
  uStack_130 = uStack_68;
  uStack_12c = uStack_64;
  cVar3 = (**(code **)(*param_2 + 0x80))(param_2,0x6d696e66,&local_138,0);
  if (cVar3 == '\0') goto LAB_10057247e;
  local_118 = local_50;
  local_128 = local_60;
  uStack_124 = uStack_5c;
  uStack_120 = uStack_58;
  uStack_11c = uStack_54;
  local_138 = local_70;
  uStack_134 = uStack_6c;
  uStack_130 = uStack_68;
  uStack_12c = uStack_64;
  cVar3 = (**(code **)(*param_2 + 0x80))(param_2,0x7374626c,&local_138,0,local_98);
  if (cVar3 == '\0') goto LAB_10057247e;
  cVar3 = (**(code **)(*param_2 + 0x80))(param_2,0x73747363,local_98,0,&local_70);
  if (cVar3 == '\0') goto LAB_10057247e;
  uStack_c0 = (**(code **)(*param_2 + 0x70))(param_2,CONCAT44(uStack_6c,local_70));
  cVar3 = (**(code **)(*param_2 + 0x80))(param_2,0x7374737a,local_98,0,&local_70);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_2 + 0x80))(param_2,0x73747a32,local_98,0,&local_70);
    if (cVar3 == '\0') goto LAB_10057247e;
  }
  local_b8 = (**(code **)(*param_2 + 0x70))(param_2,CONCAT44(uStack_6c,local_70));
  cVar3 = (**(code **)(*param_2 + 0x80))(param_2,0x73747473,local_98,0,&local_70);
  if (cVar3 == '\0') goto LAB_10057247e;
  uStack_a0 = (**(code **)(*param_2 + 0x70))(param_2,CONCAT44(uStack_6c,local_70));
  cVar3 = (**(code **)(*param_2 + 0x80))(param_2,0x7374636f,local_98,0,&local_70);
  if (cVar3 == '\0') {
    bVar7 = false;
  }
  else {
    lStack_b0 = (**(code **)(*param_2 + 0x70))(param_2,CONCAT44(uStack_6c,local_70));
    bVar7 = lStack_b0 != 0;
  }
  cVar3 = (**(code **)(*param_2 + 0x80))(param_2,0x636f3634,local_98,0,&local_70);
  if (cVar3 == '\0') {
    bVar8 = false;
  }
  else {
    local_a8 = (**(code **)(*param_2 + 0x70))(param_2,CONCAT44(uStack_6c,local_70));
    bVar8 = local_a8 != 0;
  }
  if ((bool)(bVar7 | bVar8)) {
    FUN_10056ef18(&local_48,&local_108);
    FUN_100217418(param_1,&local_48);
    FUN_100220ae8(CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40)));
    if (*param_1 != 0) goto LAB_10057247e;
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      pcVar6 = "sampleTableHandler != __null";
      goto LAB_1005724f2;
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      pcVar6 = 
      "(createParams.chunkOffsetAtom != __null) || (createParams.chunkOffset64Atom != __null)";
LAB_1005724f2:
      uStack_3c = 0x822;
      local_40 = 1;
      uStack_44 = 0x7a0a90;
      local_48 = 0x8220202;
      uStack_3a = SUB82(pcVar6,0);
      uStack_38 = (undefined6)((ulong)pcVar6 >> 0x10);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_10057247e:
  if (plStack_f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

