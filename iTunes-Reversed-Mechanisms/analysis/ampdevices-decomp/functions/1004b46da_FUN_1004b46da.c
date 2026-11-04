// name: FUN_1004b46da
// address: 1004b46da

int FUN_1004b46da(long param_1,char param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined2 uStack_46c;
  undefined2 uStack_46a;
  undefined6 uStack_468;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x80) == 0) {
    iVar3 = 0;
    if ((*(long *)(param_1 + 0x78) == 0) || (*(long *)(*(long *)(param_1 + 0x78) + 8) == -1))
    goto LAB_1004b4acc;
  }
  cVar2 = FUN_1004aa626(param_1);
  if ((cVar2 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
    iVar3 = 0;
    if (*(char *)(param_1 + 0x779) == '\0') {
      local_478 = 0;
      uStack_474 = 0;
      uStack_470 = 0;
      uStack_46c = 0;
      uStack_46a = 0;
      if (*(long *)(param_1 + 0x78) == 0) {
LAB_1004b4900:
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = (long *)std::__shared_weak_count::lock();
        uStack_470 = SUB84(plVar8,0);
        uStack_46c = (undefined2)((ulong)plVar8 >> 0x20);
        uStack_46a = (undefined2)((ulong)plVar8 >> 0x30);
        if (plVar8 == (long *)0x0) goto LAB_1004b4900;
        plVar1 = *(long **)(param_1 + 0x70);
        local_478 = SUB84(plVar1,0);
        uStack_474 = (undefined4)((ulong)plVar1 >> 0x20);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
        }
      }
      if (*(code **)(param_1 + 0x80) != (code *)0x0) {
        (**(code **)(param_1 + 0x80))(param_1,0x70707267,0,0,param_1 + 0x90);
      }
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar6 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
      iVar3 = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x69) = 0;
    *(undefined4 *)(param_1 + 0x118) = 3;
    lVar6 = FUN_1004aa784(param_1);
    if (lVar6 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      do {
        if (*(int *)(lVar6 + 0x118) - 2U < 0x3e6) {
          iVar3 = (**(code **)(lVar6 + 0x80))(lVar6,0x70707267,0,0,lVar6 + 0x90);
        }
        lVar6 = FUN_1004ab52d(lVar6);
      } while (lVar6 != 0);
    }
    for (lVar6 = FUN_1004aa784(param_1); lVar6 != 0; lVar6 = FUN_1004ab52d(lVar6)) {
      uVar4 = *(int *)(lVar6 + 0x118) - 2;
      if (*(int *)(lVar6 + 0x118) == 0 || uVar4 < 0x3e6) {
        if (uVar4 < 0x3e6) {
          iVar5 = FUN_1004b46da(lVar6,1);
          *(undefined4 *)(lVar6 + 0x118) = 4;
          if (iVar5 != 0) {
            iVar3 = iVar5;
            if (*(int *)(param_1 + 0x170) == 0) {
              *(int *)(param_1 + 0x170) = iVar5;
            }
            goto LAB_1004b4a94;
          }
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_478 = 0x8220202;
          uStack_474 = 0x7a0a90;
          uStack_470 = 1;
          uStack_46c = 0x822;
          uStack_46a = 0x47e3;
          uStack_468 = 0x1007d;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x140);
  uVar9 = 0x7070646e;
  if (param_2 == '\0') {
    uVar9 = 0x70646f6e;
  }
  if (iVar5 == 0x66696c65) {
    puVar10 = &local_478;
    iVar3 = FUN_1004aa912(param_1,puVar10);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x7378;
        uStack_48 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      puVar10 = &local_478;
      FUN_1001c62d9(puVar10,0x420);
    }
  }
  else if (iVar5 == 0x6d656d72) {
    puVar10 = *(undefined4 **)(param_1 + 0x12f8);
  }
  else {
    puVar10 = (undefined4 *)0x0;
  }
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_4a = 0;
  if (*(long *)(param_1 + 0x78) == 0) {
LAB_1004b4a3c:
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = (long *)std::__shared_weak_count::lock();
    uStack_50 = SUB84(plVar8,0);
    uStack_4c = (undefined2)((ulong)plVar8 >> 0x20);
    uStack_4a = (undefined2)((ulong)plVar8 >> 0x30);
    if (plVar8 == (long *)0x0) goto LAB_1004b4a3c;
    plVar1 = *(long **)(param_1 + 0x70);
    local_58 = SUB84(plVar1,0);
    uStack_54 = (undefined4)((ulong)plVar1 >> 0x20);
    if (plVar1 != (long *)0x0) {
      iVar3 = (**(code **)(*plVar1 + 0x40 + (ulong)(param_2 == '\0') * 8))(plVar1,param_1);
    }
  }
  if (*(code **)(param_1 + 0x80) != (code *)0x0) {
    iVar3 = (**(code **)(param_1 + 0x80))(param_1,uVar9,iVar5,puVar10,param_1 + 0x90);
  }
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1004b4a94:
  cVar2 = FUN_1004aa626(param_1);
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0x778) != '\0')) {
    if ((iVar3 == 0) && (*(int *)(param_1 + 0x170) == 0)) {
      iVar3 = 0;
    }
    else {
      cVar2 = FUN_1004aa626(param_1);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 0x69) = 1;
      }
    }
  }
LAB_1004b4acc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

