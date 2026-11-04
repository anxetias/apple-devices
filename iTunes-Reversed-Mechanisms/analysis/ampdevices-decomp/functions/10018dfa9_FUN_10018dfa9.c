// name: FUN_10018dfa9
// address: 10018dfa9

void FUN_10018dfa9(void *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_70 [80];
  
  lVar3 = 0;
  iVar2 = FUN_10017d477(param_1,local_70,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = FUN_10016ff43(0,param_1);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006929e2(uVar4);
        }
        lVar3 = 0;
        FUN_1001782e9(0,0);
      }
      else {
        _CSBackupSetItemExcluded(lVar3,1,0);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100692a58(iVar2,uVar4);
      }
      lVar3 = 0;
    }
  }
  LOCK();
  DAT_1008906b8 = DAT_1008906b8 + -1;
  UNLOCK();
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
  }
  FUN_10017060f(lVar3);
  return;
}

