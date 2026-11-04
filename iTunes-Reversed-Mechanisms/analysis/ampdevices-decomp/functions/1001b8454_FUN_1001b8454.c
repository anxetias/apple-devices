// name: FUN_1001b8454
// address: 1001b8454

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001b8454(long *param_1)

{
  size_t sVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long local_90;
  undefined *local_88;
  long local_80;
  long local_78;
  uint *local_70;
  long *local_68;
  uint *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar6 = FUN_1001b83f0();
  if (lVar6 == 0) goto LAB_1001b875e;
  puVar7 = _malloc(lVar6 * 2);
  if (puVar7 == (uint *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      FUN_1006a16fe(uVar8);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 == '\0') goto LAB_1001b875e;
  }
  lVar10 = param_1[1];
  local_68 = param_1;
  local_60 = puVar7;
  if (lVar10 == 0) {
    puVar9 = &DAT_100711b02;
    if (*param_1 != 0) {
      FUN_1001b87d0(param_1);
      lVar10 = local_68[1];
      if (lVar10 != 0) goto LAB_1001b84e5;
    }
  }
  else {
LAB_1001b84e5:
    puVar9 = (undefined *)(lVar10 + 0xc);
  }
  local_70 = local_60 + lVar6;
  local_88 = puVar9 + lVar6;
  local_78 = 0;
  puVar7 = local_60;
  do {
    local_80 = lVar6;
    uVar5 = FUN_1001b9463(puVar9,(long)local_88 - (long)puVar9,&local_90);
    lVar6 = local_90;
    if (local_90 == 0) break;
    if (uVar5 == 0) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "theChar != 0";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (puVar7 == (uint *)0x0) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        FUN_1006a1860(uVar8);
      }
LAB_1001b86f8:
      FUN_1001782e9(0,0);
      break;
    }
    if (local_70 == puVar7) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        FUN_1006a17ea(uVar8);
      }
      goto LAB_1001b86f8;
    }
    uVar3 = 0xfffd;
    uVar4 = uVar3;
    if (((((uVar5 & 0x1ff800) == 0xd800) || (uVar4 = (short)uVar5, uVar5 < 0xfdd0)) ||
        (uVar4 = uVar3, uVar5 < 0xfdf0)) ||
       ((0x10ffff < uVar5 || (~uVar5 & 0xfffe) == 0 || (uVar4 = (short)uVar5, uVar5 < 0x10000)))) {
      *(undefined2 *)puVar7 = uVar4;
      lVar10 = 1;
    }
    else {
      if ((long)local_70 - (long)puVar7 == 2) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          FUN_1006a1774(uVar8);
        }
        goto LAB_1001b86f8;
      }
      *puVar7 = (uVar5 + 0xf0000 >> 10 & 0xffff | uVar5 << 0x10) & (uint)DAT_100711ad0 |
                (uint)DAT_100711ae0;
      lVar10 = 2;
    }
    puVar7 = (uint *)((long)puVar7 + lVar10 * 2);
    local_78 = local_78 + lVar10;
    puVar9 = puVar9 + lVar6;
    lVar6 = local_80 - lVar6;
  } while (lVar6 != 0);
  puVar7 = local_60;
  lVar6 = local_78;
  if (local_78 != 0) {
    sVar1 = local_78 * 2;
    plVar11 = operator_new(local_78 * 2 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
    *plVar11 = lVar6;
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined2 *)((long)plVar11 + lVar6 * 2 + 0xc) = 0;
    _memcpy((void *)((long)plVar11 + 0xc),puVar7,sVar1);
    *local_68 = (long)plVar11;
  }
  if (puVar7 != (uint *)0x0) {
    _free(puVar7);
  }
LAB_1001b875e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

