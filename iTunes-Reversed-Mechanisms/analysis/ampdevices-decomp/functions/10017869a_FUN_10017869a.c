// name: FUN_10017869a
// address: 10017869a

ulong FUN_10017869a(long param_1)

{
  byte bVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined1 local_50 [16];
  void *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_100683710(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0;
    goto LAB_1001787e5;
  }
  pvVar3 = operator_new(0x70,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar3 == (void *)0x0) {
    local_40 = (void *)0x0;
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10068369a(uVar4);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 != '\0') goto LAB_10017874e;
LAB_1001787c9:
    uVar5 = 0;
  }
  else {
    FUN_100179360(pvVar3,param_1);
    local_40 = pvVar3;
LAB_10017874e:
    FUN_1001785f7();
    FUN_10015a0ac(local_50,&DAT_100890050);
    FUN_1001785f7();
    if (DAT_100890048 != '\0') {
LAB_1001787c0:
      FUN_10015a142(local_50);
      goto LAB_1001787c9;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_1001785f7();
      plVar6 = DAT_100890030;
      FUN_1001785f7();
      plVar8 = plVar6;
      if (plVar6 != DAT_100890038) {
        do {
          plVar8 = plVar6;
          if (*(long *)(param_1 + 0x48) == *(long *)(*plVar6 + 0x48)) break;
          plVar6 = plVar6 + 1;
          plVar8 = DAT_100890038;
        } while (plVar6 != DAT_100890038);
      }
      FUN_1001785f7();
      if (plVar8 != DAT_100890038) goto LAB_1001787c0;
    }
    FUN_1001785f7();
    plVar6 = DAT_100890030;
    FUN_1001785f7();
    if ((long)DAT_100890038 - (long)plVar6 != 0) {
      uVar5 = (long)DAT_100890038 - (long)plVar6 >> 3;
      do {
        uVar7 = uVar5 >> 1;
        if (*(int *)((long)local_40 + 0x30) <= *(int *)(plVar6[uVar7] + 0x30)) {
          plVar6 = plVar6 + uVar7 + 1;
          uVar7 = ~uVar7 + uVar5;
        }
        uVar5 = uVar7;
      } while (uVar7 != 0);
    }
    FUN_1001785f7();
    pvVar3 = local_40;
    local_40 = (void *)0x0;
    local_38 = SUB84(pvVar3,0);
    uStack_34 = (undefined4)((ulong)pvVar3 >> 0x20);
    FUN_100179408(&DAT_100890030);
    FUN_1001785f7();
    lVar9 = (long)DAT_100890038 - (long)DAT_100890030;
    lVar10 = lVar9 >> 3;
    uVar5 = lVar10 * 0x1cac083126e978d5;
    if ((uVar5 >> 2 | uVar5 << 0x3e) < 0x83126e978d4fe0) {
      plVar6 = (long *)FUN_100178426();
      cVar2 = _os_log_type_enabled(plVar6);
      if (cVar2 != '\0') {
        local_38 = 0x8020100;
        uStack_34 = (undefined4)lVar10;
        iStack_30 = (int)(lVar9 >> 0x23);
        __os_log_impl(0x100000000,plVar6,0,"NewDelayedAction(): %{public}lu actions in the queue",
                      &local_38,0xc);
      }
    }
    FUN_10015a142(local_50);
    bVar1 = DAT_1008900b0;
    uVar5 = CONCAT71((int7)((ulong)plVar6 >> 8),1);
    LOCK();
    DAT_1008900b0 = 1;
    UNLOCK();
    if ((bVar1 & 1) == 0) {
      if (DAT_100890000 == (long *)0x0) {
        _dispatch_async_f((dispatch_queue_t)PTR___dispatch_main_q_10082cb60,(void *)0x0,
                          FUN_10017962e);
      }
      else {
        (**(code **)(*DAT_100890000 + 0x30))();
      }
    }
  }
  pvVar3 = local_40;
  local_40 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    FUN_100179314(&local_40);
  }
LAB_1001787e5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5 & 0xffffffff;
}

