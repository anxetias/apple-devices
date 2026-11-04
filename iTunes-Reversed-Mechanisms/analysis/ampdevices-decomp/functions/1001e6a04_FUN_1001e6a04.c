// name: FUN_1001e6a04
// address: 1001e6a04

int FUN_1001e6a04(ushort *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ushort local_1c [2];
  
  iVar2 = FUN_1001e68f1(param_1 + 1,*param_1,param_1 + 1,0xff,2,local_1c);
  if (iVar2 == 0) {
    *param_1 = local_1c[0];
    if (local_1c[0] != 0) {
      lVar4 = 0;
      do {
        if (param_1[lVar4 + 1] == 10) {
          param_1[lVar4 + 1] = 0x20;
        }
        lVar4 = lVar4 + 1;
      } while ((uint)local_1c[0] != (uint)lVar4);
    }
    FUN_1001e3a23(param_1);
    iVar2 = 0;
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bfd58(iVar2,uVar3);
    }
  }
  return iVar2;
}

