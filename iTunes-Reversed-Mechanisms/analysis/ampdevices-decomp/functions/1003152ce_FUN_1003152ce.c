// name: FUN_1003152ce
// address: 1003152ce

void FUN_1003152ce(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined2 local_7c;
  char *local_7a;
  long *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
LAB_1003153d4:
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      uStack_80 = 1;
      local_7c = 0x822;
      local_7a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1003159ab;
  }
  if ((int)param_1[0x10] != 0x74646174) {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7ab58c;
      uStack_80 = 1;
      local_7c = 0x822;
      local_7a = "trackData->magic == \'tdat\'";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    cVar5 = FUN_1001782e9(0,1);
    if (cVar5 == '\0') goto LAB_1003153d4;
  }
  iVar1 = *(int *)((long)param_1 + 0x84);
  lVar4 = param_1[0x11];
  FUN_100315cf3(param_1);
  *(byte *)((long)param_1 + 0x1bb3) = *(byte *)((long)param_1 + 0x1bb3) | 0x20;
  if (param_1[0x594] != 0) {
    FUN_1001ecf9f();
    param_1[0x594] = 0;
  }
  FUN_1002fc1ae(param_1,0x74646164,0);
  if (iVar1 != 0x706d6574) {
    uVar6 = FUN_1001c156e();
    FUN_1001c6987(uVar6,0x61707274,param_1,0,0);
  }
  if (DAT_1008bbfa0 != (long *)0x0) {
    plVar10 = DAT_1008bbfa0;
    if (DAT_1008bbfa0 == param_1) {
      plVar9 = (long *)0x0;
    }
    else {
      do {
        plVar9 = plVar10;
        plVar10 = (long *)plVar9[0xf];
        if (plVar10 == (long *)0x0) goto LAB_100315422;
      } while (plVar10 != param_1);
    }
    plVar10 = (long *)&DAT_1008bbfa0;
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 0xf;
    }
    *plVar10 = param_1[0xf];
    param_1[0xf] = 0;
  }
