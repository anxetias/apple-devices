// name: FUN_1001ea5dc
// address: 1001ea5dc

int FUN_1001ea5dc(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  bool bVar5;
  
  iVar2 = DAT_10088f690;
  LOCK();
  iVar1 = DAT_10088f690 + 1;
  UNLOCK();
  bVar5 = DAT_10088f690 == 10000000;
  DAT_10088f690 = iVar1;
  if (bVar5) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006c2d71(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  return iVar2;
}

