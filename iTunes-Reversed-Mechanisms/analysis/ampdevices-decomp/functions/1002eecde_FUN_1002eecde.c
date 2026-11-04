// name: FUN_1002eecde
// address: 1002eecde

undefined4 FUN_1002eecde(long *param_1,long param_2,int param_3,uint param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar15 = (long *)*param_1;
  plVar15[3] = plVar15[3] + 1;
  if (((param_2 != 0) &&
      (((plVar9 = *(long **)(param_2 + 0x38), plVar9 == (long *)0x0 || (plVar9[1] == *plVar9)) &&
       (*(long *)(param_2 + 8) != 0)))) &&
     (puVar7 = (uint *)(**(code **)(*plVar15 + 0x18))(plVar15[1],*(long *)(param_2 + 8),0),
     puVar7 != (uint *)0x0)) {
    plVar15[4] = plVar15[4] + 1;
    local_58 = *puVar7;
    (**(code **)(*plVar15 + 0x48))(plVar15[1],&local_58,4,1);
    uVar5 = local_58;
    local_58 = puVar7[1];
    (**(code **)(*plVar15 + 0x48))(plVar15[1],&local_58,4,1);
    if (uVar5 == 0) {
      uVar11 = 8;
    }
    else {
      puVar8 = (uint *)FUN_100360b14(puVar7 + 2,local_58,3,(char)plVar15[2]);
      if (*(code **)(*plVar15 + 0x20) == (code *)0x0) {
        _free(puVar7);
      }
      else {
        (**(code **)(*plVar15 + 0x20))(puVar7);
      }
      if (puVar8 == (uint *)0x0) goto LAB_1002eef7e;
      uVar11 = 0;
      puVar7 = puVar8;
    }
    local_58 = *(uint *)((long)puVar7 + uVar11);
    (**(code **)(*plVar15 + 0x48))(plVar15[1],&local_58,4,1);
    uVar14 = (ulong)local_58;
    lVar12 = (uVar11 | 4) + (long)puVar7;
    (**(code **)(*plVar15 + 0x48))(plVar15[1],lVar12,8);
    puVar1 = *(undefined8 **)(param_2 + 0x38);
    if (puVar1 != (undefined8 *)0x0) {
      pvVar2 = (void *)*puVar1;
      if (pvVar2 != (void *)0x0) {
        puVar1[1] = pvVar2;
        operator_delete(pvVar2);
      }
      operator_delete(puVar1);
    }
    plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(param_2 + 0x38) = 0;
      uVar10 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar10,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "_similar_track_ids != __null";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      *plVar9 = 0;
      plVar9[1] = 0;
      plVar9[2] = 0;
      if (uVar14 == 0) {
        *(long **)(param_2 + 0x38) = plVar9;
      }
      else {
        FUN_100283ea8(plVar9,uVar14);
        lVar3 = plVar9[1];
        ___bzero(lVar3,uVar14 * 8);
        plVar9[1] = lVar3 + uVar14 * 8;
        *(long **)(param_2 + 0x38) = plVar9;
        lVar3 = *plVar9;
        uVar11 = 0;
        do {
          *(undefined8 *)(lVar3 + uVar11 * 8) = *(undefined8 *)(lVar12 + uVar11 * 8);
          uVar11 = uVar11 + 1;
        } while (uVar14 != uVar11);
      }
    }
    if ((uVar5 == 0) && (*(code **)(*plVar15 + 0x20) != (code *)0x0)) {
      (**(code **)(*plVar15 + 0x20))(puVar7);
    }
    else {
      _free(puVar7);
    }
  }
LAB_1002eef7e:
  plVar15 = *(long **)(param_2 + 0x38);
  uVar13 = 0;
  uVar5 = 0;
  if (plVar15 != (long *)0x0) {
    uVar5 = (uint)((ulong)(plVar15[1] - *plVar15) >> 3);
  }
  if (param_4 == 0) {
LAB_1002eefbd:
    if (uVar5 == 0) {
      uVar6 = 0;
      goto LAB_1002eeff1;
    }
  }
  else {
    uVar13 = param_4 * param_3;
    if (uVar5 <= (param_3 + 1) * param_4) {
      uVar5 = uVar5 - uVar13;
      *param_5 = 1;
      goto LAB_1002eefbd;
    }
    *param_5 = 0;
    uVar5 = param_4;
  }
  uVar11 = (ulong)uVar5;
  do {
    uVar6 = FUN_1002ef0c6(param_1,*(undefined8 *)(**(long **)(param_2 + 0x38) + (ulong)uVar13 * 8));
    uVar13 = uVar13 + 1;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  plVar15 = *(long **)(param_2 + 0x38);
LAB_1002eeff1:
  if (plVar15 != (long *)0x0) {
    pvVar2 = (void *)*plVar15;
    if (pvVar2 != (void *)0x0) {
      plVar15[1] = (long)pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(plVar15);
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

