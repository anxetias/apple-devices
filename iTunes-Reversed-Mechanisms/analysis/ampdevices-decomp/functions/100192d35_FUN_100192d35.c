// name: FUN_100192d35
// address: 100192d35

int FUN_100192d35(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 local_cc0 [48];
  undefined4 local_c90;
  undefined1 local_c68 [2080];
  undefined1 local_448 [4];
  undefined2 local_444;
  undefined1 local_430;
  undefined4 local_2c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_cc0,0x878);
  iVar2 = _statfs_INODE64(param_1 + 0x19,local_cc0);
  if (iVar2 != 0) {
    piVar3 = ___error();
    iVar2 = FUN_1001eb020(*piVar3);
    if (iVar2 == -0x80) goto LAB_100192df4;
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006948ae(iVar2,uVar4);
      }
      goto LAB_100192df4;
    }
  }
  FUN_10018dce1(local_c68,local_448);
  local_2c = local_c90;
  local_430 = 1;
  local_444 = 6;
  iVar2 = FUN_10019227d(local_448,param_2,0);
LAB_100192df4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

