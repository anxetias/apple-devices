// name: FUN_10035be06
// address: 10035be06

undefined8 FUN_10035be06(int param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong in_stack_ffffffffffffffc8;
  
  if (param_1 == 0x46494c45) {
    lVar1 = FUN_100489eef(param_4[1],*(undefined1 *)*param_4,param_2 + 0x2c,0,
                          (undefined1 *)*param_4 + 4,0,
                          in_stack_ffffffffffffffc8 & 0xffffffff00000000);
  }
  else {
    if (param_1 != 0x48545450) {
      return 0;
    }
    lVar1 = FUN_100489f3f(param_4[1],*(undefined1 *)*param_4,*(undefined4 *)(param_2 + 0x2c),
                          param_2 + 0x30,(undefined1 *)*param_4 + 4,0);
  }
  if (lVar1 != 0) {
    lVar2 = *param_4;
    *(long *)(lVar2 + 0xc) = lVar1;
    if (*(long *)(lVar2 + 0x18) != 0) {
      FUN_100595808(*(long *)(lVar2 + 0x18),lVar1,0,0);
      lVar2 = *param_4;
    }
    if (*(int *)(lVar2 + 0x6c) == 0) {
      FUN_100490f45(lVar1,lVar2 + 0x6c);
    }
    if (param_3 != 0) {
      FUN_100312870(*(undefined8 *)(lVar1 + 8),param_3,0,0,0,0,0,0);
    }
  }
  return 0;
}

