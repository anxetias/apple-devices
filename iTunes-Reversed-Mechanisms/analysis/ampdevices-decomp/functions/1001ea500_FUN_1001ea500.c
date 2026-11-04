// name: FUN_1001ea500
// address: 1001ea500

int FUN_1001ea500(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  LOCK();
  UNLOCK();
  if (DAT_1008a2a60 != 0) {
    DAT_1008a2a60 = DAT_1008a2a60 + 1;
    return 0;
  }
  DAT_1008a2a60 = DAT_1008a2a60 + 1;
  iVar2 = FUN_1001e9c3e(&DAT_1008a2a68);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) goto LAB_1001ea551;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c2c8f(iVar2,uVar3);
    }
  }
  LOCK();
  DAT_1008a2a60 = DAT_1008a2a60 + -1;
  UNLOCK();
LAB_1001ea551:
  if ((DAT_1008a2ab0 == 0.0) && (!NAN(DAT_1008a2ab0))) {
    DAT_1008a2ab0 = (double)FUN_1001ebd46();
  }
  return iVar2;
}

