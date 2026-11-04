// name: FUN_1001ea62b
// address: 1001ea62b

long FUN_1001ea62b(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_80 [2];
  int local_6c;
  undefined8 local_68;
  undefined1 local_60 [4];
  uint local_5c;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008a2ab8 != -1) {
    FUN_1006c2de7();
  }
  plVar5 = local_80;
  if (param_1 != (long *)0x0) {
    plVar5 = param_1;
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  lVar3 = 0;
  while( true ) {
    if ((lVar3 != 0) && (*plVar5 != 0)) goto LAB_1001ea740;
    local_60[0] = 0;
    local_5c = 0;
    LOCK();
    UNLOCK();
    local_6c = DAT_10088f694;
    DAT_10088f694 = DAT_10088f694 + 1;
    iVar2 = FUN_100179732(4,&local_68);
    if (iVar2 != 0) break;
    FUN_10017983e(local_68,&DAT_1008a2ac0,0x50);
    FUN_10017983e(local_68,&local_6c,4);
    FUN_1001799f1(local_68,local_60);
    FUN_100179a7b(local_68);
    if (0x10 < local_5c) {
      local_5c = 0x10;
    }
    FUN_1001c631b(local_58,plVar5,local_5c);
    lVar3 = plVar5[1];
  }
  if (iVar2 != -0x80) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c2e06(iVar2,uVar4);
    }
  }
  lVar3 = plVar5[1];
LAB_1001ea740:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

