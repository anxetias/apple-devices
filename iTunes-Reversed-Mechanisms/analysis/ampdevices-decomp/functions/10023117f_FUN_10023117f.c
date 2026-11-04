// name: FUN_10023117f
// address: 10023117f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10023117f(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  double local_58;
  double local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  undefined2 uStack_32;
  undefined8 uStack_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x24b0;
      uStack_38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar3,0x10,"failed to create BKAgent: %{public}@",&local_48,
                          0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = FUN_100167fed(param_2,&cf_BKBookmarkTime,&local_58);
    if (cVar2 != '\0') {
      cVar2 = FUN_100166a6a(param_2,&cf_BKBookmarkTimeUpdatedDate,&local_50);
      if (cVar2 == '\0') {
        local_50 = (double)FUN_1001711e2();
      }
      iVar4 = (int)(long)(local_58 * _DAT_100708b48);
      iVar5 = (int)(long)(local_50 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008);
      if ((*(int *)(*(long *)(param_1 + 0x80) + 0xc) != iVar4) ||
         (*(int *)(*(long *)(param_1 + 0x80) + 0x14) != iVar5)) {
        FUN_100473a90(param_1);
        lVar1 = *(long *)(param_1 + 0x80);
        *(int *)(lVar1 + 0xc) = iVar4;
        *(int *)(lVar1 + 0x14) = iVar5;
        cVar2 = FUN_1003171d7(*(undefined8 *)(param_1 + 0x10),8);
        if (cVar2 != '\0') {
          uStack_38 = 0;
          uStack_32 = 0;
          uStack_30 = 0;
          local_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          uStack_3a = 0;
          FUN_1005389ba(&local_48,0x5d);
          FUN_1004755ef(param_1,0,&local_48);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

