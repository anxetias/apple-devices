// name: FUN_10040e2bd
// address: 10040e2bd

int FUN_10040e2bd(long param_1,long param_2,char param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 local_118 [48];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [8];
  long *local_c8;
  long local_c0;
  long *local_b8;
  char local_a9;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined8 *local_78;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1001aa318(local_d0);
  if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x8220202;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x822;
      uStack_9a = 0x581f;
      uStack_98 = 0x7b;
      uStack_96 = 1;
      uStack_94 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    iVar4 = -0x32;
    FUN_1001782e9(0,0);
    goto LAB_10040e858;
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    pcVar12 = "out";
    if (param_3 == '\0') {
      pcVar12 = "in";
    }
    FUN_100476ac1(local_68,param_2);
    uVar5 = FUN_1001b83ae(local_68);
    uStack_90 = "to";
    if (param_3 == '\0') {
      uStack_90 = "from";
    }
    pcVar11 = "library";
    if (*(int *)(*(long *)(param_2 + 0x10) + 0x84) == 0x646f5069) {
      pcVar11 = "device";
    }
    local_a8 = 0x8220402;
    uStack_a4 = SUB84(pcVar12,0);
    uStack_a0 = (undefined4)((ulong)pcVar12 >> 0x20);
    uStack_9c = 0x822;
    uStack_9a = (undefined2)uVar5;
    uStack_98 = (undefined2)((ulong)uVar5 >> 0x10);
    uStack_96 = (undefined2)((ulong)uVar5 >> 0x20);
    uStack_94 = (undefined2)((ulong)uVar5 >> 0x30);
    uStack_92 = 0x822;
    local_88 = 0x822;
    uStack_86 = SUB82(pcVar11,0);
    uStack_84 = (undefined4)((ulong)pcVar11 >> 0x10);
    uStack_80 = 0;
    __os_log_impl(0x100000000,uVar6,1,
                  "sync> checking %{public}s rental track \"%{public}s\" %{public}s %{public}s",
                  &local_a8,0x2a);
    FUN_1001b7a50(local_68);
  }
  iVar4 = FUN_1001e96d3(&local_e8,0,0);
  if (iVar4 == -0x80) goto LAB_10040e858;
  if (iVar4 != 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_a8 = 0x8220202;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9c = 0x400;
      uStack_9a = (undefined2)iVar4;
      uStack_98 = (undefined2)((uint)iVar4 >> 0x10);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_a8,0x12);
    }
    goto LAB_10040e858;
  }
  FUN_1001ceabd(local_118,0,0,0,0,0);
  FUN_1001c334a(&local_a8,0x8f000f);
  FUN_1001b80b2(param_1 + 0x2c78,&local_a8);
  FUN_1001b7a50(&local_a8);
  *(byte *)(param_1 + 0x2be2) = *(byte *)(param_1 + 0x2be2) | 2;
  if (param_3 == '\0') {
    pvVar8 = operator_new(0x230,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar8 != (void *)0x0) {
      FUN_100156184(pvVar8);
    }
    plVar9 = operator_new(0x20);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_100857a40;
    plVar9[3] = (long)pvVar8;
    if (pvVar8 == (void *)0x0) {
LAB_10040e6b3:
      pvVar8 = (void *)0x0;
    }
    else {
      local_c8 = plVar9 + 1;
      local_a8 = SUB84(pvVar8,0);
      uStack_a4 = (undefined4)((ulong)pvVar8 >> 0x20);
      uStack_a0 = SUB84(plVar9,0);
      uStack_9c = (undefined2)((ulong)plVar9 >> 0x20);
      uStack_9a = (undefined2)((ulong)plVar9 >> 0x30);
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
      cVar3 = FUN_10013ee40(pvVar8);
      plVar2 = (long *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          local_a9 = cVar3;
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__shared_weak_count::__release_weak();
          cVar3 = local_a9;
        }
      }
      if (cVar3 == '\0') {
        LOCK();
        lVar10 = *local_c8;
        *local_c8 = *local_c8 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
        plVar9 = (long *)0x0;
        goto LAB_10040e6b3;
      }
    }
    uVar6 = FUN_10044b189(param_2);
    FUN_100154bde(pvVar8,uVar6);
    FUN_10013ef30(pvVar8,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x58) + 0x10) + 8));
    FUN_10031ba20(&local_a8,param_2);
    local_78 = &local_e8;
    local_48 = operator_new(0x40);
    *local_48 = (long)&PTR_FUN_100857a90;
    *(undefined4 *)(local_48 + 1) = local_a8;
    *(undefined4 *)((long)local_48 + 0xc) = uStack_a4;
    *(undefined4 *)(local_48 + 2) = uStack_a0;
    *(uint *)((long)local_48 + 0x14) = CONCAT22(uStack_9a,uStack_9c);
    *(uint *)(local_48 + 3) = CONCAT22(uStack_96,uStack_98);
    *(uint *)((long)local_48 + 0x1c) = CONCAT22(uStack_92,uStack_94);
    *(undefined4 *)(local_48 + 4) = (undefined4)uStack_90;
    *(undefined4 *)((long)local_48 + 0x24) = uStack_90._4_4_;
    *(uint *)(local_48 + 5) = CONCAT22(uStack_86,local_88);
    *(undefined4 *)((long)local_48 + 0x2c) = uStack_84;
    *(uint *)(local_48 + 6) = CONCAT22(uStack_7e,uStack_80);
    *(undefined4 *)((long)local_48 + 0x34) = uStack_7c;
    local_48[7] = (long)local_78;
    FUN_10015601e(pvVar8,local_68);
    if (local_48 == local_68) {
      lVar10 = 0x20;
LAB_10040e7e0:
      (**(code **)(*local_48 + lVar10))();
    }
    else {
      lVar10 = 0x28;
      if (local_48 != (long *)0x0) goto LAB_10040e7e0;
    }
    FUN_10014105c(pvVar8);
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar10 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__shared_weak_count::__release_weak();
      }
    }
