// name: FUN_100569944
// address: 100569944

int FUN_100569944(long param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long local_70;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 < 0x989681) {
    if (param_3 != 0) {
      puVar1 = (ulong *)(param_1 + 0x1c9c488);
      lVar2 = param_1 + 0xa8;
      lVar3 = param_1 + 0x1312da8;
      local_70 = param_2;
      do {
        uVar9 = *(ulong *)(param_1 + 0x1c9c478);
        lVar4 = *(long *)(param_1 + 0x1c9c488);
        if (lVar4 == 0) {
LAB_100569a1b:
          uVar5 = *(ulong *)(param_1 + 0x1c9c468);
          if (uVar9 < uVar5) {
            uVar11 = uVar5 - uVar9;
            if (uVar9 + 10000000 <= uVar5) {
              uVar11 = 10000000;
            }
            bVar6 = true;
          }
          else {
            uVar12 = *(ulong *)(param_1 + 0x1c9c470);
            if (uVar9 < uVar12) {
              uVar9 = (uVar9 - uVar5 & 0xfffffffffffffff0) + uVar5;
              uVar11 = uVar12 - uVar9;
              if (uVar9 + 10000000 <= uVar12) {
                uVar11 = 10000000;
              }
              bVar6 = false;
            }
            else {
              bVar6 = true;
              uVar11 = 10000000;
            }
          }
          iVar8 = FUN_100160772(*(undefined8 *)(param_1 + 0xa0),uVar9);
          if (iVar8 == 0) {
            *(ulong *)(param_1 + 0x1c9c480) = uVar9;
            *(ulong *)(param_1 + 0x1c9c488) = uVar11 & 0xffffffff;
            iVar8 = FUN_100160380(*(undefined8 *)(param_1 + 0xa0),puVar1,lVar3);
            if (iVar8 == -0x27) {
              if (param_3 <= *puVar1) goto LAB_100569ae4;
            }
            else {
              if (iVar8 == 0) {
LAB_100569ae4:
                if (bVar6) {
                  FUN_1001c631b(lVar3,lVar2,*puVar1);
                }
                else {
                  local_58 = *(uint *)puVar1;
                  FUN_100177bc5(param_1 + 0x1c9c428,lVar3,local_58,lVar2,&local_58);
                  *puVar1 = (ulong)local_58;
                }
                goto LAB_100569b1f;
              }
              if (iVar8 == -0x80) goto LAB_100569b59;
            }
            uVar10 = FUN_1001cc310();
            cVar7 = _os_log_type_enabled(uVar10,0x10);
            if (cVar7 == '\0') goto LAB_100569b59;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
          }
          else {
            if (iVar8 == -0x80) goto LAB_100569b59;
            uVar10 = FUN_1001cc310();
            cVar7 = _os_log_type_enabled(uVar10,0x10);
            if (cVar7 == '\0') goto LAB_100569b59;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
          }
          local_4c = 0x400;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          goto LAB_100569b59;
        }
        uVar5 = *(ulong *)(param_1 + 0x1c9c480);
        if (uVar5 + lVar4 <= uVar9 || uVar9 < uVar5) goto LAB_100569a1b;
        uVar11 = (uVar5 - uVar9) + lVar4;
        uVar12 = uVar11 & 0xffffffff;
        if (param_3 <= uVar11) {
          uVar12 = param_3;
        }
        FUN_1001c631b((uVar9 - uVar5) + lVar2,local_70,uVar12);
        param_3 = param_3 - uVar12;
        local_70 = local_70 + uVar12;
        *(long *)(param_1 + 0x1c9c478) = *(long *)(param_1 + 0x1c9c478) + uVar12;
LAB_100569b1f:
      } while (param_3 != 0);
    }
    iVar8 = 0;
  }
  else {
    uVar10 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar10,0x10);
    if (cVar7 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "count <= kObjectBufferSize";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar8 = -0xd0;
  }
LAB_100569b59:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

