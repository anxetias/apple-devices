// name: FUN_1001dda84
// address: 1001dda84

void FUN_1001dda84(undefined8 param_1,ushort *param_2,undefined8 param_3)

{
  int iVar1;
  ushort *puVar2;
  
  if (param_2 == (ushort *)0x0) {
    puVar2 = (ushort *)0x0;
    iVar1 = 0;
  }
  else {
    puVar2 = param_2 + 1;
    iVar1 = (uint)*param_2 * 2;
  }
  FUN_1001dd1c1(param_1,puVar2,iVar1,0,param_3);
  return;
}

