// name: FUN_100540740
// address: 100540740

undefined8 FUN_100540740(long *param_1,undefined4 *param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long local_98;
  long *local_90;
  long local_88;
  long *plStack_80;
  undefined8 local_70;
  long local_68;
  undefined1 local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = 0;
  local_68 = 0;
  local_59 = 1;
  lVar8 = (**(code **)(*param_1 + 0x68))(param_1,1);
  if (lVar8 != 0) {
    local_88 = 0;
    plStack_80 = (long *)0x0;
    uVar9 = FUN_100176d48(lVar8);
    if ((uVar9 & 2) == 0) {
LAB_10054079a:
      bVar4 = false;
    }
    else {
      FUN_10017610a(lVar8,0,0x696d6167,1,0x10,&local_88);
      bVar4 = true;
      if (local_88 != 0) {
        local_98 = local_88;
        local_90 = plStack_80;
        if (plStack_80 != (long *)0x0) {
          LOCK();
          plStack_80[1] = plStack_80[1] + 1;
          UNLOCK();
        }
        iVar6 = FUN_1005d26ff(&local_98,0,&local_68);
        if (local_90 != (long *)0x0) {
          LOCK();
          plVar2 = local_90 + 1;
          lVar3 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*local_90 + 0x10))(local_90);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (iVar6 != -0x80) {
          if (iVar6 == 0) goto LAB_100540841;
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = iVar6;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        goto LAB_10054079a;
      }
    }
LAB_100540841:
    if (plStack_80 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_80 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (bVar4) {
      if (local_68 == 0) goto LAB_10054093c;
      FUN_1005d36e5(local_68,0x61776765,&local_59);
      iVar6 = FUN_1005d38c7(0,0,&local_70);
      if (iVar6 == 0) {
        FUN_1005d3b11(local_70,0x7fffffff,local_68);
        *param_2 = 0x800001;
        uVar7 = FUN_1005d35ed(local_68);
        param_2[1] = uVar7;
      }
      else {
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar6;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  if (local_68 != 0) {
    LOCK();
    piVar1 = (int *)(local_68 + 4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_1005d25cb();
    }
  }
LAB_10054093c:
  FUN_100175848(lVar8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return local_70;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

