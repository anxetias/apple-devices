// name: FUN_1003b7a40
// address: 1003b7a40

undefined8
FUN_1003b7a40(int param_1,long param_2,uint *param_3,long param_4,long param_5,undefined4 param_6)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long lVar4;
  undefined1 local_2b0 [8];
  undefined4 local_2a8;
  ulong local_290;
  uint local_280;
  long *local_260;
  long *local_258;
  long *plStack_250;
  undefined4 local_23c;
  long *local_238;
  long *local_230;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_258 = (long *)0x0;
  plStack_250 = (long *)0x0;
  local_23c = param_6;
  if (param_3 != (uint *)0x0) {
    FUN_1001c62d9(param_3,0x1660);
    param_3[1] = 0x1660;
  }
  if (param_4 != 0) {
    ___bzero(param_4,0x3648);
  }
  if (param_5 != 0) {
    FUN_1001c62d9(param_5,0x44);
  }
  FUN_100241e40(&local_238,param_1,param_2,0,0,0);
  local_258 = local_238;
  local_260 = local_230;
  plStack_250 = local_230;
  if (local_238 != (long *)0x0) {
    (**(code **)(*local_238 + 0x88))(local_238,local_23c,0,param_3,param_4,param_5,0);
  }
  if (param_1 == 0x46494c45 && param_3 != (uint *)0x0) {
    iVar2 = FUN_10017d477(param_2 + 0x2c,local_2b0,&local_238);
    if (iVar2 == 0) {
      uVar3 = *param_3;
      if (((uVar3 & 1) == 0) || (lVar4 = extraout_RDX, (short)param_3[2] == 0)) {
        FUN_1001e1c39(&local_238);
        uVar3 = *param_3 | 1;
        *param_3 = uVar3;
        lVar4 = extraout_RDX_00;
      }
      if (((uVar3 & 2) == 0) || ((short)param_3[0x82] == 0)) {
        FUN_1001e1c39(&local_238);
        uVar3 = *param_3 | 2;
        *param_3 = uVar3;
        lVar4 = extraout_RDX_01;
      }
      if (((uVar3 >> 0xe & 1) == 0) || (*(long *)(param_3 + 0x596) == 0)) {
        *(ulong *)(param_3 + 0x596) = local_290;
        lVar4 = -(local_290 >> 0x20);
        param_3[0x409] = -(uint)(local_290 >> 0x20 != 0) | (uint)local_290;
        uVar3 = uVar3 | 0x4000;
        *param_3 = uVar3;
      }
      if (((uVar3 >> 0x13 & 1) == 0) || (param_3[0x408] == 0)) {
        FUN_100177f1b(local_2a8,param_3 + 0x408,lVar4);
        uVar3 = *param_3 | 0x80000;
        *param_3 = uVar3;
      }
      if (((uVar3 >> 0x12 & 1) == 0) || (param_3[0x40c] == 0)) {
        param_3[0x40c] = local_280;
        *param_3 = uVar3 | 0x40000;
      }
    }
  }
  if (local_260 != (long *)0x0) {
    LOCK();
    plVar1 = local_260 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*local_260 + 0x10))(local_260);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

