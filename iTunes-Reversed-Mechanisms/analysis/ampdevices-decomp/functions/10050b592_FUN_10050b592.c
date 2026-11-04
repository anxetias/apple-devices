// name: FUN_10050b592
// address: 10050b592

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10050b592(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  double dVar6;
  undefined8 uVar7;
  undefined **local_1a0 [32];
  undefined8 local_a0;
  long local_98 [4];
  long *local_78;
  long local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 local_48;
  long *plStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10015805a(local_1a0);
  local_1a0[0] = &PTR_FUN_100854ac0;
  cVar3 = FUN_10015829e(local_1a0,PTR_cf_autoCheckForWebUpdates_100854a60);
  if ((cVar3 != '\0') && (cVar3 = FUN_100259e39(param_1,1,0,0), cVar3 != '\0')) {
    dVar6 = (double)FUN_1001ebd46();
    if (dVar6 - *(double *)(DAT_1008c76a0 + 0x1a68) <= _DAT_100717f48) {
      FUN_1001784be(&local_a0,FUN_10050bc39,1,0);
      uVar2 = *(uint *)(param_1 + 0x28);
      local_78 = operator_new(0x30);
      *local_78 = (long)&PTR_FUN_10085f2c0;
      local_78[1] = (long)FUN_10050bc39;
      local_78[2] = 0;
      local_78[3] = 1;
      local_78[4] = 0;
      *(uint *)(local_78 + 5) = uVar2;
      uStack_60 = 0;
      uStack_59 = 0;
      local_48 = 0;
      plStack_40 = (long *)0x0;
      local_68 = (ulong)uVar2 << 0x20;
      local_50 = local_a0;
      FUN_10017869a(local_98);
      if (plStack_40 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        lVar5 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar5 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_78 == local_98) {
        lVar5 = 0x20;
      }
      else {
        lVar5 = 0x28;
        if (local_78 == (long *)0x0) goto LAB_10050b75a;
      }
      (**(code **)(*local_78 + lVar5))();
    }
    else {
      FUN_1004fda52(local_98,*(undefined4 *)(param_1 + 0x28));
      iVar4 = FUN_10024f5ea(local_98,*(undefined4 *)(param_1 + 0x66b0),0,1,0,1,0,0);
      FUN_1001b7a50(local_98);
      if (iVar4 == 0) {
        uVar7 = FUN_1001ebd46();
        *(undefined8 *)(DAT_1008c76a0 + 0x1a68) = uVar7;
        uVar7 = 1;
        goto LAB_10050b75c;
      }
    }
  }
LAB_10050b75a:
  uVar7 = 0;
LAB_10050b75c:
  FUN_10015811a(local_1a0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

