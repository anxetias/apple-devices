// name: FUN_100501841
// address: 100501841

void FUN_100501841(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined6 local_88;
  undefined2 uStack_82;
  long *local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_10050c5ed(param_1,param_2,param_4);
  if (cVar2 != '\0') {
    plVar3 = (long *)FUN_1001c629e(0x18,&DAT_100711c6e);
    if (plVar3 == (long *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_98 = 0x8220202;
        uStack_94 = 0x7a0a90;
        local_90 = 1;
        uStack_8c = 0x822;
        uStack_8a = 0x526f;
        local_88 = 0x1007e;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if (((int)param_2 == 0x706f646d) && (cVar2 = FUN_100266a70(param_1), cVar2 != '\0')) {
        FUN_1002665ba(param_1,0,0);
      }
      lVar4 = FUN_10026394e(param_1);
      plVar3[1] = lVar4;
      *(int *)(plVar3 + 2) = (int)param_2;
      puVar1 = *(undefined8 **)(param_4 + 0x68);
      if (*plVar3 != 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_98 = 0x8220202;
          uStack_94 = 0x7a0a90;
          local_90 = 1;
          uStack_8c = 0x822;
          uStack_8a = 0x4952;
          local_88 = 0x1007a;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (puVar1 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)(param_4 + 0x68);
      }
      else {
        do {
          puVar6 = puVar1;
          puVar1 = (undefined8 *)*puVar6;
        } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
      }
      *plVar3 = 0;
      *puVar6 = plVar3;
      cVar2 = FUN_1001edfc7();
      if (cVar2 == '\0') {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
          FUN_1004e537e(param_4,0);
          return;
        }
        goto LAB_100501af3;
      }
      local_78 = (long *)&local_98;
      local_98 = 0x8682d0;
      uStack_94 = 1;
      local_90 = 0x51ec73;
      uStack_8c = 1;
      uStack_8a = 0;
      local_88 = (undefined6)param_4;
      uStack_82 = (undefined2)((ulong)param_4 >> 0x30);
      local_68 = 0;
      uStack_60 = 0;
      uStack_59 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = (long *)0x0;
      FUN_10017848a(&local_a0,FUN_10051ec73,param_4);
      local_50 = local_a0;
      FUN_10017869a(&local_98);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar4 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_78 == (long *)&local_98) {
        lVar4 = 0x20;
      }
      else {
        lVar4 = 0x28;
        if (local_78 == (long *)0x0) goto LAB_100501a2d;
      }
      (**(code **)(*local_78 + lVar4))();
    }
  }
LAB_100501a2d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
LAB_100501af3:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

