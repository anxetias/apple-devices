// name: FUN_10028507e
// address: 10028507e

void FUN_10028507e(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  if (param_4 != 0) {
    lVar2 = param_1;
    FUN_1002850f0(param_1,param_4);
    uVar1 = FUN_100285136(param_1 + 0x10,param_2,param_3,*(undefined8 *)(param_1 + 8),param_5,
                          param_6,lVar2,uVar3);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  return;
}

