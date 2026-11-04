// name: FUN_100169c4c
// address: 100169c4c

bool FUN_100169c4c(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001e115f();
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100677892(iVar2,uVar3);
    }
  }
  return iVar2 == 0;
}

