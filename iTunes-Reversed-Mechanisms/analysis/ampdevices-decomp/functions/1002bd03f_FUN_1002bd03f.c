// name: FUN_1002bd03f
// address: 1002bd03f

undefined1 FUN_1002bd03f(undefined8 param_1,undefined1 param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  
  uVar2 = FUN_1004744bf(param_1,0);
  uVar3 = 0;
  if ((uVar2 & 0x18000) == 0) {
    if ((uVar2 >> 0x16 & 1) == 0) {
      uVar3 = param_2;
      if ((uVar2 >> 0x17 & 1) == 0) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 1;
      if (param_3 == '\0') {
        cVar1 = FUN_1002bd09d(param_1);
        uVar3 = cVar1 == '\0';
      }
    }
  }
  return uVar3;
}

