// name: FUN_1001c28ba
// address: 1001c28ba

void FUN_1001c28ba(long *param_1,code *param_2,undefined8 param_3,uint *param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  int local_9c;
  long local_98 [2];
  uint local_88 [2];
  long alStack_80 [2];
  int aiStack_70 [14];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006a64a7(uVar6);
    }
  }
  else {
    if (param_2 != (code *)0x0) {
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
      alStack_80[1] = 0;
      aiStack_70[0] = 0;
      aiStack_70[1] = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      alStack_80[0] = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      uVar12 = 0;
      plVar4 = (long *)*param_1;
      if ((long *)*param_1 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar4;
          *plVar4 = local_98[uVar12 * 3];
          local_98[uVar12 * 3] = (long)plVar4;
          local_88[uVar12 * 6] = local_88[uVar12 * 6] + 1;
          uVar12 = (ulong)((uint)uVar12 ^ 1);
          plVar4 = plVar8;
        } while (plVar8 != (long *)0x0);
        if (aiStack_70[0] != 0) {
          local_9c = 1;
          uVar11 = 0;
LAB_1001c2973:
          uVar10 = (uint)uVar11 ^ 2;
          uVar12 = (ulong)uVar10;
          uVar7 = (ulong)(uVar10 + 1);
          local_88[uVar7 * 6] = 0;
          local_88[uVar12 * 6] = 0;
          if (local_88[uVar11 * 6] != 0) {
            plVar4 = local_98 + uVar11 * 3;
            uVar5 = uVar12;
LAB_1001c29c7:
            iVar9 = local_9c;
            iVar13 = local_9c;
            do {
              if ((iVar13 == 0) || (local_88[uVar11 * 6] == 0)) {
                if ((iVar9 == 0) || (aiStack_70[uVar11 * 6] == 0)) goto LAB_1001c2a7e;
                iVar9 = iVar9 + -1;
                plVar8 = alStack_80 + uVar11 * 3;
              }
              else {
                plVar8 = plVar4;
                if ((iVar9 == 0) || (aiStack_70[uVar11 * 6] == 0)) {
                  iVar13 = iVar13 + -1;
                }
                else {
                  iVar3 = (*param_2)(*plVar4,alStack_80[uVar11 * 3],param_3);
                  if (iVar3 < 1) {
                    iVar13 = iVar13 + -1;
                  }
                  else {
                    iVar9 = iVar9 + -1;
                    plVar8 = alStack_80 + uVar11 * 3;
                  }
                }
              }
              *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
              plVar1 = (long *)*plVar8;
              *plVar8 = *plVar1;
              uVar10 = local_88[uVar5 * 6];
              plVar8 = local_98 + uVar5 * 3;
              if (uVar10 != 0) {
                plVar8 = (long *)local_98[uVar5 * 3 + 1];
              }
              *plVar8 = (long)plVar1;
              local_98[uVar5 * 3 + 1] = (long)plVar1;
              local_88[uVar5 * 6] = uVar10 + 1;
            } while( true );
          }
          goto LAB_1001c2b05;
        }
        uVar12 = 0;
      }
LAB_1001c2b05:
      uVar10 = local_88[uVar12 * 6];
      if (1 < uVar10) {
        *(undefined8 *)local_98[uVar12 * 3 + 1] = 0;
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = uVar10;
      }
      *param_1 = local_98[uVar12 * 3];
      goto LAB_1001c2b42;
    }
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006a6431(uVar6);
    }
  }
  FUN_1001782e9(0,1);
LAB_1001c2b42:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
LAB_1001c2a7e:
  uVar5 = (ulong)((uint)uVar5 ^ 1);
  if (local_88[uVar11 * 6] == 0) goto code_r0x0001001c2a92;
  goto LAB_1001c29c7;
code_r0x0001001c2a92:
  local_9c = local_9c * 2;
  uVar11 = uVar12;
  if (local_88[uVar7 * 6] == 0) goto LAB_1001c2b05;
  goto LAB_1001c2973;
}

