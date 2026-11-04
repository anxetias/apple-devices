// name: FUN_1001d70bb
// address: 1001d70bb

int FUN_1001d70bb(long param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                 long param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  *param_2 = 0;
  iVar2 = FUN_1001d40d0();
  if (iVar2 == 0) {
    *(undefined4 *)(param_5 + 0x48) = param_4;
    *(undefined4 *)(param_5 + 0x10) = 0x52697465;
    *(undefined8 *)(param_5 + 0xf8) = uVar3;
    *(undefined8 *)(param_5 + 0x100) = 0;
    *(undefined8 *)(param_5 + 0x108) = param_3;
    *(undefined8 **)(param_5 + 0x110) = param_2;
    *(long *)(param_5 + 8) = param_1;
    *(undefined4 *)(param_5 + 0x14) = 1;
    FUN_1001eac02(param_5,param_1 + 0x998);
    FUN_1001d4365(param_1);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b4e14(iVar2,uVar3);
    }
  }
  return iVar2;
}

