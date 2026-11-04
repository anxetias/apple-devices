// name: FUN_100567ae8
// address: 100567ae8

void FUN_100567ae8(long *param_1,code *param_2,undefined8 param_3,uint *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  int local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  uint uStack_88;
  undefined2 uStack_82;
  undefined8 auStack_80 [2];
  int aiStack_70 [14];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (code *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      uStack_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0x854b;
      _uStack_88 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  aiStack_70[10] = 0;
  aiStack_70[0xb] = 0;
  aiStack_70[0xc] = 0;
  aiStack_70[0xd] = 0;
  aiStack_70[6] = 0;
  aiStack_70[7] = 0;
  aiStack_70[8] = 0;
  aiStack_70[9] = 0;
  aiStack_70[2] = 0;
  aiStack_70[3] = 0;
  aiStack_70[4] = 0;
  aiStack_70[5] = 0;
  auStack_80[1] = 0;
  aiStack_70[0] = 0;
  aiStack_70[1] = 0;
  _uStack_88 = 0;
  uStack_82 = 0;
  auStack_80[0] = 0;
  local_98._0_4_ = 0;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_8a = 0;
  uVar13 = 0;
  plVar6 = (long *)*param_1;
  if ((long *)*param_1 != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar6;
      *plVar6 = (&local_98)[uVar13 * 3];
      (&local_98)[uVar13 * 3] = plVar6;
      (&uStack_88)[uVar13 * 6] = (&uStack_88)[uVar13 * 6] + 1;
      uVar13 = (ulong)((uint)uVar13 ^ 1);
      plVar6 = plVar1;
    } while (plVar1 != (long *)0x0);
    if (aiStack_70[0] != 0) {
      local_9c = 1;
      uVar12 = 0;
LAB_100567bc4:
      uVar11 = (uint)uVar12 ^ 2;
      uVar13 = (ulong)uVar11;
      uVar8 = (ulong)(uVar11 + 1);
      (&uStack_88)[uVar8 * 6] = 0;
      (&uStack_88)[uVar13 * 6] = 0;
      if ((&uStack_88)[uVar12 * 6] != 0) {
        uVar7 = uVar13;
LAB_100567c17:
        iVar10 = local_9c;
        iVar14 = local_9c;
        do {
          if ((iVar14 == 0) || ((&uStack_88)[uVar12 * 6] == 0)) {
            if ((iVar10 == 0) || (aiStack_70[uVar12 * 6] == 0)) goto LAB_100567ca8;
LAB_100567c79:
            iVar10 = iVar10 + -1;
            puVar9 = auStack_80 + uVar12 * 3;
          }
          else {
            if (((iVar10 != 0) && (aiStack_70[uVar12 * 6] != 0)) &&
               (iVar4 = (*param_2)((&local_98)[uVar12 * 3],auStack_80[uVar12 * 3],param_3),
               0 < iVar4)) goto LAB_100567c79;
            iVar14 = iVar14 + -1;
            puVar9 = &local_98 + uVar12 * 3;
          }
          *(int *)(puVar9 + 2) = *(int *)(puVar9 + 2) + -1;
          puVar2 = (undefined8 *)*puVar9;
          *puVar9 = *puVar2;
          uVar11 = (&uStack_88)[uVar7 * 6];
          puVar9 = &local_98 + uVar7 * 3;
          if (uVar11 != 0) {
            puVar9 = *(undefined8 **)(&uStack_90 + uVar7 * 6);
          }
          *puVar9 = puVar2;
          *(undefined8 **)(&uStack_90 + uVar7 * 6) = puVar2;
          (&uStack_88)[uVar7 * 6] = uVar11 + 1;
        } while( true );
      }
      goto LAB_100567ce5;
    }
    uVar13 = 0;
  }
LAB_100567ce5:
  uVar11 = (&uStack_88)[uVar13 * 6];
  if (1 < uVar11) {
    **(undefined8 **)(&uStack_90 + uVar13 * 6) = 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar11;
  }
  *param_1 = (&local_98)[uVar13 * 3];
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
LAB_100567ca8:
  uVar7 = (ulong)((uint)uVar7 ^ 1);
  if ((&uStack_88)[uVar12 * 6] == 0) goto code_r0x000100567cbc;
  goto LAB_100567c17;
code_r0x000100567cbc:
  local_9c = local_9c * 2;
  uVar12 = uVar13;
  if ((&uStack_88)[uVar8 * 6] == 0) goto LAB_100567ce5;
  goto LAB_100567bc4;
}

