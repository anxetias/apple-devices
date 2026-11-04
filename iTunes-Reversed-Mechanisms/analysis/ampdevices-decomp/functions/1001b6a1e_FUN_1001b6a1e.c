// name: FUN_1001b6a1e
// address: 1001b6a1e

void FUN_1001b6a1e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  bool bVar9;
  undefined8 local_98;
  long *plStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long *local_70;
  long local_68 [2];
  undefined4 local_58;
  char *pcStack_54;
  undefined2 local_4c;
  char *pcStack_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = local_68;
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_1001b6cb4();
  FUN_1001b6cb4(param_1,param_2,param_3,&DAT_10089fb20,&local_70);
  plVar7 = local_70;
  if (local_70 != local_68) {
    do {
      puVar3 = (undefined8 *)plVar7[4];
      plVar4 = (long *)plVar7[5];
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar4[1] = plVar4[1] + 1;
        UNLOCK();
      }
      if (puVar3 == (undefined8 *)0x0) {
        uVar6 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar6,0x10);
        if (cVar5 != '\0') {
          local_58 = 0x8220202;
          pcStack_54 = "Assertion failure";
          local_4c = 0x822;
          pcStack_4a = "notificationHandler != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      local_98 = *param_2;
      plStack_90 = (long *)param_2[1];
      if (param_2[1] != 0) {
        LOCK();
        plVar8 = (long *)(param_2[1] + 8);
        *plVar8 = *plVar8 + 1;
        UNLOCK();
      }
      local_88 = *param_4;
      uStack_84 = param_4[1];
      uStack_80 = param_4[2];
      uStack_7c = param_4[3];
      if (*(long *)(param_4 + 2) != 0) {
        LOCK();
        plVar8 = (long *)(*(long *)(param_4 + 2) + 8);
        *plVar8 = *plVar8 + 1;
        UNLOCK();
      }
      (**(code **)*puVar3)(puVar3,&local_98,param_3,&local_88);
      plVar8 = (long *)CONCAT44(uStack_7c,uStack_80);
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_90 != (long *)0x0) {
        LOCK();
        plVar8 = plStack_90 + 1;
        lVar2 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar8 = plVar4 + 1;
        lVar2 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar4 = (long *)plVar7[1];
      plVar8 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar8[2];
          bVar9 = (long *)*plVar7 != plVar8;
          plVar8 = plVar7;
        } while (bVar9);
      }
      else {
        do {
          plVar7 = plVar4;
          plVar4 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    } while (plVar7 != local_68);
  }
  FUN_1001b7850(&local_70,local_68[0]);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

