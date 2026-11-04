// name: FUN_1001dacb7
// address: 1001dacb7

undefined8
FUN_1001dacb7(int *param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_5 + 8) = 0x72656164;
  *(undefined8 *)(param_5 + 0x20) = param_3;
  *(undefined8 *)(param_5 + 0x28) = param_2;
  *(undefined8 *)(param_5 + 0x30) = 0;
  *(undefined4 *)(param_5 + 0x38) = 1;
  *(uint *)(param_5 + 0xc) = param_4;
  if (*param_1 == 2) {
    *(uint *)(param_5 + 0xc) = param_4 | 1;
  }
  lVar1 = *(long *)(param_1 + 6);
  if (lVar1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006b7713(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    FUN_1001eac02(param_5,lVar1 + 0xe8);
    FUN_1001e89de(lVar1 + 0x58);
    uVar3 = 0;
  }
  return uVar3;
}

