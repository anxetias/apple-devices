// name: FUN_1001ab0ae
// address: 1001ab0ae

char FUN_1001ab0ae(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_1001ab0cc(param_1,param_2,0);
  cVar1 = '\x01';
  if (iVar2 != 1) {
    cVar1 = -(iVar2 == -1);
  }
  return cVar1;
}

