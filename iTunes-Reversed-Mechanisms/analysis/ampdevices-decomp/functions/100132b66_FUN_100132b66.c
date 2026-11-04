// name: FUN_100132b66
// address: 100132b66

ulong FUN_100132b66(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_RBX;
  bool bVar9;
  undefined2 local_188 [24];
  undefined1 local_158 [152];
  long local_c0 [4];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90 [16];
  undefined1 local_80 [40];
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100132b20();
  LOCK();
  bVar9 = DAT_10088f4a0 == '\0';
  if (bVar9) {
    DAT_10088f4a0 = '\x01';
  }
  UNLOCK();
  if (!bVar9) {
    uVar7 = FUN_100132aba();
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_188[0] = 0;
      __os_log_impl(0x100000000,uVar7,0x10,
                    "Could not initialize StoreServices. Already initialized.",local_188,2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    goto LAB_100132dc1;
  }
  FUN_1001330c6(local_188,param_1);
  if (local_c0[0] == 0) {
    pvVar6 = operator_new(8,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar6 != (void *)0x0) {
      FUN_100154808(pvVar6);
    }
    FUN_100132e4a(local_c0,pvVar6);
  }
  if (CONCAT44(uStack_9c,local_a0) == 0) {
    FUN_10014daf0(&local_58);
    local_a0 = (undefined4)local_58;
    uStack_9c = local_58._4_4_;
    uVar3 = (undefined4)uStack_50;
    uVar4 = uStack_50._4_4_;
    local_58 = (undefined **)0x0;
    uStack_50 = (long *)0x0;
    plVar2 = (long *)CONCAT44(uStack_94,uStack_98);
    uStack_98 = uVar3;
    uStack_94 = uVar4;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (uStack_50 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_50 + 1;
      lVar8 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_50 + 0x10))(uStack_50);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  cVar5 = FUN_1001b8428(local_90);
  if (cVar5 != '\0') {
    FUN_1001b8172(local_90,local_188);
  }
  cVar5 = FUN_1001b8428(local_80);
  if (cVar5 != '\0') {
    FUN_1001b82d4(local_80,"1",1);
  }
  cVar5 = FUN_1001b8428(local_158);
  if (cVar5 != '\0') {
    FUN_1001b90b6(&local_58,1);
    FUN_1001b80b2(local_158,&local_58);
    FUN_1001b7a50(&local_58);
  }
  uVar7 = FUN_100156ce8();
  FUN_100156dca(uVar7,local_188);
  local_58 = &PTR_FUN_100839250;
  local_38 = &local_58;
  FUN_1001c1138(&local_58,0);
  if (local_38 == &local_58) {
    lVar8 = 0x20;
LAB_100132da7:
    (**(code **)(*local_38 + lVar8))();
  }
  else {
    lVar8 = 0x28;
    if (local_38 != (long *)0x0) goto LAB_100132da7;
  }
  LOCK();
  DAT_10088f4a0 = '\x02';
  UNLOCK();
  FUN_1001332c4(local_188);
LAB_100132dc1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)unaff_RBX >> 8),bVar9) & 0xffffffff;
}

