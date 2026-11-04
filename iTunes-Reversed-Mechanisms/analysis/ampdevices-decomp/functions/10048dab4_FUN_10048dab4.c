// name: FUN_10048dab4
// address: 10048dab4

void FUN_10048dab4(int *param_1,undefined1 param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10048dc86:
    uVar9 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xa159;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10048df3a;
  }
  if (*param_1 != 0x706c7374) {
    uVar9 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7ab58c;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x2d50;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar6 = FUN_1001782e9(0,1);
    if (cVar6 == '\0') goto LAB_10048dc86;
  }
  plVar4 = *(long **)(param_1 + 2);
  iVar3 = param_1[0x16];
  bVar7 = FUN_100482222(param_1,1);
  uVar8 = param_1[0x90];
  if ((uVar8 >> 0xc & 1) != 0) {
    uVar9 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x27e3;
      uStack_48 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar8 = param_1[0x90];
  }
  param_1[0x90] = uVar8 | 0x1000;
  lVar10 = *(long *)(param_1 + 0x12);
  if (lVar10 != 0) {
    local_58 = (undefined4)*(undefined8 *)(param_1 + 10);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
    uStack_50 = SUB84(param_1,0);
    uStack_4c = (undefined2)((ulong)param_1 >> 0x20);
    uStack_4a = (undefined2)((ulong)param_1 >> 0x30);
    do {
      FUN_1002f8673(lVar10);
      FUN_1002f7de0(lVar10,&local_58);
      uStack_50 = (undefined4)lVar10;
      uStack_4c = (undefined2)((ulong)lVar10 >> 0x20);
      uStack_4a = (undefined2)((ulong)lVar10 >> 0x30);
      lVar10 = *(long *)(param_1 + 0x12);
    } while (lVar10 != 0);
  }
  FUN_1002f976a(plVar4,bVar7);
  piVar2 = param_1 + 0x32;
  FUN_1001c6987(piVar2,0x64706c73,param_1,0,0);
  if (plVar4 == (long *)0x0) {
    FUN_100483f95(param_1,0x706c636c,0);
    FUN_1001c72e9(param_1 + 0x3c);
    FUN_1001c672e(piVar2);
    FUN_1001c72e9(param_1 + 0xbc);
  }
  else {
    *(byte *)((long)plVar4 + 0x1bb5) = *(byte *)((long)plVar4 + 0x1bb5) | 2;
    (**(code **)(*plVar4 + 0x10))(plVar4,0x74647270,plVar4,param_1,0);
    FUN_1002f8673(param_1);
    FUN_100483f95(param_1,0x706c636c,0);
    FUN_1001c72e9(param_1 + 0x3c);
    FUN_1001c672e(piVar2);
    FUN_1001c72e9(param_1 + 0xbc);
    if ((plVar4[0x4eb] != 0) && (lVar10 = FUN_100485529(param_1), lVar10 != 0)) {
      do {
        if ((*(byte *)(lVar10 + 0x61) & 8) != 0) {
          local_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_4a = 0;
          FUN_100217418(plVar4 + 0x4eb,&local_58);
          plVar5 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar10 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar10 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              std::__shared_weak_count::__release_weak();
            }
          }
          break;
        }
        lVar10 = *(long *)(lVar10 + 0x18);
      } while (lVar10 != 0);
    }
  }
  if (*param_1 == 0x706c7374) {
LAB_10048dd19:
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    FUN_100217418(param_1 + 0xe8,&local_58);
    plVar5 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(param_1 + 0x1e) != 0) {
      FUN_10048492e(*(long *)(param_1 + 0x1e),FUN_100493b39,param_2);
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10048492e(*(long *)(param_1 + 0x28),FUN_100493b39,param_2);
      param_1[0x28] = 0;
      param_1[0x29] = 0;
    }
    if (*(long *)(param_1 + 0x1c) != 0) {
      FUN_1001c5781();
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
    }
    FUN_100492b6e(param_1);
    FUN_100352a6b(param_1 + 0xf4);
    FUN_1001dcc15(param_1 + 0x5e);
    if (*(long *)(param_1 + 0xd8) != 0) {
      FUN_1001cf5c9();
      param_1[0xd8] = 0;
      param_1[0xd9] = 0;
    }
    FUN_1005814bd(param_1 + 0xa8);
  }
  else {
    uVar9 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7ab58c;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x2d50;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar6 = FUN_1001782e9(0,1);
    if (cVar6 != '\0') goto LAB_10048dd19;
    uVar9 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xa159;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  *param_1 = 0;
  plVar5 = *(long **)(param_1 + 0x144);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_10021e316(param_1 + 0x13e);
  FUN_1001ab006(param_1 + 0x136);
  FUN_100205d70(param_1 + 0x132);
  plVar5 = *(long **)(param_1 + 0x130);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1002a41f4(param_1 + 0x128,*(undefined8 *)(param_1 + 0x12a));
  FUN_1002842e4(param_1 + 0x11e);
  FUN_1002842e4(param_1 + 0x114);
  FUN_10021e316(param_1 + 0xf0);
  FUN_10021e316(param_1 + 0xe8);
  operator_delete(param_1);
  if (plVar4 != (long *)0x0) {
    if (((*(byte *)((long)plVar4 + 0x1bb3) & 0x20) == 0) &&
       ((*(byte *)((long)plVar4 + 0x1b52) & bVar7) == 0)) {
      FUN_1005e26ab(plVar4);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,0x74647250,plVar4,iVar3,0);
  }
LAB_10048df3a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

