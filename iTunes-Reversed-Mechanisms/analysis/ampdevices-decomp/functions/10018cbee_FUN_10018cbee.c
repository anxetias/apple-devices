// name: FUN_10018cbee
// address: 10018cbee

undefined4 FUN_10018cbee(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_10018ed8e();
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100691f6b(iVar2,uVar3);
    }
  }
  return 0;
}

