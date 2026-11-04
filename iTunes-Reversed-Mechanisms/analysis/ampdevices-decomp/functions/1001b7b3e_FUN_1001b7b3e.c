// name: FUN_1001b7b3e
// address: 1001b7b3e

undefined8 FUN_1001b7b3e(long *param_1,undefined2 *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  ulong uVar10;
  long local_78;
  long local_70;
  long *local_68;
  undefined1 local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = param_3;
  local_68 = param_1;
  if (*param_1 != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006a14b0(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  if (local_68[1] != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006a1526(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  lVar9 = local_70;
  local_59 = local_70 != 0 && param_2 != (undefined2 *)0x0;
  if (local_70 != 0 && param_2 != (undefined2 *)0x0) {
    plVar5 = operator_new(local_70 * 2 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
    *plVar5 = lVar9;
    *(undefined4 *)(plVar5 + 1) = 1;
    puVar7 = (undefined2 *)((long)plVar5 + 0xc);
    *(undefined2 *)((long)plVar5 + lVar9 * 2 + 0xc) = 0;
    *local_68 = (long)plVar5;
    if (0 < lVar9) {
      puVar8 = param_2 + lVar9;
      do {
        uVar3 = FUN_1001b9349(param_2,puVar8,&local_78);
        if (uVar3 == 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "c != 0";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
LAB_1001b7ca4:
          if (local_78 == 1) {
            uVar6 = (undefined2)uVar3;
            if ((uVar3 & 0xfc00) == 0xdc00) {
              uVar6 = 0xfffd;
            }
            *puVar7 = uVar6;
            puVar7 = puVar7 + 1;
            lVar9 = 1;
          }
          else if (local_78 == 2) {
            *puVar7 = *param_2;
            puVar7[1] = param_2[1];
            puVar7 = puVar7 + 2;
            lVar9 = 2;
          }
          else {
            lVar9 = local_78;
            if (local_78 == 0) {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                FUN_1006a159c(uVar4);
              }
              FUN_1001782e9(0,0);
              break;
            }
          }
        }
        else {
          if ((uVar3 < 0xfdd0) || ((0xfdef < uVar3 && (0x10ffff < uVar3 || (~uVar3 & 0xfffe) != 0)))
             ) goto LAB_1001b7ca4;
          *puVar7 = 0xfffd;
          puVar7 = puVar7 + 1;
          lVar9 = local_78;
        }
        param_2 = param_2 + lVar9;
      } while (param_2 < puVar8);
    }
    puVar8 = (undefined2 *)((long)plVar5 + local_70 * 2 + 0xc);
    lVar9 = (long)puVar8 - (long)puVar7;
    if (puVar7 <= puVar8 && lVar9 != 0) {
      puVar1 = (ulong *)*local_68;
      uVar10 = lVar9 >> 1;
      if (*puVar1 <= uVar10) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_1006a1612(uVar4);
        }
        cVar2 = FUN_1001782e9(0,0);
        if (cVar2 == '\0') goto LAB_1001b7de3;
      }
      *puVar1 = uVar10;
      *(undefined2 *)((long)puVar1 + uVar10 * 2 + 0xc) = 0;
    }
  }
LAB_1001b7de3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_10082cb58 >> 8),local_59);
}

