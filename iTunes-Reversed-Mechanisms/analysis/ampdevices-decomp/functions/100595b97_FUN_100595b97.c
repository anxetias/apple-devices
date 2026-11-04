// name: FUN_100595b97
// address: 100595b97

int FUN_100595b97(int *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  undefined4 local_68;
  char *pcStack_64;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined8 *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_68 = 0x8220202;
      pcStack_64 = "Assertion failure";
      uStack_5c = 0x822;
      uStack_5a = 0xaa63;
      uStack_58 = 0x7e;
      uStack_56 = 1;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x32;
  }
  else if (((param_1 == (int *)0x0) || (*param_1 != 0x4f4c5354)) || (param_1[1] == 0)) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    iVar6 = -0x32;
    if (cVar5 != '\0') {
      local_68 = 0x8220202;
      pcStack_64 = "Assertion failure";
      uStack_5c = 0x400;
      uStack_5a = 0xffce;
      uStack_58 = 0xffff;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_68,0x12);
    }
  }
  else {
    uVar10 = (*(long *)(param_1 + 4) - *(long *)(param_1 + 2) >> 3) * 0x6db6db6db6db6db7;
    piVar3 = (int *)*param_2;
    if (((piVar3 == (int *)0x0) || (*piVar3 != 0x4f4c5354)) || (piVar3[1] == 0)) {
      *param_2 = 0;
      iVar6 = FUN_100594adc(param_2,uVar10 & 0xffffffff);
      if (iVar6 != 0) {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          puVar9 = &local_68;
          local_68 = 0x8220202;
          pcStack_64 = "Assertion failure";
          uStack_5c = 0x400;
          uStack_5a = (undefined2)iVar6;
          uStack_58 = (undefined2)((uint)iVar6 >> 0x10);
LAB_100595e8f:
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar9,0x12);
        }
LAB_100595eca:
        piVar3 = (int *)*param_2;
        if (((piVar3 != (int *)0x0) && (*piVar3 == 0x4f4c5354)) && (piVar3[1] != 0)) {
          FUN_100595344();
        }
        *param_2 = 0;
        goto LAB_100595d1b;
      }
    }
    if ((int)uVar10 == 0) {
LAB_100595ef1:
      iVar6 = 0;
    }
    else {
      lVar12 = 0x30;
      uVar11 = 0;
      do {
        if (((*param_1 != 0x4f4c5354) || (param_1[1] == 0)) ||
           (lVar4 = *(long *)(param_1 + 2),
           uVar8 = (*(long *)(param_1 + 4) - lVar4 >> 3) * 0x6db6db6db6db6db7,
           uVar8 < uVar11 || uVar8 - uVar11 == 0)) {
          uVar7 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar7,0x10);
          iVar6 = -0x32;
          if (cVar5 == '\0') goto LAB_100595eca;
          puVar9 = &local_88;
          local_88 = 0x8220202;
          local_84 = "Assertion failure";
          local_7c = 0x400;
          local_7a = -0x32;
          goto LAB_100595e8f;
        }
        puVar9 = (undefined4 *)(lVar4 + -0x30 + lVar12);
        local_68 = *puVar9;
        pcStack_64 = *(char **)(puVar9 + 1);
        puVar1 = (undefined4 *)(lVar4 + -0x20 + lVar12);
        uStack_50 = puVar1[2];
        uStack_4c = puVar1[3];
        lVar2 = lVar4 + -0x14 + lVar12;
        uStack_48 = *(undefined4 *)(lVar2 + 4);
        uStack_44 = *(undefined4 *)(lVar2 + 8);
        uStack_40 = *(undefined4 *)(lVar2 + 0xc);
        uStack_58 = (undefined2)*puVar1;
        uStack_56 = (undefined2)((uint)*puVar1 >> 0x10);
        uStack_54 = (undefined2)puVar1[1];
        uStack_52 = (undefined2)((uint)puVar1[1] >> 0x10);
        uStack_5c = (undefined2)puVar9[3];
        uStack_5a = (undefined2)((uint)puVar9[3] >> 0x10);
        iVar6 = FUN_100594f1e(*param_2,&local_68,0,*(undefined8 *)(lVar4 + lVar12));
        if (iVar6 != 0) {
          if (iVar6 == -0x80) goto LAB_100595eca;
          uVar7 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar7,0x10);
          if (cVar5 != '\0') {
            local_88 = 0x8220202;
            local_84 = "Assertion failure";
            local_7c = 0x400;
            local_7a = iVar6;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_88,0x12);
          }
          if (iVar6 == 0) goto LAB_100595ef1;
          goto LAB_100595eca;
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x38;
        iVar6 = 0;
      } while ((uVar10 & 0xffffffff) != uVar11);
    }
  }
LAB_100595d1b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

