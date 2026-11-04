// name: FUN_1002a034f
// address: 1002a034f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1002a034f(uint param_1,int param_2,int param_3,long *param_4,undefined8 *param_5,
             undefined8 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulong *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar10 = (ulong)param_1 * 0xd38;
  puVar7 = (ulong *)FUN_1001c6429(lVar10 + 8);
  if (puVar7 == (ulong *)0x0) {
    *param_4 = 0;
    uVar9 = FUN_1001cc310();
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_4a = "*outImageConvertWorkItemList != nullptr";
LAB_1002a05d2:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    *puVar7 = (ulong)param_1;
    lVar11 = 0;
    do {
      puVar1 = (undefined8 *)((long)puVar7 + lVar11 + 0x868);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((long)puVar7 + lVar11 + 0xcf0);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(long *)((long)puVar7 + lVar11 + 0xce8) = (long)puVar7 + lVar11 + 0xcf0;
      uVar5 = _UNK_10073fe6c;
      uVar4 = _UNK_10073fe68;
      uVar3 = _UNK_10073fe64;
      puVar2 = (undefined4 *)((long)puVar7 + lVar11 + 0xd08);
      *puVar2 = _DAT_10073fe60;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_100196476((long)puVar7 + lVar11 + 0xd28);
      lVar11 = lVar11 + 0xd38;
    } while (lVar10 - lVar11 != 0);
    *param_4 = (long)(puVar7 + 1);
    if (param_3 != 0) {
      pvVar8 = operator_new__((ulong)(param_3 * param_1) << 2,(nothrow_t *)PTR_nothrow_10082c970);
      *param_5 = pvVar8;
      if (pvVar8 == (void *)0x0) {
        uVar9 = FUN_1001cc310();
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        cVar6 = _os_log_type_enabled(uVar9,0x10);
        if (cVar6 != '\0') {
          local_4a = "*outActualSizeListArray != nullptr";
          goto LAB_1002a05d2;
        }
        goto LAB_1002a05f7;
      }
    }
    pvVar8 = operator_new__((ulong)(param_2 * param_1) * 4,(nothrow_t *)PTR_nothrow_10082c970);
    *param_6 = pvVar8;
    if (pvVar8 == (void *)0x0) {
      uVar9 = FUN_1001cc310();
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      cVar6 = _os_log_type_enabled(uVar9,0x10);
      if (cVar6 != '\0') {
        local_4a = "*outThumbFileOffsetListArray != nullptr";
        goto LAB_1002a05d2;
      }
    }
    else {
      pvVar8 = operator_new__((ulong)(param_2 * param_1) << 5,(nothrow_t *)PTR_nothrow_10082c970);
      uVar9 = 0;
      *param_7 = pvVar8;
      if (pvVar8 != (void *)0x0) goto LAB_1002a069c;
      uVar9 = FUN_1001cc310();
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      cVar6 = _os_log_type_enabled(uVar9,0x10);
      if (cVar6 != '\0') {
        local_4a = "*outThumbRectListArray != nullptr";
        goto LAB_1002a05d2;
      }
    }
  }
LAB_1002a05f7:
  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  FUN_1001782e9(0,0);
  lVar10 = *param_4;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + -8) != 0) {
      lVar11 = *(long *)(lVar10 + -8) * 0xd38;
      do {
        FUN_10029b718(lVar10 + -0xd38 + lVar11);
        lVar11 = lVar11 + -0xd38;
      } while (lVar11 != 0);
    }
    FUN_1001c64c1(lVar10 + -8);
  }
  *param_4 = 0;
  if ((void *)*param_5 != (void *)0x0) {
    operator_delete__((void *)*param_5);
  }
  *param_5 = 0;
  if ((void *)*param_6 != (void *)0x0) {
    operator_delete__((void *)*param_6);
  }
  *param_6 = 0;
  if ((void *)*param_7 != (void *)0x0) {
    operator_delete__((void *)*param_7);
  }
  *param_7 = 0;
  uVar9 = 0xffffff94;
LAB_1002a069c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

