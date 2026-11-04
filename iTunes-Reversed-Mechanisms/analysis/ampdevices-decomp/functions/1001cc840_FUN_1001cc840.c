// name: FUN_1001cc840
// address: 1001cc840

void FUN_1001cc840(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_28 [16];
  
  DAT_1008c53c8 = 0;
  DAT_1008c53c9 = 0;
  FUN_1001c15c6(local_28);
  FUN_1001b80b2(&DAT_1008c53f8,local_28);
  FUN_1001b7a50(local_28);
  iVar2 = FUN_1001c666e(&DAT_1008c53d0);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006aeebb(iVar2,uVar3);
    }
  }
  FUN_1001cc9d4();
  return;
}

