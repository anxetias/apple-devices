// name: FUN_1004befd9
// address: 1004befd9

void FUN_1004befd9(long param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined2 uStack_46c;
  undefined2 uStack_46a;
  undefined6 uStack_468;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar8 = *(long **)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  cVar5 = FUN_1004aa626(param_1);
  if ((cVar5 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
    cVar5 = FUN_1004aa626(param_1);
    if ((cVar5 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
      uVar9 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar9,0x10);
      if (cVar5 != '\0') {
        local_478 = 0x8220202;
        uStack_474 = 0x7a0a90;
        uStack_470 = 1;
        uStack_46c = 0x822;
        uStack_46a = 0x3958;
        uStack_468 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (*(int *)(param_1 + 0x140) == 0x66696c65) {
      if ((*(char *)(param_1 + 0x12d0) == '\0') &&
         ((*(int *)(param_1 + 0x170) == 0 || ((*(byte *)(param_1 + 0x7d8) & 4) == 0)))) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
      }
      if ((*(int *)(param_1 + 0x1304) == 0x636f7079) || (-1 < *(int *)(param_1 + 0x7d8))) {
LAB_1004bf240:
        if (!bVar3) goto LAB_1004bf24c;
      }
      else {
        if (*(int *)(param_1 + 0x170) != 0) {
          if (*(int *)(param_1 + 0x170) == 0x1f47) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
            if (*(char *)(param_1 + 0x210) == '\x01') {
              bVar3 = bVar4;
            }
          }
        }
        if ((*(char *)(param_1 + 0x1250) != '\x01') || (*(long *)(param_1 + 0x1b78) != 0))
        goto LAB_1004bf240;
      }
      FUN_1004ac981(param_1);
    }
  }
  else {
    cVar5 = FUN_1004aa626(param_1);
    if ((cVar5 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
      uVar9 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar9,0x10);
      if (cVar5 != '\0') {
        local_478 = 0x8220202;
        uStack_474 = 0x7a0a90;
        uStack_470 = 1;
        uStack_46c = 0x822;
        uStack_46a = 0x38b6;
        uStack_468 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      for (lVar7 = FUN_1004aa784(param_1); lVar7 != 0; lVar7 = FUN_1004ab52d(lVar7)) {
        if (*(int *)(lVar7 + 0x118) == 4) {
          FUN_1004befd9(lVar7,*(undefined4 *)(param_1 + 0x170),0);
        }
      }
    }
  }
LAB_1004bf24c:
  uVar10 = 2000;
  if (param_2 == 0 && *(int *)(param_1 + 0x170) == 0) {
    uVar10 = 1000;
  }
  *(undefined4 *)(param_1 + 0x118) = uVar10;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  if ((*(long *)(param_1 + 0x80) == 0) &&
     ((*(long *)(param_1 + 0x78) == 0 || (*(long *)(*(long *)(param_1 + 0x78) + 8) == -1))))
  goto LAB_1004bf668;
  if ((*(int *)(param_1 + 0x170) != 0) ||
     ((*(char *)(param_1 + 0x779) == '\0' ||
      (lVar7 = *(long *)(param_1 + 0x38), *(long *)(param_1 + 0x38) == 0)))) {
    lVar7 = param_1;
  }
  iVar1 = *(int *)(lVar7 + 0x170);
  if ((long)iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x140);
    if (*(char *)(param_1 + 0x778) == '\0') {
      if (iVar1 == 0x66696c65) {
        puVar11 = &local_478;
        iVar6 = FUN_1004aa912(param_1,puVar11);
        if (iVar6 != 0) {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "err == noErr";
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          FUN_1001c62d9(puVar11,0x420);
        }
      }
      else {
        if (iVar1 != 0x6d656d72) goto LAB_1004bf377;
        puVar11 = *(undefined4 **)(param_1 + 0x12f8);
      }
    }
    else {
LAB_1004bf377:
      puVar11 = (undefined4 *)0x0;
    }
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (plVar8 = (long *)std::__shared_weak_count::lock(), plVar8 == (long *)0x0)) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar2 = *(long **)(param_1 + 0x70);
      if (plVar2 != (long *)0x0) {
        if (*(int *)(param_1 + 0x140) == 0x66696c65) {
          puVar12 = &local_478;
          iVar6 = FUN_1004aa912(param_1,puVar12);
          if (iVar6 != 0) {
            uVar9 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar9,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "err == noErr";
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            puVar12 = &local_478;
            FUN_1001c62d9(puVar12,0x420);
          }
LAB_1004bf4b5:
          uVar9 = 0;
        }
        else {
          if (*(int *)(param_1 + 0x140) != 0x6d656d72) {
            puVar12 = (undefined4 *)0x0;
            goto LAB_1004bf4b5;
          }
          uVar9 = *(undefined8 *)(param_1 + 0x12f8);
          puVar12 = (undefined4 *)0x0;
        }
        (**(code **)(*plVar2 + 0x50))(plVar2,param_1,*(undefined4 *)(param_1 + 0x140),puVar12,uVar9)
        ;
      }
    }
    if (*(code **)(param_1 + 0x80) != (code *)0x0) {
      (**(code **)(param_1 + 0x80))(param_1,0x646f6e65,iVar1,puVar11,param_1 + 0x90);
    }
    cVar5 = FUN_10049ca60();
    if ((((cVar5 != '\0') && (*(char *)(param_1 + 0x779) == '\0')) &&
        ((*(char *)(param_1 + 0x778) != '\0' || (*(int *)(param_1 + 0x140) == 0x66696c65)))) &&
       ((((*(long *)(param_1 + 0x28) != 0 &&
          (cVar5 = FUN_1004adbcd(*(long *)(param_1 + 0x28),0), cVar5 == '\0')) &&
         (*(long *)(param_1 + 0x28) != 0)) &&
        (*(int *)(*(long *)(param_1 + 0x28) + 0x10) == 0x6d61696e)))) {
      FUN_1002301a0();
    }
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar7 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    local_478 = 0;
    uStack_474 = 0;
    uStack_470 = 0;
    uStack_46c = 0;
    uStack_46a = 0;
    if (*(long *)(param_1 + 0x78) == 0) {
LAB_1004bf307:
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)std::__shared_weak_count::lock();
      uStack_470 = SUB84(plVar8,0);
      uStack_46c = (undefined2)((ulong)plVar8 >> 0x20);
      uStack_46a = (undefined2)((ulong)plVar8 >> 0x30);
      if (plVar8 == (long *)0x0) goto LAB_1004bf307;
      plVar2 = *(long **)(param_1 + 0x70);
      local_478 = SUB84(plVar2,0);
      uStack_474 = (undefined4)((ulong)plVar2 >> 0x20);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x58))(plVar2,param_1,iVar1);
      }
    }
    if (*(code **)(param_1 + 0x80) != (code *)0x0) {
      (**(code **)(param_1 + 0x80))(param_1,0x6572726f,(long)iVar1,0,param_1 + 0x90);
    }
    if (plVar8 != (long *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar7 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if ((*(char *)(param_1 + 0x778) == '\0') && (*(long **)(param_1 + 0x1278) != (long *)0x0)) {
    if ((*(long *)(param_1 + 0x1280) != 0) && (0 < *(long *)(*(long *)(param_1 + 0x1280) + 8))) {
      if ((*(int *)(param_1 + 0x140) == 0x70656e64) || (*(char *)(param_1 + 0x1250) == '\0')) {
        (**(code **)(**(long **)(param_1 + 0x1278) + 0x198))();
      }
      else {
        FUN_1004aa912(param_1,&local_478);
        (**(code **)(**(long **)(param_1 + 0x1278) + 400))(*(long **)(param_1 + 0x1278),&local_478);
      }
      (**(code **)(**(long **)(param_1 + 0x1278) + 0x180))();
      if (((*(int *)(param_1 + 0x140) != 0x70656e64) && (*(char *)(param_1 + 0x778) == '\0')) &&
         (*(char *)(param_1 + 0x1250) != '\0')) {
        FUN_100203686(param_1 + 0x1258,param_1 + 0x1278);
      }
    }
    FUN_100295c56(param_1 + 0x1278);
  }
LAB_1004bf668:
  if ((*(char *)(param_1 + 0x778) == '\0') && (*(int *)(param_1 + 0x140) == 0x66696c65)) {
    if ((*(int *)(param_1 + 0x1304) == 0x636f7079) || (-1 < *(int *)(param_1 + 0x7d8))) {
      if (((*(char *)(param_1 + 0x779) == '\0') || (*(int *)(param_1 + 0x170) != 0)) ||
         (lVar7 = *(long *)(param_1 + 0x38), lVar7 == 0)) {
        lVar7 = param_1;
      }
      if (*(int *)(lVar7 + 0x170) != 0) {
        *(undefined8 *)(param_1 + 7000) = 0;
        *(undefined8 *)(param_1 + 0x1b78) = 0;
        *(undefined8 *)(param_1 + 0x12f0) = 0;
        *(undefined8 *)(param_1 + 0x200) = 0;
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
      }
    }
    else {
      if (((*(char *)(param_1 + 0x779) == '\0') || (*(int *)(param_1 + 0x170) != 0)) ||
         (lVar7 = *(long *)(param_1 + 0x38), lVar7 == 0)) {
        lVar7 = param_1;
      }
      if (*(int *)(lVar7 + 0x170) == 0) {
        FUN_1004acb38(param_1);
      }
    }
  }
  cVar5 = FUN_1004aa626(param_1);
  if ((cVar5 != '\0') && (*(char *)(param_1 + 0x778) != '\0')) {
    if ((*(char *)(param_1 + 0x779) == '\0') ||
       ((*(int *)(param_1 + 0x170) != 0 || (lVar7 = *(long *)(param_1 + 0x38), lVar7 == 0)))) {
      lVar7 = param_1;
    }
    if (*(int *)(lVar7 + 0x170) == 0) {
      FUN_1004acb38(param_1);
    }
  }
  if (*(char *)(param_1 + 0x1cc) != '\0') {
    FUN_1004b467c(param_1);
    uVar9 = FUN_1001ebd46();
    *(undefined8 *)(param_1 + 0x6a8) = uVar9;
    *(undefined1 *)(param_1 + 0x6b1) = 1;
    *(undefined1 *)(param_1 + 0x1cc) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

