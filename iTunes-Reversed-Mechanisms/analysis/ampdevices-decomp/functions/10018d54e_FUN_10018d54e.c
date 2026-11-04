// name: FUN_10018d54e
// address: 10018d54e

bool FUN_10018d54e(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 local_8b0 [16];
  undefined1 local_8a0 [2168];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar4 = false;
  lVar2 = FUN_100174622(param_1,0);
  if (lVar2 != 0) {
    FUN_1001b7eb0(local_8b0,lVar2);
    uVar3 = FUN_1001b83ae(local_8b0);
    iVar1 = _statfs_INODE64(uVar3,local_8a0);
    bVar4 = iVar1 == 0;
    if (bVar4) {
      uVar3 = FUN_1001b83ae(local_8b0);
      FUN_10018ef8d(uVar3,local_8a0,param_2);
    }
    FUN_10017060f(lVar2);
    FUN_1001b7a50(local_8b0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

