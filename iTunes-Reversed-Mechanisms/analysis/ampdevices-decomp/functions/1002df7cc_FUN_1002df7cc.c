// name: FUN_1002df7cc
// address: 1002df7cc

char FUN_1002df7cc(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined1 uVar5;
  undefined8 local_38;
  undefined4 local_2c;
  
  if (*(char *)(param_1 + 0xc9) != '\0') {
    return *(char *)(param_1 + 0xc9) == '\x01';
  }
  iVar4 = FUN_100476b40(param_1,&local_38,&local_2c);
  uVar2 = local_2c;
  uVar1 = local_38;
  if (iVar4 == 0) {
    if (DAT_1008c7910 != -1) {
      _dispatch_once(&DAT_1008c7910,&PTR___NSConcreteGlobalBlock_10086f7b8);
    }
    cVar3 = FUN_1001e40ed(uVar1,uVar2,(uint)DAT_1008c7918 * 4 + 0x19);
    if (cVar3 != '\0') {
      iVar4 = FUN_1002fba66(param_1,0,&local_38,&local_2c);
      uVar5 = 1;
      if (iVar4 != 0) goto LAB_1002df807;
      if (DAT_1008c7910 != -1) {
        _dispatch_once(&DAT_1008c7910,&PTR___NSConcreteGlobalBlock_10086f7b8);
      }
      cVar3 = FUN_1001e40ed(local_38,local_2c,(uint)DAT_1008c7918 * 4 + 0x19);
      if (cVar3 != '\0') goto LAB_1002df807;
    }
  }
  uVar5 = 2;
  cVar3 = '\0';
LAB_1002df807:
  *(undefined1 *)(param_1 + 0xc9) = uVar5;
  return cVar3;
}

