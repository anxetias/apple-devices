// name: FUN_1002be199
// address: 1002be199

undefined8 FUN_1002be199(long param_1,undefined8 param_2,char param_3,char param_4)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_1002be216(param_2,*(undefined8 *)(param_1 + 0x60));
  uVar3 = 1;
  if (cVar2 == '\0') {
    if (param_3 == '\0' && param_4 != '\0') {
      for (lVar1 = *(long *)(param_1 + 0x48); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x30)) {
        cVar2 = FUN_1002be199(lVar1,param_2,0,param_4);
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

