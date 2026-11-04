// name: FUN_1001a2472
// address: 1001a2472

undefined8 FUN_1001a2472(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001e9c3e(&DAT_10089cae8);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069c483(iVar2,uVar3);
    }
  }
  FUN_1001c2b73(&DAT_10089cb30);
  FUN_1001c0fbe(FUN_1001a24dd,0,0,0,0);
  return 0;
}

