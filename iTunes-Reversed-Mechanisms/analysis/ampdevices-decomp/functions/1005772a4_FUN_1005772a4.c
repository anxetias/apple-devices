// name: FUN_1005772a4
// address: 1005772a4

long FUN_1005772a4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e9de0(param_1 + 9);
  plVar8 = param_1 + 5;
  if (param_1[5] == 0) {
    iVar5 = (**(code **)(*param_1 + 0x98))(param_1);
    lVar9 = -1;
    if (iVar5 == -0x80) goto LAB_100577477;
    if (iVar5 != 0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar5;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_100577477;
    }
    if ((long *)*plVar8 == (long *)0x0) goto LAB_100577477;
    cVar4 = (**(code **)(*(long *)*plVar8 + 0x50))();
    if (cVar4 == '\0') {
      FUN_1002188e4(plVar8);
      goto LAB_100577477;
    }
  }
  if (param_1[0x16] == 0) {
    plVar1 = param_1 + 0x1a;
    if (param_1[0x1c] == 0) {
      (**(code **)(*(long *)*plVar8 + 0x40))((long *)*plVar8,plVar1);
    }
    plVar8 = (long *)param_1[0x1b];
    if (plVar8 != plVar1) {
      lVar9 = -1;
      do {
        plVar2 = (long *)plVar8[2];
        plVar3 = (long *)plVar8[3];
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar3[1] = plVar3[1] + 1;
          UNLOCK();
        }
        if ((plVar2 != (long *)0x0) &&
           (lVar6 = (**(code **)(*plVar2 + 0x28))(plVar2,0x5dc,1000), lVar9 < lVar6)) {
          lVar9 = lVar6;
        }
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar6 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar6 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar8 = (long *)plVar8[1];
      } while (plVar8 != plVar1);
      goto LAB_100577477;
    }
  }
  else {
    plVar8 = (long *)param_1[0x15];
    if (plVar8 != param_1 + 0x14) {
      lVar9 = -1;
      do {
        plVar1 = (long *)plVar8[2];
        plVar2 = (long *)plVar8[3];
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar2[1] = plVar2[1] + 1;
          UNLOCK();
        }
        if ((plVar1 != (long *)0x0) &&
           (lVar6 = (**(code **)(*plVar1 + 0x28))(plVar1,0x5dc,1000), lVar9 < lVar6)) {
          lVar9 = lVar6;
        }
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar6 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar6 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar8 = (long *)plVar8[1];
      } while (plVar8 != param_1 + 0x14);
      goto LAB_100577477;
    }
  }
  lVar9 = -1;
LAB_100577477:
  FUN_1001e9eb9(param_1 + 9);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar9;
}

