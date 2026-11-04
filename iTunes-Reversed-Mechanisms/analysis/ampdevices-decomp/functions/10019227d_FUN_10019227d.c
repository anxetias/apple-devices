// name: FUN_10019227d
// address: 10019227d

undefined8 FUN_10019227d(long param_1,undefined1 *param_2,undefined2 *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_d10 [1128];
  undefined1 local_8a8 [2168];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_8a8,0x878);
  ___bzero(local_d10,0x468);
  puVar5 = local_d10;
  if (param_2 != (undefined1 *)0x0) {
    ___bzero(param_2,0x468);
    puVar5 = param_2;
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100694756(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    iVar2 = _statfs_INODE64(param_1 + 0x19,local_8a8);
    if (iVar2 != 0) {
      piVar3 = ___error();
      uVar4 = FUN_1001eb020(*piVar3);
      if ((int)uVar4 != 0) goto LAB_10019235e;
    }
    uVar4 = FUN_10019274c(local_8a8,puVar5);
    if (param_3 != (undefined2 *)0x0) {
      uVar4 = FUN_10018f68d(puVar5,param_3);
    }
  }
LAB_10019235e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

