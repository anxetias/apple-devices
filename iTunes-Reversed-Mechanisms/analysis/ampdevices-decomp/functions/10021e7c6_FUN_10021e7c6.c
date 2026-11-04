// name: FUN_10021e7c6
// address: 10021e7c6

undefined8 FUN_10021e7c6(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined1 local_d8 [16];
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  byte local_a8;
  undefined7 uStack_a7;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = *(long *)(param_2 + 0x18);
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_c8 = 0x8220202;
      uStack_c4 = 0x7a0a90;
      uStack_c0 = 1;
      uStack_bc = 0x822;
      uStack_ba = 0xf8c;
      uStack_b8 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_c8,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_10032f0f2(param_1);
    goto LAB_10021eed1;
  }
  FUN_10021e3a6(&local_c8);
  cVar5 = *(char *)(param_2 + 0x28);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  uStack_b8 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_ba = 0;
  FUN_10021e356();
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  uVar9 = *(undefined8 *)(lVar3 + 0x18);
  uStack_c0 = (undefined4)uVar9;
  uStack_bc = (undefined2)((ulong)uVar9 >> 0x20);
  uStack_ba = (undefined2)((ulong)uVar9 >> 0x30);
  uVar8 = CONCAT44(uStack_c4,local_c8);
  uVar7 = uVar8 | 1;
  local_c8 = (uint)uVar7;
  if (cVar5 == '\0') {
    uStack_b8 = (undefined6)*(undefined8 *)(lVar3 + 0x90);
    uStack_b2 = (undefined2)((ulong)*(undefined8 *)(lVar3 + 0x90) >> 0x30);
    uStack_b0 = *(undefined4 *)(lVar3 + 0x98);
    uStack_ac = *(undefined1 *)(lVar3 + 0x9c);
    uVar8 = uVar8 | 0xf;
LAB_10021e93a:
    uStack_ab = *(undefined1 *)(lVar3 + 0x58);
    local_c8 = (uint)uVar8 | 0x10;
    uStack_c4 = (undefined4)(uVar8 >> 0x20);
  }
  else {
    uVar6 = *(uint *)(param_2 + 0x2c);
    if ((uVar6 & 4) != 0) {
      uStack_b8 = (undefined6)*(undefined8 *)(lVar3 + 0x90);
      uStack_b2 = (undefined2)((ulong)*(undefined8 *)(lVar3 + 0x90) >> 0x30);
      uStack_b0 = *(undefined4 *)(lVar3 + 0x98);
      uVar7 = uVar8 | 0xd;
      local_c8 = (uint)uVar7;
    }
    uVar8 = uVar7;
    if ((uVar6 & 8) != 0) {
      uStack_ac = *(undefined1 *)(lVar3 + 0x9c);
      uVar8 = uVar7 | 2;
      local_c8 = (uint)uVar8;
      uStack_c4 = (undefined4)(uVar7 >> 0x20);
    }
    if ((uVar6 & 0x40) != 0) goto LAB_10021e93a;
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  FUN_1001b7a5c(local_d8,lVar3 + 0x20);
  FUN_1001b80b2(local_a0,local_d8);
  FUN_1001b7a50(local_d8);
  local_a8 = local_a8 | 1;
  if ((cVar5 == '\0') || (uVar6 = *(uint *)(param_2 + 0x2c), (uVar6 & 1) != 0)) {
    FUN_1001b7a5c(local_d8,lVar3 + 0x38);
    FUN_1001b80b2(local_90,local_d8);
    FUN_1001b7a50(local_d8);
    local_a8 = local_a8 | 2;
    if (cVar5 != '\0') {
      uVar6 = *(uint *)(param_2 + 0x2c);
      goto LAB_10021ea01;
    }
LAB_10021ea05:
    FUN_1001b7a5c(local_d8,lVar3 + 0x48);
    FUN_1001b80b2(local_80,local_d8);
    FUN_1001b7a50(local_d8);
    local_a8 = local_a8 | 4;
    if (cVar5 != '\0') {
      uVar6 = *(uint *)(param_2 + 0x2c);
      goto LAB_10021ea42;
    }
LAB_10021ea46:
    FUN_1001b7a5c(local_d8,lVar3 + 0x70);
    FUN_1001b80b2(local_60,local_d8);
    FUN_1001b7a50(local_d8);
    local_a8 = local_a8 | 0x10;
    if (cVar5 != '\0') {
      uVar6 = *(uint *)(param_2 + 0x2c);
      goto LAB_10021ea83;
    }
LAB_10021ea87:
    FUN_1001b7a5c(local_d8,lVar3 + 0x60);
    FUN_1001b80b2(local_70,local_d8);
    FUN_1001b7a50(local_d8);
    local_a8 = local_a8 | 8;
    if (cVar5 != '\0') {
      uVar6 = *(uint *)(param_2 + 0x2c);
      goto LAB_10021eac4;
    }
LAB_10021eac8:
    FUN_1001b7a5c(local_d8,lVar3 + 0x80);
    FUN_1001b80b2(local_50,local_d8);
    FUN_1001b7a50(local_d8);
    local_a8 = local_a8 | 0x20;
  }
  else {
LAB_10021ea01:
    if ((uVar6 & 2) != 0) goto LAB_10021ea05;
LAB_10021ea42:
    if ((uVar6 & 0x20) != 0) goto LAB_10021ea46;
LAB_10021ea83:
    if ((uVar6 & 0x10) != 0) goto LAB_10021ea87;
LAB_10021eac4:
    if ((uVar6 & 4) != 0) goto LAB_10021eac8;
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_10032f0f2(param_1);
  local_e0 = &cf_pid;
  FUN_1001a7b90(local_d8);
  FUN_10021f04c(param_1,local_d8,&uStack_c0);
  FUN_1001ab240(local_d8);
  local_e0 = &cf_kind;
  FUN_1001a7b90(local_d8);
  local_e8 = &cf_socialProfile;
  FUN_10021f0aa(param_1,local_d8);
  FUN_1001ab240(local_d8);
  if (CONCAT44(uStack_c4,local_c8) != 0) {
    FUN_1001a833e(local_d8,&local_c8,0x1e,0);
    local_e8 = &cf_fixed;
    FUN_1001a7b90(&local_e0);
    FUN_1001a7b90(&local_f0,local_d8);
    FUN_1001a9c16(param_1,&local_e0,&local_f0);
    FUN_1001ab240(&local_f0);
    FUN_1001ab240(&local_e0);
    FUN_1001a85d4(local_d8);
  }
  local_e0 = &cf_validFields;
  FUN_1001a7b90(local_d8);
  local_f0 = CONCAT71(uStack_a7,local_a8);
  FUN_10021f1aa(&local_e8,&local_f0,0);
  FUN_10021f14e(param_1,local_d8,&local_e8);
  FUN_1001aae6c(&local_e8);
  FUN_1001ab240(local_d8);
  if (((local_a8 & 1) != 0) && (cVar5 = FUN_1001b8428(local_a0), cVar5 == '\0')) {
    local_e0 = &cf_profileID;
    FUN_1001a7b90(local_d8);
    FUN_10021f1e0(param_1,local_d8,local_a0);
    FUN_1001ab240(local_d8);
  }
  if ((local_a8 & 2) != 0) {
    local_e0 = &cf_name;
    FUN_1001a7b90(local_d8);
    FUN_10021f1e0(param_1,local_d8,local_90);
    FUN_1001ab240(local_d8);
  }
  if ((local_a8 & 4) != 0) {
    local_e0 = &cf_userName;
    FUN_1001a7b90(local_d8);
    FUN_10021f1e0(param_1,local_d8,local_80);
    FUN_1001ab240(local_d8);
  }
  if ((local_a8 & 0x10) != 0) {
    local_e0 = &cf_pictureURL;
    FUN_1001a7b90(local_d8);
    FUN_10021f1e0(param_1,local_d8,local_60);
    FUN_1001ab240(local_d8);
  }
  if ((local_a8 & 8) != 0) {
    local_e0 = &cf_pictureToken;
    FUN_1001a7b90(local_d8);
    FUN_10021f1e0(param_1,local_d8,local_70);
    FUN_1001ab240(local_d8);
  }
  if ((local_a8 & 0x20) != 0) {
    local_e0 = &cf_artworkUUID;
    FUN_1001a7b90(local_d8);
    FUN_10021f1e0(param_1,local_d8,local_50);
    FUN_1001ab240(local_d8);
  }
  FUN_1001b7a50(local_50);
  FUN_1001b7a50(local_60);
  FUN_1001b7a50(local_70);
  FUN_1001b7a50(local_80);
  FUN_1001b7a50(local_90);
  FUN_1001b7a50(local_a0);
LAB_10021eed1:
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