LAB_10040e816:
    iVar4 = FUN_1001e9afc(&local_e8);
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_a8 = 0x8220202;
        uStack_a4 = 0x7a0a90;
        uStack_a0 = 1;
        uStack_9c = 0x400;
        uStack_9a = (undefined2)iVar4;
        uStack_98 = (undefined2)((uint)iVar4 >> 0x10);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_a8,0x12);
      }
    }
  }
  else {
    FUN_10040eb0a(&local_c0);
    lVar10 = local_c0;
    if (local_c0 == 0) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_a8 = 0x8220202;
        uStack_a4 = 0x7a0a90;
        uStack_a0 = 1;
        uStack_9c = 0x822;
        uStack_9a = 0x1cce;
        uStack_98 = 0x7a;
        uStack_96 = 1;
        uStack_94 = 0;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
      }
      iVar4 = -0x6c;
      FUN_1001782e9(0,0);
    }
    else {
      uVar6 = FUN_10044b189(param_2);
      FUN_100154bde(lVar10,uVar6);
      FUN_10013ef30(local_c0,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x58) + 0x10) + 8));
      lVar7 = local_c0;
      FUN_10031ba20(&local_a8,param_2);
      local_78 = &local_e8;
      local_48 = operator_new(0x40);
      *local_48 = (long)&PTR_FUN_1008579b0;
      *(undefined4 *)(local_48 + 1) = local_a8;
      *(undefined4 *)((long)local_48 + 0xc) = uStack_a4;
      *(undefined4 *)(local_48 + 2) = uStack_a0;
      *(uint *)((long)local_48 + 0x14) = CONCAT22(uStack_9a,uStack_9c);
      *(uint *)(local_48 + 3) = CONCAT22(uStack_96,uStack_98);
      *(uint *)((long)local_48 + 0x1c) = CONCAT22(uStack_92,uStack_94);
      *(undefined4 *)(local_48 + 4) = (undefined4)uStack_90;
      *(undefined4 *)((long)local_48 + 0x24) = uStack_90._4_4_;
      *(uint *)(local_48 + 5) = CONCAT22(uStack_86,local_88);
      *(undefined4 *)((long)local_48 + 0x2c) = uStack_84;
      *(uint *)(local_48 + 6) = CONCAT22(uStack_7e,uStack_80);
      *(undefined4 *)((long)local_48 + 0x34) = uStack_7c;
      local_48[7] = (long)local_78;
      FUN_10015601e(lVar7,local_68);
      if (local_48 == local_68) {
        lVar7 = 0x20;
LAB_10040e790:
        (**(code **)(*local_48 + lVar7))();
      }
      else {
        lVar7 = 0x28;
        if (local_48 != (long *)0x0) goto LAB_10040e790;
      }
      iVar4 = 0;
      FUN_10014105c(local_c0);
    }
    if (local_b8 != (long *)0x0) {
      LOCK();
      plVar9 = local_b8 + 1;
      lVar7 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (lVar10 != 0) goto LAB_10040e816;
  }
  FUN_1001e9bb5(&local_e8);
LAB_10040e858:
  FUN_1001aaad2(local_d0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

