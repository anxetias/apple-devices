// name: FUN_100176d97
// address: 100176d97

int FUN_100176d97(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100682da4(uVar2);
    }
    iVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    iVar3 = param_1[5];
  }
  return iVar3;
}

