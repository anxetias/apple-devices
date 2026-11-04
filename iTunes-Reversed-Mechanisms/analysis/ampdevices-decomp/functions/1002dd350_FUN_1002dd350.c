// name: FUN_1002dd350
// address: 1002dd350

bool FUN_1002dd350(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined1 uVar6;
  undefined8 local_38;
  undefined4 local_2c;
  
  if (*(char *)(param_1 + 0xca) != '\0') {
    return *(char *)(param_1 + 0xca) == '\x01';
  }
  iVar5 = FUN_100477ba5(param_1,&local_38,&local_2c);
  uVar2 = local_2c;
  uVar1 = local_38;
  uVar6 = 2;
  if (iVar5 == 0) {
    if (DAT_1008c7910 != -1) {
      _dispatch_once(&DAT_1008c7910,&PTR___NSConcreteGlobalBlock_10086f7b8);
    }
    cVar3 = FUN_1001e40ed(uVar1,uVar2,(uint)DAT_1008c7918 * 4 + 0x19);
    if (cVar3 != '\0') {
      iVar5 = FUN_1002fba66(param_1,2,&local_38,&local_2c);
      if (iVar5 == 0) {
        if (DAT_1008c7910 != -1) {
          _dispatch_once(&DAT_1008c7910,&PTR___NSConcreteGlobalBlock_10086f7b8);
        }
        cVar3 = FUN_1001e40ed(local_38,local_2c,(uint)DAT_1008c7918 * 4 + 0x19);
        if (cVar3 == '\0') goto LAB_1002dd386;
      }
      bVar4 = true;
      uVar6 = 1;
      goto LAB_1002dd406;
    }
  }
LAB_1002dd386:
  bVar4 = false;
LAB_1002dd406:
  *(undefined1 *)(param_1 + 0xca) = uVar6;
  return bVar4;
}