LAB_100315422:
  lVar7 = FUN_100315ede(param_1);
  while (lVar7 != 0) {
    FUN_10048dab4(lVar7,0);
    lVar7 = FUN_100315ede(param_1);
  }
  FUN_1001c72e9(param_1 + 0x5a7);
  FUN_1001c672e(param_1 + 0x5af);
  FUN_1002fc1ae(param_1,0x7464636c,0);
  FUN_100316867(param_1,0xf,0);
  lVar7 = FUN_1002f930c(param_1);
  while (lVar7 != 0) {
    lVar8 = FUN_1002f9451(lVar7);
    FUN_1004702fc(lVar7);
    puVar11 = *(undefined8 **)(lVar7 + 0x58);
    while (puVar11 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar11;
      FUN_100205d70(puVar11 + 0x17);
      FUN_1002b077e(param_1,puVar11);
      puVar11 = puVar2;
    }
    FUN_100205d70(lVar7 + 0x1e0);
    FUN_1001ab006(lVar7 + 0x160);
    lVar7 = lVar8;
  }
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  param_1[0x36d] = 0;
  param_1[0x36e] = 0;
  if (param_1[0x5b4] != 0) {
    FUN_100295c56(param_1 + 0x5b4);
  }
  if (param_1[0x378] != 0) {
    FUN_1001c5781();
    param_1[0x378] = 0;
  }
  if (param_1[0x379] != 0) {
    FUN_1001c5781();
    param_1[0x379] = 0;
  }
  if (param_1[0x37a] != 0) {
    FUN_1001c5781();
    param_1[0x37a] = 0;
  }
  if (param_1[0x37b] != 0) {
    FUN_1001c5781();
    param_1[0x37b] = 0;
  }
  if (param_1[0x37c] != 0) {
    FUN_1001c5781();
    param_1[0x37c] = 0;
  }
  if (param_1[0x37d] != 0) {
    FUN_1001c5781();
    param_1[0x37d] = 0;
  }
  if (param_1[0x37e] != 0) {
    FUN_1001c5781();
    param_1[0x37e] = 0;
  }
  if (param_1[0x37f] != 0) {
    FUN_1001c5781();
    param_1[0x37f] = 0;
  }
  FUN_100277f78(param_1);
  FUN_1004d0224(param_1);
  local_88._0_4_ = 0x853c00;
  local_88._4_4_ = 1;
  local_68 = &local_88;
  FUN_1003017c3(param_1,&local_88);
  if (local_68 == &local_88) {
    lVar7 = 0x20;
LAB_10031563c:
    (**(code **)(*local_68 + lVar7))();
  }
  else {
    lVar7 = 0x28;
    if (local_68 != (long *)0x0) goto LAB_10031563c;
  }
  if ((int)param_1[0x10] == 0x74646174) {
LAB_10031567f:
    pvVar3 = (void *)param_1[0x4c7];
    if (pvVar3 != (void *)0x0) {
      FUN_1002a41f4(pvVar3,*(undefined8 *)((long)pvVar3 + 8));
      operator_delete(pvVar3);
    }
    param_1[0x4c7] = 0;
    pvVar3 = (void *)param_1[0x4c8];
    if (pvVar3 != (void *)0x0) {
      FUN_1002a41f4(pvVar3,*(undefined8 *)((long)pvVar3 + 8));
      operator_delete(pvVar3);
    }
    param_1[0x4c8] = 0;
    pvVar3 = (void *)param_1[0x4c9];
    if (pvVar3 != (void *)0x0) {
      FUN_1002a41f4(pvVar3,*(undefined8 *)((long)pvVar3 + 8));
      operator_delete(pvVar3);
    }
    param_1[0x4c9] = 0;
    pvVar3 = (void *)param_1[0x4df];
    if (pvVar3 != (void *)0x0) {
      FUN_10032484e(pvVar3,*(undefined8 *)((long)pvVar3 + 8));
      operator_delete(pvVar3);
    }
    param_1[0x4df] = 0;
    pvVar3 = (void *)param_1[0x4de];
    if (pvVar3 != (void *)0x0) {
      FUN_1002842e4(pvVar3);
      operator_delete(pvVar3);
    }
    param_1[0x4de] = 0;
    pvVar3 = (void *)param_1[0x4e6];
    if (pvVar3 != (void *)0x0) {
      FUN_100230408(*(undefined8 *)((long)pvVar3 + 8));
      operator_delete(pvVar3);
    }
    param_1[0x4e6] = 0;
    if (param_1[0x4ea] != 0) {
      FUN_1001c64c1();
    }
    param_1[0x4ea] = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    FUN_100217418(param_1 + 0x4eb,&local_58);
    plVar10 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar9 = plVar10 + 1;
      lVar7 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_100230408(param_1[0x4ee]);
    param_1[0x4ed] = (long)(param_1 + 0x4ee);
    param_1[0x4ee] = 0;
    param_1[0x4ef] = 0;
    FUN_100230408(param_1[0x4f1]);
    param_1[0x4f0] = (long)(param_1 + 0x4f1);
    param_1[0x4f1] = 0;
    param_1[0x4f2] = 0;
    FUN_100230408(param_1[0x4f4]);
    param_1[0x4f3] = (long)(param_1 + 0x4f4);
    param_1[0x4f4] = 0;
    param_1[0x4f5] = 0;
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7ab58c;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xec03;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar5 = FUN_1001782e9(0,1);
    if (cVar5 != '\0') goto LAB_10031567f;
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x63b4;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_10017060f(param_1[0x59b]);
  param_1[0x59b] = 0;
  FUN_10017060f(param_1[0x59c]);
  param_1[0x59c] = 0;
  FUN_1001b811c(param_1 + 0x4e8);
  pvVar3 = (void *)param_1[0x4e7];
  if (pvVar3 != (void *)0x0) {
    FUN_1002a41f4(pvVar3,*(undefined8 *)((long)pvVar3 + 8));
    operator_delete(pvVar3);
  }
  param_1[0x4e7] = 0;
  FUN_10015a7f4(param_1 + 0x584);
  if (*(int *)((long)param_1 + 0x84) == 0x646f5069) {
    pvVar3 = (void *)param_1[0x5a4];
    if (pvVar3 != (void *)0x0) {
      FUN_100230408(*(undefined8 *)((long)pvVar3 + 8));
      operator_delete(pvVar3);
    }
    param_1[0x5a4] = 0;
  }
  if ((short)param_1[0x377] != 0) {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      uStack_80 = 1;
      local_7c = 0x822;
      local_7a = "trackData->retainCount == 0";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if ((*(byte *)(param_1 + 0x376) & 1) != 0) {
    DAT_1008bbfa8 = 0;
  }
  param_1[0x10] = 0;
  (**(code **)(*param_1 + 8))(param_1);
  if (iVar1 != 0x706d6574) {
    uVar6 = FUN_1001c156e();
    FUN_1001c6987(uVar6,0x61707254,(int)lVar4,iVar1,0);
  }
LAB_1003159ab:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

