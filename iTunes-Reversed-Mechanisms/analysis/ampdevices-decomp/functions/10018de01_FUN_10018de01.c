// name: FUN_10018de01
// address: 10018de01

int FUN_10018de01(int *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10069296c(uVar4);
    }
  }
  else {
    if (*param_1 == 0x504f5358) {
      if (DAT_1008906b8 < 0x19) {
        pvVar3 = operator_new(0x430,(nothrow_t *)PTR_nothrow_10082c970);
        if (pvVar3 != (void *)0x0) {
          _memcpy(pvVar3,param_1,0x420);
          *(undefined8 *)((long)pvVar3 + 0x420) = param_2;
          *(undefined4 *)((long)pvVar3 + 0x428) = param_3;
          LOCK();
          DAT_1008906b8 = DAT_1008906b8 + 1;
          UNLOCK();
          iVar2 = FUN_1001ee6ff(FUN_10018dfa9,pvVar3,0xfffffffe,0,0,"");
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              return 0;
            }
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              FUN_10069288a(iVar2,uVar4);
            }
          }
          LOCK();
          DAT_1008906b8 = DAT_1008906b8 + -1;
          UNLOCK();
          operator_delete(pvVar3);
          return iVar2;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006928f6(uVar4);
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_100692814(uVar4);
        }
      }
      FUN_1001782e9(0,0);
      return -0x6c;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10069279e(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

