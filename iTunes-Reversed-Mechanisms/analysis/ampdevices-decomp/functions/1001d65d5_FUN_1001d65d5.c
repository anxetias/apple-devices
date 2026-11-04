// name: FUN_1001d65d5
// address: 1001d65d5

int FUN_1001d65d5(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001d40d0();
  if (iVar2 == 0) {
    *(undefined4 *)(param_4 + 0x48) = param_3;
    *(undefined4 *)(param_4 + 0x10) = 0x45526441;
    *(undefined8 *)(param_4 + 0xf8) = param_2;
    *(long *)(param_4 + 8) = param_1;
    *(undefined4 *)(param_4 + 0x14) = 1;
    FUN_1001eac02(param_4,param_1 + 0x998);
    FUN_1001d4365(param_1);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b4512(iVar2,uVar3);
    }
  }
  return iVar2;
}

