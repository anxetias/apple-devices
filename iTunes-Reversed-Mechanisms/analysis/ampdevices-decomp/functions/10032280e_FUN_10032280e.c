// name: FUN_10032280e
// address: 10032280e

void FUN_10032280e(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  bool bVar9;
  long local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined2 local_90;
  long local_8e;
  undefined2 local_86;
  long local_84;
  undefined2 local_7c;
  uint local_7a;
  undefined **local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined ***local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar1 = (ulong *)(*(long *)(param_1 + 8) + 0x1bb0);
  *puVar1 = *puVar1 | 0x20000;
  lVar5 = *(long *)(param_1 + 8);
  uVar7 = *(ulong *)(lVar5 + 0x1bb0);
  bVar9 = (uVar7 & 0x10) != 0;
  if (bVar9) {
    *(ulong *)(lVar5 + 0x1bb0) = uVar7 & 0xffffffffffffffef;
    lVar5 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(lVar5 + 0x1bb0);
  }
  uVar8 = (uint)bVar9;
  if ((uVar7 & 0x20) != 0) {
    uVar8 = uVar8 | 2;
    *(ulong *)(lVar5 + 0x1bb0) = uVar7 & 0xffffffffffffffdf;
    lVar5 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(lVar5 + 0x1bb0);
  }
  if ((uVar7 & 0x40) != 0) {
    uVar8 = uVar8 | 4;
    *(ulong *)(lVar5 + 0x1bb0) = uVar7 & 0xffffffffffffffbf;
    lVar5 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(lVar5 + 0x1bb0);
  }
  if ((char)uVar7 < '\0') {
    uVar8 = uVar8 | 8;
    *(ulong *)(lVar5 + 0x1bb0) = uVar7 & 0xffffffffffffff7f;
    lVar5 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(lVar5 + 0x1bb0);
  }
  if (((uint)uVar7 >> 8 & 1) != 0) {
    uVar8 = uVar8 | 0x10;
    *(ulong *)(lVar5 + 0x1bb0) = uVar7 & 0xfffffffffffffeff;
    lVar5 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(lVar5 + 0x1bb0);
  }
  if (((uint)uVar7 >> 9 & 1) != 0) {
    uVar8 = uVar8 | 0x20;
    *(ulong *)(lVar5 + 0x1bb0) = uVar7 & 0xfffffffffffffdff;
    lVar5 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(lVar5 + 0x1bb0);
  }
  if (((uint)uVar7 >> 10 & 1) != 0) {
    uVar8 = uVar8 | 0x40;
    *(ulong *)(lVar5 + 0x1bb0) = uVar7 & 0xfffffffffffffbff;
    lVar5 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(lVar5 + 0x1bb0);
  }
  if (((uint)uVar7 >> 0xb & 1) != 0) {
    uVar8 = uVar8 | 0x80;
    *(ulong *)(lVar5 + 0x1bb0) = uVar7 & 0xfffffffffffff7ff;
    lVar5 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(lVar5 + 0x1bb0);
  }
  if (((uint)uVar7 >> 0xc & 1) != 0) {
    uVar8 = uVar8 | 0x100;
    *(ulong *)(lVar5 + 0x1bb0) = uVar7 & 0xffffffffffffefff;
    lVar5 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(lVar5 + 0x1bb0);
  }
  if (((uint)uVar7 >> 0xd & 1) != 0) {
    uVar8 = uVar8 | 0x200;
    *(ulong *)(lVar5 + 0x1bb0) = uVar7 & 0xffffffffffffdfff;
    lVar5 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(lVar5 + 0x1bb0);
  }
  if (((uint)uVar7 >> 0xe & 1) != 0) {
    uVar8 = uVar8 | 0x400;
    *(ulong *)(lVar5 + 0x1bb0) = uVar7 & 0xffffffffffffbfff;
    lVar5 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(lVar5 + 0x1bb0);
  }
  if ((short)uVar7 < 0) {
    uVar8 = uVar8 | 0x800;
    *(ulong *)(lVar5 + 0x1bb0) = uVar7 & 0xffffffffffff7fff;
    lVar5 = *(long *)(param_1 + 8);
    uVar7 = *(ulong *)(lVar5 + 0x1bb0);
  }
  if (((uint)uVar7 >> 0x10 & 1) != 0) {
    uVar8 = uVar8 | 0x1000;
    *(ulong *)(lVar5 + 0x1bb0) = uVar7 & 0xfffffffffffeffff;
  }
  if ((uVar8 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x10))(plVar2,0x74646173,plVar2,0,0);
    lVar5 = FUN_1002f930c(*(undefined8 *)(param_1 + 8));
    if (lVar5 != 0) {
      do {
        lVar6 = FUN_1002f9451(lVar5);
        if ((*(byte *)(lVar5 + 0xc6) & 8) != 0) {
          local_68 = *(undefined ***)(lVar5 + 0x1c0);
          uStack_60 = *(undefined8 *)(lVar5 + 0x1c8);
          local_58 = *(undefined4 *)(lVar5 + 0x1d0);
          uStack_54 = *(undefined4 *)(lVar5 + 0x1d4);
          uStack_50 = *(undefined4 *)(lVar5 + 0x1d8);
          uStack_4c = *(undefined4 *)(lVar5 + 0x1dc);
          FUN_1001c62d9(lVar5 + 0x1c0,0x20);
          *(byte *)(lVar5 + 0xc6) = *(byte *)(lVar5 + 0xc6) & 0xf7;
          (**(code **)(**(long **)(param_1 + 8) + 0x10))
                    (*(long **)(param_1 + 8),0x6d747269,lVar5,&local_68,0);
          cVar4 = FUN_10053916d(&local_68,0xac);
          if (cVar4 != '\0') {
            FUN_1004810a3(lVar5);
          }
        }
        lVar5 = lVar6;
      } while (lVar6 != 0);
    }
  }
  lVar5 = FUN_100277149(*(undefined8 *)(param_1 + 8));
  while (lVar5 != 0) {
    lVar6 = FUN_10027728e(lVar5);
    FUN_1003a26e0(lVar5);
    lVar5 = lVar6;
  }
  lVar5 = FUN_1004cf9b5(*(undefined8 *)(param_1 + 8));
  while (lVar5 != 0) {
    lVar6 = FUN_1005e386a(lVar5);
    FUN_1005e6838(lVar5);
    lVar5 = lVar6;
  }
  lVar5 = FUN_100315ede(*(undefined8 *)(param_1 + 8));
  while (lVar5 != 0) {
    lVar6 = FUN_100316031(lVar5);
    FUN_1004833be(lVar5);
    lVar5 = lVar6;
  }
  FUN_100321fab(&local_a8,*(undefined8 *)(param_1 + 8));
  if (local_a8 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 8);
    local_68 = &PTR_FUN_100853a30;
    local_48 = &local_68;
    FUN_10062521a(local_a8,&local_68);
    if (local_48 == &local_68) {
      lVar5 = 0x20;
    }
    else {
      lVar5 = 0x28;
      if (local_48 == (undefined ***)0x0) goto LAB_100322ba9;
    }
    (**(code **)((long)*local_48 + lVar5))();
  }
