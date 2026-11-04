// name: FUN_100528b3a
// address: 100528b3a

void FUN_100528b3a(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined6 local_78;
  undefined2 uStack_72;
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100527a20();
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_88 = 0x8220202;
      uStack_84 = 0x7a0a90;
      local_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x598d;
      local_78 = 0x1007e;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if ((*(double *)(param_1 + 0x850) != 0.0) || (NAN(*(double *)(param_1 + 0x850)))) {
    if (((*(byte *)(param_1 + 0x828) & 0x20) != 0) &&
       (((*(double *)(param_1 + 0x858) == 0.0 && (!NAN(*(double *)(param_1 + 0x858)))) &&
        (dVar5 = (double)FUN_1001ebd46(), DAT_100701ae0 < dVar5 - *(double *)(param_1 + 0x850))))) {
      *(double *)(param_1 + 0x858) = dVar5;
      local_88 = 0x8687c8;
      uStack_84 = 1;
      local_80 = 0x528f6b;
      uStack_7c = 1;
      uStack_7a = 0;
      local_78 = (undefined6)param_1;
      uStack_72 = (undefined2)((ulong)param_1 >> 0x30);
      local_58 = 0;
      uStack_50 = 0;
      uStack_49 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = (long *)0x0;
      local_68 = (long *)&local_88;
      FUN_10017869a(&local_88);
      if (local_30 != (long *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_68 == (long *)&local_88) {
        lVar3 = 0x20;
      }
      else {
        lVar3 = 0x28;
        if (local_68 == (long *)0x0) goto LAB_100528d00;
      }
      (**(code **)(*local_68 + lVar3))();
    }
  }
  else if ((*(char *)(param_1 + 0x8e0) == '\0') &&
          (dVar5 = (double)FUN_1001ebd46(), dVar6 = dVar5 - *(double *)(param_1 + 0x848),
          *(double *)(param_1 + 0x830) <= dVar6 && dVar6 != *(double *)(param_1 + 0x830))) {
    *(double *)(param_1 + 0x850) = dVar5;
    uVar4 = FUN_1001c156e();
    FUN_1001c6987(uVar4,0x73707267,param_1,0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      FUN_1002188e4(param_1 + 0x838);
      return;
    }
    goto LAB_100528d67;
  }
LAB_100528d00:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_100528d67:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

