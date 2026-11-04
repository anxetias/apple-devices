// name: FUN_1005749be
// address: 1005749be

undefined4
FUN_1005749be(long param_1,undefined8 param_2,long *param_3,long param_4,long param_5,long param_6,
             long param_7,long *param_8)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint local_58 [3];
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6 == 0 && param_7 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_4a = "(inXinfData != __null) || (inXinf2Data != __null)";
LAB_100574cb1:
      local_4c = 0x822;
      local_58[2] = 1;
      local_58[1] = 0x7a0a90;
      local_58[0] = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_58,0x16);
    }
  }
  else {
    if ((param_3 != (long *)0x0) && ((int)param_3[2] != 0)) {
      if ((param_6 == 0) || (uVar2 = FUN_100170ef7(param_6), uVar2 == 0)) {
        uVar2 = 0;
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_100170f3b(param_6);
      }
      if ((param_7 == 0) || (uVar3 = FUN_100170ef7(param_7), uVar3 == 0)) {
        lVar6 = 0;
        uVar3 = 0;
      }
      else {
        lVar6 = FUN_100170f3b(param_7);
      }
      uVar11 = *(uint *)(param_3 + 1);
      if (param_4 != 0) {
        uVar11 = uVar11 + *(int *)(param_4 + 8);
      }
      if (param_5 != 0) {
        uVar11 = uVar11 + *(int *)(param_5 + 8);
      }
      if (uVar11 < uVar3 + uVar2) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_58[0] = 0x8220202;
          local_58[1] = 0x7a0a90;
          local_58[2] = 1;
          local_4c = 0x822;
          local_4a = "totalDestLength >= totalSourceLength";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_58,0x16);
        }
        puVar8 = (uint *)0x0;
        FUN_1001782e9(0,0);
        uVar4 = 0x206f;
      }
      else {
        puVar8 = (uint *)FUN_1001c6429();
        if (puVar8 == (uint *)0x0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_58[0] = 0x8220202;
            local_58[1] = 0x7a0a90;
            local_58[2] = 1;
            local_4c = 0x822;
            local_4a = "destBuffer != __null";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_58,0x16);
          }
          puVar8 = (uint *)0x0;
          FUN_1001782e9(0,0);
          uVar4 = 0x2070;
        }
        else {
          if (lVar5 == 0) {
            puVar9 = (uint *)0x0;
            puVar10 = puVar8;
            uVar2 = uVar11;
          }
          else {
            FUN_1001c631b(lVar5,puVar8,(ulong)uVar2);
            puVar9 = puVar8;
            puVar10 = (uint *)((long)puVar8 + (ulong)uVar2);
            uVar2 = uVar11 - uVar2;
          }
          if (lVar6 != 0) {
            FUN_1001c631b(lVar6,puVar10,(ulong)uVar3);
            uVar2 = uVar2 - uVar3;
            puVar9 = puVar10;
            puVar10 = (uint *)((ulong)uVar3 + (long)puVar10);
          }
          if (uVar2 < 8) {
            if (puVar9 == (uint *)0x0) {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              if (cVar1 != '\0') {
                local_58[0] = 0x8220202;
                local_58[1] = 0x7a0a90;
                local_58[2] = 1;
                local_4c = 0x822;
                local_4a = "previousWrittenXinfPtr != __null";
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_58,0x16)
                ;
              }
              FUN_1001782e9(0,0);
              uVar4 = 0x2071;
              goto LAB_100574aa3;
            }
            uVar3 = *puVar9;
            uVar2 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18
                    ) + uVar2;
            *puVar9 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 * 0x1000000;
          }
          else {
            local_58[0] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                          uVar2 << 0x18;
            local_58[1] = 0x65657266;
            FUN_1001c631b(local_58,puVar10,8);
          }
          FUN_1001c631b(puVar8,*(long *)(param_1 + 0x18) + *param_3,uVar11);
          param_8 = (long *)*param_8;
          if (param_8 == (long *)0x0) {
            uVar4 = 0;
          }
          else {
            local_58[1] = 0;
            local_58[0] = uVar11;
            uVar4 = (**(code **)(*param_8 + 0xa0))
                              (param_8,*param_3 + *(long *)(param_1 + 0x48),puVar8,local_58,1);
          }
        }
      }
      goto LAB_100574aa3;
    }
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_4a = "IsValidMoovAtomInfo(inXinfAtomInfo)";
      goto LAB_100574cb1;
    }
  }
  puVar8 = (uint *)0x0;
  FUN_1001782e9(0,0);
  uVar4 = 0x206e;
LAB_100574aa3:
  FUN_1001c64c1(puVar8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

