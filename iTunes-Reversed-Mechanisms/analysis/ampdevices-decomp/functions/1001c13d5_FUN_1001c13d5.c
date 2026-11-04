// name: FUN_1001c13d5
// address: 1001c13d5

int FUN_1001c13d5(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  
  LOCK();
  iVar1 = DAT_1008a2168 + 1;
  UNLOCK();
  iVar3 = 0;
  bVar5 = DAT_1008a2168 == 0;
  DAT_1008a2168 = iVar1;
  if (bVar5) {
    iVar3 = FUN_1001e9c3e(&DAT_1008a2120);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        iVar3 = FUN_1001ea500();
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            return 0;
          }
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_1006a520b(iVar3,uVar4);
          }
        }
        FUN_1001e9d75(&DAT_1008a2120);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_1006a5277(iVar3,uVar4);
        }
      }
    }
    LOCK();
    DAT_1008a2168 = DAT_1008a2168 + -1;
    UNLOCK();
  }
  return iVar3;
}

