// name: FUN_1002b667e
// address: 1002b667e

int FUN_1002b667e(long param_1,long param_2,char param_3)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  long *local_70;
  long local_68;
  long *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = 0;
  uStack_80 = (long *)0x0;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      pcVar8 = "TrackInstanceIsValid(trackInstance)";
LAB_1002b69a5:
      uStack_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar8,0);
      uStack_48 = (undefined6)((ulong)pcVar8 >> 0x10);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16,uVar7);
    }
  }
  else if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      pcVar8 = "lyrics != nullptr";
      goto LAB_1002b69a5;
    }
  }
  else {
    FUN_100168311(param_2);
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x80) != 0x74646174) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7ab58c;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0xec03;
          uStack_48 = 0x1007a;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16,uVar7
                             );
        }
        cVar3 = FUN_1001782e9(0,1);
        if (cVar3 == '\0') goto LAB_1002b68ff;
      }
      iVar4 = -0x32;
      if (*(int *)(param_1 + 0x3c) != 0x46494c45) goto LAB_1002b68ad;
      FUN_100241e02(&local_58,param_1,0,0,0,0);
      plVar2 = (long *)CONCAT44(uStack_54,local_58);
      uStack_80 = (long *)CONCAT44(CONCAT22(uStack_4a,uStack_4c),uStack_50);
      if (plVar2 == (long *)0x0) goto LAB_1002b68ad;
      FUN_1001b7eb0(&local_58,param_2);
      FUN_1003844b4(&local_68,1,&local_58,0);
      FUN_1001b7a50(&local_58);
      if (local_68 == 0) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a168c;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x91fc;
          uStack_48 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        iVar4 = 0;
        cVar3 = FUN_1001782e9(0,0);
        if (cVar3 != '\0') goto LAB_1002b67d7;
      }
      else {
LAB_1002b67d7:
        local_70 = local_60;
        if (local_60 != (long *)0x0) {
          LOCK();
          local_60[1] = local_60[1] + 1;
          UNLOCK();
        }
        iVar4 = (**(code **)(*plVar2 + 0x48))(plVar2,0,local_78);
        if (local_70 != (long *)0x0) {
          LOCK();
          plVar2 = local_70 + 1;
          lVar1 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar1 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      if (local_60 != (long *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        lVar1 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (iVar4 == 0) {
        uVar5 = FUN_1003ab356(param_2);
        *(undefined4 *)(param_1 + 0x7c) = uVar5;
        iVar4 = 0;
        if (param_3 != '\0') {
          FUN_1002b532a(param_1,0x71);
        }
      }
      goto LAB_1002b68ad;
    }
LAB_1002b68ff:
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      pcVar8 = "TrackDataIsValid(trackData)";
      goto LAB_1002b69a5;
    }
  }
  iVar4 = -0x32;
  FUN_1001782e9(0,0);
LAB_1002b68ad:
  if (uStack_80 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_80 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*uStack_80 + 0x10))(uStack_80);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

