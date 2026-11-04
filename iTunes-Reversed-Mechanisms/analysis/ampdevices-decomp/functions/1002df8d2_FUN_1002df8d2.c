// name: FUN_1002df8d2
// address: 1002df8d2

undefined8 FUN_1002df8d2(ushort *param_1,int param_2,ushort *param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == param_3 && param_2 == param_4) {
    return 0;
  }
  if (param_2 == 0) {
    bVar3 = true;
    iVar2 = 0;
  }
  else {
    do {
      bVar3 = *param_1 < 0x21;
      iVar2 = param_2;
      if (!bVar3) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      iVar2 = 0;
    } while (param_2 != 0);
  }
  while( true ) {
    if (param_4 == 0) {
      if (bVar3) {
        return 0;
      }
      return 0xffffffff;
    }
    if (0x20 < *param_3) break;
    param_3 = param_3 + 1;
    param_4 = param_4 + -1;
  }
  if (bVar3) {
    return 1;
  }
  if (DAT_1008c7910 != -1) {
    _dispatch_once(&DAT_1008c7910,&PTR___NSConcreteGlobalBlock_10086f7b8);
  }
  uVar1 = FUN_1001e4201(param_1,iVar2,param_3,param_4,(uint)DAT_1008c7918 * 4 + 0x19);
  return uVar1;
}