LAB_100322ba9:
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x10))(plVar2,0x74644443,plVar2,uVar8,0);
  lVar5 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar5 + 0x1bb2) & 0x10) != 0) {
    if (DAT_1008c66e8 != -1) {
      _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
    }
    uVar3 = DAT_1008c66e0;
    cVar4 = _os_log_type_enabled(DAT_1008c66e0,1);
    lVar5 = *(long *)(param_1 + 8);
    if (cVar4 != '\0') {
      local_8e = lVar5 + 0x84;
      local_98 = 0x404100402;
      local_90 = 0x820;
      local_86 = 0x800;
      local_7c = 0x400;
      local_84 = lVar5;
      local_7a = uVar8;
      __os_log_impl(0x100000000,uVar3,1,"edit> DONE \'%.4s\' %p (0x%x)",&local_98,0x22);
      lVar5 = *(long *)(param_1 + 8);
    }
  }
  FUN_1002fc1ae(lVar5,0x74646468,0);
  if (uVar8 != 0) {
    FUN_1005e26ab(*(undefined8 *)(param_1 + 8));
  }
  puVar1 = (ulong *)(*(long *)(param_1 + 8) + 0x1bb0);
  *puVar1 = *puVar1 & 0xfffffffffffdffff;
  if (local_a0 != (long *)0x0) {
    LOCK();
    plVar2 = local_a0 + 1;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

