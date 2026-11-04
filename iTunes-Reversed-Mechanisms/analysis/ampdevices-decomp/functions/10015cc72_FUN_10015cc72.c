// name: FUN_10015cc72
// address: 10015cc72

int FUN_10015cc72(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((*param_1 != 0) && (iVar2 = FUN_10015ccc4(*param_1,1), iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    iVar4 = iVar2;
    if (cVar1 != '\0') {
      FUN_10066c7ff(iVar2,uVar3);
    }
  }
  return iVar4;
}

