// name: FUN_10011d63a
// address: 10011d63a

undefined8 FUN_10011d63a(long *param_1,long param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x70))();
  if (*(int *)(param_2 + 0x5c0) == 0) {
    iVar1 = FUN_10011530e(param_1,param_1[0x184d],1);
    FUN_10011d6de(param_1,param_1 + 0x184c,param_1 + 0xf);
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    iVar1 = FUN_1001096a2(param_1[0x397a],param_2,param_1[0x1858],
                          *(undefined1 *)(*(long *)(*(long *)param_1[0x184c] + 0x18) + 0x19f5));
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x397c) = 0;
  }
  return 0;
}

