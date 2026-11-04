// name: FUN_10057f55a
// address: 10057f55a

void FUN_10057f55a(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  long *plVar4;
  char cVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long local_58;
  long *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10057e14a(&local_58,param_1);
  if (local_58 == 0) {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be not NULL)";
      local_3c = 0x822;
      local_3a = "deletedObjectsTracker";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar5 = FUN_1001782e9(0,0);
    if (cVar5 != '\0') goto LAB_10057f5bc;
  }
  else {
LAB_10057f5bc:
    FUN_1003cfebc(local_58,2,0,*param_2);
  }
  plVar1 = (long *)(param_1 + 0x68);
  plVar7 = (long *)FUN_1002b8060(plVar1,*param_2);
  if (plVar7 == (long *)0x0) goto LAB_10057f738;
  lVar12 = *plVar7;
  uVar10 = plVar7[1];
  uVar2 = *(ulong *)(param_1 + 0x70);
  uVar8 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
  uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar8 >> 0x38 < 2) {
    uVar10 = uVar10 & uVar2 - 1;
  }
  else if (uVar2 <= uVar10) {
    uVar10 = uVar10 % uVar2;
  }
  plVar4 = *(long **)(*plVar1 + uVar10 * 8);
  do {
    plVar9 = plVar4;
    plVar4 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar7);
  bVar3 = (byte)(uVar8 >> 0x38);
  if (plVar9 == (long *)(param_1 + 0x78)) {
LAB_10057f6af:
    if (lVar12 == 0) {
LAB_10057f6dc:
      *(undefined8 *)(*plVar1 + uVar10 * 8) = 0;
      lVar12 = *plVar7;
      goto LAB_10057f6e7;
    }
    uVar8 = *(ulong *)(lVar12 + 8);
    if (bVar3 < 2) {
      uVar11 = uVar2 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar2 <= uVar8) {
        uVar11 = uVar8 % uVar2;
      }
    }
    if (uVar11 != uVar10) goto LAB_10057f6dc;
LAB_10057f6f0:
    if (bVar3 < 2) {
      uVar8 = uVar8 & uVar2 - 1;
    }
    else if (uVar2 <= uVar8) {
      uVar8 = uVar8 % uVar2;
    }
    if (uVar8 != uVar10) {
      *(long **)(*plVar1 + uVar8 * 8) = plVar9;
      lVar12 = *plVar7;
    }
  }
  else {
    uVar8 = plVar9[1];
    if (bVar3 < 2) {
      uVar8 = uVar8 & uVar2 - 1;
    }
    else if (uVar2 <= uVar8) {
      uVar8 = uVar8 % uVar2;
    }
    if (uVar8 != uVar10) goto LAB_10057f6af;
LAB_10057f6e7:
    if (lVar12 != 0) {
      uVar8 = *(ulong *)(lVar12 + 8);
      goto LAB_10057f6f0;
    }
    lVar12 = 0;
  }
  *plVar9 = lVar12;
  *plVar7 = 0;
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + -1;
  operator_delete(plVar7);
LAB_10057f738:
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*local_50 + 0x10))(local_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

