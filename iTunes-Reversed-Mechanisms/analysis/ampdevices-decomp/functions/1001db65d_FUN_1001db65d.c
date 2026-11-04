// name: FUN_1001db65d
// address: 1001db65d

undefined8 FUN_1001db65d(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = 0xffffffce;
  if ((*(int *)(lVar1 + 0x98) == 1) && (uVar2 = 1, *(long *)(lVar1 + 0x9b0) == 0)) {
    *(undefined2 *)(lVar1 + 0x951) = 0;
    FUN_1001d41aa(lVar1);
    FUN_1001c23b3(lVar1 + 0x988);
    *(undefined4 *)(lVar1 + 0x94c) = 0;
    *(undefined8 *)(lVar1 + 0x968) = 0;
    *(undefined8 *)(lVar1 + 0x970) = 0;
    *(undefined8 *)(lVar1 + 0x978) = 0;
    if (*(long *)(lVar1 + 0x960) != 0) {
      *(undefined8 *)(*(long *)(lVar1 + 0x960) + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x960) = 0;
    }
    *(long *)(lVar1 + 0x9b0) = param_1;
    FUN_100187e4f(*(undefined8 *)(lVar1 + 0x4c0),*(undefined8 *)(lVar1 + 0x958),param_1 + 0x60,
                  FUN_1001d42e3,param_1);
  }
  return uVar2;
}

