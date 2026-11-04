// name: FUN_100123040
// address: 100123040

undefined8 FUN_100123040(long *param_1,long *param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long *local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined4 auStack_90 [2];
  long alStack_88 [10];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar8 = *(uint *)((long)param_2 + 0x74);
  uVar1 = *(ushort *)((long)param_2 + 0x6c);
  if (uVar1 == 0) {
    if ((uVar8 & 1) == 0) goto LAB_1001231b9;
    lVar6 = *param_2;
    uVar7 = (ulong)*(uint *)(param_2 + 0xd);
LAB_1001230f4:
    uVar8 = 0;
    local_a8 = param_2;
    local_a0 = (ulong)uVar1;
    do {
      uVar4 = (ulong)uVar8;
      local_b8 = *(undefined4 *)(&local_98 + uVar4);
      uStack_b4 = *(undefined4 *)((long)&local_98 + uVar4 * 8 + 4);
      uStack_b0 = auStack_90[uVar4 * 2];
      uStack_ac = *(undefined4 *)((long)alStack_88 + uVar4 * 8 + -4);
      _vDSP_ztoc(&local_b8,1,lVar6 + uVar4 * 4,uVar1,uVar7);
      uVar8 = uVar8 + 2;
    } while (uVar8 < uVar1 - 1);
    uVar5 = (uint)local_a0;
    if (uVar7 != 0 && uVar8 < uVar5) {
      lVar2 = (&local_98)[uVar8];
      uVar4 = 0;
      do {
        *(undefined4 *)(lVar6 + (ulong)uVar8 * 4) = *(undefined4 *)(lVar2 + uVar4 * 4);
        uVar4 = uVar4 + 1;
        uVar8 = uVar8 + uVar5;
      } while (uVar7 != uVar4);
    }
    if ((*(float *)(local_a8 + 0xc) == DAT_100700b50) &&
       (!NAN(*(float *)(local_a8 + 0xc)) && !NAN(DAT_100700b50))) goto LAB_1001231b9;
    local_98 = lVar6;
    uVar7 = (ulong)((int)uVar7 * uVar5);
    param_2 = local_a8;
  }
  else {
    uVar7 = 0;
    local_a0 = (ulong)*(uint *)(param_2 + 0xd);
    do {
      uVar3 = (**(code **)(*param_1 + 0x70))(param_1,uVar7 & 0xffffffff);
      (&local_98)[uVar7] = uVar3;
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
    if ((uVar8 & 1) == 0) goto LAB_1001231b9;
    lVar6 = *param_2;
    uVar7 = local_a0;
    if (uVar1 != 1) goto LAB_1001230f4;
  }
  _vDSP_vsmul(local_98,1,param_2 + 0xc,lVar6,1,uVar7);
LAB_1001231b9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

