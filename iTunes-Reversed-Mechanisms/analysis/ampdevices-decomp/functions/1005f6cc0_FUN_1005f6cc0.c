// name: FUN_1005f6cc0
// address: 1005f6cc0

int FUN_1005f6cc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1001cd899();
  if (cVar1 == '\0') {
    iVar2 = -0x78;
  }
  else {
    uVar3 = FUN_1001e5fdb(0,0x8000100);
    iVar2 = FUN_10018ddf7(uVar3,param_2,0);
    if (iVar2 == 0) {
      cVar1 = FUN_10017fbfb(param_2);
      iVar2 = 0;
      if (cVar1 == '\0') {
        iVar2 = -0x57f;
      }
    }
    FUN_1001c64c1(uVar3);
    FUN_10017060f(0);
  }
  return iVar2;
}

