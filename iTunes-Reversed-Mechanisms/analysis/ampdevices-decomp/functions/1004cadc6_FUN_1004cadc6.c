// name: FUN_1004cadc6
// address: 1004cadc6

void FUN_1004cadc6(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  double dVar7;
  undefined8 local_c0 [2];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  double local_98;
  undefined8 uStack_90;
  long local_80;
  undefined1 local_78 [8];
  long *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 local_58;
  undefined2 uStack_52;
  long local_50;
  long *local_48;
  long local_38;
  
  local_98 = (double)CONCAT44(local_98._4_4_,param_3);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001a7b90(local_78,&PTR_cf_topic_10085e3d0);
  FUN_1001aa318(&local_a0);
  FUN_1001aa318(&local_68);
  cVar2 = FUN_1001a921a(param_2,local_78,&local_68);
  puVar6 = &local_a0;
  if (cVar2 != '\0') {
    puVar6 = &local_68;
  }
  FUN_1001a8c1c(&local_80,puVar6);
  FUN_1001ab006(&local_68);
  FUN_1001ab006(&local_a0);
  FUN_1001ab240(local_78);
  if (local_80 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      local_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0x5665;
      local_58 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004cb0a2;
  }
  FUN_1001a7b90(local_78,&local_80);
  FUN_10032f0f2(local_c0);
  FUN_10032f0f2(&local_68);
  plVar1 = (long *)(param_1 + 0x20);
  cVar2 = FUN_1001a90d0(plVar1,local_78,&local_68);
  puVar6 = local_c0;
  if (cVar2 != '\0') {
    puVar6 = &local_68;
  }
  FUN_1001a7a9e(local_b0,puVar6);
  FUN_1001a7a94(&local_68);
  FUN_1001a7a94(local_c0);
  FUN_1001ab240(local_78);
  FUN_1001a7b90(&local_68,param_2);
  FUN_1001a7d28(local_b0,&local_68);
  FUN_1001ab240(&local_68);
  FUN_1001a7b90(&local_68,&local_80);
  FUN_1001a7b90(local_78,local_b0);
  FUN_1001a9c16(plVar1,&local_68,local_78);
  FUN_1001ab240(local_78);
  FUN_1001ab240(&local_68);
  if (local_98._0_1_ != '\0') {
    FUN_1004ca71a(param_1);
    goto LAB_1004cb096;
  }
  dVar7 = *(double *)(param_1 + 0x68);
  local_98 = dVar7;
  if ((*(double *)(param_1 + 0x60) != 0.0) || (NAN(*(double *)(param_1 + 0x60)))) {
    dVar7 = (double)FUN_1001ebd46();
    dVar7 = dVar7 - *(double *)(param_1 + 0x60);
    if (dVar7 <= local_98) {
      dVar7 = local_98 - dVar7;
      goto LAB_1004cafc5;
    }
LAB_1004cb024:
    FUN_1004ca71a(param_1);
  }
  else {
LAB_1004cafc5:
    if (dVar7 <= 0.0) goto LAB_1004cb024;
    if (*plVar1 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        pcVar5 = "mEventsDict != __null";
LAB_1004cb207:
        uStack_5c = 0x822;
        local_60 = 1;
        local_68._4_4_ = 0x7a0a90;
        local_68._0_4_ = 0x8220202;
        uStack_5a = SUB82(pcVar5,0);
        local_58 = (undefined6)((ulong)pcVar5 >> 0x10);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
LAB_1004cb08d:
      FUN_1001782e9(0,0);
    }
    else {
      lVar3 = FUN_1001a8fea(plVar1);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          pcVar5 = "mEventsDict.GetCount() > 0";
          goto LAB_1004cb207;
        }
        goto LAB_1004cb08d;
      }
      if (*(long *)(param_1 + 0x50) == 0) {
        dVar7 = *(double *)(param_1 + 0x68);
        uStack_90 = 0;
        local_98 = dVar7;
        if ((*(double *)(param_1 + 0x60) != 0.0) || (NAN(*(double *)(param_1 + 0x60)))) {
          dVar7 = (double)FUN_1001ebd46();
          dVar7 = dVar7 - *(double *)(param_1 + 0x60);
          dVar7 = (double)(~-(ulong)(local_98 < dVar7) & (ulong)(local_98 - dVar7));
        }
        local_68._0_4_ = 0x85e700;
        local_68._4_4_ = 1;
        local_60 = 0x4cb302;
        uStack_5c = 1;
        uStack_5a = 0;
        local_58 = 0;
        uStack_52 = 0;
        local_50 = param_1;
        local_48 = &local_68;
        FUN_1001bddf8(dVar7,0,local_78,&local_68);
        FUN_100217418(param_1 + 0x50,local_78);
        if (local_70 != (long *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_48 == &local_68) {
          lVar3 = 0x20;
        }
        else {
          lVar3 = 0x28;
          if (local_48 == (long *)0x0) goto LAB_1004cb096;
        }
        (**(code **)(*local_48 + lVar3))();
      }
    }
  }
LAB_1004cb096:
  FUN_1001a7a94(local_b0);
LAB_1004cb0a2:
  FUN_1001ab006(&local_80);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

