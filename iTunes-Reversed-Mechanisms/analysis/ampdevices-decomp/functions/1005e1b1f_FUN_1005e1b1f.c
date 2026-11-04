// name: FUN_1005e1b1f
// address: 1005e1b1f

undefined1 * FUN_1005e1b1f(long param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_3 = 0;
  lVar8 = *(long *)(param_1 + 0x28);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0xc);
  if (lVar8 == 0) {
    lVar8 = *(long *)(param_1 + 0x30);
  }
  if ((ulong)uVar1 == 0) {
LAB_1005e1c31:
    puVar6 = (undefined1 *)0x0;
LAB_1005e1c33:
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return puVar6;
  }
  piVar4 = (int *)(*(long *)(param_1 + 0x18) + 0x1c);
  uVar9 = 0;
  uVar10 = 0;
LAB_1005e1b6f:
  iVar3 = *(int *)(lVar8 + 0xc) + 1;
  if (uVar9 < uVar1 - 1) {
    iVar3 = *piVar4;
  }
  uVar10 = uVar10 + (iVar3 - piVar4[-3]) * piVar4[-2];
  if (uVar10 <= param_2) goto code_r0x0001005e1b88;
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 != 0) {
    iVar3 = piVar4[-1];
    if (*(int *)(lVar8 + 0xc) < iVar3) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_2a = "stds->numEntries > sampleDescriptionIndex";
        goto LAB_1005e1c6e;
      }
      goto LAB_1005e1c05;
    }
    puVar7 = (uint *)(lVar8 + 0x10);
    if (1 < iVar3) {
      iVar3 = iVar3 + -1;
      do {
        uVar1 = *puVar7;
        puVar7 = (uint *)((long)puVar7 +
                         (long)(int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8
                                    | uVar1 << 0x18));
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *param_3 = puVar7;
    goto LAB_1005e1c31;
  }
  uVar5 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar5,0x10);
  if (cVar2 != '\0') {
    local_2a = "stds != nullptr";
LAB_1005e1c6e:
    local_2c = 0x822;
    local_34 = "Assertion failure";
    local_38 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
LAB_1005e1c05:
  FUN_1001782e9(0,0);
  puVar6 = &DAT_ffffff30;
  goto LAB_1005e1c33;
code_r0x0001005e1b88:
  uVar9 = uVar9 + 1;
  piVar4 = piVar4 + 3;
  if (uVar1 == uVar9) goto LAB_1005e1c31;
  goto LAB_1005e1b6f;
}

