// name: FUN_1002dfbc6
// address: 1002dfbc6

char FUN_1002dfbc6(long param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 local_30;
  undefined4 local_24;
  
  iVar2 = FUN_10047a94e(param_1,&local_30,&local_24);
  if (iVar2 == 0) {
    if (DAT_1008c7910 != -1) {
      _dispatch_once(&DAT_1008c7910,&PTR___NSConcreteGlobalBlock_10086f7b8);
    }
    cVar1 = FUN_1001e40ed(local_30,local_24,(uint)DAT_1008c7918 * 4 + 0x19);
    if (cVar1 != '\0') {
      uVar3 = 1;
      goto LAB_1002dfc1e;
    }
  }
  uVar3 = 2;
  cVar1 = '\0';
LAB_1002dfc1e:
  *(undefined1 *)(param_1 + 0xcc) = uVar3;
  return cVar1;
}

