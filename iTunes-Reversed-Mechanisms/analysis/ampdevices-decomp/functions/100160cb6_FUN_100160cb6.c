// name: FUN_100160cb6
// address: 100160cb6

int FUN_100160cb6(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001605d9(param_1,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = FUN_1001602ae(param_1);
      if ((iVar2 == 0) && (iVar2 = FUN_1001d767c(*(undefined8 *)(param_1 + 8),param_2), iVar2 == 0))
      {
        FUN_1001d7569(*(undefined8 *)(param_1 + 8),param_1 + 0x40);
        iVar2 = 0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10066f257(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

